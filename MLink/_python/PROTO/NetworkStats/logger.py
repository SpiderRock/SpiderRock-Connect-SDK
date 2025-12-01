import logging

logging.basicConfig(
    level=logging.INFO,
    format='%(message)s',
    handlers=[
        logging.FileHandler("liqadj_log.txt", mode='w'),
        logging.StreamHandler()
    ]
)

log = logging.getLogger()