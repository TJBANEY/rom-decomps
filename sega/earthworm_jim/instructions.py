# instruction_emulator.py

class CPUState:
    def __init__(self):
        # 68000 has 8 data (D0–D7) and 8 address (A0–A7) registers
        self.D = [0] * 8
        self.A = [0] * 8
        self.PC = 0              # Program Counter
        self.SP = 0              # Stack Pointer (usually A7)
        self.stack = []
        self.memory = {}         # Simple dict-based memory map
        self.running = True

    def debug(self):
        print(f"PC: {self.PC:08X}, D0: {self.D[0]}, A0: {self.A[0]}, Stack: {self.stack}")

# --- INSTRUCTION SIMULATORS ---

def MOVE(cpu: CPUState, dest_reg: str, value: int):
    reg_type, index = dest_reg[0], int(dest_reg[1])
    if reg_type == 'D':
        cpu.D[index] = value
    elif reg_type == 'A':
        cpu.A[index] = value
    print(f"MOVE #{value} → {dest_reg}")

def ADD(cpu: CPUState, dest_reg: str, value: int):
    reg_type, index = dest_reg[0], int(dest_reg[1])
    if reg_type == 'D':
        cpu.D[index] += value
    elif reg_type == 'A':
        cpu.A[index] += value
    print(f"ADD #{value} → {dest_reg}")

def SUB(cpu: CPUState, dest_reg: str, value: int):
    reg_type, index = dest_reg[0], int(dest_reg[1])
    if reg_type == 'D':
        cpu.D[index] -= value
    elif reg_type == 'A':
        cpu.A[index] -= value
    print(f"SUB #{value} → {dest_reg}")

def JSR(cpu: CPUState, subroutine_label):
    print(f"JSR → {subroutine_label.__name__}")
    cpu.stack.append(cpu.PC)
    subroutine_label(cpu)

def RTS(cpu: CPUState):
    cpu.PC = cpu.stack.pop()
    print(f"RTS → Return to {cpu.PC:08X}")

# --- EXAMPLE SUBROUTINES ---

def example_routine(cpu: CPUState):
    print("→ Inside example_routine()")
    ADD(cpu, "D0", 10)
    RTS(cpu)

# --- RUN LOOP ---

def main():
    cpu = CPUState()

    # Initial mockup: simulate a few 68k instructions
    MOVE(cpu, "D0", 5)
    MOVE(cpu, "A0", 100)
    cpu.PC = 0x00010000
    JSR(cpu, example_routine)
    cpu.debug()

if __name__ == "__main__":
    main()
