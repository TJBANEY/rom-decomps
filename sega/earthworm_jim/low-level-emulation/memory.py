class Memory:
    """
    Simulates Sega Genesis memory using a bytearray, respecting big-endian format (most significant byte first).
    Supports reading/writing bytes, words (16-bit), and longs (32-bit)

    You can simulate hardware registers by mapping special addresses later (e.g. 0xA10003 for Genesis controller I/O)
    """
    
    def __init__(self, size=0x100000):  # 1MB default
        self.mem = bytearray(size)

    def read_byte(self, addr):
        return self.mem[addr]

    def read_word(self, addr):
        return (self.mem[addr] << 8) | self.mem[addr + 1]

    def read_long(self, addr):
        return (self.read_word(addr) << 16) | self.read_word(addr + 2)

    def write_byte(self, addr, val):
        self.mem[addr] = val & 0xFF

    def write_word(self, addr, val):
        self.mem[addr] = (val >> 8) & 0xFF
        self.mem[addr + 1] = val & 0xFF

    def write_long(self, addr, val):
        self.write_word(addr, (val >> 16) & 0xFFFF)
        self.write_word(addr + 2, val & 0xFFFF)
