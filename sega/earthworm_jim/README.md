# Earthworm Jim

## Project Structure
```
earthworm_jim/
│
├── memory.py       ← Memory abstraction (read/write, bounds, endianness)
├── registers.py    ← Register classes (D0–D7, A0–A7, SP, PC)
├── flags.py        ← Condition codes (Z, N, C, V)
├── cpu.py          ← Instruction emulation (MOVE, ADD, SUB, etc.)
├── main.py         ← Load ROM segment, emulate instructions, print state
```

<br>

## Compilation and Gameplay

<br>

## Journal

2025-07-10
---
Fight off imposter syndrome as ChatGPT guides me through just what the hell I'm doing.
Reset vector discovered, and the memory address reset points to has been disassembled, renamed as 'reset_start'.
Work now begins to iterate over this first function, understand Ghidra's disassembly layout, and Motorola 68k instructions.

Temptation is strong just to find an already decompiled project for this game (ultimate goal is a custom remaster), but I think
this will be good for mastering my craft, or passing the time at the very least.

Multiple phases:
------------------------------------
1. Abstract instructions like jsr (jump to subroutine), so its easier to port over from Ghidra disassembly. This will also give me
     a chance to test that it works, recompiling and testing on an emulator like Blastem.

2. Once it's established I have a full working game, I want to reiterate once more, and make the whole project higher-level, purely pythonic.
   So no abstracted instructions, low-level memory/register management, etc.

3. Upscale assets like sprites/tilemaps/audio, and remaster game. During that process, I'll have to find, or create a game engine and understand
   how I can compile the project down into an executable the game engine can run.