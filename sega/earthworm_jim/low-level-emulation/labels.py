def lab_00000224(cpu):
    cpu.A[5] = 0x0000024A  # DAT_0000024a
    cpu.movem([5, 6, 7], dest='(A5)+')  # movem.w D5 D6 D7
    cpu.movem([0, 1, 2, 3, 4, 5, 6, 7] + [0, 1, 2, 3, 4], dest='(A5)+')  # movem.l D0-D7 A0-A4


def lab_00000244(cpu):
    cpu.memory[0x00C00004] = cpu.A[4]
    cpu.D[0] = 0
    cpu.A[6] = cpu.D[0]
    cpu.A[6] = cpu.SP
    cpu.D[1] = 0x17