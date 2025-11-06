import logging
logging.basicConfig(filename = "mylog.log", level=logging.INFO,
                    format = '%(asctime)s - %(name)s - %(levelname)s - %(message)s')

logging.debug("debug")
logging.info("This is a info message")
logging.warning("warning")
logging.error("error")
logging.critical("critical")