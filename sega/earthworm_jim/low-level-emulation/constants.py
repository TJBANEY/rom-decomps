GENESIS_IO_MAP = {
    "0xA10000": "Version Register (read-only)",
    "0xA10002": "Port A Data (Controller 1)",
    "0xA10004": "Port B Data (Controller 2)",
    "0xA10006": "Port C Data",
    "0xA10008": "Port A Control",   # Read = Controller 1 state
    "0xA1000A": "Port B Control",   # Read = Controller 2 state
    "0xA1000C": "Port C Control",
    "0xA1000E": "Port A TxData (unused)",
    "0xA10010": "Port B TxData (unused)",
    "0xA10012": "Port C TxData (unused)",
    "0xA10014": "S-RAM Enable / Control",
    "0xA10018": "Memory Mode Register",
    "0xA11100": "Z80 Bus Request (68K→Z80 access)",
    "0xA11200": "Z80 Reset Control"
}