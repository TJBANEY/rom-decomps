class Registers:
    """
    Simulates 68k registers, includes a dump() method for debugging.

    D0-D7 (data registers)
    A0-A7 (address registers)
    PC (program counter)
    SR (status flags)

    Example usage ---> Emulates MOVE.L D0, (A1)
    -----------------------------------------------------------
    reg.A[1] = 0x100
    reg.D[0] = 0x12345678
    mem.write_long(reg.A[1], reg.D[0])
    """
    
    def __init__(self):
        self.D = [0] * 8  # D0–D7
        self.A = [0] * 8  # A0–A7
        self.PC = 0       # Program Counter
        self.SR = 0       # Status Register (flags like Z, N)

    def dump(self):
        for i in range(8):
            print(f"D{i}: {self.D[i]:08X}  A{i}: {self.A[i]:08X}")
        print(f"PC: {self.PC:08X}  SR: {self.SR:04X}")