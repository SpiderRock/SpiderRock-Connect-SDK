import os
import sys

current_dir = os.path.dirname(os.path.abspath(__file__))
parent_dir = os.path.abspath(os.path.join(current_dir, os.pardir))
compiled_proto_dir = os.path.join(parent_dir, "compiledProto")

for p in [parent_dir, compiled_proto_dir]:
    if p not in sys.path:
        sys.path.insert(0, p)

# API config
API_KEY = "YOUR_API_KEY_HERE"
BASE_URL_PROTO = "https://mlink-live.nms.saturn.spiderrockconnect.com/rest/proto"
BASE_URL_JSON = "https://mlink-live.nms.saturn.spiderrockconnect.com/rest/json"
HEADERS_PROTO = {"Accept": "application/x-protobuf"}
HEADERS_JSON = {"Accept": "application/json"}

# Chunk Read config
CHUNK_SIZE = 65536
CHUNK_WARN_MS = 10
