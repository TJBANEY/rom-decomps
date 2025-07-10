# Earthworm Jim Decomp

## Project Structure
earthworm_jim/
│
├── memory.py       ← Memory abstraction (read/write, bounds, endianness)
├── registers.py    ← Register classes (D0–D7, A0–A7, SP, PC)
├── flags.py        ← Condition codes (Z, N, C, V)
├── cpu.py          ← Instruction emulation (MOVE, ADD, SUB, etc.)
├── main.py         ← Load ROM segment, emulate instructions, print state

## Compilation and Gameplay
