from logger import log

from compiledProto.OptAnalytics.LiveImpliedQuoteAdj_pb2 import LiveImpliedQuoteAdj
from compiledProto.OptMktData.OptionNbboQuote_pb2 import OptionNbboQuote
from compiledProto.MLinkRest.QueryResult_pb2 import QueryResult

def parse_liq(response_content):
    return _parse(response_content, LiveImpliedQuoteAdj, "LiveImpliedQuoteAdj")

def parse_nbbo(response_content):
    return _parse(response_content, OptionNbboQuote, "OptionNbboQuote")

def _parse(content, proto_cls, expected_type):
    index, messages, query_result = 0, [], None
    while index < len(content):
        if len(content) - index < 14:
            break
        header = content[index : index + 14]
        if header[2:3].decode("utf-8") != "P":
            index += 14
            continue

        msg_len = int(header[8:14])
        msg_end = index + 14 + msg_len
        if msg_end > len(content):
            break

        try:
            msg = proto_cls()
            msg.ParseFromString(content[index + 14:msg_end])
            if msg.HasField("_meta") and msg._meta.message_type == expected_type:
                messages.append(msg)
            elif msg._meta.message_type == "QueryResult":
                query_result = QueryResult()
                query_result.ParseFromString(content[index + 14:msg_end])
        except Exception as e:
            log.info(f"Failed to parse message: {e}")
        index = msg_end
    return messages, query_result