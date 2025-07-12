# import ace_tools as tools;


class CPU:
    def __init__(self):
        self.D = [0] * 8
        self.A = [0] * 8
        self.PC = 0
        self.SP = 0
        self.stack = []
        self.memory = {}
        self.running = True

        # Condition flags
        self.Z = False  # Zero
        self.N = False  # Negative
        self.C = False  # Carry     (not used here yet)
        self.V = False  # Overflow  (not used here yet)

    def read_long(self, address):
        return self.memory.get(address, 0)

    def read_word(self, address):
        return self.memory.get(address, 0) & 0xFFFF

    def write_long(self, address, value):
        self.memory[address] = value & 0xFFFFFFFF

    def write_word(self, address, value):
        self.memory[address] = value & 0xFFFF

    def movem(self, regs, dest):
        # Simulated movem to memory via address register
        for reg in regs:
            self.memory[self.A[5]] = 0  # Stub
            self.A[5] += 4  # Assume long writes

    def debug(self):
        print(
            f"PC: {self.PC:08X} | D0: {self.D[0]} | A0: {self.A[0]} | Stack: {self.stack}"
        )

    # Instructions
    def move(self, dest_reg: str, value: int):
        reg_type, index = dest_reg[0], int(dest_reg[1])

        if reg_type == "D":
            self.D[index] = value
        elif reg_type == "A":
            self.A[index] = value
        print(f"MOVE #{value} → {dest_reg}")

    def add(self, dest_reg: str, value: int):
        reg_type, index = dest_reg[0], int(dest_reg[1])
        if reg_type == "D":
            self.D[index] += value
        elif reg_type == "A":
            self.A[index] += value
        print(f"ADD #{value} → {dest_reg}")

    def sub(self, dest_reg: str, value: int):
        reg_type, index = dest_reg[0], int(dest_reg[1])
        if reg_type == "D":
            self.D[index] -= value
        elif reg_type == "A":
            self.A[index] -= value
        print(f"SUB #{value} → {dest_reg}")

    def jsr(self, subroutine_label):
        print(f"JSR → {subroutine_label.__name__}")
        self.stack.append(self.PC)
        subroutine_label(self)

    def rts(self):
        self.PC = self.stack.pop()
        print(f"RTS → Return to {self.PC:08X}")

    def tst(self, value):
        """TST: Test a value and update flags."""
        self.Z = value == 0
        self.N = value < 0
        print(f"TST {value} → Z={self.Z}, N={self.N}")

    def cmp(self, reg: str, value: int):
        """CMP: Compare register to value (reg - value), set flags."""
        reg_type, idx = reg[0], int(reg[1])
        reg_val = self.D[idx] if reg_type == "D" else self.A[idx]
        result = reg_val - value
        self.Z = result == 0
        self.N = result < 0
        print(f"CMP {reg}({reg_val}) - {value} → Z={self.Z}, N={self.N}")

    def bra(self, target):
        """BRA: Branch always."""
        print(f"BRA to {target}")
        self.PC = target

    def bne(self, target):
        """BNE: Branch if Not Equal (Z == False)."""
        if not self.Z:
            print(f"BNE to {target}")
            self.PC = target
        else:
            print(f"BNE skipped (Z==True)")


# tools.display_dataframe_to_user(
#     name="Example CPU State",
#     dataframe={
#         "D Registers": [f"D{i}: {v}" for i, v in enumerate(CPU().D)],
#         "A Registers": [f"A{i}: {v}" for i, v in enumerate(CPU().A)],
#     }
# )


# --- EXAMPLE SUBROUTINES ---
# def example_routine(cpu: CPUState):
#     print("→ Inside example_routine()")
#     ADD(cpu, "D0", 10)
#     RTS(cpu)


# --- RUN LOOP ---
# def main():
#     cpu = CPUState()

#     # Initial mockup: simulate a few 68k instructions
#     MOVE(cpu, "D0", 5)
#     MOVE(cpu, "A0", 100)
#     cpu.PC = 0x00010000
#     JSR(cpu, example_routine)
#     cpu.debug()

# if __name__ == "__main__":
#     main()
