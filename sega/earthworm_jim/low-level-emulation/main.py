from labels import lab_00000224, lab_00000244


def reset_start(cpu):
    # Check if Controller 1 is connected
    if cpu.read_long(0xA10008) != 0:
        return lab_00000224(cpu)  # jump if not connected

    # Check Controller 2 (no branch here, just probing)
    controller_2 = cpu.read_word(0xA1000C)

    # Initialize A5 and stack memory
    cpu.A[5] = 0x0000024A  # Example address of DAT_0000024a
    cpu.movem([5, 6, 7], dest='(A5)+')  # Simulate register block transfer

    # Next movem block (D0-D7, A0-A4)
    cpu.movem(list(range(8)) + list(range(5)), dest='(A5)+')

    # Setup RAM and system registers
    addr = cpu.A[1] - 0x1FF
    cpu.memory[addr] = cpu.memory.get(0x00A10001, 0) & 0x0F  # move.b andi.b

    if cpu.memory[addr] == 0:
        return lab_00000244(cpu)

    # Continue to initialization
    cpu.memory[0x00A14000] = 0x53454741  # “SEGA” ID