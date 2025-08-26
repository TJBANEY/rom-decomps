// Pseudo-types & raw data
#include "ghidra_pseudo.h"
#include "raw_data.h"

// Hardware & subsystems
#include "md_hw.h"
#include "vdp.h"
#include "data_tables.h"
#include "objects.h"
#include "subsystems.h"
#include "audio.h"
#include "enums.h"

// Subsystem interface stubs
void input_update(void);
void game_update(void);
void render_frame(void);
void vblank_sync(void);
void main_loop(void);

char DAT_00fffd21;
char DAT_00fffd4b;
undefined1 DAT_00fffd28;
undefined1 DAT_00ffa6d9;
char DAT_00fffddf;
undefined DAT_00ffa6f2;
undefined1 DAT_00ffa709;
undefined DAT_00ffa6dc;
undefined DAT_00ffa6f0;
char DAT_00ffa6c8;
undefined1 DAT_00fffded;
undefined DAT_00fffbf4;
undefined DAT_00fffdb8;
undefined DAT_00fffdc0;
undefined1 DAT_00ffa692;
char DAT_00ffff9f;
char DAT_00ffff9c;
char DAT_00ffa6aa;
undefined1 DAT_00fffcf9;
undefined1 DAT_00fffbf2;
undefined1 DAT_00fffcff;
undefined1 DAT_00fffd0b;
undefined1 DAT_00fffd25;
undefined DAT_00ffa6ec;
undefined1 DAT_00ffa6d2;
char DAT_00ffa6a8;
char DAT_00fffde7;
char DAT_00fffde3;
undefined1 DAT_00fffbe8;
undefined DAT_00ffb4c4;
byte DAT_00ffa6cf;
byte DAT_00fffd17;
char DAT_00fffd33;
char DAT_00fffd23;
char DAT_00fffddd;
undefined DAT_00ffa6e6;
byte DAT_00fffdea;
char DAT_00fffd11;
char DAT_00fffd14;
char DAT_00fffcf8;
char DAT_00fffcff;
char DAT_00fffbec;
char DAT_00fffbf2;
char DAT_00fffded;
undefined DAT_00fffdd8;
undefined DAT_00fffdda;
char DAT_00ffa6db;
undefined DAT_00fffdc6;
undefined DAT_00ffafe4;
undefined DAT_00006332;
undefined DAT_000063b6;
char DAT_00fffd0e;
byte DAT_00fffbee;
undefined1 DAT_00ffa6db;
char DAT_00fffd1e;
char DAT_00ffff6b;
char DAT_00fffdea;
char DAT_00fffcf9;
char DAT_00fffd0d;
undefined1 DAT_00fffd1e;
undefined1 DAT_00fffbec;
undefined1 DAT_00fffcfa;
char DAT_00fffd01;
undefined1 DAT_00fffcfc;
char DAT_00fffd13;
char DAT_00fffd0b;
undefined DAT_00ffa6ea;
undefined DAT_001ade26;
undefined DAT_001ae5da;
undefined DAT_001ae664;
char DAT_00ffa6ec;
char DAT_00fffcfc;
char DAT_00fffcfb;
char DAT_00fffcfa;
undefined DAT_00fffcce;
char DAT_00fffd25;
undefined1 DAT_00fffd14;
undefined DAT_00fffdb6;
string s_PAL_AND_FRENCH_SECAM_MEGA_DRIVE_000004ae;

pointer PTR_DAT_001adc0c;
pointer PTR_DAT_001adc10;
char DAT_00fffd06;
undefined DAT_00fffd5a;
char DAT_00fffd09;
undefined1 DAT_00fffcf8;
char DAT_00fffd03;
undefined DAT_00ffa77a;
undefined DAT_00fffe9c;
undefined DAT_00ffff3a;
undefined DAT_00fffdb2;
undefined DAT_00fffdb0;
char DAT_00ff993d;
byte DAT_00fffd25;
char DAT_00fffd27;
char DAT_00fffd1c;
char DAT_00fffd26;
byte DAT_00ffff60;
undefined DAT_00ffa722;
undefined DAT_00fffc9e;
undefined DAT_00fffe90;
char DAT_00ffff61;
undefined1 DAT_00ffff5f;
undefined DAT_00fffe8e;
undefined DAT_00fffe06;
undefined DAT_00ffa72a;
undefined DAT_00ffa72c;
undefined DAT_0000645a;
undefined DAT_001af026;
undefined DAT_001af0ac;
undefined DAT_001af2e6;
undefined1 DAT_00fffd31;
undefined1 DAT_00ff993e;
undefined1 DAT_00ffff98;
undefined DAT_00ffff8a;
undefined1 DAT_00ffa6aa;
undefined1 DAT_00ffa6a8;
undefined1 DAT_00ffa6ce;
undefined1 DAT_00fffde3;
undefined1 DAT_00fffde7;
undefined DAT_00ff9936;
undefined DAT_00ff9b4c;
undefined1 DAT_00ffff9c;
undefined1 DAT_00ffff9f;
undefined1 DAT_00ffa6ab;
undefined *PTR_PTR_0000294c;
undefined *PTR_FUN_00004da0;
undefined DAT_0025fbc6;
undefined DAT_00260e21;
undefined DAT_00260e53;
undefined DAT_0026ad68;
undefined1 DAT_00fffbf1;
undefined1 DAT_00ffa6d0;
char DAT_00ffa6ab;
undefined2 DAT_00004e14;
byte DAT_00ffa692;
undefined DAT_00ffa686;
undefined DAT_00ffa67e;
undefined DAT_00fffe9e;
undefined DAT_00fffea0;
undefined DAT_00fffea2;
undefined DAT_00fffea4;
undefined DAT_00ffa688;
undefined DAT_00ffa680;
undefined1 DAT_00fffde5;
undefined DAT_00ffa6b8;
undefined DAT_00ffa664;
byte DAT_00fffddd;
byte DAT_00ffff68;
byte DAT_00ffff69;
byte DAT_00ffff6a;
byte DAT_00ffff6b;
byte DAT_00ffff6c;
undefined1 DAT_00fffdde;
undefined DAT_00ffa66e;
undefined DAT_00ffa66c;
undefined DAT_00ffa670;
undefined DAT_00ffa672;
undefined DAT_00ff9920;
undefined DAT_0025bbc4;
undefined DAT_0025bbc6;
undefined DAT_0025bbc8;
undefined DAT_0025bbca;
pointer PTR_DAT_0025bbd4;
pointer PTR_DAT_0025bbd8;
undefined DAT_0025bbdc;
undefined DAT_0025bbdf;
pointer PTR_DAT_0025bbe0;
pointer PTR_DAT_0025bbe8;
pointer PTR_LAB_0025bbf0;
undefined DAT_0025bbf4;
undefined DAT_0025bbf6;
pointer PTR_LAB_0025bbf8;
undefined DAT_0025bc00;
undefined DAT_0025bc01;
undefined DAT_0025bc02;
undefined2 UNK_00c00006;
undefined1 DAT_00ffff7a;
undefined DAT_00ffb548;
undefined DAT_00fffbdc;
undefined DAT_00fffda0;
undefined DAT_00fffc02;
undefined1 DAT_00ffff9e;
undefined1 DAT_00fffde9;
undefined1 DAT_00fffde6;
undefined DAT_00fffcd0;
undefined1 DAT_00fffcf4;
undefined1 DAT_00fffcf3;
undefined DAT_00ffb396;
undefined DAT_00fffd74;
byte DAT_00fffde6;
char DAT_00fffd5b;
undefined DAT_00fffd56;
char DAT_00fffd5c;
undefined DAT_00fffd58;
undefined DAT_00fffcd2;
undefined1 DAT_00fffcf6;
undefined1 DAT_00fffcf5;
pointer PTR_PTR_00003af6;
pointer PTR_PTR_00003c36;
char DAT_00fffcf3;
char DAT_00fffcf4;
char DAT_00fffcf5;
char DAT_00fffcf6;
undefined DAT_00ffa694;
undefined DAT_00ffb39a;
undefined4 DAT_000035d8;
undefined DAT_00fffbe0;
undefined DAT_00ff9b52;
byte DAT_00fffd28;
undefined DAT_00fffca4;
undefined1 DAT_00fffbe1;
undefined DAT_00fffca2;
undefined DAT_00ffa6d2;
undefined1 DAT_00fffd2e;
byte DAT_00ffff61;
char DAT_00ffff64;
byte DAT_00fffded;
byte DAT_00fffd16;
char DAT_00fffdde;
undefined DAT_00ff9b54;
undefined DAT_00ff9b56;
undefined DAT_00ff9b58;
undefined DAT_00ff9b5a;
undefined DAT_00ff9b5c;
undefined DAT_00ff9b5e;
undefined DAT_00ff9b60;
undefined DAT_00ff9b62;
undefined DAT_00ff9b64;
undefined DAT_00ff9b66;
undefined DAT_00ff9b68;
undefined DAT_00ff9b6a;
undefined DAT_00ff9b6c;
undefined DAT_00ff9b6e;
undefined DAT_00ff9b70;
undefined DAT_00ff9b72;
undefined DAT_00ff9b74;
undefined DAT_00ff9b76;
undefined DAT_00ff9b78;
undefined DAT_00ff9b7a;
undefined DAT_00ff9b7c;
undefined DAT_00ff9b7e;
undefined DAT_00ff9b80;
undefined DAT_00ff9b82;
undefined DAT_00ff9b84;
undefined DAT_00ff9b86;
undefined DAT_00ff9b88;
undefined DAT_00ff9b8a;
undefined DAT_00ff9b8c;
undefined DAT_00ff9b8e;
undefined DAT_00ff9b90;
undefined DAT_00ff9b92;
undefined DAT_00ff9b94;
undefined DAT_00ff9b96;
undefined DAT_00ff9b98;
undefined DAT_00ff9b9a;
undefined DAT_00ff9b9c;
undefined DAT_00ff9b9e;
undefined DAT_00ff9ba0;
char DAT_00fffbf4;
char DAT_00fffbf5;
char DAT_00fffbf6;
char DAT_00fffbf7;
undefined DAT_00fffbfc;
char DAT_00fffbfd;
char DAT_00fffbfe;
char DAT_00fffbff;
undefined DAT_000070da;
undefined DAT_000070dc;
undefined DAT_00ff9ba2;
char DAT_00ffff6c;
undefined DAT_00fffda8;
undefined1 DAT_00fffd4e;
undefined1 DAT_00fffd27;
undefined1 DAT_00fffd26;
char DAT_00fffd28;
byte DAT_00fffd11;
undefined1 DAT_00fffd12;
byte DAT_00fffd2a;
undefined1 DAT_00fffd0d;
undefined DAT_00fffcb8;
undefined DAT_00fffcba;
char DAT_00fffd29;
undefined DAT_00fffef2;
undefined DAT_00fffef4;
undefined DAT_00ffa724;
undefined DAT_00fffef6;
undefined DAT_00fffef8;
undefined DAT_00ffa778;
undefined DAT_00ffff56;
undefined DAT_00ffff58;
undefined DAT_00ffff5a;
undefined DAT_00ffff5c;
undefined DAT_00fffe92;
undefined DAT_00fffe98;
undefined1 DAT_00ffff6d;
undefined DAT_00ffa748;
undefined1 DAT_00ffa75f;
char DAT_00ffa6d2;
undefined DAT_00ffa728;
undefined *PTR_LAB_000035e4;
undefined DAT_001b29e4;
undefined DAT_00ffa77e;
undefined1 DAT_00fffdf8;
undefined *PTR_LAB_000037cc;
char DAT_00fffdee;
char DAT_00ffa707;
undefined *PTR_LAB_00003908;
char DAT_00fffbe3;
undefined DAT_00fffbe2;
undefined DAT_00ffb544;
undefined1 DAT_00fffbe3;
undefined1 DAT_00fffdee;
undefined1 DAT_00fffd1c;
undefined1 DAT_00ffa662;
undefined DAT_00ffa65a;
undefined DAT_00ffa65e;
undefined DAT_00ff9922;
undefined *PTR_LAB_00005978;
undefined1 DAT_00fffdea;
char DAT_00fffd9a;
undefined1 DAT_00fffd09;
undefined1 DAT_00fffd0a;
undefined1 DAT_00fffd03;
undefined1 DAT_00fffd04;
undefined1 DAT_00fffd05;
undefined1 DAT_00fffd06;
undefined1 DAT_00fffd07;
undefined1 DAT_00fffd08;
char DAT_00ffff78;
byte DAT_00ffa6da;
byte DAT_00fffcff;
char DAT_00fffcf7;
undefined DAT_00fffc82;
undefined1 DAT_00fffbee;
byte DAT_00ffa6d8;
undefined DAT_00003d4b;
undefined DAT_00005af8;
undefined DAT_00ffb54c;
char DAT_00fffd3d;
undefined DAT_00fffcbc;
undefined DAT_00fffcbe;
undefined DAT_00fffc86;
undefined DAT_00fffc8a;
undefined DAT_00fffc8e;
undefined DAT_00fffc92;
undefined DAT_00fffc96;
undefined DAT_00fffd18;
undefined DAT_00fffd1a;
char DAT_00fffcfd;
undefined DAT_00fffdc4;
undefined DAT_00a11100;
pointer PTR_DAT_0025bbe4;
undefined DAT_0025bbde;
undefined DAT_00ffa7d4;
undefined DAT_00ffb23e;
undefined DAT_00ffaf8e;
undefined DAT_00ffae36;
undefined DAT_00fffdcc;
undefined DAT_00fffdce;
undefined DAT_00ffa698;
undefined DAT_00ffa69a;
undefined *PTR_LAB_00005178;
char DAT_00fffe02;
undefined1 DAT_00fffbf3;
undefined1 DAT_00fffbf4;
undefined1 DAT_00fffbf5;
undefined1 DAT_00fffbf6;
undefined1 DAT_00fffbf7;
undefined1 DAT_00fffbf8;
undefined1 DAT_00ffa6c8;
undefined1 DAT_00ffa6c9;
undefined DAT_00fffbf7;
undefined DAT_00fffdc8;
undefined DAT_00fffbff;
undefined1 DAT_00fffbfb;
undefined1 DAT_00fffbfc;
undefined1 DAT_00fffbfd;
undefined1 DAT_00fffbfe;
undefined1 DAT_00fffbff;
undefined1 DAT_00fffc00;
undefined DAT_00ffa68a;
undefined DAT_00ffa68c;
undefined DAT_00ffa68e;
undefined DAT_00ffa690;
char DAT_00ffa6d0;
undefined1 DAT_00fffd9a;
undefined1 DAT_00ffa731;
undefined DAT_00ffa732;
undefined1 DAT_00ffa75e;
undefined DAT_001ac9a2;
undefined DAT_001ae5ba;
undefined DAT_001b00dc;
undefined DAT_001b5fb8;
byte DAT_00ffff7a;
byte DAT_00ff9941;
char DAT_00ff9940;
undefined1 DAT_00fffd24;
undefined1 DAT_00ff993d;
undefined1 DAT_00fffd5a;
undefined1 DAT_00fffd5b;
undefined1 DAT_00fffd5c;
byte DAT_00ffa6aa;
char DAT_00ffff76;
char DAT_00ffff75;
char DAT_00ffff74;
char DAT_00ffff73;
char DAT_00ffff72;
undefined1 DAT_0000c372;
undefined DAT_00ff9942;
undefined1 DAT_00ff9940;
undefined1 DAT_00ff9941;
byte DAT_00fffbf1;
undefined1 DAT_00ffa8d6;
undefined1 DAT_00fffd13;
undefined1 DAT_00fffd0e;
undefined1 DAT_00fffd00;
undefined DAT_001af4d2;
undefined DAT_001afbc4;
undefined DAT_001b41c6;
undefined DAT_001ae0aa;
undefined DAT_001ae556;
char DAT_00fffd77;
undefined1 DAT_00fffd3a;
undefined1 DAT_00fffd11;
undefined DAT_00ffa780;
undefined DAT_00ffa782;
undefined DAT_00ffa7d6;
undefined DAT_00ffa7d8;
undefined DAT_00ffa882;
undefined DAT_00ffa884;
undefined DAT_00ffa82c;
undefined DAT_00ffa82e;
undefined DAT_00ffa84a;
undefined DAT_001b5f56;
undefined2 DAT_001b83b4;
undefined DAT_00ffb496;
byte DAT_00fffd3a;
pointer PTR_DAT_0025e300;
undefined DAT_00ffb498;
undefined1 DAT_001b6f77;
undefined DAT_001b5f70;
char DAT_00fffde5;
undefined DAT_00ffb416;
undefined DAT_00fffbe4;
char DAT_00fffbeb;
undefined *PTR_LAB_000059cc;
undefined1 DAT_00fffd9d;
undefined1 DAT_00fffd9c;
byte DAT_00fffde4;
undefined DAT_00005a0c;
pointer PTR_DAT_001a348a;
pointer PTR_DAT_001b6910;
undefined DAT_001b6914;
undefined1 DAT_00ffa6ca;
undefined DAT_00ff9926;
undefined DAT_00ff992a;
undefined DAT_00ff9932;
undefined DAT_00ffa6c0;
char DAT_00fffd31;
undefined DAT_001b750c;
char DAT_00fffd39;
undefined1 DAT_00ffa6cf;
char DAT_00ff993c;
char DAT_00ffff9a;
undefined DAT_00ffff86;
char DAT_00ffff99;
char DAT_00ffff7a;
undefined DAT_00ffff90;
undefined DAT_00ffff92;
undefined DAT_00ffff94;
undefined DAT_00ffff96;
pointer PTR_DAT_0025c3cc;
undefined DAT_0025c3d0;
undefined DAT_00ffa69c;
undefined DAT_00ffa6a0;
undefined DAT_00ffa6a4;
undefined1 DAT_00ffa6cc;
undefined1 DAT_00ffa6cd;
undefined1 DAT_00fffbeb;
undefined1 DAT_00fffdfa;
char DAT_00fffdf1;
undefined1 DAT_00fffdf0;
undefined DAT_00ffa668;
pointer PTR_LAB_0025bbec;
undefined DAT_00fffe9a;
undefined2 DAT_001b7abe;
undefined1 DAT_00fffd66;
undefined DAT_00fffcde;
undefined1 DAT_00fffddf;
undefined DAT_00fffcda;
undefined1 DAT_00fffd6a;
undefined1 DAT_00fffd70;
undefined1 DAT_00fffd6b;
undefined1 DAT_00fffd6c;
undefined DAT_00ffff4a;
undefined1 DAT_00ffff48;
undefined DAT_00ffff54;
undefined1 DAT_00fffd6d;
undefined DAT_00fffce4;
undefined1 DAT_00fffd6e;
undefined DAT_00fffce8;
undefined DAT_00fffcea;
undefined DAT_00fffcec;
undefined DAT_00fffcee;
undefined1 DAT_00fffd71;
undefined1 DAT_00ffa76e;
undefined1 DAT_00ffa75d;
undefined DAT_00fffe0a;
undefined1 DAT_00fffd15;
undefined1 DAT_00fffeaa;
undefined1 DAT_00ffff60;
undefined DAT_00fffe94;
undefined DAT_00fffe96;
undefined DAT_00fffef0;
undefined1 DAT_00ffff61;
undefined DAT_00fffe0e;
undefined1 DAT_00fffd0f;
undefined1 DAT_00fffd10;
undefined DAT_00fffca0;
undefined1 DAT_00fffcfe;
undefined DAT_00fffdac;
undefined1 DAT_00fffde4;
char DAT_001a5b54;
char DAT_00fffdf3;
pointer PTR_s_P_P_P_P_A_P_P_O_P_O_O_P_P_P_P_P_A_001a2cba;
byte DAT_00fffd0f;
undefined *PTR_DAT_0000c120;
byte DAT_00fffd10;
undefined *PTR_DAT_0000c220;
byte DAT_00ffa6c8;
undefined1 DAT_00fffe02;
undefined DAT_001ace70;
undefined DAT_001b615e;
pointer PTR_DAT_001a3322;
undefined DAT_001b37ea;
undefined DAT_001b3826;
undefined DAT_001b2ae2;
undefined DAT_001b2af6;
undefined DAT_001b35b2;
undefined DAT_001b35e8;
undefined DAT_00256006;
undefined DAT_00256008;
undefined DAT_0025ac04;
undefined DAT_001a3a30;
undefined DAT_001a3a04;
undefined DAT_001a39c8;
undefined DAT_0000c320;
char DAT_00ffa6ef;
undefined DAT_001b0d76;
char DAT_00fffd6e;
undefined DAT_001b0d46;
byte DAT_00fffd71;
undefined DAT_0025813e;
byte DAT_00ffa6d9;
pointer PTR_DAT_0000c93a;
byte DAT_00ffa72f;
char DAT_00ffa731;
byte DAT_00ffff67;
char DAT_00ffff63;
byte DAT_00ffff62;
undefined *PTR_DAT_00006f38;
undefined *PTR_DAT_00006ff8;
byte DAT_00ffff6d;
undefined DAT_00fffea6;
undefined1 DAT_00ffff63;
undefined1 DAT_00ffff62;
undefined DAT_00fffeaa;
undefined DAT_00fffea8;
undefined DAT_00006a6c;
undefined DAT_000070b8;
undefined1 DAT_00fffd23;
undefined DAT_00ffff40;
undefined DAT_00ffff42;
undefined DAT_0025d1cc;
undefined DAT_0025d2cc;
undefined *PTR_DAT_0025d9cc;
char DAT_00ffff5f;
byte DAT_00ffff66;
undefined DAT_0000665a;
char DAT_00fffd8a;
char DAT_00fffd8b;
byte DAT_00fffd88;
char DAT_00fffd8d;
byte DAT_00fffd89;
undefined DAT_0000c9bc;
undefined DAT_0000c9bd;
undefined4 DAT_0000c9d6;
undefined DAT_0000c9e6;
undefined DAT_001b4724;
undefined DAT_002597a8;
undefined DAT_00ff9b4a;
undefined DAT_001b834c;
char DAT_00fffd2f;
undefined1 DAT_00fffde2;
char DAT_00fffbed;
undefined DAT_00fffdb4;
byte DAT_00ffa6ab;
undefined DAT_00ffa79e;
undefined1 DAT_00ffff9a;
undefined *PTR_FUN_00004d68;
char DAT_00fffde4;
undefined1 DAT_00a01b20;
undefined DAT_00a11200;
undefined1 DAT_0025e340;
undefined DAT_00a00000;

// WARNING: Globals starting with '_' overlap smaller symbols at the same address


void Reset_Start(void) {
  char cVar1;
  byte bVar2;
  short *psVar3;
  undefined4 *puVar4;
  short *psVar5;
  undefined4 *puVar6;
  short sVar7;
  byte bVar8;
  uint uVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  undefined1 *puVar13;
  char *pcVar14;
  byte *pbVar15;
  char *extraout_A1;
  undefined2 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  byte *pbVar16;
  
  psVar5 = DAT_000002ba;
  puVar4 = DAT_000002b6;
  psVar3 = DAT_000002b2;
  pbVar15 = DAT_000002ae;
  puVar13 = DAT_000002aa;
  sVar12 = DAT_000002a8;
  sVar11 = DAT_000002a6;

  if (_CONTROLLER_1_STATE == 0 && _CONTROLLER_2_STATE == 0) {
    uVar9 = (uint)DAT_000002a4;

    if ((DAT_000002ae[-0x10ff] & 0xf) != 0) {
      pbVar15[0x2f00] = 0x53;
      pbVar15[0x2f01] = 0x45;
      pbVar15[0x2f02] = 0x47;
      pbVar15[0x2f03] = 0x41;
    }

    puVar19 = (undefined4 *)0x0;
    sVar7 = 0x17;
    puVar6 = (undefined4 *)&DAT_000002be;

    do {
      puVar18 = puVar6;
      sVar10 = (short)CONCAT31((int3)(uVar9 >> 8),*(undefined1 *)puVar18);
      *psVar5 = sVar10;
      uVar9 = (uint)(ushort)(sVar12 + sVar10);
      sVar7 = sVar7 + -1;
      puVar6 = (undefined4 *)((int)puVar18 + 1);
    } while (sVar7 != -1);

    *(undefined4 *)psVar5 = *(undefined4 *)((int)puVar18 + 1);
    *(undefined2 *)puVar4 = 0;
    *(short *)pbVar15 = sVar12;
    *psVar3 = sVar12;
    do {
    } while ((*pbVar15 & 1) != 0);
    sVar7 = 0x25;
    puVar6 = (undefined4 *)((int)puVar18 + 5);
    do {
      puVar18 = puVar6;
      *puVar13 = *(undefined1 *)puVar18;
      sVar7 = sVar7 + -1;
      puVar13 = puVar13 + 1;
      puVar6 = (undefined4 *)((int)puVar18 + 1);
    } while (sVar7 != -1);
    *psVar3 = 0;
    pbVar15[0] = 0;
    pbVar15[1] = 0;
    *psVar3 = sVar12;
    do {
      puVar19 = puVar19 + -1;
      *puVar19 = 0;
      sVar11 = sVar11 + -1;
    } while (sVar11 != -1);
    *(undefined4 *)psVar5 = *(undefined4 *)((int)puVar18 + 1);
    *(undefined4 *)psVar5 = *(undefined4 *)((int)puVar18 + 5);
    sVar11 = 0x1f;
    do {
      *puVar4 = 0;
      sVar11 = sVar11 + -1;
    } while (sVar11 != -1);
    *(undefined4 *)psVar5 = *(undefined4 *)((int)puVar18 + 9);
    sVar11 = 0x13;
    do {
      *puVar4 = 0;
      sVar11 = sVar11 + -1;
    } while (sVar11 != -1);
    sVar11 = 3;
    puVar13 = (undefined1 *)((int)puVar18 + 0xd);
    do {
      *(undefined1 *)((int)puVar4 + 0x11) = *puVar13;
      sVar11 = sVar11 + -1;
      puVar13 = puVar13 + 1;
    } while (sVar11 != -1);
    *psVar3 = 0;
  }

  DAT_00ff993f = 0xff;
  cVar1 = *(char *)((short)(ushort)(DAT_00a10001 >> 6) + 0x44c);
  if (cVar1 != '\0') {
    pcVar14 = &DAT_000001f0;
    sVar11 = 0xf;
    do {
      if (cVar1 == *pcVar14) {
        startup_logo_sequence();
        return;
      }

      pcVar14 = pcVar14 + 1;
      sVar11 = sVar11 + -1;
    } while (sVar11 != -1);
  // Set VDP control via helper
  vdp_control_write(0x4000);
    pbVar15 = (byte *)(s_PAL_AND_FRENCH_SECAM_MEGA_DRIVE_000004ae + 0x20);
    sVar11 = 0x3a;
    uVar9 = 0x10000000;
    do {
      sVar12 = 7;
      pbVar16 = pbVar15;
      do {
        pbVar15 = pbVar16 + 1;
        bVar8 = *pbVar16;
  // Clear VDP data via helper
  vdp_data_write(0);
        sVar7 = 7;
        do {
          uVar9 = uVar9 << 4 | uVar9 >> 0x1c;
          bVar2 = bVar8 << 7;
          bVar8 = bVar2 | bVar8 >> 1;
          if (bVar2 != 0) {
            _DAT_00c00000 = uVar9 | _DAT_00c00000;
          }
          sVar7 = sVar7 + -1;
        } while (sVar7 != -1);
        sVar12 = sVar12 + -1;
        pbVar16 = pbVar15;
      } while (sVar12 != -1);
      sVar11 = sVar11 + -1;
    } while (sVar11 != -1);
    vdp_draw_string();

    for (pcVar14 = &DAT_000001f0; *pcVar14 != ' '; pcVar14 = pcVar14 + 1) {
      for (puVar17 = &DAT_00000450; (char)*puVar17 != '\0'; puVar17 = puVar17 + 3) {
        if ((char)*puVar17 == *pcVar14) {
          if ((pcVar14[1] == ' ') && (pcVar14 != &DAT_000001f0)) {
            vdp_draw_string();
          }
          vdp_draw_string();
          pcVar14 = extraout_A1;
          break;
        }
      }
    }
    vdp_draw_string();
  }
  // transfer control to the main game loop
  // initialize audio and object systems
  audio_init();
  objects_init();
  main_loop();
  // should never return
  while (1);
}


// Main loop stub: call subsystems
void main_loop(void) {
  while (1) {
    input_update();
    audio_update();
    game_update();
    render_frame();
    vblank_sync();
  }
}

void vdp_draw_string(void) {
  byte in_D0b;
  byte in_D1b;
  char *in_A0;
  ushort *unaff_A4;
  int *unaff_A5;
  
  *unaff_A5 = (uint)in_D0b * 0x20000 + (uint)in_D1b * 0x800000 + 0x40000003;
  for (; *in_A0 != '\0'; in_A0 = in_A0 + 1) {
    *unaff_A4 = (ushort)(byte)(*in_A0 - 0x20);
  }
  return;
}

void system_init_hardware(void) {
  undefined4 in_D0;
  undefined4 uVar1;
  short sVar2;
  undefined4 *puVar3;
  
  sVar2 = 0x7f;
  uVar1 = CONCAT22((short)((uint)in_D0 >> 0x10),0x8000);
  puVar3 = (undefined4 *)&DAT_00ff994a;
  do {
    *puVar3 = uVar1;
    uVar1 = CONCAT22((short)((uint)uVar1 >> 0x10),(short)uVar1 + 0x80);
    sVar2 = sVar2 + -1;
    puVar3 = puVar3 + 1;
  } while (sVar2 != -1);
  return;
}

// WARNING: This function may have set the stack pointer
// WARNING: Globals starting with '_' overlap smaller symbols at the same address


// Display startup logo and install VBlank ISR
void startup_logo_sequence(void) {
  uint uVar1;
  undefined4 uVar2;
  undefined4 extraout_A0;
  undefined4 extraout_A1;
  undefined4 unaff_A6;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  char cVar6;
  undefined8 uVar7;
  
  // set VBlank IRQ handler
  vdp_irq_handler = vblank_isr;
  vdp_enable_vblank_interrupt();

  puVar3 = (undefined1 *)0xfffbd8;
  vdp_irq_handler = (vdp_irq_handler_t)0x2456da;
  poll_vdp_ready();
  _DAT_00c00004 = 0x929c;
  vdp_irq_handler = (vdp_irq_handler_t)0x245770;
  FUN_0024cba0();
  vdp_irq_handler = (vdp_irq_handler_t)0x245776;
  FUN_0024d25a();
  vdp_irq_handler = (vdp_irq_handler_t)0x24577c;
  FUN_0024ca00();
  vdp_irq_handler = (vdp_irq_handler_t)0x245782;
  FUN_0024ca12();
  vdp_irq_handler = (vdp_irq_handler_t)0x24578c;
  FUN_0024ca74();
  _DAT_00fffbd4 = (code *)0x245792;
  FUN_0024c5f6();
  _DAT_00fffbd4 = (code *)0x245796;
  FUN_0024ac98();
  _DAT_00fffbd4 = (code *)0x24579c;
  FUN_0024cb8c();
  do {
    DAT_00ffff98 = '\0';
    *(undefined4 *)(puVar3 + -4) = 0x2457aa;
    FUN_00259dfe();
    *(undefined4 *)(puVar3 + -4) = 0x2457b0;
    FUN_0024d2c0();
    *(undefined4 *)(puVar3 + -4) = 0x2457b4;
    FUN_0024b3aa();
    *(undefined4 *)(puVar3 + -4) = 0x2457b8;
    FUN_0024b1ea();
    *(undefined4 *)(puVar3 + -4) = 0x2457bc;
    FUN_0024b20c();
    _DAT_00c00004 = 0x8c81;
    *(undefined4 *)(puVar3 + -4) = 0x2457ca;
    FUN_0024ca00();
    *(undefined4 *)(puVar3 + -4) = 0x2457d0;
    FUN_0024ca12();
    *(undefined4 *)(puVar3 + -4) = 0x2457d6;
    FUN_0024d282();
    *(undefined4 *)(puVar3 + -4) = 0x2457dc;
    FUN_002513f8();
    *(undefined4 *)(puVar3 + -4) = 0x2457e0;
    FUN_0024acc8();
    if (DAT_00ffff98 == '\x01') {
      DAT_00ffa6cf = '\0';
      _DAT_00ffa6bc = 0xbc614e;
    }
    *(undefined4 *)(puVar3 + -4) = 0x245800;
    flush_vram_fifo();
    *(undefined4 *)(puVar3 + -4) = 0x245804;
    FUN_0024b47a();
    *(undefined4 *)(puVar3 + -4) = 0x245808;
    FUN_00247940();
    *(undefined4 *)(puVar3 + -4) = 0x24580c;
    FUN_0024811e();
    *(undefined4 *)(puVar3 + -4) = 0x245810;
    uVar7 = FUN_00248330();
    *(undefined4 *)(puVar3 + -4) = unaff_A6;
    *(undefined4 *)(puVar3 + -8) = extraout_A1;
    *(undefined4 *)(puVar3 + -0xc) = extraout_A0;
    *(undefined8 *)(puVar3 + -0x14) = uVar7;
    *(undefined4 *)(puVar3 + -0x18) = 0x24581a;
    FUN_002cbd3e();
    unaff_A6 = *(undefined4 *)(puVar3 + -4);
    *(undefined4 *)(puVar3 + -4) = 0x245822;
    FUN_0024ac6a();
    DAT_00ffa6cf = -1;
    *(undefined4 *)(puVar3 + -4) = 0x24582c;
    apply_scroll_offsets();
    *(undefined4 *)(puVar3 + -4) = 0x245832;
    FUN_0024bda8();
    *(undefined4 *)(puVar3 + -4) = 0x245836;
    FUN_00249178();
    *(undefined4 *)(puVar3 + -4) = 0x24583a;
    FUN_0024847e();
    *(undefined4 *)(puVar3 + -4) = 0x24583e;
    FUN_0024910a();
    *(undefined4 *)(puVar3 + -4) = 0x245842;
    FUN_00248430();
    *(undefined4 *)(puVar3 + -4) = 0x245846;
    FUN_0024801c();
    *(undefined4 *)(puVar3 + -4) = 0x24584a;
    FUN_0024ab5c();
    *(undefined4 *)(puVar3 + -4) = 0x24584e;
    FUN_0024ac2c();
    puVar4 = puVar3;
    while( true ) {
      *(undefined4 *)(puVar4 + -4) = 0x245854;
      FUN_00258b04();
      uVar5 = DAT_00fffdec == '\0';
      puVar3 = puVar4;
      if (!(bool)uVar5) {
        while( true ) {
          *(undefined4 *)(puVar4 + -4) = 0x245874;
          FUN_0024d476();
          do {
            *(undefined4 *)(puVar4 + -4) = 0x24587a;
            uVar2 = FUN_0024d98a();
          } while (!(bool)uVar5);
          puVar3 = puVar4 + -4;
          *(undefined4 *)(puVar4 + -4) = uVar2;
          *(undefined4 *)(puVar4 + -8) = 0x245884;
          FUN_002cbd12();
          if (DAT_00fffdec == '\0') break;
          uVar1 = (uint)DAT_00fffdeb;
          *(uint *)(puVar4 + -8) = uVar1;
          uVar5 = uVar1 == 0;
          *(undefined4 *)(puVar4 + -0xc) = 0x24586e;
          FUN_002cbcfc();
          puVar4 = puVar4 + -4;
        }
      }
      DAT_00ffa6cf = DAT_00ffa6cf + '\x01';
      DAT_00ffff67 = DAT_00ffff67 + -1;
      if (DAT_00ffff67 < '\0') {
        DAT_00ffff67 = '\x05';
      }
      *(undefined4 *)(puVar3 + -4) = 0x2458a8;
      wait_for_user_input();
      *(undefined4 *)(puVar3 + -4) = 0x2458ac;
      apply_scroll_offsets();
      *(undefined4 *)(puVar3 + -4) = 0x2458b0;
      FUN_0024a086();
      *(undefined4 *)(puVar3 + -4) = 0x2458b4;
      apply_scroll_offsets();
      *(undefined4 *)(puVar3 + -4) = 0x2458b8;
      FUN_00249c56();
      *(undefined4 *)(puVar3 + -4) = 0x2458bc;
      FUN_0024a766();
      *(undefined4 *)(puVar3 + -4) = 0x2458c0;
      FUN_0024a4f4();
      *(undefined4 *)(puVar3 + -4) = 0x2458c4;
      FUN_00248c3a();
      if (DAT_00ffa6cd != '\0') break;
      DAT_00fffc85 = 0;
      cVar6 = '\x01';
      *(undefined4 *)(puVar3 + -4) = 0x2458da;
      FUN_0024d6f4();
      DAT_00fffc85 = -cVar6;
      DAT_00fffc84 = 0;
      cVar6 = '\x01';
      *(undefined4 *)(puVar3 + -4) = 0x2458ec;
      FUN_0024d6ea();
      DAT_00fffc84 = -cVar6;
      DAT_00fffc83 = 0;
      cVar6 = '\x01';
      *(undefined4 *)(puVar3 + -4) = 0x2458fe;
      FUN_0024d6fe();
      DAT_00fffc83 = -cVar6;
      DAT_00fffc82 = 0;
      cVar6 = '\x01';
      *(undefined4 *)(puVar3 + -4) = 0x245910;
      FUN_0024d708();
      DAT_00fffc82 = -cVar6;
      *(undefined4 *)(puVar3 + -4) = 0x24591c;
      FUN_0024bce4();
      *(undefined4 *)(puVar3 + -4) = 0x245920;
      FUN_00247210();
      *(undefined4 *)(puVar3 + -4) = 0x245924;
      set_vram_tiles();
      *(undefined4 *)(puVar3 + -4) = 0x245928;
      update_controller_state();
      *(undefined4 *)(puVar3 + -4) = 0x24592c;
      initialize_input_state();
      *(undefined4 *)(puVar3 + -4) = 0x245930;
      apply_scroll_offsets();
      *(undefined4 *)(puVar3 + -4) = 0x245934;
      FUN_00247b2c();
      *(undefined4 *)(puVar3 + -4) = 0x245938;
      render_menu_text();
      *(undefined4 *)(puVar3 + -4) = 0x24593c;
      apply_palette_colors();
      *(undefined4 *)(puVar3 + -4) = 0x245940;
      FUN_00248e58();
      *(undefined4 *)(puVar3 + -4) = 0x245944;
      FUN_00248f7e();
      *(undefined4 *)(puVar3 + -4) = 0x245948;
      fade_out_sequence();
      *(undefined4 *)(puVar3 + -4) = 0x24594c;
      no_op();
      *(undefined4 *)(puVar3 + -4) = 0x245950;
      FUN_0024b23c();
      *(undefined4 *)(puVar3 + -4) = 0x245954;
      FUN_0024b2ec();
      *(undefined4 *)(puVar3 + -4) = 0x245958;
      apply_scroll_offsets();
      *(undefined4 *)(puVar3 + -4) = 0x24595c;
      update_menu_animation();
      *(undefined4 *)(puVar3 + -4) = 0x245960;
      FUN_00249168();
      *(undefined4 *)(puVar3 + -4) = 0x245964;
      FUN_0024847e();
      *(undefined4 *)(puVar3 + -4) = 0x24596a;
      FUN_0024c9c8();
      *(undefined4 *)(puVar3 + -4) = 0x245970;
      FUN_0024d5c0();
      *(undefined4 *)(puVar3 + -4) = 0x245974;
      FUN_0024801c();
      *(undefined4 *)(puVar3 + -4) = 0x245978;
      FUN_0024910a();
      *(undefined4 *)(puVar3 + -4) = 0x24597c;
      FUN_00248430();
      *(undefined4 *)(puVar3 + -4) = 0x245980;
      FUN_0024ab5c();
      *(undefined4 *)(puVar3 + -4) = 0x245984;
      FUN_00247fd2();
      *(undefined4 *)(puVar3 + -4) = 0x245988;
      update_menu_cursor();
      puVar4 = puVar3;
    }
    *(undefined4 *)(puVar3 + -4) = 0x24d6a2;
    FUN_0024acbc();
    *(undefined4 *)(puVar3 + -4) = 0x24d6a6;
    FUN_0024cc9a();
    *(undefined4 *)(puVar3 + -4) = 0x24d6aa;
    FUN_0024cb8c();
    *(undefined4 *)(puVar3 + -4) = 0x24d6ae;
    poll_vdp_ready();
    *(undefined4 *)(puVar3 + -4) = 0x24d6b2;
    FUN_0024d744();
  } while( true );
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address


// VBlank interrupt service routine
void vblank_isr(void) {
  undefined4 uVar1;
  undefined4 extraout_A0;
  undefined4 extraout_A1;
  undefined4 unaff_A6;
  undefined1 *puVar2;
  undefined1 uVar3;
  char cVar4;
  undefined8 uVar5;
  
  poll_vdp_ready();
  _DAT_00c00004 = 0x929c;
  FUN_0024cba0();
  FUN_0024d25a();
  FUN_0024ca00();
  FUN_0024ca12();
  FUN_0024ca74();
  FUN_0024c5f6();
  FUN_0024ac98();
  FUN_0024cb8c();

  do {
    DAT_00ffff98 = '\0';
    *(undefined4 *)((int)register0x0000003c + -4) = 0x2457aa;
    FUN_00259dfe();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x2457b0;
    FUN_0024d2c0();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x2457b4;
    FUN_0024b3aa();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x2457b8;
    FUN_0024b1ea();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x2457bc;
    FUN_0024b20c();
    _DAT_00c00004 = 0x8c81;
    *(undefined4 *)((int)register0x0000003c + -4) = 0x2457ca;
    FUN_0024ca00();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x2457d0;
    FUN_0024ca12();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x2457d6;
    FUN_0024d282();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x2457dc;
    FUN_002513f8();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x2457e0;
    FUN_0024acc8();
    if (DAT_00ffff98 == '\x01') {
      DAT_00ffa6cf = '\0';
      _DAT_00ffa6bc = 0xbc614e;
    }
    *(undefined4 *)((int)register0x0000003c + -4) = 0x245800;
    flush_vram_fifo();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x245804;
    FUN_0024b47a();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x245808;
    FUN_00247940();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x24580c;
    FUN_0024811e();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x245810;
    uVar5 = FUN_00248330();
    *(undefined4 *)((int)register0x0000003c + -4) = unaff_A6;
    *(undefined4 *)((int)register0x0000003c + -8) = extraout_A1;
    *(undefined4 *)((int)register0x0000003c + -0xc) = extraout_A0;
    *(undefined8 *)((int)register0x0000003c + -0x14) = uVar5;
    *(undefined4 *)((int)register0x0000003c + -0x18) = 0x24581a;
    FUN_002cbd3e();
    unaff_A6 = *(undefined4 *)((int)register0x0000003c + -4);
    *(undefined4 *)((int)register0x0000003c + -4) = 0x245822;
    FUN_0024ac6a();
    DAT_00ffa6cf = -1;
    *(undefined4 *)((int)register0x0000003c + -4) = 0x24582c;
    apply();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x245832;
    FUN_0024bda8();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x245836;
    FUN_00249178();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x24583a;
    FUN_0024847e();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x24583e;
    FUN_0024910a();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x245842;
    FUN_00248430();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x245846;
    FUN_0024801c();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x24584a;
    FUN_0024ab5c();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x24584e;
    FUN_0024ac2c();
    puVar2 = (undefined1 *)register0x0000003c;
    while( true ) {
      *(undefined4 *)(puVar2 + -4) = 0x245854;
      FUN_00258b04();
      uVar3 = DAT_00fffdec == '\0';
      register0x0000003c = (BADSPACEBASE *)puVar2;
      if (!(bool)uVar3) {
        while( true ) {
          *(undefined4 *)(puVar2 + -4) = 0x245874;
          FUN_0024d476();
          do {
            *(undefined4 *)(puVar2 + -4) = 0x24587a;
            uVar1 = FUN_0024d98a();
          } while (!(bool)uVar3);
          register0x0000003c = (BADSPACEBASE *)(puVar2 + -4);
          *(undefined4 *)(puVar2 + -4) = uVar1;
          *(undefined4 *)(puVar2 + -8) = 0x245884;
          FUN_002cbd12();
          if (DAT_00fffdec == '\0') break;
          *(uint *)(puVar2 + -8) = (uint)DAT_00fffdeb;
          uVar3 = DAT_00fffdeb == 0;
          *(undefined4 *)(puVar2 + -0xc) = 0x24586e;
          FUN_002cbcfc();
          puVar2 = puVar2 + -4;
        }
      }
      DAT_00ffa6cf = DAT_00ffa6cf + '\x01';
      DAT_00ffff67 = DAT_00ffff67 + -1;
      if (DAT_00ffff67 < '\0') {
        DAT_00ffff67 = '\x05';
      }
      *(undefined4 *)((int)register0x0000003c + -4) = 0x2458a8;
      wait_for_user_input();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x2458ac;
      apply_scroll_offsets();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x2458b0;
      FUN_0024a086();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x2458b4;
      apply_scroll_offsets();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x2458b8;
      FUN_00249c56();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x2458bc;
      FUN_0024a766();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x2458c0;
      FUN_0024a4f4();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x2458c4;
      FUN_00248c3a();
      if (DAT_00ffa6cd != '\0') break;
      DAT_00fffc85 = 0;
      cVar4 = '\x01';
      *(undefined4 *)((int)register0x0000003c + -4) = 0x2458da;
      FUN_0024d6f4();
      DAT_00fffc85 = -cVar4;
      DAT_00fffc84 = 0;
      cVar4 = '\x01';
      *(undefined4 *)((int)register0x0000003c + -4) = 0x2458ec;
      FUN_0024d6ea();
      DAT_00fffc84 = -cVar4;
      DAT_00fffc83 = 0;
      cVar4 = '\x01';
      *(undefined4 *)((int)register0x0000003c + -4) = 0x2458fe;
      FUN_0024d6fe();
      DAT_00fffc83 = -cVar4;
      DAT_00fffc82 = 0;
      cVar4 = '\x01';
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245910;
      FUN_0024d708();
      DAT_00fffc82 = -cVar4;
      *(undefined4 *)((int)register0x0000003c + -4) = 0x24591c;
      FUN_0024bce4();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245920;
      FUN_00247210();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245924;
      set_vram_tiles();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245928;
      update_controller_state();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x24592c;
      initialize_input_state();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245930;
      apply_scroll_offsets();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245934;
      FUN_00247b2c();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245938;
      render_menu_text();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x24593c;
      apply_palette_colors();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245940;
      FUN_00248e58();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245944;
      FUN_00248f7e();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245948;
      fade_out_sequence();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x24594c;
      no_op();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245950;
      FUN_0024b23c();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245954;
      FUN_0024b2ec();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245958;
      apply_scroll_offsets();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x24595c;
      update_menu_animation();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245960;
      FUN_00249168();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245964;
      FUN_0024847e();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x24596a;
      FUN_0024c9c8();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245970;
      FUN_0024d5c0();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245974;
      FUN_0024801c();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245978;
      FUN_0024910a();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x24597c;
      FUN_00248430();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245980;
      FUN_0024ab5c();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245984;
      FUN_00247fd2();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245988;
      update_menu_cursor();
      puVar2 = (undefined1 *)register0x0000003c;
    }
    *(undefined4 *)((int)register0x0000003c + -4) = 0x24d6a2;
    FUN_0024acbc();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x24d6a6;
    FUN_0024cc9a();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x24d6aa;
    FUN_0024cb8c();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x24d6ae;
    poll_vdp_ready();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x24d6b2;
    FUN_0024d744();
  } while( true );
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void update_menu_cursor(void) {
  if (DAT_00fffd9c != DAT_00fffd9d) {
    DAT_00fffd9d = DAT_00fffd9c;
    _DAT_00ff992e = &DAT_001b766c + (uint)DAT_00fffd9c * 0x20;
    FUN_0024cb40();
  }
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void apply_scroll_offsets(void) {
  _DAT_00ffa682 = _DAT_00ffa67a + _DAT_00ffa676;
  _DAT_00ffa6d4 = _DAT_00ffa67a + _DAT_00ffa676;
  _DAT_00ffa684 = _DAT_00ffa67c + _DAT_00ffa678;
  _DAT_00ffa6d6 = _DAT_00ffa67c + _DAT_00ffa678;
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void update_menu_animation(void) {
  short sVar1;
  undefined4 uVar2;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  short *psVar3;
  undefined4 extraout_A1;
  undefined4 extraout_A1_00;
  undefined4 unaff_A6;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  char cVar7;
  undefined8 uVar8;
  
  if ((DAT_00fffd24 == '\0') ||
     ((DAT_00fffd24 != -1 && (DAT_00fffd24 = DAT_00fffd24 + -1, DAT_00fffd24 != '\0')))) {
    return;
  }
  if ((DAT_00fffdf9 != '\0') || (DAT_00fffd15 == '\0')) {
    DAT_00fffbf1 = '\x01';
  }
  if (((DAT_00ffa692 != '\x04') && (DAT_00ffa692 != '\x05')) && (DAT_00ffa692 != '\x1c')) {
    FUN_0024baf8();
  }
  uVar8 = FUN_0024cc9a();
  FUN_002cbd3e(uVar8,extraout_A0_00,extraout_A1_00);
  FUN_0024acbc();
  FUN_0024ac98();
  if (DAT_00fffbf1 == '\0') {
    DAT_00ffa692 = 0x1c;
  }
  else {
    psVar3 = _DAT_00ffff82 + 1;
    sVar1 = *_DAT_00ffff82;
    if (((sVar1 != 0) && (sVar1 != 2)) && (sVar1 == 0xff)) {
      FUN_0024c11a();
      return;
    }
    _DAT_00ffff82 = _DAT_00ffff82 + 2;
    DAT_00ffa692 = (char)*psVar3;
  }
  FUN_0024c5f6();
  FUN_0024d7c8();
  FUN_0024ac98();
  FUN_0024cb8c();
  FUN_0024d2ac();

  puVar5 = &stack0x00000004;
  do {
    _DAT_00c00004 = 0x8c81;
    *(undefined4 *)(puVar5 + -4) = 0x2457ca;
    FUN_0024ca00();
    *(undefined4 *)(puVar5 + -4) = 0x2457d0;
    FUN_0024ca12();
    *(undefined4 *)(puVar5 + -4) = 0x2457d6;
    FUN_0024d282();
    *(undefined4 *)(puVar5 + -4) = 0x2457dc;
    FUN_002513f8();
    *(undefined4 *)(puVar5 + -4) = 0x2457e0;
    FUN_0024acc8();
    if (DAT_00ffff98 == '\x01') {
      DAT_00ffa6cf = '\0';
      _DAT_00ffa6bc = 0xbc614e;
    }
    *(undefined4 *)(puVar5 + -4) = 0x245800;
    flush_vram_fifo();
    *(undefined4 *)(puVar5 + -4) = 0x245804;
    FUN_0024b47a();
    *(undefined4 *)(puVar5 + -4) = 0x245808;
    FUN_00247940();
    *(undefined4 *)(puVar5 + -4) = 0x24580c;
    FUN_0024811e();
    *(undefined4 *)(puVar5 + -4) = 0x245810;
    uVar8 = FUN_00248330();
    *(undefined4 *)(puVar5 + -4) = unaff_A6;
    *(undefined4 *)(puVar5 + -8) = extraout_A1;
    *(undefined4 *)(puVar5 + -0xc) = extraout_A0;
    *(undefined8 *)(puVar5 + -0x14) = uVar8;
    *(undefined4 *)(puVar5 + -0x18) = 0x24581a;
    FUN_002cbd3e();
    unaff_A6 = *(undefined4 *)(puVar5 + -4);
    *(undefined4 *)(puVar5 + -4) = 0x245822;
    FUN_0024ac6a();
    DAT_00ffa6cf = -1;
    *(undefined4 *)(puVar5 + -4) = 0x24582c;
    apply_scroll_offsets();
    *(undefined4 *)(puVar5 + -4) = 0x245832;
    FUN_0024bda8();
    *(undefined4 *)(puVar5 + -4) = 0x245836;
    FUN_00249178();
    *(undefined4 *)(puVar5 + -4) = 0x24583a;
    FUN_0024847e();
    *(undefined4 *)(puVar5 + -4) = 0x24583e;
    FUN_0024910a();
    *(undefined4 *)(puVar5 + -4) = 0x245842;
    FUN_00248430();
    *(undefined4 *)(puVar5 + -4) = 0x245846;
    FUN_0024801c();
    *(undefined4 *)(puVar5 + -4) = 0x24584a;
    FUN_0024ab5c();
    *(undefined4 *)(puVar5 + -4) = 0x24584e;
    FUN_0024ac2c();
    puVar4 = puVar5;
    while( true ) {
      *(undefined4 *)(puVar4 + -4) = 0x245854;
      FUN_00258b04();
      uVar6 = DAT_00fffdec == '\0';
      puVar5 = puVar4;
      if (!(bool)uVar6) {
        while( true ) {
          *(undefined4 *)(puVar4 + -4) = 0x245874;
          FUN_0024d476();
          do {
            *(undefined4 *)(puVar4 + -4) = 0x24587a;
            uVar2 = FUN_0024d98a();
          } while (!(bool)uVar6);
          puVar5 = puVar4 + -4;
          *(undefined4 *)(puVar4 + -4) = uVar2;
          *(undefined4 *)(puVar4 + -8) = 0x245884;
          FUN_002cbd12();
          if (DAT_00fffdec == '\0') break;
          *(uint *)(puVar4 + -8) = (uint)DAT_00fffdeb;
          uVar6 = DAT_00fffdeb == 0;
          *(undefined4 *)(puVar4 + -0xc) = 0x24586e;
          FUN_002cbcfc();
          puVar4 = puVar4 + -4;
        }
      }
      DAT_00ffa6cf = DAT_00ffa6cf + '\x01';
      DAT_00ffff67 = DAT_00ffff67 + -1;
      if (DAT_00ffff67 < '\0') {
        DAT_00ffff67 = '\x05';
      }
      *(undefined4 *)(puVar5 + -4) = 0x2458a8;
      wait_for_user_input();
      *(undefined4 *)(puVar5 + -4) = 0x2458ac;
      apply_scroll_offsets();
      *(undefined4 *)(puVar5 + -4) = 0x2458b0;
      FUN_0024a086();
      *(undefined4 *)(puVar5 + -4) = 0x2458b4;
      apply_scroll_offsets();
      *(undefined4 *)(puVar5 + -4) = 0x2458b8;
      FUN_00249c56();
      *(undefined4 *)(puVar5 + -4) = 0x2458bc;
      FUN_0024a766();
      *(undefined4 *)(puVar5 + -4) = 0x2458c0;
      FUN_0024a4f4();
      *(undefined4 *)(puVar5 + -4) = 0x2458c4;
      FUN_00248c3a();
      if (DAT_00ffa6cd != '\0') break;
      DAT_00fffc85 = 0;
      cVar7 = '\x01';
      *(undefined4 *)(puVar5 + -4) = 0x2458da;
      FUN_0024d6f4();
      DAT_00fffc85 = -cVar7;
      DAT_00fffc84 = 0;
      cVar7 = '\x01';
      *(undefined4 *)(puVar5 + -4) = 0x2458ec;
      FUN_0024d6ea();
      DAT_00fffc84 = -cVar7;
      DAT_00fffc83 = 0;
      cVar7 = '\x01';
      *(undefined4 *)(puVar5 + -4) = 0x2458fe;
      FUN_0024d6fe();
      DAT_00fffc83 = -cVar7;
      DAT_00fffc82 = 0;
      cVar7 = '\x01';
      *(undefined4 *)(puVar5 + -4) = 0x245910;
      FUN_0024d708();
      DAT_00fffc82 = -cVar7;
      *(undefined4 *)(puVar5 + -4) = 0x24591c;
      FUN_0024bce4();
      *(undefined4 *)(puVar5 + -4) = 0x245920;
      FUN_00247210();
      *(undefined4 *)(puVar5 + -4) = 0x245924;
      set_vram_tiles();
      *(undefined4 *)(puVar5 + -4) = 0x245928;
      update_controller_state();
      *(undefined4 *)(puVar5 + -4) = 0x24592c;
      initialize_input_state();
      *(undefined4 *)(puVar5 + -4) = 0x245930;
      apply_scroll_offsets();
      *(undefined4 *)(puVar5 + -4) = 0x245934;
      FUN_00247b2c();
      *(undefined4 *)(puVar5 + -4) = 0x245938;
      render_menu_text();
      *(undefined4 *)(puVar5 + -4) = 0x24593c;
      apply_palette_colors();
      *(undefined4 *)(puVar5 + -4) = 0x245940;
      FUN_00248e58();
      *(undefined4 *)(puVar5 + -4) = 0x245944;
      FUN_00248f7e();
      *(undefined4 *)(puVar5 + -4) = 0x245948;
      fade_out_sequence();
      *(undefined4 *)(puVar5 + -4) = 0x24594c;
      no_op();
      *(undefined4 *)(puVar5 + -4) = 0x245950;
      FUN_0024b23c();
      *(undefined4 *)(puVar5 + -4) = 0x245954;
      FUN_0024b2ec();
      *(undefined4 *)(puVar5 + -4) = 0x245958;
      apply_scroll_offsets();
      *(undefined4 *)(puVar5 + -4) = 0x24595c;
      update_menu_animation();
      *(undefined4 *)(puVar5 + -4) = 0x245960;
      FUN_00249168();
      *(undefined4 *)(puVar5 + -4) = 0x245964;
      FUN_0024847e();
      *(undefined4 *)(puVar5 + -4) = 0x24596a;
      FUN_0024c9c8();
      *(undefined4 *)(puVar5 + -4) = 0x245970;
      FUN_0024d5c0();
      *(undefined4 *)(puVar5 + -4) = 0x245974;
      FUN_0024801c();
      *(undefined4 *)(puVar5 + -4) = 0x245978;
      FUN_0024910a();
      *(undefined4 *)(puVar5 + -4) = 0x24597c;
      FUN_00248430();
      *(undefined4 *)(puVar5 + -4) = 0x245980;
      FUN_0024ab5c();
      *(undefined4 *)(puVar5 + -4) = 0x245984;
      FUN_00247fd2();
      *(undefined4 *)(puVar5 + -4) = 0x245988;
      update_menu_cursor();
      puVar4 = puVar5;
    }
    *(undefined4 *)(puVar5 + -4) = 0x24d6a2;
    FUN_0024acbc();
    *(undefined4 *)(puVar5 + -4) = 0x24d6a6;
    FUN_0024cc9a();
    *(undefined4 *)(puVar5 + -4) = 0x24d6aa;
    FUN_0024cb8c();
    *(undefined4 *)(puVar5 + -4) = 0x24d6ae;
    poll_vdp_ready();
    *(undefined4 *)(puVar5 + -4) = 0x24d6b2;
    FUN_0024d744();
    DAT_00ffff98 = '\0';
    *(undefined4 *)(puVar5 + -4) = 0x2457aa;
    FUN_00259dfe();
    *(undefined4 *)(puVar5 + -4) = 0x2457b0;
    FUN_0024d2c0();
    *(undefined4 *)(puVar5 + -4) = 0x2457b4;
    FUN_0024b3aa();
    *(undefined4 *)(puVar5 + -4) = 0x2457b8;
    FUN_0024b1ea();
    *(undefined4 *)(puVar5 + -4) = 0x2457bc;
    FUN_0024b20c();
  } while( true );
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void no_op(void) {
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void fade_out_sequence(void) {
  undefined4 uVar1;
  ushort in_D0w;
  short sVar2;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 extraout_A0_02;
  undefined4 extraout_A1;
  undefined2 extraout_A1w;
  undefined2 extraout_A1w_00;
  undefined2 extraout_A1w_01;
  uint uVar3;
  undefined4 unaff_A6;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  char cVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined2 uStack_4;
  undefined2 uVar10;
  ushort uVar11;
  
  uVar10 = (undefined2)unaff_A6;
  uStack_4 = (undefined2)((uint)unaff_A6 >> 0x10);
  if ((DAT_00fffd5a != '\0') || (in_D0w = _DAT_00ffa674 + 0x100, _DAT_00ffa684 <= in_D0w)) {
    if ((DAT_00fffd21 == '\0') ||
       ((DAT_00fffd21 != -1 && (DAT_00fffd21 = DAT_00fffd21 + -1, DAT_00fffd21 != '\0')))) {
      return;
    }
    DAT_00fffd21 = '\0';
    if (DAT_00fffd4b == '\0') {
      DAT_00fffd28 = 0;
      DAT_00ffa6d9 = 0;
      FUN_002cbd3e(in_D0w);
      uVar3 = CONCAT22(uStack_4,uVar10);
      if (DAT_00fffddf == '\0') {
        clamp_scroll_bounds();
        FUN_0024caca();
        FUN_0024acc8();
        FUN_0024acaa();
        FUN_0024cd32();
        FUN_0024cb2c();
        _DAT_00ffa6f2 = 0x1adfa0;
        DAT_00ffa709 = 0;
        _DAT_00ffa6dc = 0;
        _DAT_00ffa6f0 = 0x6000;
        FUN_0024cd18();
      }
      goto LAB_00245bd6;
    }
  }
  FUN_002cbd3e(in_D0w);
  uVar3 = CONCAT22(uStack_4,uVar10);
  FUN_0024cc9a();
  DAT_00ffa6d2 = 0;
  FUN_0024ae7a();
  FUN_0024acc8();
  FUN_0024cb8c();
  FUN_0024d2d2();
LAB_00245bd6:
  uVar11 = (ushort)uVar3;
  if (DAT_00ffa6c8 != '0') {
    if (DAT_00ffa6aa == '\0') {
      DAT_00ffa6c8 = DAT_00ffa6c8 + -1;
    }
    FUN_0024cc9a();
    FUN_0024ac98();
    FUN_0024cb8c();
    FUN_0024792e();
    load_level_tiles();
    FUN_0024b3aa();
    FUN_0024bda8();
    FUN_0024ac50();
    DAT_00ffa6cf = 0xff;
    DAT_00fffcf9 = 0xff;
    FUN_0024b4c8();
    DAT_00fffded = 0;
    DAT_00fffbf2 = 0;
    _DAT_00fffbf4 = 0x31303030;
    FUN_0024d8fc();
    FUN_00247940();
    FUN_0024bda8();
    DAT_00fffcff = 0xff;
    DAT_00fffd0b = 0;
    DAT_00fffd25 = 0;
    _DAT_00ffa6ec = 0;
    FUN_0024811e();
    FUN_00248330();
    DAT_00ffa6cf = 0xff;
    FUN_0024c9c8();
    FUN_00249178();
    FUN_0024847e();
    FUN_0024a766();
    FUN_0024910a();
    FUN_00248430();
    apply_scroll_offsets();
    uVar9 = FUN_0024801c();
    FUN_002cbd3e(uVar9,extraout_A0_00,extraout_A1w,uVar11);
    FUN_0024ac6a();
    FUN_0024ac2c();
    DAT_00fffd28 = 0x4b;
    return;
  }
  FUN_0024b638();
  if (DAT_00ffa6c8 != '0') {
    DAT_00fffded = 0;
    _DAT_00fffbf4 = 0x31303030;
    puVar5 = &stack0x00000004;
    do {
      _DAT_00c00004 = 0x8c81;
      *(undefined4 *)(puVar5 + -4) = 0x2457ca;
      FUN_0024ca00();
      *(undefined4 *)(puVar5 + -4) = 0x2457d0;
      FUN_0024ca12();
      *(undefined4 *)(puVar5 + -4) = 0x2457d6;
      FUN_0024d282();
      *(undefined4 *)(puVar5 + -4) = 0x2457dc;
      FUN_002513f8();
      *(undefined4 *)(puVar5 + -4) = 0x2457e0;
      FUN_0024acc8();
      if (DAT_00ffff98 == '\x01') {
        DAT_00ffa6cf = '\0';
        _DAT_00ffa6bc = 0xbc614e;
      }
      *(undefined4 *)(puVar5 + -4) = 0x245800;
      flush_vram_fifo();
      *(undefined4 *)(puVar5 + -4) = 0x245804;
      FUN_0024b47a();
      *(undefined4 *)(puVar5 + -4) = 0x245808;
      FUN_00247940();
      *(undefined4 *)(puVar5 + -4) = 0x24580c;
      FUN_0024811e();
      *(undefined4 *)(puVar5 + -4) = 0x245810;
      uVar9 = FUN_00248330();
      *(uint *)(puVar5 + -4) = uVar3;
      *(undefined4 *)(puVar5 + -8) = extraout_A1;
      *(undefined4 *)(puVar5 + -0xc) = extraout_A0;
      *(undefined8 *)(puVar5 + -0x14) = uVar9;
      *(undefined4 *)(puVar5 + -0x18) = 0x24581a;
      FUN_002cbd3e();
      uVar3 = *(uint *)(puVar5 + -4);
      *(undefined4 *)(puVar5 + -4) = 0x245822;
      FUN_0024ac6a();
      DAT_00ffa6cf = -1;
      *(undefined4 *)(puVar5 + -4) = 0x24582c;
      apply_scroll_offsets();
      *(undefined4 *)(puVar5 + -4) = 0x245832;
      FUN_0024bda8();
      *(undefined4 *)(puVar5 + -4) = 0x245836;
      FUN_00249178();
      *(undefined4 *)(puVar5 + -4) = 0x24583a;
      FUN_0024847e();
      *(undefined4 *)(puVar5 + -4) = 0x24583e;
      FUN_0024910a();
      *(undefined4 *)(puVar5 + -4) = 0x245842;
      FUN_00248430();
      *(undefined4 *)(puVar5 + -4) = 0x245846;
      FUN_0024801c();
      *(undefined4 *)(puVar5 + -4) = 0x24584a;
      FUN_0024ab5c();
      *(undefined4 *)(puVar5 + -4) = 0x24584e;
      FUN_0024ac2c();
      puVar4 = puVar5;
      while( true ) {
        *(undefined4 *)(puVar4 + -4) = 0x245854;
        FUN_00258b04();
        uVar6 = DAT_00fffdec == '\0';
        puVar5 = puVar4;
        if (!(bool)uVar6) {
          while( true ) {
            *(undefined4 *)(puVar4 + -4) = 0x245874;
            FUN_0024d476();
            do {
              *(undefined4 *)(puVar4 + -4) = 0x24587a;
              uVar1 = FUN_0024d98a();
            } while (!(bool)uVar6);
            puVar5 = puVar4 + -4;
            *(undefined4 *)(puVar4 + -4) = uVar1;
            *(undefined4 *)(puVar4 + -8) = 0x245884;
            FUN_002cbd12();
            if (DAT_00fffdec == '\0') break;
            *(uint *)(puVar4 + -8) = (uint)DAT_00fffdeb;
            uVar6 = DAT_00fffdeb == 0;
            *(undefined4 *)(puVar4 + -0xc) = 0x24586e;
            FUN_002cbcfc();
            puVar4 = puVar4 + -4;
          }
        }
        DAT_00ffa6cf = DAT_00ffa6cf + '\x01';
        DAT_00ffff67 = DAT_00ffff67 + -1;
        if (DAT_00ffff67 < '\0') {
          DAT_00ffff67 = '\x05';
        }
        *(undefined4 *)(puVar5 + -4) = 0x2458a8;
        wait_for_user_input();
        *(undefined4 *)(puVar5 + -4) = 0x2458ac;
        apply_scroll_offsets();
        *(undefined4 *)(puVar5 + -4) = 0x2458b0;
        FUN_0024a086();
        *(undefined4 *)(puVar5 + -4) = 0x2458b4;
        apply_scroll_offsets();
        *(undefined4 *)(puVar5 + -4) = 0x2458b8;
        FUN_00249c56();
        *(undefined4 *)(puVar5 + -4) = 0x2458bc;
        FUN_0024a766();
        *(undefined4 *)(puVar5 + -4) = 0x2458c0;
        FUN_0024a4f4();
        *(undefined4 *)(puVar5 + -4) = 0x2458c4;
        FUN_00248c3a();
        if (DAT_00ffa6cd != '\0') break;
        DAT_00fffc85 = 0;
        cVar7 = '\x01';
        *(undefined4 *)(puVar5 + -4) = 0x2458da;
        FUN_0024d6f4();
        DAT_00fffc85 = -cVar7;
        DAT_00fffc84 = 0;
        cVar7 = '\x01';
        *(undefined4 *)(puVar5 + -4) = 0x2458ec;
        FUN_0024d6ea();
        DAT_00fffc84 = -cVar7;
        DAT_00fffc83 = 0;
        cVar7 = '\x01';
        *(undefined4 *)(puVar5 + -4) = 0x2458fe;
        FUN_0024d6fe();
        DAT_00fffc83 = -cVar7;
        DAT_00fffc82 = 0;
        cVar7 = '\x01';
        *(undefined4 *)(puVar5 + -4) = 0x245910;
        FUN_0024d708();
        DAT_00fffc82 = -cVar7;
        *(undefined4 *)(puVar5 + -4) = 0x24591c;
        FUN_0024bce4();
        *(undefined4 *)(puVar5 + -4) = 0x245920;
        FUN_00247210();
        *(undefined4 *)(puVar5 + -4) = 0x245924;
        set_vram_tiles();
        *(undefined4 *)(puVar5 + -4) = 0x245928;
        update_controller_state();
        *(undefined4 *)(puVar5 + -4) = 0x24592c;
        initialize_input_state();
        *(undefined4 *)(puVar5 + -4) = 0x245930;
        apply_scroll_offsets();
        *(undefined4 *)(puVar5 + -4) = 0x245934;
        FUN_00247b2c();
        *(undefined4 *)(puVar5 + -4) = 0x245938;
        render_menu_text();
        *(undefined4 *)(puVar5 + -4) = 0x24593c;
        apply_palette_colors();
        *(undefined4 *)(puVar5 + -4) = 0x245940;
        FUN_00248e58();
        *(undefined4 *)(puVar5 + -4) = 0x245944;
        FUN_00248f7e();
        *(undefined4 *)(puVar5 + -4) = 0x245948;
        fade_out_sequence();
        *(undefined4 *)(puVar5 + -4) = 0x24594c;
        no_op();
        *(undefined4 *)(puVar5 + -4) = 0x245950;
        FUN_0024b23c();
        *(undefined4 *)(puVar5 + -4) = 0x245954;
        FUN_0024b2ec();
        *(undefined4 *)(puVar5 + -4) = 0x245958;
        apply_scroll_offsets();
        *(undefined4 *)(puVar5 + -4) = 0x24595c;
        update_menu_animation();
        *(undefined4 *)(puVar5 + -4) = 0x245960;
        FUN_00249168();
        *(undefined4 *)(puVar5 + -4) = 0x245964;
        FUN_0024847e();
        *(undefined4 *)(puVar5 + -4) = 0x24596a;
        FUN_0024c9c8();
        *(undefined4 *)(puVar5 + -4) = 0x245970;
        FUN_0024d5c0();
        *(undefined4 *)(puVar5 + -4) = 0x245974;
        FUN_0024801c();
        *(undefined4 *)(puVar5 + -4) = 0x245978;
        FUN_0024910a();
        *(undefined4 *)(puVar5 + -4) = 0x24597c;
        FUN_00248430();
        *(undefined4 *)(puVar5 + -4) = 0x245980;
        FUN_0024ab5c();
        *(undefined4 *)(puVar5 + -4) = 0x245984;
        FUN_00247fd2();
        *(undefined4 *)(puVar5 + -4) = 0x245988;
        update_menu_cursor();
        puVar4 = puVar5;
      }
      *(undefined4 *)(puVar5 + -4) = 0x24d6a2;
      FUN_0024acbc();
      *(undefined4 *)(puVar5 + -4) = 0x24d6a6;
      FUN_0024cc9a();
      *(undefined4 *)(puVar5 + -4) = 0x24d6aa;
      FUN_0024cb8c();
      *(undefined4 *)(puVar5 + -4) = 0x24d6ae;
      poll_vdp_ready();
      *(undefined4 *)(puVar5 + -4) = 0x24d6b2;
      FUN_0024d744();
      DAT_00ffff98 = '\0';
      *(undefined4 *)(puVar5 + -4) = 0x2457aa;
      FUN_00259dfe();
      *(undefined4 *)(puVar5 + -4) = 0x2457b0;
      FUN_0024d2c0();
      *(undefined4 *)(puVar5 + -4) = 0x2457b4;
      FUN_0024b3aa();
      *(undefined4 *)(puVar5 + -4) = 0x2457b8;
      FUN_0024b1ea();
      *(undefined4 *)(puVar5 + -4) = 0x2457bc;
      FUN_0024b20c();
    } while( true );
  }
  FUN_0024cba0();
  FUN_0024acbc();
  FUN_0024cb8c();
  _DAT_00c00004 = 0x8b00;
  _DAT_00fffdb8 = 0;
  _DAT_00fffdc0 = 0;
  FUN_0024c5f6();
  FUN_0024d7c8();
  DAT_00ffa692 = 0;
  DAT_00fffd28 = 0;
  FUN_0024ca00();
  FUN_0024d8dc();
  FUN_0024d8dc();
  uVar9 = FUN_0024cd32();
  if (DAT_00ffff9f != '\0') {
    FUN_002cbd12(0x11,uVar9,extraout_A0_01,extraout_A1w_00,uVar11);
    FUN_002cbcfc();
    uVar3 = (uint)uVar11;
  }
  FUN_0024caee();
  uVar9 = FUN_0024cb2c();
  if (DAT_00ffff9c != '\0') {
    FUN_002cbd12(0x5d,uVar9,extraout_A0_02,extraout_A1w_01,(short)uVar3);
    FUN_002cbcfc();
  }
  sVar2 = 0xef;
  while( true ) {
    FUN_0024cd3a();
    bVar8 = sVar2 == 0;
    FUN_0024d71c();
    if (((bVar8) || (FUN_0024d726(), bVar8)) || (FUN_0024d712(), bVar8)) break;
    FUN_0024d6e0();
    if ((bVar8) || (sVar2 = sVar2 + -1, sVar2 == -1)) break;
  }
  FUN_0024cc9a();
  FUN_002456d6();
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void clamp_scroll_bounds(void) {
  if (DAT_00ffa692 != '\r') {
    if (_DAT_00ffa67a < 0x30) {
      _DAT_00ffa67a = 0x30;
    }
    if (0x10f < _DAT_00ffa67a) {
      _DAT_00ffa67a = 0x110;
    }
    if (_DAT_00ffa67c < 0x140) {
      _DAT_00ffa67c = 0x140;
    }
    if (0x1bf < _DAT_00ffa67c) {
      _DAT_00ffa67c = 0x1c0;
    }
    apply_scroll_offsets();
    return;
  }
  _DAT_00ffa67a = 0xb0;
  _DAT_00ffa67c = 400;
  apply_scroll_offsets();
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void wait_for_user_input(void) {
  short sVar1;
  undefined2 *puVar2;
  undefined1 uVar3;
  bool bVar4;
  
  uVar3 = DAT_00ffa6a8 == '\0';
  if (!(bool)uVar3) {
    do {
      FUN_0024d6e0();
    } while ((bool)uVar3);
    return;
  }
  FUN_0024d6e0();
  if (!(bool)uVar3) {
    DAT_00fffde7 = 0;
    return;
  }
  if (DAT_00fffde7 == '\0') {
    FUN_002cbd22();
    DAT_00fffde3 = -1;
    DAT_00fffde7 = -1;
    _DAT_00c00004 = 0x20;
    sVar1 = 0x3f;
    puVar2 = (undefined2 *)&DAT_00ffb4c4;
    do {
      *puVar2 = _DAT_00c00000;
      sVar1 = sVar1 + -1;
      puVar2 = puVar2 + 1;
    } while (sVar1 != -1);
    FUN_0024cdc8();
    FUN_0024cdc8();
    FUN_0024bad6();
    DAT_00fffbe8 = 0xff;
    do {
      while( true ) {
        FUN_0024c9c8();
        FUN_0024b840();
        if ((DAT_00fffde3 == '\0') || (bVar4 = DAT_00fffd24 == '\0', !bVar4)) goto LAB_00245df4;
        FUN_0024d6e0();
        if (bVar4) break;
        DAT_00fffde7 = '\0';
      }
    } while (DAT_00fffde7 != '\0');
LAB_00245df4:
    DAT_00fffbe8 = 0;
    FUN_0024cb68();
    FUN_0024cb54();
    FUN_0024cb40();
    FUN_0024cb2c();
    DAT_00fffde3 = 0;
    DAT_00fffde7 = -1;
    FUN_002cbd30();
  }
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void render_menu_text(void) {
  undefined2 uVar1;
  undefined2 extraout_D1w;
  char cVar2;
  short sVar3;
  char *unaff_A5;
  bool bVar4;
  
  if (((DAT_00ffa6cf & 7) == 0) && (DAT_00fffd17 = DAT_00fffd17 + 6, 0x29 < DAT_00fffd17)) {
    DAT_00fffd17 = 0;
  }
  DAT_00fffd33 = '\0';
  if (DAT_00fffddf != '\0') {
    DAT_00fffd33 = 0;
    return;
  }
  if (DAT_00fffd4b != '\0') {
    DAT_00fffd33 = 0;
    return;
  }
  if (DAT_00fffd23 != '\0') {
    DAT_00fffd33 = 0;
    return;
  }
  if (DAT_00fffddd == '\0') {
    DAT_00fffd33 = 0;
    return;
  }
  if (_DAT_00ffa6e6 == 0) {
    DAT_00fffd33 = 0;
    return;
  }
  if (DAT_00fffdea == 5) {
    DAT_00fffd33 = 0;
    return;
  }
  if (((0x3b < DAT_00fffdea) || (DAT_00fffd11 == '@')) || (DAT_00fffd11 == 'r')) {
    DAT_00fffbec = 0;
    return;
  }
  if (((DAT_00fffd14 == '\0') && (DAT_00fffd11 != '_')) &&
     ((DAT_00fffd11 != '^' && ((DAT_00fffdf9 == '\0' || (DAT_00fffdea == 0xd)))))) {
    if (DAT_00fffcf8 != '\0') {
      DAT_00fffd33 = 0;
      return;
    }
    if (DAT_00fffcff == '\0') {
      DAT_00fffd33 = 0;
      return;
    }
    if (_DAT_00ffa6ec < 0) {
      DAT_00fffd33 = 0;
      return;
    }
  }
  bVar4 = _DAT_00fffbf4 == 0x30303030;
  if (bVar4) {
    DAT_00fffbec = 0;
    DAT_00fffd33 = 0;
    return;
  }
  FUN_0024d6c4();
  if (!bVar4) {
    DAT_00fffbec = 0;
    return;
  }
  if (DAT_00fffbf2 == '\0') {
    if (DAT_00fffbec != '\0') goto LAB_00245fdc;
  }
  else {
    if (DAT_00fffbec != '\0') {
      return;
    }
    bVar4 = false;
    FUN_0024adae();
    if (bVar4) {
      return;
    }
  }
  DAT_00fffd33 = -1;
  unaff_A5 = &DAT_00ffafe4;
  sVar3 = 6;
  cVar2 = ' ';
  do {
    if (*unaff_A5 != '\0') {
      FUN_0024ae7a();
    }
    uVar1 = FUN_0024adf6();
    *(undefined2 *)(unaff_A5 + 2) = uVar1;
    *(undefined2 *)(unaff_A5 + 4) = extraout_D1w;
    unaff_A5[0x47] = cVar2;
    unaff_A5 = unaff_A5 + 0x56;
    cVar2 = cVar2 + '\x18';
    sVar3 = sVar3 + -1;
  } while (sVar3 != -1);
  DAT_00fffbec = -1;
LAB_00245fdc:
  if (DAT_00fffded == '\0') {
    DAT_00fffbf2 = '\0';
    _DAT_00fffdc6 = _DAT_00fffdc6 + -1;
  }
  else {
    DAT_00fffded = DAT_00fffded + -1;
  }
  if (((DAT_00fffd14 == '\0') && (DAT_00fffd11 != '_')) && (DAT_00fffd11 != '^')) {
    if (DAT_00fffdf9 == '\0') {
      if (DAT_00fffc84 == '\0') {
        if (DAT_00fffc85 == '\0') {
          if (DAT_00fffdea != 0x1c) {
            _DAT_00ffa6f2 = 0x1ae7de;
            if (DAT_00fffbf2 != '\0') {
              _DAT_00ffa6f2 = 0x1ae7a8;
            }
            _DAT_00fffdd8 = 0x10;
            DAT_00ffa709 = 0;
            DAT_00fffdea = 0x1c;
            if (DAT_00fffd33 != '\0') {
              _DAT_00fffdda = 0x10;
            }
          }
        }
        else {
          cVar2 = DAT_00fffc82;
          if (DAT_00ffa6db != '\0') {
            cVar2 = DAT_00fffc83;
          }
          if (cVar2 == '\0') {
            if (DAT_00fffdea != 0x1d) {
              _DAT_00ffa6f2 = 0x1ae86e;
              if (DAT_00fffbf2 != '\0') {
                _DAT_00ffa6f2 = 0x1ae838;
              }
              _DAT_00fffdd8 = 0x20;
              DAT_00ffa709 = 0;
              DAT_00fffdea = 0x1d;
              if (DAT_00fffd33 != '\0') {
                _DAT_00fffdda = 0x20;
              }
            }
          }
          else if (DAT_00fffdea != 0x1e) {
            _DAT_00ffa6f2 = 0x1ae9de;
            if (DAT_00fffbf2 != '\0') {
              _DAT_00ffa6f2 = 0x1ae9b2;
            }
            _DAT_00fffdd8 = 0x18;
            DAT_00ffa709 = 0;
            DAT_00fffdea = 0x1e;
            if (DAT_00fffd33 != '\0') {
              _DAT_00fffdda = 0x18;
            }
          }
        }
      }
      else {
        cVar2 = DAT_00fffc82;
        if (DAT_00ffa6db != '\0') {
          cVar2 = DAT_00fffc83;
        }
        if (cVar2 == '\0') {
          if (DAT_00fffdea != 0x1b) {
            _DAT_00ffa6f2 = 0x1ae8fa;
            if (DAT_00fffbf2 != '\0') {
              _DAT_00ffa6f2 = 0x1ae8ce;
            }
            _DAT_00fffdd8 = 0;
            DAT_00ffa709 = 0;
            DAT_00fffdea = 0x1b;
            if (DAT_00fffd33 != '\0') {
              _DAT_00fffdda = 0;
            }
          }
        }
        else if (DAT_00fffdea != 0x1a) {
          _DAT_00ffa6f2 = 0x1ae97c;
          if (DAT_00fffbf2 != '\0') {
            _DAT_00ffa6f2 = 0x1ae950;
          }
          _DAT_00fffdd8 = 6;
          DAT_00ffa709 = 0;
          DAT_00fffdea = 0x1a;
          if (DAT_00fffd33 != '\0') {
            _DAT_00fffdda = 6;
          }
        }
      }
    }
    else {
      _DAT_00fffdd8 = 0x10;
      bVar4 = (DAT_00ffa6cf & 3) == 2;
      if ((bVar4) && (FUN_0024ad36(), bVar4)) {
        uVar1 = FUN_0024adf6();
        if (DAT_00ffa6db != '\0') {
          unaff_A5[9] = -1;
        }
        *(undefined2 *)(unaff_A5 + 2) = uVar1;
        unaff_A5[0x46] = '\x05';
      }
    }
  }
  else if (DAT_00fffc85 == '\0') {
    if (DAT_00fffc84 == '\0') {
      if (DAT_00fffdea != 0x1c) {
        _DAT_00ffa6f2 = 0x1aea48;
        if (DAT_00fffbf2 != '\0') {
          _DAT_00ffa6f2 = 0x1aea14;
        }
        _DAT_00fffdd8 = 0x10;
        DAT_00ffa709 = 0;
        DAT_00fffdea = 0x1c;
        if (DAT_00fffd33 != '\0') {
          _DAT_00fffdda = 0x10;
        }
      }
    }
    else if (_DAT_00fffc82 == 0) {
      if (DAT_00fffdea != 0x1b) {
        _DAT_00ffa6f2 = 0x1aeb1c;
        if (DAT_00fffbf2 != '\0') {
          _DAT_00ffa6f2 = 0x1aeaf0;
        }
        _DAT_00fffdd8 = 0;
        DAT_00ffa709 = 0;
        DAT_00fffdea = 0x1b;
        if (DAT_00fffd33 != '\0') {
          _DAT_00fffdda = 0;
        }
      }
    }
    else if (DAT_00fffdea != 0x1a) {
      _DAT_00ffa6f2 = 0x1aeb76;
      if (DAT_00fffbf2 != '\0') {
        _DAT_00ffa6f2 = 0x1aeb4e;
      }
      _DAT_00fffdd8 = 6;
      DAT_00ffa709 = 0;
      DAT_00fffdea = 0x1a;
      if (DAT_00fffd33 != '\0') {
        _DAT_00fffdda = 6;
      }
    }
  }
  else if (_DAT_00fffc82 == 0) {
    if (DAT_00fffdea != 0x1d) {
      _DAT_00ffa6f2 = 0x1aeab6;
      if (DAT_00fffbf2 != '\0') {
        _DAT_00ffa6f2 = 0x1aea82;
      }
      _DAT_00fffdd8 = 0x20;
      DAT_00ffa709 = 0;
      DAT_00fffdea = 0x1d;
      if (DAT_00fffd33 != '\0') {
        _DAT_00fffdda = 0x20;
      }
    }
  }
  else if (DAT_00fffdea != 0x1e) {
    _DAT_00ffa6f2 = 0x1aebe0;
    if (DAT_00fffbf2 != '\0') {
      _DAT_00ffa6f2 = 0x1aeba4;
    }
    _DAT_00fffdd8 = 0x18;
    DAT_00ffa709 = 0;
    DAT_00fffdea = 0x1e;
    if (DAT_00fffd33 != '\0') {
      _DAT_00fffdda = 0x18;
    }
  }
  load_title_graphics();
  DAT_00fffd0b = 0;
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void load_title_graphics(void) {
  uint uVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  char *pcVar9;
  
  sVar4 = _DAT_00ffa682 + -3;
  sVar6 = _DAT_00ffa684;
  if (DAT_00fffdf9 != '\0') {
    sVar6 = _DAT_00ffa684 + 0x20;
  }
  pcVar9 = &DAT_00ffafe4;
  sVar8 = 6;
  if (_DAT_00fffdda != _DAT_00fffdd8) {
    if (_DAT_00fffdda < _DAT_00fffdd8) {
      cVar3 = (char)_DAT_00fffdda + '\x01';
    }
    else {
      cVar3 = (char)_DAT_00fffdda + -1;
    }
    _DAT_00fffdda = CONCAT11((char)(_DAT_00fffdda >> 8),cVar3);
  }
  sVar5 = _DAT_00fffdda * 4;
  do {
    if (*pcVar9 == '{') {
      bVar2 = pcVar9[0x47];
      uVar1 = *(uint *)(&DAT_00006332 + sVar5);
      if ((int)uVar1 < 0) {
        sVar7 = -(short)((-uVar1 & 0xffff) * (uint)(ushort)bVar2 >> 0x10);
      }
      else {
        sVar7 = (short)((uVar1 & 0xffff) * (uint)(ushort)bVar2 >> 0x10);
      }
      if (DAT_00ffa6db != '\0') {
        sVar7 = -sVar7;
      }
      *(short *)(pcVar9 + 2) = sVar4 + sVar7;
      uVar1 = *(uint *)(&DAT_000063b6 + sVar5);
      if ((int)uVar1 < 0) {
        sVar7 = -(short)((-uVar1 & 0xffff) * (uint)(ushort)(byte)(bVar2 - 8) >> 0x10);
      }
      else {
        sVar7 = (short)((uVar1 & 0xffff) * (uint)(ushort)(byte)(bVar2 - 8) >> 0x10);
      }
      *(short *)(pcVar9 + 4) = sVar6 + -0x10 + sVar7;
    }
    pcVar9 = pcVar9 + 0x56;
    sVar8 = sVar8 + -1;
  } while (sVar8 != -1);
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void apply_palette_colors(void) {
  bool bVar1;
  
  if ((((((DAT_00fffd23 != '\0') || (DAT_00fffd0e != '\0')) || (DAT_00fffd4b != '\0')) ||
       ((DAT_00fffddd == '\0' || (_DAT_00ffa6e6 == 0)))) ||
      ((0x3b < DAT_00fffdea || ((DAT_00fffd11 == '@' || (DAT_00fffd11 == '_')))))) ||
     (bVar1 = DAT_00fffd11 == '^', bVar1)) {
    return;
  }
  FUN_0024d6b6();
  if (bVar1) {
    if (DAT_00fffbee == 0) {
      if (DAT_00fffc83 != '\0') {
        DAT_00ffa6db = 0xff;
      }
      if (DAT_00fffc82 != '\0') {
        DAT_00ffa6db = 0;
      }
      if (DAT_00fffd14 != '\0') {
        return;
      }
      DAT_00fffbee = 0x10;
      if ((DAT_00fffcff == '\0') || (_DAT_00ffa6ec != 0)) {
        DAT_00ffa709 = 0;
        _DAT_00ffa6f2 = 0x1aeeb2;
        return;
      }
      if (DAT_00fffc84 == '\0') {
        if (DAT_00fffd1e != '\0') {
          DAT_00fffd0b = 0;
          DAT_00ffa709 = 0;
          if (DAT_00fffdea != 0x35) {
            _DAT_00ffa6f2 = 0x1aed62;
            DAT_00fffdea = 0x35;
            return;
          }
          _DAT_00ffa6f2 = 0x1aed6c;
          return;
        }
        DAT_00fffd0b = 0;
        DAT_00ffa709 = 0;
        if (DAT_00fffdea != 0x35) {
          _DAT_00ffa6f2 = 0x1aecfa;
          DAT_00ffa709 = 0;
          DAT_00fffbee = 0x10;
          DAT_00fffd0b = 0;
          DAT_00fffdea = 0x35;
          return;
        }
        _DAT_00ffa6f2 = 0x1aed08;
        return;
      }
      DAT_00fffd0b = 0;
      DAT_00ffa709 = 0;
      if (_DAT_00fffc82 != 0) {
        DAT_00fffd0b = 0;
        DAT_00ffa709 = 0;
        if (DAT_00fffdea != 0x35) {
          _DAT_00ffa6f2 = 0x1aedc6;
          DAT_00fffdea = 0x35;
          return;
        }
        _DAT_00ffa6f2 = 0x1aedd4;
        return;
      }
      if (DAT_00fffdea != 0x35) {
        _DAT_00ffa6f2 = 0x1aee3e;
        DAT_00fffdea = 0x35;
        return;
      }
      _DAT_00ffa6f2 = 0x1aee4c;
      return;
    }
  }
  else if (DAT_00fffbee != 0) {
    DAT_00fffbee = DAT_00fffbee - 1;
    return;
  }
  if (1 < DAT_00fffbee) {
    DAT_00fffbee = DAT_00fffbee - 1;
  }
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void set_vram_tiles(void) {
  bool bVar1;
  
  if ((((DAT_00fffd23 == '\0') && (DAT_00ffff6b != '\0')) && (DAT_00fffd11 != '`')) &&
     (((DAT_00fffd11 != 'r' && (DAT_00fffd11 != '@')) && (DAT_00fffdea != 'E')))) {
    if (DAT_00fffd0e == '\0') {
      if (DAT_00fffcf8 == '\0') {
        bVar1 = DAT_00fffd14 == '\0';
        if (((!bVar1) || (bVar1 = DAT_00fffd0d == '\0', !bVar1)) ||
           (bVar1 = DAT_00fffcff == '\0', !bVar1)) {
          FUN_0024d6d2();
          if (!bVar1) {
            DAT_00fffcf9 = 0;
            return;
          }
          if (DAT_00fffcf9 == '\0') {
            DAT_00fffd1e = 0;
            DAT_00fffcf8 = 0xff;
            _DAT_00ffa6dc = 0;
            DAT_00fffbec = 0;
            DAT_00fffcfa = 0;
            DAT_00fffcf9 = '\x01';
            if (DAT_00fffd01 == 'n') {
              _DAT_00ffa6ea = 0x600;
              _DAT_00ffa6ec = -0x100;
            }
            else if (DAT_00fffd01 == 'o') {
              _DAT_00ffa6ea = 64000;
              _DAT_00ffa6ec = -0x100;
            }
            else {
              _DAT_00ffa6ec = -0x300;
              DAT_00fffcfc = 0xff;
            }
            if (DAT_00fffd13 == '\0') {
              if (DAT_00fffd4b != '\0') {
                _DAT_00ffa6f2 = (undefined *)0x1af564;
                DAT_00ffa709 = 0;
                return;
              }
              _DAT_00ffa6f2 = &DAT_001ae664;
              if (DAT_00fffd0b != '\0') {
                _DAT_00ffa6f2 = &DAT_001ae5da;
              }
            }
            else {
              _DAT_00ffa6ec = 1;
              DAT_00fffdea = '\x0e';
              _DAT_00ffa6f2 = &DAT_001ade26;
            }
            DAT_00fffcf8 = -1;
            DAT_00ffa709 = 0;
          }
        }
      }
      else if ((DAT_00fffcf9 != '\0') && (DAT_00fffcf9 != '\f')) {
        DAT_00fffcf9 = DAT_00fffcf9 + '\x01';
        bVar1 = DAT_00fffcf9 == '\0';
        FUN_0024d6d2();
        if (!bVar1) {
          DAT_00fffcf9 = 0;
          return;
        }
        _DAT_00ffa6ec = _DAT_00ffa6ec + -0x78;
        return;
      }
    }
    else {
      bVar1 = DAT_00fffcf9 == '\0';
      if (bVar1) {
        FUN_0024d6d2();
        if ((bVar1) && (DAT_00fffdea == '\n')) {
          _DAT_00ffa67c = _DAT_00ffa67c + -7;
          DAT_00fffcf9 = 0xff;
          return;
        }
      }
      else {
        FUN_0024d6d2();
        if (!bVar1) {
          DAT_00fffcf9 = 0;
          return;
        }
      }
    }
  }
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void initialize_input_state(void) {
  bool bVar1;
  
  if ((((DAT_00fffd23 == '\0') && (DAT_00fffd4b == '\0')) && (DAT_00fffddf == '\0')) &&
     ((DAT_00ffff6b != '\0' && (DAT_00fffd0e == '\0')))) {
    bVar1 = DAT_00ffa6ec == '\0';
    if (bVar1) {
      return;
    }
    if (_DAT_00ffa6ec < 0) {
      return;
    }
    FUN_0024d6d2();
    if (bVar1) {
      if (DAT_00fffcfc == '\0') {
        DAT_00fffcfc = -1;
        if (DAT_00fffdea != '\x02') {
          _DAT_00ffa6ea = 0;
          _DAT_00ffa6f2 = 0x1addf6;
          DAT_00ffa709 = 0;
        }
        DAT_00fffcfb = '\b';
        goto LAB_002468f2;
      }
    }
    else {
      DAT_00fffcfc = '\0';
    }
    if (DAT_00fffcfb != '\0') {
LAB_002468f2:
      DAT_00fffd25 = 0x34;
      DAT_00fffcfb = DAT_00fffcfb + -1;
      _DAT_00ffa6ec = 0x200;
      return;
    }
  }
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void update_controller_state(void) {
  if ((DAT_00fffd13 != '\0') && (-1 < _DAT_00ffa6ec)) {
    if (DAT_00fffcf8 == '\0') {
      if ((DAT_00ffa6cf & 1) == 0) {
        return;
      }
      _DAT_00ffa6ec = 0;
      if (DAT_00fffd23 == '\0') {
        if (DAT_00fffd25 != '\0') {
          play_title_music();
          DAT_00fffd25 = '\0';
        }
        if (DAT_00fffc83 == '\0') {
          if (DAT_00fffc82 == '\0') {
            if ((DAT_00fffc84 != '\0') &&
               (((DAT_00fffdea < 0x1a || (0x1e < DAT_00fffdea)) && (DAT_00fffdea != 0x20)))) {
              _DAT_00ffa6f2 = 0x1af39e;
              DAT_00ffa709 = 0;
              DAT_00fffdea = 0x20;
            }
          }
          else {
            DAT_00ffa6db = 0;
            if ((DAT_00fffdea < 0x1a) || (0x1e < DAT_00fffdea)) {
              _DAT_00fffdb6 = _DAT_00fffdb6 + 6;
              if (0x8f < _DAT_00fffdb6) {
                _DAT_00fffdb6 = 0;
              }
              play_title_music();
            }
          }
        }
        else {
          DAT_00ffa6db = 0xff;
          if ((DAT_00fffdea < 0x1a) || (0x1e < DAT_00fffdea)) {
            _DAT_00fffdb6 = _DAT_00fffdb6 + 6;
            if (0x8f < _DAT_00fffdb6) {
              _DAT_00fffdb6 = 0;
            }
            start_sound_driver();
          }
        }
      }
      update_audio_buffer();
      DAT_00fffd14 = 0xff;
      return;
    }
    if (DAT_00fffcfa != '\0') {
      play_title_music();
      _DAT_00ffa6ea = 0;
      _DAT_00ffa6ec = 0;
      _DAT_00fffcce = 0;
      DAT_00fffcf8 = 0;
      DAT_00fffd25 = 0;
      DAT_00fffd14 = 0xff;
      DAT_00fffd0b = 0;
      update_audio_buffer();
      return;
    }
  }
  DAT_00fffd14 = 0;
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void start_sound_driver(void) {
  if (DAT_00fffd23 == '\0') {
    _DAT_00ffa6f2 = *(undefined4 *)((int)&PTR_DAT_001adc0c + (int)_DAT_00fffdb6);
    DAT_00ffa709 = 0;
    if (0x13 < _DAT_00ffa67a) {
      _DAT_00ffa67a = _DAT_00ffa67a - *(short *)((int)&PTR_DAT_001adc10 + (int)_DAT_00fffdb6);
    }
  }
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void play_title_music(void) {
  if (DAT_00fffd23 == '\0') {
    _DAT_00ffa6f2 = *(undefined4 *)((int)&PTR_DAT_001adc0c + (int)_DAT_00fffdb6);
    DAT_00ffa709 = 0;
    if (_DAT_00ffa67a < 0x130) {
      _DAT_00ffa67a = *(short *)((int)&PTR_DAT_001adc10 + (int)_DAT_00fffdb6) + _DAT_00ffa67a;
    }
  }
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void update_audio_buffer(void) {
  _DAT_00ffa67c = (_DAT_00ffa684 & 0xfff0 | 4) - _DAT_00ffa678;
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void stop_audio_playback(void) {
  undefined4 unaff_A2;
  
  if (DAT_00fffddf != '\0') {
    return;
  }
  if (DAT_00fffdf9 != '\0') {
    if (_DAT_00ffa6ea == 0) goto LAB_00246ca8;
    if ((short)_DAT_00ffa6ea < 0) {
      if (0x93 < _DAT_00ffa682) {
        if ((ushort)-_DAT_00ffa6ea < 0x28) goto LAB_00246c76;
        _DAT_00ffa67a = (short)(char)(DAT_00ffa6ea + '\x01') + _DAT_00ffa67a;
      }
      _DAT_00ffa6ea = _DAT_00ffa6ea + 0x28;
    }
    else {
      if (0x27 < _DAT_00ffa6ea) {
        if (_DAT_00ffa682 < 0x27b) {
          _DAT_00ffa67a = (short)DAT_00ffa6ea + _DAT_00ffa67a;
        }
        _DAT_00ffa6ea = _DAT_00ffa6ea - 0x28;
        goto LAB_00246ca8;
      }
LAB_00246c76:
      _DAT_00ffa6ea = 0;
    }
LAB_00246ca8:
    if (_DAT_00ffa6ec == 0) {
      return;
    }
    if ((short)_DAT_00ffa6ec < 0) {
      if (0x11f < _DAT_00ffa67c) {
        if ((ushort)-_DAT_00ffa6ec < 0x3c) {
          _DAT_00ffa6ec = 0;
          return;
        }
        _DAT_00ffa67c = (short)(char)(DAT_00ffa6ec + '\x01') + _DAT_00ffa67c;
      }
      _DAT_00ffa6ec = _DAT_00ffa6ec + 0x3c;
    }
    else {
      if (_DAT_00ffa67c < 0x1c0) {
        if (_DAT_00ffa6ec < 0x3c) {
          _DAT_00ffa6ec = 0;
          return;
        }
        _DAT_00ffa67c = (short)DAT_00ffa6ec + _DAT_00ffa67c;
      }
      _DAT_00ffa6ec = _DAT_00ffa6ec - 0x3c;
    }
    return;
  }
  if (_DAT_00ffa6ea == 0) goto LAB_00246ba4;
  if ((short)_DAT_00ffa6ea < 0) {
    if ((_DAT_00fffd5a == 0) || (0x13 < _DAT_00ffa67a)) {
      if (((ushort)-_DAT_00ffa6ea < 0x28) || (DAT_00fffd03 != '\0')) goto LAB_00246b62;
      _DAT_00ffa67a = (short)(char)(DAT_00ffa6ea + '\x01') + _DAT_00ffa67a;
    }
    _DAT_00ffa6ea = _DAT_00ffa6ea + 0x28;
  }
  else {
    if ((0x27 < _DAT_00ffa6ea) && (DAT_00fffd06 == '\0')) {
      if ((_DAT_00fffd5a == 0) || (_DAT_00ffa67a < 0x130)) {
        _DAT_00ffa67a = (short)DAT_00ffa6ea + _DAT_00ffa67a;
      }
      _DAT_00ffa6ea = _DAT_00ffa6ea - 0x28;
      goto LAB_00246ba4;
    }
LAB_00246b62:
    _DAT_00ffa6ea = 0;
  }
LAB_00246ba4:
  if (_DAT_00ffa6ec != 0) {
    if ((short)_DAT_00ffa6ec < 0) {
      if (0x3b < (ushort)-_DAT_00ffa6ec) {
        if (DAT_00fffd09 == '\0') {
          _DAT_00ffa67c = (short)(char)(DAT_00ffa6ec + '\x01') + _DAT_00ffa67c;
          _DAT_00ffa6ec = _DAT_00ffa6ec + 0x3c;
          return;
        }
        if (DAT_00ffff9c != '\0') {
          FUN_002cbd12(0x1c,-_DAT_00ffa6ec);
          FUN_002cbcfc();
        }
        DAT_00fffcf8 = 0;
        FUN_00249772();
        DAT_00ffa709 = 0;
        _DAT_00ffa6f2 = unaff_A2;
      }
    }
    else if (0x3b < _DAT_00ffa6ec) {
      _DAT_00ffa67c = (short)DAT_00ffa6ec + _DAT_00ffa67c;
      _DAT_00ffa6ec = _DAT_00ffa6ec - 0x3c;
      return;
    }
    _DAT_00ffa6ec = 0;
    DAT_00fffcfa = 0xff;
  }
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void toggle_sprite_visibility(void) {
  ushort uVar1;
  short sVar2;
  
  uVar1 = _DAT_00ffa77a - 0x400;
  if ((short)uVar1 < 0) {
    uVar1 = uVar1 >> 7 | 0xfe00;
  }
  else {
    uVar1 = uVar1 >> 7;
  }
  sVar2 = _DAT_00fffe9c - uVar1;
  if (sVar2 < 0) {
    sVar2 = 0;
  }
  uVar1 = _DAT_00ffff3a - sVar2;
  if ((short)uVar1 < 0) {
    uVar1 = 0;
  }
  _DAT_00fffdb2 = (short)(((uint)uVar1 * 0xa0) / (uint)_DAT_00ffff3a);
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void vblank_wait_sync(void) {
  ushort uVar1;
  
  uVar1 = _DAT_00ffff3a - _DAT_00fffe9c;
  if ((short)uVar1 < 0) {
    uVar1 = 0;
  }
  _DAT_00fffdb0 = (short)(((uint)uVar1 * 0xa0) / (uint)_DAT_00ffff3a);
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
ushort FUN_00247210(void) {
  byte bVar2;
  ushort in_D0w;
  ushort uVar1;
  int extraout_A1;
  undefined *unaff_A2;
  undefined1 *unaff_A5;
  bool bVar3;
  
  if (DAT_00ff993d != '\0') {
    _DAT_00ffa6e6 = 0;
    DAT_00ffa6d2 = 0;
    bVar3 = true;
    uVar1 = FUN_0024d712();
    if (!bVar3) {
      if ((DAT_00fffc82 != '\0') && (_DAT_00ffa67a < 0x130)) {
        _DAT_00ffa67a = _DAT_00ffa67a + 0x10;
      }
      if ((DAT_00fffc83 != '\0') && (0xf < _DAT_00ffa67a)) {
        _DAT_00ffa67a = _DAT_00ffa67a - 0x10;
      }
      if ((DAT_00fffc84 != '\0') && (0xf < _DAT_00ffa67c)) {
        _DAT_00ffa67c = _DAT_00ffa67c - 0x10;
      }
      if ((DAT_00fffc85 != '\0') && (_DAT_00ffa67c < 0x1e0)) {
        _DAT_00ffa67c = _DAT_00ffa67c + 0x10;
      }
      return uVar1;
    }
    DAT_00ffa6d2 = 0x85;
    DAT_00ff993d = 0;
    DAT_00fffd23 = 0;
    uVar1 = FUN_0024b47a();
    if (DAT_00ffa692 != '\a') {
      return uVar1;
    }
    bVar3 = false;
    FUN_0024adba();
    if (!bVar3) {
      bVar3 = false;
      FUN_0024adba();
      if (!bVar3) goto LAB_00246d64;
    }
    *unaff_A5 = 0;
    FUN_0024ae7a();
LAB_00246d64:
    uVar1 = FUN_0024adf6();
    _DAT_00fffe06 = _DAT_00ffa682;
    _DAT_00ffa72c = _DAT_00ffa684;
    _DAT_00ffa72a = _DAT_00ffa682;
    return uVar1;
  }
  if ((DAT_00fffdea != 0x49) && (DAT_00fffd21 != '\0')) {
    return in_D0w;
  }
  if (DAT_00fffddf != '\0') {
    return in_D0w;
  }
  uVar1 = stop_audio_playback();
  if (DAT_00fffdf9 != '\0') {
    if (_DAT_00ffa682 < 0x94) {
      if (DAT_00fffdea != 0x10) {
        DAT_00fffdea = 0x10;
        _DAT_00ffa6f2 = &DAT_001af2e6;
        DAT_00ffa709 = 0;
        FUN_0024b000();
      }
      _DAT_00ffa6ea = 0x600;
      _DAT_00ffa67a = 0x94 - _DAT_00ffa676;
    }
    else if (DAT_00fffc83 != '\0') {
      DAT_00ffa6db = 0xff;
      _DAT_00ffa67a = _DAT_00ffa67a - 4;
      goto LAB_00246f76;
    }
    if (_DAT_00ffa682 < 0x27b) {
      if (DAT_00fffc82 != '\0') {
        DAT_00ffa6db = 0;
        _DAT_00ffa67a = _DAT_00ffa67a + 4;
      }
    }
    else {
      if (DAT_00fffdea != 0x10) {
        DAT_00fffdea = 0x10;
        _DAT_00ffa6f2 = &DAT_001af2e6;
        DAT_00ffa709 = 0;
        FUN_0024b000();
      }
      _DAT_00ffa6ea = 64000;
      _DAT_00ffa67a = 0x27a - _DAT_00ffa676;
    }
LAB_00246f76:
    if (DAT_00fffc84 == '\0') {
      if ((DAT_00fffc85 != '\0') && (_DAT_00ffa67c < 0x1c0)) {
        _DAT_00ffa67c = _DAT_00ffa67c + 4;
      }
    }
    else if (0x11f < _DAT_00ffa67c) {
      _DAT_00ffa67c = _DAT_00ffa67c - 4;
    }
    uVar1 = apply_scroll_offsets();
    return uVar1;
  }
  if (DAT_00fffd15 == '\0') {
    if ((((DAT_00fffd13 == '\0') && (DAT_00fffd23 == '\0')) && (DAT_00fffd24 == '\0')) &&
       (DAT_00fffdea < 0x32)) {
      if (((DAT_00fffdea == 8) && (DAT_00fffcff == '\0')) &&
         ((DAT_00fffd11 == '\0' && (9 < DAT_00fffd25)))) {
        uVar1 = FUN_00249772();
        _DAT_00ffa6f2 = unaff_A2;
      }
      if (DAT_00fffc82 == '\0') {
        if ((DAT_00fffc83 != '\0') && (DAT_00ffa6db = 0xff, DAT_00fffdea < 0x19)) {
          if (DAT_00fffd11 == '`') {
            DAT_00ffa6db = 0xff;
            return uVar1;
          }
          if (DAT_00fffd11 == '@') {
            DAT_00ffa6db = 0xff;
            return uVar1;
          }
          if (DAT_00fffd03 != '\0') {
            DAT_00ffa6db = 0xff;
            return uVar1;
          }
          if (_DAT_00ffa67a < 0x14) {
            DAT_00ffa6db = 0xff;
            return uVar1;
          }
          if (DAT_00fffd26 != '\0') {
            if (DAT_00fffd0b != -3) {
              DAT_00fffd0b = -3;
            }
            return uVar1;
          }
          if ((DAT_00fffcf8 == '\0') && (DAT_00fffcff != '\0')) {
            if (DAT_00fffd0b != -1) {
              FUN_0024bea0();
              DAT_00fffd0b = -1;
            }
            _DAT_00ffa67a = _DAT_00ffa67a - _DAT_00fffcce;
            return _DAT_00fffcce;
          }
          if ((DAT_00fffd0e != '\0') || (uVar1 = _DAT_00fffcce, _DAT_00fffcce != 3)) {
            uVar1 = 2;
          }
          _DAT_00ffa67a = _DAT_00ffa67a - uVar1;
          return uVar1;
        }
      }
      else {
        DAT_00ffa6db = 0;
        if (DAT_00fffdea < 0x19) {
          if (DAT_00fffd11 == '`') {
            DAT_00ffa6db = 0;
            return uVar1;
          }
          if (DAT_00fffd11 == '@') {
            DAT_00ffa6db = 0;
            return uVar1;
          }
          if (DAT_00fffd06 != '\0') {
            DAT_00ffa6db = 0;
            return uVar1;
          }
          if (0x12f < _DAT_00ffa67a) {
            DAT_00ffa6db = 0;
            return uVar1;
          }
          if (DAT_00fffd27 != '\0') {
            if (DAT_00fffd0b != '\x03') {
              DAT_00fffd0b = '\x03';
            }
            return uVar1;
          }
          if ((-1 < _DAT_00ffa6ec) && (DAT_00fffcff != '\0')) {
            if (DAT_00fffd0b != '\x01') {
              FUN_0024bea0();
              DAT_00fffd0b = '\x01';
            }
            _DAT_00ffa67a = _DAT_00fffcce + _DAT_00ffa67a;
            return _DAT_00fffcce;
          }
          if ((DAT_00fffd0e != '\0') || (uVar1 = _DAT_00fffcce, _DAT_00fffcce != 3)) {
            uVar1 = 2;
          }
          _DAT_00ffa67a = uVar1 + _DAT_00ffa67a;
          return uVar1;
        }
      }
      if ((0x21 < DAT_00fffdea) || (DAT_00fffdea < 0x19)) {
        if (DAT_00fffd0e == '\0') {
          if (DAT_00fffc85 != '\0') {
            if (DAT_00fffdea == 0x23) {
              return uVar1;
            }
            if (DAT_00fffcff == '\0') {
              return uVar1;
            }
            if (DAT_00fffbec != '\0') {
              return uVar1;
            }
            if (_DAT_00ffa6ec != 0) {
              return uVar1;
            }
            _DAT_00ffa6f2 = (undefined *)0x1ae6dc;
            DAT_00ffa709 = 0;
            if (DAT_00fffd4b != '\0') {
              _DAT_00ffa6f2 = (undefined *)0x1ae74a;
            }
            DAT_00fffd1e = 0xff;
            DAT_00fffd0b = 0;
            return uVar1;
          }
          if (DAT_00fffd1e != '\0') {
            DAT_00fffd1e = '\0';
          }
        }
        if (DAT_00fffd0e != '\0') {
          if (DAT_00fffc84 == '\0') {
            if (DAT_00fffdea != 9) {
              _DAT_00ffa6f2 = &DAT_001af026;
              DAT_00ffa709 = 0;
              DAT_00fffdea = 9;
              DAT_00fffd25 = 0;
              return uVar1;
            }
          }
          else if (DAT_00fffdea != 10) {
            _DAT_00ffa6f2 = &DAT_001af0ac;
            DAT_00ffa709 = 0;
            DAT_00fffdea = 10;
          }
          DAT_00fffd25 = 0;
          return uVar1;
        }
        if ((((DAT_00fffcff != '\0') && (DAT_00fffcf8 == '\0')) &&
            (_DAT_00fffcce = 0, DAT_00fffd0b != '\0')) && (DAT_00fffd1c == '\0')) {
          uVar1 = FUN_0024be54();
          DAT_00fffd0b = 0;
          return uVar1;
        }
      }
    }
    return uVar1;
  }
  toggle_sprite_visibility();
  uVar1 = vblank_wait_sync();
  if (DAT_00fffd24 != '\0') {
    if (DAT_00ffff60 != 0) {
      DAT_00ffff60 = DAT_00ffff60 - 1;
    }
    goto LAB_00247190;
  }
  if (_DAT_00fffc9e != 0) {
    return uVar1;
  }
  bVar3 = _DAT_00fffe90 == 0;
  if (((bVar3) && (FUN_0024d6b6(), bVar3)) && (DAT_00ffff61 != '\0')) {
    DAT_00ffff61 = DAT_00ffff61 + -1;
    bVar3 = DAT_00ffff61 == '\0';
    FUN_0024ad06();
    if (!bVar3) goto LAB_00247090;
    FUN_0024adf6();
    unaff_A5[0x46] = 3;
    _DAT_00fffe90 = 0xf0;
  }
  else {
LAB_00247090:
    if (_DAT_00fffe90 != 0) {
      _DAT_00fffe90 = _DAT_00fffe90 + -1;
    }
  }
  if ((DAT_00ffa6cf & 7) == 0) {
    DAT_00ffff5f = 0;
    bVar3 = false;
    bVar2 = FUN_0024d6c4();
    if (bVar3) {
      DAT_00ffff5f = 0xff;
      bVar2 = 0x10;
    }
    if (bVar2 != DAT_00ffff60) {
      if (bVar2 < DAT_00ffff60) {
        DAT_00ffff60 = DAT_00ffff60 - 1;
      }
      else {
        DAT_00ffff60 = DAT_00ffff60 + 1;
      }
    }
  }
  if (DAT_00fffc82 == '\0') {
    if (DAT_00fffc83 == '\0') {
      if ((short)_DAT_00fffe8e < 0) {
        bVar3 = 0xffda < _DAT_00fffe8e;
        _DAT_00fffe8e = _DAT_00fffe8e + 0x25;
        if (bVar3) {
          _DAT_00fffe8e = 0;
        }
      }
      else {
        bVar3 = _DAT_00fffe8e < 0x25;
        _DAT_00fffe8e = _DAT_00fffe8e - 0x25;
        if (bVar3) {
          _DAT_00fffe8e = 0;
        }
      }
    }
    else {
      _DAT_00fffe8e = _DAT_00fffe8e - 0x46;
      if (((short)_DAT_00fffe8e < 0) && (_DAT_00fffe8e < 0xfe80)) {
        _DAT_00fffe8e = 0xfe80;
      }
    }
  }
  else {
    _DAT_00fffe8e = _DAT_00fffe8e + 0x46;
    if ((-1 < (short)_DAT_00fffe8e) && (0x17f < _DAT_00fffe8e)) {
      _DAT_00fffe8e = 0x180;
    }
  }
  if (_DAT_00fffe8e != 0) {
    _DAT_00ffa722 = _DAT_00fffe8e + _DAT_00ffa722;
    if (_DAT_00ffa722 < 0x6400) {
      if (_DAT_00ffa722 < 0x1c00) {
        _DAT_00fffe8e = 0;
        _DAT_00ffa722 = 0x1c00;
      }
    }
    else {
      _DAT_00fffe8e = 0;
      _DAT_00ffa722 = 0x6400;
    }
  }
LAB_00247190:
  FUN_00258ba4();
  _DAT_00ffa67a = *(short *)(extraout_A1 + 2) - _DAT_00ffa676;
  _DAT_00ffa67c = *(short *)(extraout_A1 + 4) - _DAT_00ffa678;
  _DAT_00ffa6f2 =
       (undefined *)
       *(undefined4 *)
        (&DAT_0000645a +
        (short)((ushort)(byte)((DAT_00ffa6cf >> 2 & 3) + ((byte)(_DAT_00ffa722 >> 8) & 0x7c)) << 2))
  ;
  DAT_00ffa6db = 0;
  if ((_DAT_00ffa722 & 0x4000) == 0) {
    DAT_00ffa6db = 0xff;
  }
  return _DAT_00ffa722 & 0x4000;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void vdp_enable_vblank_interrupt(void) {
  undefined4 extraout_A0;
  undefined4 extraout_A1;
  undefined8 uVar1;
  
  uVar1 = FUN_002cbcbc(&DAT_0025fbc6,&DAT_00260e21,&DAT_00260e53,&DAT_0026ad68);
  FUN_002cbd3e(uVar1,extraout_A0,extraout_A1);
  FUN_0024da50();
  DAT_00ff993f = 0;
  DAT_00fffd31 = 0;
  DAT_00ff993e = 0;
  DAT_00ffff98 = 0;
  _DAT_00ffff8a = 0;
  DAT_00ffa692 = 0;
  DAT_00ffa6aa = 0;
  DAT_00ffa6a8 = 0;
  DAT_00ffa6ce = 0x32;
  if ((_DAT_00c00004 & 1) == 0) {
    DAT_00ffa6ce = 0x3c;
  }
  DAT_00fffde3 = 0;
  DAT_00fffde7 = 0;
  if (_DAT_00ff9936 != &PTR_PTR_0000294c) {
    _DAT_00ff9b4c = &PTR_FUN_00004da0;
    FUN_0024d7ba();
    DAT_00ffff9c = 1;
    DAT_00ffff9f = 1;
    DAT_00ffa6ab = 1;
    system_init_hardware();
    _DAT_00ff9936 = &PTR_PTR_0000294c;
  }
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void poll_vdp_ready(void) {
  FUN_002cbd3e();
  FUN_0024790a();
  FUN_0024b3aa();
  _DAT_00ffff82 = &DAT_00004e14;
  DAT_00ffa692 = 0;
  DAT_00fffbf1 = 1;
  DAT_00ffa6d0 = 3;
  if ((DAT_00ffa6ab != '\0') && (DAT_00ffa6d0 = 1, DAT_00ffa6ab != '\x01')) {
    DAT_00ffa6d0 = 0;
  }
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void flush_vram_fifo(void) {
  byte bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_A0;
  undefined4 extraout_A1;
  undefined8 uVar5;
  
  uVar5 = FUN_0024ca12();
  _DAT_00c00004 = CONCAT22(0x8b00,DAT_00c00004_2);
  FUN_002cbd3e(uVar5,extraout_A0,extraout_A1);
  FUN_0024791c();
  FUN_0024792e();
  FUN_0024ac98();
  load_level_tiles();
  uVar3 = (uint)DAT_00ffa692;
  iVar4 = uVar3 * 0x40;
  _DAT_00ffa676 = *(undefined2 *)(&DAT_0025bbc4 + iVar4);
  _DAT_00ffa686 = *(undefined2 *)(&DAT_0025bbc4 + iVar4);
  _DAT_00ffa67a = *(undefined2 *)(&DAT_0025bbc8 + iVar4);
  _DAT_00ffa67e = 0xb0;
  _DAT_00fffea4 = (ushort)((byte)(&DAT_0025bc02)[iVar4] + 3) >> 2;
  sVar2 = _DAT_00fffea4 * 4 - (ushort)(byte)(&DAT_0025bc02)[iVar4];
  _DAT_00fffe9e = _DAT_00fffea4;
  _DAT_00fffea0 = _DAT_00fffea4;
  _DAT_00fffea2 = _DAT_00fffea4;
  if (((sVar2 != 0) && (_DAT_00fffe9e = _DAT_00fffea4 - 1, sVar2 != 1)) &&
     (_DAT_00fffea0 = _DAT_00fffea4 - 1, sVar2 != 2)) {
    _DAT_00fffea2 = _DAT_00fffea4 - 1;
  }
  _DAT_00ffa678 = *(undefined2 *)(&DAT_0025bbc6 + iVar4);
  _DAT_00ffa688 = *(undefined2 *)(&DAT_0025bbc6 + iVar4);
  _DAT_00ffa67c = *(undefined2 *)(&DAT_0025bbca + iVar4);
  _DAT_00ffa680 = 400;
  FUN_00259c26();
  _DAT_00c00004 = 0x40000000;
  FUN_002599de();
  DAT_00fffde5 = (&DAT_0025bc00)[iVar4];
  if ((&PTR_DAT_0025bbe0)[uVar3 * 0x10] != (undefined *)0x0) {
    FUN_0024d8dc();
  }
  if ((&PTR_DAT_0025bbd4)[uVar3 * 0x10] != (undefined *)0x0) {
    FUN_00259c26();
  }

  _DAT_00fffdb8 = (&PTR_DAT_0025bbd8)[uVar3 * 0x10];
  _DAT_00fffdc0 = *(undefined2 *)(&DAT_0025bbdc + iVar4);
  _DAT_00ffa6b8 = (&PTR_DAT_0025bbe8)[uVar3 * 0x10];
  _DAT_00ffa6b4 = (&PTR_LAB_0025bbf0)[uVar3 * 0x10];
  _DAT_00ffa664 = (&PTR_LAB_0025bbf8)[uVar3 * 0x10];
  bVar1 = (&DAT_0025bc01)[iVar4];
  DAT_00fffddd = bVar1 & 1 ^ 1;
  DAT_00ffff68 = bVar1 & 2 ^ 2;
  DAT_00ffff69 = bVar1 & 4 ^ 4;
  DAT_00ffff6a = bVar1 & 8 ^ 8;
  DAT_00ffff6b = bVar1 & 0x20 ^ 0x20;
  DAT_00ffff6c = bVar1 & 0x10;
  DAT_00fffdde = (&DAT_0025bbdf)[iVar4];
  _DAT_00ffa66e = *(short *)(&DAT_0025bbf4 + iVar4);
  _DAT_00ffa66c = _DAT_00ffa66e * 2;
  _DAT_00ffa670 = _DAT_00ffa66e << 4;
  _DAT_00ffa672 = *(short *)(&DAT_0025bbf6 + iVar4);
  _DAT_00ffa674 = _DAT_00ffa672 << 4;
  _DAT_00ff9920 = _DAT_00ffa66c * _DAT_00ffa672;
  FUN_002478ec();
  DAT_00fffcf9 = 0xff;
  return;
}

void load_level_tiles(void) {
  FUN_0024adf6();
  FUN_0024be54();
  DAT_00fffd0b = 0;
  DAT_00ffff7a = 0xff;
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_002478ec(void) {
  short sVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0xff0000;
  sVar1 = 199;
  piVar2 = (int *)&DAT_00ffb548;
  do {
    *piVar2 = iVar3;
    iVar3 = _DAT_00ffa66c + iVar3;
    sVar1 = sVar1 + -1;
    piVar2 = piVar2 + 1;
  } while (sVar1 != -1);
  return;
}

void FUN_0024790a(void) {
  short sVar1;
  undefined1 *puVar2;
  
  sVar1 = 0x25;
  puVar2 = &DAT_00fffbdc;
  do {
    *puVar2 = 0;
    sVar1 = sVar1 + -1;
    puVar2 = puVar2 + 1;
  } while (sVar1 != -1);
  return;
}

void FUN_0024791c(void) {
  short sVar1;
  undefined1 *puVar2;
  
  sVar1 = 0x1e0;
  puVar2 = &DAT_00fffda0;
  do {
    *puVar2 = 0;
    sVar1 = sVar1 + -1;
    puVar2 = puVar2 + 1;
  } while (sVar1 != -1);
  return;
}

void FUN_0024792e(void) {
  short sVar1;
  undefined1 *puVar2;
  
  sVar1 = 0x19d;
  puVar2 = &DAT_00fffc02;
  do {
    *puVar2 = 0;
    sVar1 = sVar1 + -1;
    puVar2 = puVar2 + 1;
  } while (sVar1 != -1);
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_00247940(void) {
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  ushort uVar4;
  short *psVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  short *psVar8;
  int *piVar9;
  
  if ((((DAT_00fffd15 == '\0') && (DAT_00fffddf == '\0')) && (DAT_00ffa692 != '\x03')) &&
     (DAT_00fffdf9 == '\0')) {
    DAT_00ffff9e = DAT_00ffff9c;
    DAT_00ffff9c = 0;
    DAT_00fffde9 = 0xff;
    DAT_00fffde6 = 0;
    sVar3 = 0x16;
    do {
      if ((ushort)(_DAT_00fffcd0 + _DAT_00ffa686 + 0x10) < (ushort)(_DAT_00ffa670 - 0x161U)) {
        _DAT_00ffa67a = _DAT_00ffa67a + -0x10;
        _DAT_00ffa676 = _DAT_00ffa676 + 0x10;
        _DAT_00fffcd0 = _DAT_00fffcd0 + 0x10;
        DAT_00fffcf4 = 0xff;
        FUN_0024a766();
        FUN_00249168();
        FUN_0024847e();
        FUN_00247fd2();
        FUN_0024910a();
        FUN_00248430();
      }
      sVar3 = sVar3 + -1;
    } while (sVar3 != -1);

    sVar3 = 0x16;

    do {
      apply_scroll_offsets();
      DAT_00ffa6cf = DAT_00ffa6cf + '\x01';
      if (0x10 < _DAT_00ffa686) {
        _DAT_00ffa67a = _DAT_00ffa67a + 0x10;
        _DAT_00ffa676 = _DAT_00ffa676 + -0x10;
        _DAT_00fffcd0 = _DAT_00fffcd0 + -0x10;
        DAT_00fffcf3 = 0xff;
        FUN_0024a766();
        FUN_00249168();
        FUN_0024847e();
        FUN_00247fd2();
        FUN_0024910a();
        FUN_00248430();
      }
      sVar3 = sVar3 + -1;
    } while (sVar3 != -1);
    DAT_00ffff9c = DAT_00ffff9e;
    DAT_00fffde9 = 0;
    return;
  }
  puVar6 = &DAT_00ffb396 + (short)((_DAT_00ffa688 >> 3 & 0x1f) * 4);
  uVar1 = _DAT_00ffa686 >> 2 & 0x7e;
  psVar5 = (short *)((int)(short)(_DAT_00ffa686 >> 4) +
                    (int)(short)(_DAT_00ffa686 >> 4) +
                    *(int *)(&DAT_00ffb548 + (short)((_DAT_00ffa688 & 0xfff0) >> 2)));
  uVar2 = 0xf;
  uVar4 = uVar1;
  do {
    *(short **)((int)register0x0000003c + -4) = psVar5;
    *(ushort *)((int)register0x0000003c + -8) = uVar4;
    *(ushort *)((int)register0x0000003c + -0xc) = uVar2;
    *(ushort *)((int)register0x0000003c + -0x10) = uVar1;
    puVar7 = (undefined4 *)(puVar6 + 4);
    puVar6 = puVar6 + 8;
    sVar3 = 0x16;
    do {
      uVar2 = (ushort)((uint)*puVar7 >> 0x10);
      uVar1 = uVar4 + 2 & 0x7e;
      _DAT_00c00004 = CONCAT22(uVar2,uVar1 | (ushort)*puVar7) << 0x10 | (uint)uVar2;
      _DAT_00c00000 = *(undefined2 *)(_DAT_00ffa6b8 + 6 + (int)*psVar5);
      uVar4 = uVar1 + 2 & 0x7e;
      sVar3 = sVar3 + -1;
      psVar5 = psVar5 + 1;
    } while (sVar3 != -1);
    uVar1 = *(ushort *)((int)register0x0000003c + -0x10);
    psVar8 = (short *)((int)register0x0000003c + -0xe);
    uVar4 = *(ushort *)((int)register0x0000003c + -0xc);
    piVar9 = (int *)((int)register0x0000003c + -10);
    register0x0000003c = (BADSPACEBASE *)((int)register0x0000003c + -6);
    psVar5 = (short *)((int)_DAT_00ffa66c + *piVar9);
    uVar2 = *psVar8 - 1;
  } while (uVar2 != 0xffff);
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_00247a56(void) {
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  ushort uVar4;
  short *psVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  short *psVar8;
  int *piVar9;
  
  puVar6 = &DAT_00ffb396 + (short)((_DAT_00ffa688 >> 3 & 0x1f) * 4);
  uVar1 = _DAT_00ffa686 >> 2 & 0x7e;
  psVar5 = (short *)((int)(short)(_DAT_00ffa686 >> 4) +
                    (int)(short)(_DAT_00ffa686 >> 4) +
                    *(int *)(&DAT_00ffb548 + (short)((_DAT_00ffa688 & 0xfff0) >> 2)));
  uVar2 = 0xf;
  uVar4 = uVar1;
  do {
    *(short **)((int)register0x0000003c + -4) = psVar5;
    *(ushort *)((int)register0x0000003c + -8) = uVar4;
    *(ushort *)((int)register0x0000003c + -0xc) = uVar2;
    *(ushort *)((int)register0x0000003c + -0x10) = uVar1;
    puVar7 = (undefined4 *)(puVar6 + 4);
    puVar6 = puVar6 + 8;
    sVar3 = 0x16;
    do {
      uVar2 = (ushort)((uint)*puVar7 >> 0x10);
      uVar1 = uVar4 + 2 & 0x7e;
      _DAT_00c00004 = CONCAT22(uVar2,uVar1 | (ushort)*puVar7) << 0x10 | (uint)uVar2;
      _DAT_00c00000 = *(undefined2 *)(_DAT_00ffa6b8 + 6 + (int)*psVar5);
      uVar4 = uVar1 + 2 & 0x7e;
      sVar3 = sVar3 + -1;
      psVar5 = psVar5 + 1;
    } while (sVar3 != -1);
    uVar1 = *(ushort *)((int)register0x0000003c + -0x10);
    psVar8 = (short *)((int)register0x0000003c + -0xe);
    uVar4 = *(ushort *)((int)register0x0000003c + -0xc);
    piVar9 = (int *)((int)register0x0000003c + -10);
    register0x0000003c = (BADSPACEBASE *)((int)register0x0000003c + -6);
    psVar5 = (short *)((int)_DAT_00ffa66c + *piVar9);
    uVar2 = *psVar8 - 1;
  } while (uVar2 != 0xffff);
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
ushort FUN_00247b2c(void) {
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  
  _DAT_00fffd74 = _DAT_00ffa678;
  if (DAT_00fffde6 != 0) {
    DAT_00fffde6 = DAT_00fffde6 - 1;
    return (ushort)DAT_00fffde6;
  }
  if (DAT_00fffddf == '\0') {
    if (DAT_00ffa692 != '\v') {
      if ((DAT_00fffd5b == '\0') && (DAT_00fffd5a == '\0')) {
        uVar1 = _DAT_00ffa67a - _DAT_00ffa67e;
      }
      else {
        sVar3 = _DAT_00fffd56 - _DAT_00ffa676;
        if (_DAT_00fffd56 < _DAT_00ffa676) {
          if (0x11f < _DAT_00ffa67a) {
            sVar3 = 0;
          }
        }
        else if (_DAT_00ffa67a < 0x20) {
          sVar3 = 0;
        }
        uVar1 = sVar3 >> 2;
        if (0 < sVar3) {
          uVar1 = uVar1 | 1;
        }
      }
      if (uVar1 != 0) {
        if ((short)uVar1 < 0) {
          uVar2 = (ushort)*(byte *)((int)&PTR_PTR_00003af6 + (int)(short)-uVar1);
          if ((*(byte *)((int)&PTR_PTR_00003af6 + (int)(short)-uVar1) != 0) &&
             (0x10 < _DAT_00ffa686)) {
            _DAT_00ffa67a = uVar2 + _DAT_00ffa67a;
            _DAT_00ffa676 = _DAT_00ffa676 - uVar2;
            _DAT_00fffcd0 = _DAT_00fffcd0 - uVar2;
            DAT_00fffcf3 = 0xff;
          }
        }
        else {
          uVar2 = (ushort)*(byte *)((int)&PTR_PTR_00003af6 + (int)(short)uVar1);
          if ((*(byte *)((int)&PTR_PTR_00003af6 + (int)(short)uVar1) != 0) &&
             ((ushort)(uVar2 + _DAT_00fffcd0 + _DAT_00ffa686) < (ushort)(_DAT_00ffa670 - 0x161U))) {
            _DAT_00ffa67a = _DAT_00ffa67a - uVar2;
            _DAT_00ffa676 = uVar2 + _DAT_00ffa676;
            _DAT_00fffcd0 = uVar2 + _DAT_00fffcd0;
            DAT_00fffcf4 = 0xff;
          }
        }
      }
      if ((DAT_00fffd5c == '\0') && (DAT_00fffd5a == '\0')) {
        uVar1 = _DAT_00ffa67c - _DAT_00ffa680;
      }
      else {
        uVar1 = (short)(_DAT_00fffd58 - _DAT_00ffa678) >> 2;
        if (0 < (short)(_DAT_00fffd58 - _DAT_00ffa678)) {
          uVar1 = uVar1 | 1;
        }
      }
      if ((short)uVar1 < 0) {
        uVar2 = (ushort)*(byte *)((int)&PTR_PTR_00003c36 + (int)(short)-uVar1);
        uVar1 = _DAT_00ffa688;
        if (0x10 < _DAT_00ffa688) {
          uVar1 = uVar2 + _DAT_00fffcd2 + _DAT_00ffa688;
          _DAT_00ffa67c = uVar2 + _DAT_00ffa67c;
          _DAT_00ffa678 = _DAT_00ffa678 - uVar2;
          _DAT_00fffcd2 = _DAT_00fffcd2 - uVar2;
          DAT_00fffcf5 = 0xff;
        }
      }
      else if (uVar1 != 0) {
        uVar2 = (ushort)*(byte *)((int)&PTR_PTR_00003c36 + (int)(short)uVar1);
        uVar1 = uVar2 + _DAT_00fffcd2 + _DAT_00ffa688;
        if (uVar1 < (ushort)(_DAT_00ffa674 - 0xf1U)) {
          _DAT_00ffa67c = _DAT_00ffa67c - uVar2;
          _DAT_00ffa678 = uVar2 + _DAT_00ffa678;
          _DAT_00fffcd2 = uVar2 + _DAT_00fffcd2;
          DAT_00fffcf6 = 0xff;
        }
      }
      return uVar1;
    }
    sVar3 = _DAT_00ffa67a - _DAT_00ffa67e;
    if (sVar3 != 0) {
      if (_DAT_00ffa67a < _DAT_00ffa67e) {
        if (0x10 < _DAT_00ffa686) {
          _DAT_00ffa67a = _DAT_00ffa67a - sVar3;
          _DAT_00ffa676 = _DAT_00ffa676 + sVar3;
          _DAT_00fffcd0 = _DAT_00fffcd0 + sVar3;
          DAT_00fffcf3 = 0xff;
        }
      }
      else if ((ushort)(sVar3 + _DAT_00fffcd0 + _DAT_00ffa686) < (ushort)(_DAT_00ffa670 - 0x161U)) {
        _DAT_00ffa67a = _DAT_00ffa67a - sVar3;
        _DAT_00ffa676 = sVar3 + _DAT_00ffa676;
        _DAT_00fffcd0 = sVar3 + _DAT_00fffcd0;
        DAT_00fffcf4 = 0xff;
      }
    }
    uVar1 = _DAT_00fffcd2 + _DAT_00ffa688 + 0xe;
    if (uVar1 < (ushort)(_DAT_00ffa674 - 0xf1U)) {
      _DAT_00ffa678 = _DAT_00ffa678 + 0xe;
      _DAT_00fffcd2 = _DAT_00fffcd2 + 0xe;
      DAT_00fffcf6 = 0xff;
    }
    return uVar1;
  }
  uVar1 = (ushort)DAT_00fffde6;
  if (DAT_00fffd5a == '\0') {
    uVar1 = _DAT_00ffa67a - _DAT_00ffa67e;
    if (uVar1 != 0) {
      if (_DAT_00ffa67a < _DAT_00ffa67e) {
        uVar1 = -uVar1;
        if (0xf < uVar1) {
          uVar1 = 0x10;
        }
        if (0x10 < _DAT_00ffa686) {
          _DAT_00ffa67a = uVar1 + _DAT_00ffa67a;
          _DAT_00ffa676 = _DAT_00ffa676 - uVar1;
          _DAT_00fffcd0 = _DAT_00fffcd0 - uVar1;
          DAT_00fffcf3 = 0xff;
        }
      }
      else {
        if (0xf < uVar1) {
          uVar1 = 0x10;
        }
        if ((ushort)(uVar1 + _DAT_00fffcd0 + _DAT_00ffa686) < (ushort)(_DAT_00ffa670 - 0x161U)) {
          _DAT_00ffa67a = _DAT_00ffa67a - uVar1;
          _DAT_00ffa676 = uVar1 + _DAT_00ffa676;
          _DAT_00fffcd0 = uVar1 + _DAT_00fffcd0;
          DAT_00fffcf4 = 0xff;
        }
      }
    }
    uVar2 = _DAT_00ffa67c - _DAT_00ffa680;
    if ((short)uVar2 < 0) {
      uVar1 = _DAT_00ffa688;
      if (0x10 < _DAT_00ffa688) {
        uVar1 = -uVar2 + _DAT_00fffcd2 + _DAT_00ffa688;
        _DAT_00ffa67c = -uVar2 + _DAT_00ffa67c;
        _DAT_00ffa678 = _DAT_00ffa678 + uVar2;
        _DAT_00fffcd2 = _DAT_00fffcd2 + uVar2;
        DAT_00fffcf5 = 0xff;
      }
    }
    else {
      uVar1 = uVar2;
      if ((uVar2 != 0) &&
         (uVar1 = uVar2 + _DAT_00fffcd2 + _DAT_00ffa688, uVar1 < (ushort)(_DAT_00ffa674 - 0xf1U))) {
        _DAT_00ffa67c = _DAT_00ffa67c - uVar2;
        _DAT_00ffa678 = uVar2 + _DAT_00ffa678;
        _DAT_00fffcd2 = uVar2 + _DAT_00fffcd2;
        DAT_00fffcf6 = 0xff;
      }
    }
  }
  return uVar1;
}

void FUN_00247fd2(void) {
  if (DAT_00fffcf3 != '\0') {
    FUN_00248024();
    DAT_00fffcf3 = '\0';
  }
  if (DAT_00fffcf4 != '\0') {
    FUN_0024811e();
    DAT_00fffcf4 = '\0';
  }
  if (DAT_00fffcf5 != '\0') {
    FUN_00248330();
    DAT_00fffcf5 = '\0';
  }
  if (DAT_00fffcf6 != '\0') {
    FUN_00248228();
    DAT_00fffcf6 = '\0';
  }
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024801c(void) {
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_00248024(void) {
  ushort uVar1;
  short sVar2;
  short *psVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  
  if ((ushort)(_DAT_00fffcd0 + 0x100U) < 0x110) {
    if (0xf0 < (ushort)(_DAT_00fffcd0 + 0x100U)) {
      return;
    }
    _DAT_00fffcd0 = _DAT_00fffcd0 + 0x10;
    _DAT_00ffa686 = _DAT_00ffa686 - 0x10;
  }
  else {
    _DAT_00fffcd0 = _DAT_00fffcd0 + -0x10;
    _DAT_00ffa686 = _DAT_00ffa686 + 0x10;
  }
  puVar4 = &DAT_00ffb396 + (short)((_DAT_00ffa688 >> 3 & 0x1f) * 4);
  uVar1 = _DAT_00ffa686 >> 4;
  if (uVar1 != 0) {
    _DAT_00ffa694 =
         (short *)((int)(short)uVar1 +
                  (int)(short)uVar1 +
                  *(int *)(&DAT_00ffb548 + (short)((_DAT_00ffa688 & 0xfff0) >> 2)));
    sVar2 = 0xf;
    psVar3 = _DAT_00ffa694;
    do {
      puVar5 = (undefined4 *)(puVar4 + 4);
      puVar4 = puVar4 + 8;
      uVar1 = (ushort)((uint)*puVar5 >> 0x10);
      _DAT_00c00004 =
           CONCAT22(uVar1,(_DAT_00ffa686 >> 2 & 0x7e) + 2 & 0x7e | (ushort)*puVar5) << 0x10 |
           (uint)uVar1;
      _DAT_00c00000 = *(undefined2 *)(_DAT_00ffa6b8 + 6 + (int)*psVar3);
      psVar3 = (short *)((int)_DAT_00ffa66c + (int)psVar3);
      sVar2 = sVar2 + -1;
    } while (sVar2 != -1);
    FUN_0024af04();
  }
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024811e(void) {
  ushort uVar1;
  short sVar2;
  short *psVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  
  if ((ushort)(_DAT_00fffcd0 + 0x100U) < 0x110) {
    if (0xf0 < (ushort)(_DAT_00fffcd0 + 0x100U)) {
      return;
    }
    _DAT_00fffcd0 = _DAT_00fffcd0 + 0x10;
    _DAT_00ffa686 = _DAT_00ffa686 - 0x10;
  }
  else {
    _DAT_00fffcd0 = _DAT_00fffcd0 + -0x10;
    _DAT_00ffa686 = _DAT_00ffa686 + 0x10;
  }
  puVar4 = &DAT_00ffb396 + (short)((_DAT_00ffa688 >> 3 & 0x1f) * 4);
  uVar1 = _DAT_00ffa686 >> 4;
  if (uVar1 < (ushort)(_DAT_00ffa66e - 0x16U)) {
    _DAT_00ffa694 =
         (short *)((int)(short)uVar1 +
                  (int)(short)uVar1 +
                  *(int *)(&DAT_00ffb548 + (short)((_DAT_00ffa688 & 0xfff0) >> 2)) + 0x2c);
    sVar2 = 0xf;
    psVar3 = _DAT_00ffa694;
    do {
      puVar5 = (undefined4 *)(puVar4 + 4);
      puVar4 = puVar4 + 8;
      uVar1 = (ushort)((uint)*puVar5 >> 0x10);
      _DAT_00c00004 =
           CONCAT22(uVar1,((_DAT_00ffa686 >> 2) + 0x58 & 0x7e) + 2 & 0x7e | (ushort)*puVar5) << 0x10
           | (uint)uVar1;
      _DAT_00c00000 = *(undefined2 *)(_DAT_00ffa6b8 + 6 + (int)*psVar3);
      psVar3 = (short *)((int)_DAT_00ffa66c + (int)psVar3);
      sVar2 = sVar2 + -1;
    } while (sVar2 != -1);
    FUN_0024af0e();
  }
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_00248228(void) {
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  short *psVar4;
  
  if ((ushort)(_DAT_00fffcd2 + 0x100U) < 0x110) {
    if (0xf0 < (ushort)(_DAT_00fffcd2 + 0x100U)) {
      return;
    }
    _DAT_00fffcd2 = _DAT_00fffcd2 + 0x10;
    _DAT_00ffa688 = _DAT_00ffa688 - 0x10;
  }
  else {
    _DAT_00fffcd2 = _DAT_00fffcd2 + -0x10;
    _DAT_00ffa688 = _DAT_00ffa688 + 0x10;
  }
  uVar1 = _DAT_00ffa686 >> 2;
  _DAT_00ffa694 =
       (short *)((int)(short)(_DAT_00ffa686 >> 4) +
                (int)(short)(_DAT_00ffa686 >> 4) +
                *(int *)(&DAT_00ffb548 + (short)((_DAT_00ffa688 + 0xf0 & 0xfff0) >> 2)));
  sVar3 = 0x16;
  psVar4 = _DAT_00ffa694;
  do {
    uVar2 = (ushort)((uint)*(undefined4 *)
                            (&DAT_00ffb39a + (short)(((_DAT_00ffa688 >> 3) + 0x1e & 0x1f) * 4)) >>
                    0x10);
    uVar1 = (uVar1 & 0x7e) + 2 & 0x7e;
    _DAT_00c00004 =
         CONCAT22(uVar2,uVar1 | (ushort)*(undefined4 *)
                                         (&DAT_00ffb39a +
                                         (short)(((_DAT_00ffa688 >> 3) + 0x1e & 0x1f) * 4))) << 0x10
         | (uint)uVar2;
    _DAT_00c00000 = *(undefined2 *)(_DAT_00ffa6b8 + 6 + (int)*psVar4);
    uVar1 = uVar1 + 2;
    sVar3 = sVar3 + -1;
    psVar4 = psVar4 + 1;
  } while (sVar3 != -1);
  FUN_0024af90();
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_00248330(void) {
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  short *psVar4;
  
  if ((ushort)(_DAT_00fffcd2 + 0x100U) < 0x110) {
    if (0xf0 < (ushort)(_DAT_00fffcd2 + 0x100U)) {
      return;
    }
    _DAT_00fffcd2 = _DAT_00fffcd2 + 0x10;
    _DAT_00ffa688 = _DAT_00ffa688 - 0x10;
  }
  else {
    _DAT_00fffcd2 = _DAT_00fffcd2 + -0x10;
    _DAT_00ffa688 = _DAT_00ffa688 + 0x10;
  }
  uVar1 = _DAT_00ffa686 >> 2;
  _DAT_00ffa694 =
       (short *)((int)(short)(_DAT_00ffa686 >> 4) +
                (int)(short)(_DAT_00ffa686 >> 4) +
                *(int *)(&DAT_00ffb548 + (short)((_DAT_00ffa688 & 0xfff0) >> 2)));
  sVar3 = 0x16;
  psVar4 = _DAT_00ffa694;
  do {
    uVar2 = (ushort)((uint)*(undefined4 *)(&DAT_00ffb39a + (short)((_DAT_00ffa688 >> 3 & 0x1f) * 4))
                    >> 0x10);
    uVar1 = (uVar1 & 0x7e) + 2 & 0x7e;
    _DAT_00c00004 =
         CONCAT22(uVar2,uVar1 | (ushort)*(undefined4 *)
                                         (&DAT_00ffb39a + (short)((_DAT_00ffa688 >> 3 & 0x1f) * 4)))
         << 0x10 | (uint)uVar2;
    _DAT_00c00000 = *(undefined2 *)(_DAT_00ffa6b8 + 6 + (int)*psVar4);
    uVar1 = uVar1 + 2;
    sVar3 = sVar3 + -1;
    psVar4 = psVar4 + 1;
  } while (sVar3 != -1);
  FUN_0024af86();
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_00248430(void) {
  short sVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  
  _DAT_00c00004 = DAT_000035d8;
  puVar2 = &DAT_00ff9b52;
  if (_DAT_00fffbe0 != 0) {
    sVar1 = _DAT_00fffbe0;
    if (0x7f < (byte)_DAT_00fffbe0) {
      return;
    }
    do {
      puVar3 = (undefined4 *)(puVar2 + 4);
      puVar2 = puVar2 + 8;
      _DAT_00c00000 = *puVar3;
      sVar1 = sVar1 + -1;
    } while (sVar1 != -1);
  }
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024845e(void) {
  short *psVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  short sVar7;
  ushort uVar8;
  short sVar9;
  ushort uVar10;
  uint uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort *puVar14;
  ushort *puVar15;
  ushort *puVar16;
  char *pcVar17;
  
  sVar5 = _DAT_00ffa678;
  sVar4 = _DAT_00ffa676;
  puVar15 = (ushort *)&DAT_00ff9b52;
  uVar8 = 0x901;
  pcVar17 = &DAT_00ffa6d2;
  sVar7 = 0x25;
  if ((((DAT_00fffddf == '\0') && (_DAT_00fffc9e == 0)) && (DAT_00fffdea != '>')) &&
     ((DAT_00fffd28 & 1) != 0)) goto LAB_00248aba;
  do {
    if (*pcVar17 != '\0') {
      bVar2 = pcVar17[0x46];
      if ((bVar2 & 0xf) != 0) {
        if ((bVar2 & 1) != 0) {
          *(short *)(pcVar17 + 2) = _DAT_00ffa6d4;
        }
        if ((bVar2 & 2) != 0) {
          *(short *)(pcVar17 + 4) = _DAT_00ffa6d6;
        }
        iVar6 = _DAT_00ffa6e6;
        if ((bVar2 & 4) != 0) {
          if (_DAT_00ffa6e6 == 0) goto LAB_00248aba;
          *(ushort *)(pcVar17 + 4) = _DAT_00ffa6d6 + (*(byte *)(_DAT_00ffa6e6 + 7) - 0x80);
          sVar9 = *(byte *)(iVar6 + 6) - 0x80;
          if ((bVar2 & 1) != 0) {
            sVar9 = *(byte *)(iVar6 + 6) - 0x19;
          }
          if (DAT_00ffa6db != '\0') {
            sVar9 = -sVar9;
          }
          *(short *)(pcVar17 + 2) = _DAT_00ffa6d4 + sVar9;
        }
      }
      if ((((pcVar17[0x3c] & 0x80U) != 0) &&
          (psVar1 = *(short **)(pcVar17 + 0x14), psVar1 != (short *)0x0)) &&
         ((pcVar17[7] & 0x20U) == 0)) {
        sVar9 = *psVar1;
        puVar14 = (ushort *)(psVar1 + 5);
        uVar13 = *(short *)(pcVar17 + 0x1e) + ((ushort)*(undefined4 *)(pcVar17 + 0x2e) >> 5);
        do {
          uVar11 = (uint)*puVar14;
          if ((pcVar17[6] & 8U) == 0) {
            bVar2 = *(byte *)((int)puVar14 + 3);
            if (pcVar17[0x35] != '\0') {
              bVar2 = -*(char *)(uVar11 + 9) - bVar2;
            }
            uVar12 = _DAT_00fffca2 + ((*(short *)(pcVar17 + 4) + (ushort)bVar2) - sVar5) + -0x100;
            if (uVar12 < 0x15f) {
              bVar2 = *(byte *)(puVar14 + 1);
              if (pcVar17[9] != '\0') {
                bVar2 = -*(char *)(uVar11 + 8) - bVar2;
              }
              uVar10 = (*(short *)(pcVar17 + 2) + (ushort)bVar2) - sVar4;
              if ((uVar10 < 0x1bf) &&
                 ((DAT_00ffa692 != '\a' ||
                  (uVar12 = (uVar12 + 8) - ((short)(*(short *)(pcVar17 + 2) - _DAT_00ffa676) >> 4),
                  uVar12 < 0x15f)))) goto LAB_00248a78;
            }
          }
          else {
            uVar12 = (*(short *)(pcVar17 + 4) + (ushort)*(byte *)((int)puVar14 + 3)) - 0x100;
            if (uVar12 < 0x15f) {
              bVar2 = *(byte *)(puVar14 + 1);
              if (pcVar17[9] != '\0') {
                bVar2 = -*(char *)(uVar11 + 8) - bVar2;
              }
              uVar10 = (*(short *)(pcVar17 + 2) + (ushort)bVar2) - 0x80;
              if (uVar10 < 0x1bf) {
LAB_00248a78:
                *puVar15 = uVar12;
                uVar8 = *(ushort *)(uVar11 + 6) | uVar8 & 0xf0ff;
                puVar15[1] = uVar8;
                if (pcVar17[9] != '\0') {
                  uVar13 = uVar13 & 0xf7ff | 0x800;
                }
                if (pcVar17[0x35] != '\0') {
                  uVar13 = uVar13 & 0xefff | 0x1000;
                }
                puVar16 = puVar15 + 3;
                puVar15[2] = uVar13;
                puVar15 = puVar15 + 4;
                *puVar16 = uVar10 - _DAT_00fffca4;
                uVar8 = CONCAT11((char)(uVar8 >> 8),(char)uVar8 + '\x01');
              }
            }
          }
          uVar13 = puVar14[5] + uVar13;
          puVar14 = puVar14 + 6;
          sVar9 = sVar9 + -1;
        } while (sVar9 != -1);
      }
    }
LAB_00248aba:
    pcVar17 = pcVar17 + 0x56;
    sVar7 = sVar7 + -1;
    if (sVar7 == -1) {
      pcVar17 = &DAT_00ffa6d2;
      sVar7 = 0x25;
      if (((DAT_00fffddf == '\0') && (DAT_00fffdea != '>')) && ((DAT_00fffd28 & 1) != 0))
      goto LAB_00248c1a;
      do {
        if (((*pcVar17 != '\0') && ((pcVar17[0x3c] & 0x80U) == 0)) &&
           ((psVar1 = *(short **)(pcVar17 + 0x14), psVar1 != (short *)0x0 &&
            ((pcVar17[7] & 0x20U) == 0)))) {
          sVar9 = *psVar1;
          puVar14 = (ushort *)(psVar1 + 5);
          uVar13 = *(short *)(pcVar17 + 0x1e) + ((ushort)(*(uint *)(pcVar17 + 0x2e) >> 5) & 0x7ff);
          do {
            uVar11 = (uint)*puVar14;
            if ((pcVar17[6] & 8U) == 0) {
              bVar2 = *(byte *)((int)puVar14 + 3);
              if (pcVar17[0x35] != '\0') {
                bVar2 = -*(char *)(uVar11 + 9) - bVar2;
              }
              sVar3 = _DAT_00fffca2 + ((*(short *)(pcVar17 + 4) + (ushort)bVar2) - sVar5);
              uVar12 = sVar3 - 0x100;
              if (uVar12 < 0x15f) {
                bVar2 = *(byte *)(puVar14 + 1);
                if (pcVar17[9] != '\0') {
                  bVar2 = -*(char *)(uVar11 + 8) - bVar2;
                }
                uVar10 = (*(short *)(pcVar17 + 2) + (ushort)bVar2) - sVar4;
                if ((uVar10 < 0x1bf) &&
                   ((DAT_00ffa692 != '\a' ||
                    (uVar12 = (sVar3 + -0xf8) -
                              ((short)(*(short *)(pcVar17 + 2) - _DAT_00ffa676) >> 4),
                    uVar12 < 0x15f)))) goto LAB_00248bd8;
              }
            }
            else {
              uVar12 = (*(short *)(pcVar17 + 4) + (ushort)*(byte *)((int)puVar14 + 3)) - 0x100;
              if (uVar12 < 0x15f) {
                bVar2 = *(byte *)(puVar14 + 1);
                if (pcVar17[9] != '\0') {
                  bVar2 = -*(char *)(uVar11 + 8) - bVar2;
                }
                uVar10 = (*(short *)(pcVar17 + 2) + (ushort)bVar2) - 0x80;
                if (uVar10 < 0x1bf) {
LAB_00248bd8:
                  *puVar15 = uVar12;
                  uVar8 = *(ushort *)(uVar11 + 6) | uVar8 & 0xf0ff;
                  puVar15[1] = uVar8;
                  if (pcVar17[9] != '\0') {
                    uVar13 = uVar13 & 0xf7ff | 0x800;
                  }
                  if (pcVar17[0x35] != '\0') {
                    uVar13 = uVar13 & 0xefff | 0x1000;
                  }
                  puVar16 = puVar15 + 3;
                  puVar15[2] = uVar13;
                  puVar15 = puVar15 + 4;
                  *puVar16 = uVar10 - _DAT_00fffca4;
                  uVar8 = CONCAT11((char)(uVar8 >> 8),(char)uVar8 + '\x01');
                }
              }
            }
            uVar13 = puVar14[5] + uVar13;
            puVar14 = puVar14 + 6;
            sVar9 = sVar9 + -1;
          } while (sVar9 != -1);
        }
LAB_00248c1a:
        pcVar17 = pcVar17 + 0x56;
        sVar7 = sVar7 + -1;
        if (sVar7 == -1) {
          *puVar15 = 1;
          puVar15[1] = 0;
          puVar15[2] = 0;
          puVar15[3] = 1;
          DAT_00fffbe1 = (char)uVar8;
          return;
        }
      } while( true );
    }
  } while( true );
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024847e(void) {
  byte bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  short sVar6;
  ushort uVar7;
  char cVar8;
  char cVar9;
  short sVar10;
  ushort uVar11;
  ushort uVar13;
  uint uVar12;
  ushort uVar14;
  ushort *puVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  ushort *puVar18;
  short *psVar19;
  ushort *puVar20;
  char *pcVar21;
  
  sVar4 = _DAT_00ffa678;
  sVar3 = _DAT_00ffa676;
  DAT_00fffd2e = 0;
  if ((0xf < DAT_00ffa692) && (DAT_00ffa692 < 0x17)) {
    _DAT_00ff9b52 = _DAT_00fffdb0 + 0x9c;
    _DAT_00ff9b54 = 0x501;
    _DAT_00ff9b56 = 0xe6c4;
    _DAT_00ff9b58 = 0xa0;
    _DAT_00ff9b5a = _DAT_00fffdb2 + 0x9c;
    _DAT_00ff9b5c = 0x502;
    _DAT_00ff9b5e = -0x1938;
    _DAT_00ff9b60 = 0x89;
    _DAT_00ff9b62 = 0xa4;
    _DAT_00ff9b64 = 0x303;
    _DAT_00ff9b66 = 0xe6d4;
    _DAT_00ff9b68 = 0x98;
    _DAT_00ff9b6a = 0xc4;
    _DAT_00ff9b6c = 0x304;
    _DAT_00ff9b6e = 0xe6d4;
    _DAT_00ff9b70 = 0x98;
    _DAT_00ff9b72 = 0xe4;
    _DAT_00ff9b74 = 0x305;
    _DAT_00ff9b76 = -0x192c;
    _DAT_00ff9b78 = 0x98;
    _DAT_00ff9b7a = 0x104;
    _DAT_00ff9b7c = 0x306;
    _DAT_00ff9b7e = 0xe6d4;
    _DAT_00ff9b80 = 0x98;
    _DAT_00ff9b82 = 0x124;
    _DAT_00ff9b84 = 0x307;
    _DAT_00ff9b86 = -0x192c;
    puVar16 = (undefined2 *)&DAT_00ff9b8a;
    _DAT_00ff9b88 = 0x98;
    uVar7 = 0x508;
    if (DAT_00ffff61 != 0) {
      _DAT_00ff9b8a = 0x94;
      _DAT_00ff9b8c = 0x508;
      _DAT_00ff9b8e = 0xe6cc;
      _DAT_00ff9b90 = 0x18e;
      _DAT_00ff9b92 = 0x9c;
      _DAT_00ff9b94 = 9;
      _DAT_00ff9b96 = 0xe6ba;
      _DAT_00ff9b98 = 0x19f;
      _DAT_00ff9b9a = 0x9c;
      _DAT_00ff9b9c = 10;
      _DAT_00ff9b9e = DAT_00ffff61 + 0xe680;
      puVar16 = (undefined2 *)&DAT_00ff9ba2;
      _DAT_00ff9ba0 = 0x1a7;
      uVar7 = 0xb;
    }
    uVar13 = (ushort)(byte)(DAT_00ffff64 * '\x02') * 2;
    *puVar16 = 0x94;
    puVar16[1] = uVar7 & 0xf0ff | 0x500;
    puVar16[2] = 0xe6d0;
    puVar16[3] = 0xc0;
    cVar8 = (char)(uVar7 & 0xf0ff);
    puVar16[4] = 0x9c;
    puVar16[5] = (ushort)(byte)(cVar8 + 1);
    puVar16[6] = 0xe6ba;
    puVar17 = puVar16 + 8;
    puVar16[7] = 0xd1;
    uVar7 = (ushort)(byte)(cVar8 + 2);
    if (0x27 < (byte)uVar13) {
      *puVar17 = 0x9c;
      puVar16[9] = uVar7;
      puVar16[10] = *(undefined2 *)(&DAT_000070da + uVar13);
      puVar17 = puVar16 + 0xc;
      puVar16[0xb] = 0xd9;
      uVar7 = (ushort)(byte)(cVar8 + 3);
    }
    *puVar17 = 0x9c;
    puVar17[1] = uVar7;
    puVar17[2] = *(undefined2 *)(&DAT_000070dc + uVar13);
    puVar18 = puVar17 + 4;
    puVar17[3] = 0xe1;
    uVar7 = (ushort)(byte)((char)uVar7 + 1);
    goto LAB_002488e2;
  }
  _DAT_00ff9b52 = 0xa1;
  _DAT_00ff9b54 = 1;
  _DAT_00ff9b56 = 0xe6ba;
  _DAT_00ff9b58 = 0x94;
  _DAT_00ff9b5a = 0xa1;
  _DAT_00ff9b5c = 2;
  _DAT_00ff9b5e = (byte)(DAT_00ffa6c8 - 0x30) + 0xe680;
  _DAT_00ff9b60 = 0x9c;
  _DAT_00ff9b62 = 0x9c;
  _DAT_00ff9b64 = 0x403;
  _DAT_00ff9b66 = 0xe68a;
  _DAT_00ff9b68 = 0x80;
  _DAT_00ff9b6a = 0x94;
  _DAT_00ff9b6c = 0x904;
  _DAT_00ff9b6e = 0xe68c;
  puVar18 = (ushort *)&DAT_00ff9b72;
  _DAT_00ff9b70 = 0x90;
  uVar7 = 0x905;
  if (DAT_00fffddf != '\0') goto LAB_002488e2;
  if (DAT_00fffbf2 != '\0') {
    _DAT_00ff9b72 = 0x140;
    _DAT_00ff9b74 = 0x905;
    _DAT_00ff9b76 = DAT_00fffd17 + 0xe7c0;
    _DAT_00ff9b78 = 0x90;
    _DAT_00ff9b7a = 0x149;
    _DAT_00ff9b7c = 6;
    _DAT_00ff9b7e = 0xe6ba;
    _DAT_00ff9b80 = 0xa2;
    _DAT_00ff9b82 = 0x149;
    _DAT_00ff9b84 = 7;
    _DAT_00ff9b86 = DAT_00fffded + 0xe680;
    puVar18 = (ushort *)&DAT_00ff9b8a;
    _DAT_00ff9b88 = 0xaa;
    uVar7 = 8;
    goto LAB_002487c2;
  }
  if (_DAT_00fffbf4 < 0x30313030) {
    if (_DAT_00fffbf4 == 0x30303030) {
      if (2 < (DAT_00ffa6cf & 7)) goto LAB_00248716;
    }
    else if (5 < (DAT_00ffa6cf & 0xf)) goto LAB_00248716;
  }
  else {
LAB_00248716:
    cVar8 = '\0';
    _DAT_00ff9b72 = 0x140;
    _DAT_00ff9b74 = 0x905;
    _DAT_00ff9b76 = -0x1840;
    _DAT_00ff9b78 = 0x90;
    _DAT_00ff9b7a = 0x149;
    _DAT_00ff9b7c = 6;
    _DAT_00ff9b7e = 0xe6ba;
    puVar16 = (undefined2 *)&DAT_00ff9b82;
    _DAT_00ff9b80 = 0xa2;
    uVar7 = 7;
    sVar6 = 0xaa;
    if ((byte)(DAT_00fffbf4 - 0x30U) != 0) {
      _DAT_00ff9b82 = 0x149;
      _DAT_00ff9b84 = 7;
      _DAT_00ff9b86 = (byte)(DAT_00fffbf4 - 0x30U) + 0xe680;
      puVar16 = (undefined2 *)&DAT_00ff9b8a;
      _DAT_00ff9b88 = 0xaa;
      sVar6 = 0xb2;
      uVar7 = 8;
      cVar8 = -1;
    }
    bVar1 = DAT_00fffbf5 - 0x30;
    if ((cVar8 != '\0') || (cVar8 = '\0', bVar1 != 0)) {
      *puVar16 = 0x149;
      puVar16[1] = uVar7;
      psVar19 = puVar16 + 3;
      puVar16[2] = bVar1 + 0xe680;
      puVar16 = puVar16 + 4;
      *psVar19 = sVar6;
      sVar6 = sVar6 + 8;
      uVar7 = (ushort)(byte)((char)uVar7 + 1);
      cVar8 = -1;
    }
    bVar1 = DAT_00fffbf6 - 0x30;
    if ((cVar8 != '\0') || (bVar1 != 0)) {
      *puVar16 = 0x149;
      puVar16[1] = uVar7;
      psVar19 = puVar16 + 3;
      puVar16[2] = bVar1 + 0xe680;
      puVar16 = puVar16 + 4;
      *psVar19 = sVar6;
      sVar6 = sVar6 + 8;
      uVar7 = (ushort)(byte)((char)uVar7 + 1);
    }
    bVar1 = DAT_00fffbf7 - 0x30;
    *puVar16 = 0x149;
    puVar16[1] = uVar7;
    puVar16[2] = bVar1 + 0xe680;
    puVar18 = puVar16 + 4;
    puVar16[3] = sVar6;
    uVar7 = (ushort)(byte)((char)uVar7 + 1);
  }
LAB_002487c2:
  if (_DAT_00fffbfc < 0x30303135) {
    if (_DAT_00fffbfc < 0x30303035) {
      if (2 < (DAT_00ffa6cf & 7)) goto LAB_002487f8;
    }
    else if (5 < (DAT_00ffa6cf & 0xf)) goto LAB_002487f8;
  }
  else {
LAB_002487f8:
    cVar8 = '\0';
    uVar13 = 0xce;
    *puVar18 = 0x94;
    puVar18[1] = uVar7 & 0xf0ff | 0x500;
    if (((DAT_00ffa6cf & 1) != 0) && (DAT_00fffd16 = DAT_00fffd16 + 4, 0x27 < DAT_00fffd16)) {
      DAT_00fffd16 = 0;
    }
    puVar18[2] = DAT_00fffd16 + 0xe692;
    puVar15 = puVar18 + 4;
    puVar18[3] = 0xbc;
    cVar9 = (char)(uVar7 & 0xf0ff);
    uVar7 = (ushort)(byte)(cVar9 + 1);
    bVar1 = DAT_00fffbfd - 0x30;
    if (bVar1 != 0) {
      *puVar15 = 0x9d;
      puVar18[5] = uVar7;
      puVar18[6] = bVar1 + 0xe680;
      puVar15 = puVar18 + 8;
      puVar18[7] = 0xce;
      uVar13 = 0xd6;
      uVar7 = (ushort)(byte)(cVar9 + 2);
      cVar8 = -1;
    }
    bVar1 = DAT_00fffbfe - 0x30;
    if ((cVar8 != '\0') || (bVar1 != 0)) {
      *puVar15 = 0x9d;
      puVar15[1] = uVar7;
      puVar18 = puVar15 + 3;
      puVar15[2] = bVar1 + 0xe680;
      puVar15 = puVar15 + 4;
      *puVar18 = uVar13;
      uVar13 = uVar13 + 8;
      uVar7 = (ushort)(byte)((char)uVar7 + 1);
    }
    bVar1 = DAT_00fffbff - 0x30;
    *puVar15 = 0x9d;
    puVar15[1] = uVar7;
    puVar15[2] = bVar1 + 0xe680;
    puVar15[3] = uVar13;
    puVar15[4] = 0x9d;
    puVar15[5] = (ushort)(byte)((char)uVar7 + 1);
    puVar15[6] = 0xe6bb;
    puVar18 = puVar15 + 8;
    puVar15[7] = uVar13 + 8;
    uVar7 = (ushort)(byte)((char)uVar7 + 2);
  }
  if (DAT_00fffdde != '\0') {
    uVar7 = uVar7 & 0xf0ff | 0x700;
    sVar6 = 6;
    uVar13 = 0x80;
    do {
      *puVar18 = uVar13;
      puVar18[1] = uVar7;
      puVar15 = puVar18 + 3;
      puVar18[2] = 0xe6bc;
      puVar18 = puVar18 + 4;
      *puVar15 = 0x80;
      uVar7 = CONCAT11((char)(uVar7 >> 8),(char)uVar7 + '\x01');
      uVar13 = uVar13 + 0x20;
      sVar6 = sVar6 + -1;
    } while (sVar6 != -1);
  }
LAB_002488e2:
  pcVar21 = &DAT_00ffa6d2;
  sVar6 = 0x25;
  if ((((DAT_00fffddf == '\0') && (_DAT_00fffc9e == 0)) && (DAT_00fffdea != '>')) &&
     ((DAT_00fffd28 & 1) != 0)) goto LAB_00248aba;
  do {
    if (*pcVar21 != '\0') {
      bVar1 = pcVar21[0x46];
      if ((bVar1 & 0xf) != 0) {
        if ((bVar1 & 1) != 0) {
          *(short *)(pcVar21 + 2) = _DAT_00ffa6d4;
        }
        if ((bVar1 & 2) != 0) {
          *(short *)(pcVar21 + 4) = _DAT_00ffa6d6;
        }
        iVar5 = _DAT_00ffa6e6;
        if ((bVar1 & 4) != 0) {
          if (_DAT_00ffa6e6 == 0) goto LAB_00248aba;
          *(ushort *)(pcVar21 + 4) = _DAT_00ffa6d6 + (*(byte *)(_DAT_00ffa6e6 + 7) - 0x80);
          sVar10 = *(byte *)(iVar5 + 6) - 0x80;
          if ((bVar1 & 1) != 0) {
            sVar10 = *(byte *)(iVar5 + 6) - 0x19;
          }
          if (DAT_00ffa6db != '\0') {
            sVar10 = -sVar10;
          }
          *(short *)(pcVar21 + 2) = _DAT_00ffa6d4 + sVar10;
        }
      }
      if ((((pcVar21[0x3c] & 0x80U) != 0) &&
          (psVar19 = *(short **)(pcVar21 + 0x14), psVar19 != (short *)0x0)) &&
         ((pcVar21[7] & 0x20U) == 0)) {
        sVar10 = *psVar19;
        puVar15 = (ushort *)(psVar19 + 5);
        uVar13 = *(short *)(pcVar21 + 0x1e) + ((ushort)*(undefined4 *)(pcVar21 + 0x2e) >> 5);
        do {
          uVar12 = (uint)*puVar15;
          if ((pcVar21[6] & 8U) == 0) {
            bVar1 = *(byte *)((int)puVar15 + 3);
            if (pcVar21[0x35] != '\0') {
              bVar1 = -*(char *)(uVar12 + 9) - bVar1;
            }
            uVar14 = _DAT_00fffca2 + ((*(short *)(pcVar21 + 4) + (ushort)bVar1) - sVar4) + -0x100;
            if (uVar14 < 0x15f) {
              bVar1 = *(byte *)(puVar15 + 1);
              if (pcVar21[9] != '\0') {
                bVar1 = -*(char *)(uVar12 + 8) - bVar1;
              }
              uVar11 = (*(short *)(pcVar21 + 2) + (ushort)bVar1) - sVar3;
              if ((uVar11 < 0x1bf) &&
                 ((DAT_00ffa692 != 7 ||
                  (uVar14 = (uVar14 + 8) - ((short)(*(short *)(pcVar21 + 2) - _DAT_00ffa676) >> 4),
                  uVar14 < 0x15f)))) goto LAB_00248a78;
            }
          }
          else {
            uVar14 = (*(short *)(pcVar21 + 4) + (ushort)*(byte *)((int)puVar15 + 3)) - 0x100;
            if (uVar14 < 0x15f) {
              bVar1 = *(byte *)(puVar15 + 1);
              if (pcVar21[9] != '\0') {
                bVar1 = -*(char *)(uVar12 + 8) - bVar1;
              }
              uVar11 = (*(short *)(pcVar21 + 2) + (ushort)bVar1) - 0x80;
              if (uVar11 < 0x1bf) {
LAB_00248a78:
                *puVar18 = uVar14;
                uVar7 = *(ushort *)(uVar12 + 6) | uVar7 & 0xf0ff;
                puVar18[1] = uVar7;
                if (pcVar21[9] != '\0') {
                  uVar13 = uVar13 & 0xf7ff | 0x800;
                }
                if (pcVar21[0x35] != '\0') {
                  uVar13 = uVar13 & 0xefff | 0x1000;
                }
                puVar20 = puVar18 + 3;
                puVar18[2] = uVar13;
                puVar18 = puVar18 + 4;
                *puVar20 = uVar11 - _DAT_00fffca4;
                uVar7 = CONCAT11((char)(uVar7 >> 8),(char)uVar7 + '\x01');
              }
            }
          }
          uVar13 = puVar15[5] + uVar13;
          puVar15 = puVar15 + 6;
          sVar10 = sVar10 + -1;
        } while (sVar10 != -1);
      }
    }
LAB_00248aba:
    pcVar21 = pcVar21 + 0x56;
    sVar6 = sVar6 + -1;
    if (sVar6 == -1) {
      pcVar21 = &DAT_00ffa6d2;
      sVar6 = 0x25;
      if (((DAT_00fffddf == '\0') && (DAT_00fffdea != '>')) && ((DAT_00fffd28 & 1) != 0))
      goto LAB_00248c1a;
      do {
        if (((*pcVar21 != '\0') && ((pcVar21[0x3c] & 0x80U) == 0)) &&
           ((psVar19 = *(short **)(pcVar21 + 0x14), psVar19 != (short *)0x0 &&
            ((pcVar21[7] & 0x20U) == 0)))) {
          sVar10 = *psVar19;
          puVar15 = (ushort *)(psVar19 + 5);
          uVar13 = *(short *)(pcVar21 + 0x1e) + ((ushort)(*(uint *)(pcVar21 + 0x2e) >> 5) & 0x7ff);
          do {
            uVar12 = (uint)*puVar15;
            if ((pcVar21[6] & 8U) == 0) {
              bVar1 = *(byte *)((int)puVar15 + 3);
              if (pcVar21[0x35] != '\0') {
                bVar1 = -*(char *)(uVar12 + 9) - bVar1;
              }
              sVar2 = _DAT_00fffca2 + ((*(short *)(pcVar21 + 4) + (ushort)bVar1) - sVar4);
              uVar14 = sVar2 - 0x100;
              if (uVar14 < 0x15f) {
                bVar1 = *(byte *)(puVar15 + 1);
                if (pcVar21[9] != '\0') {
                  bVar1 = -*(char *)(uVar12 + 8) - bVar1;
                }
                uVar11 = (*(short *)(pcVar21 + 2) + (ushort)bVar1) - sVar3;
                if ((uVar11 < 0x1bf) &&
                   ((DAT_00ffa692 != 7 ||
                    (uVar14 = (sVar2 + -0xf8) -
                              ((short)(*(short *)(pcVar21 + 2) - _DAT_00ffa676) >> 4),
                    uVar14 < 0x15f)))) goto LAB_00248bd8;
              }
            }
            else {
              uVar14 = (*(short *)(pcVar21 + 4) + (ushort)*(byte *)((int)puVar15 + 3)) - 0x100;
              if (uVar14 < 0x15f) {
                bVar1 = *(byte *)(puVar15 + 1);
                if (pcVar21[9] != '\0') {
                  bVar1 = -*(char *)(uVar12 + 8) - bVar1;
                }
                uVar11 = (*(short *)(pcVar21 + 2) + (ushort)bVar1) - 0x80;
                if (uVar11 < 0x1bf) {
LAB_00248bd8:
                  *puVar18 = uVar14;
                  uVar7 = *(ushort *)(uVar12 + 6) | uVar7 & 0xf0ff;
                  puVar18[1] = uVar7;
                  if (pcVar21[9] != '\0') {
                    uVar13 = uVar13 & 0xf7ff | 0x800;
                  }
                  if (pcVar21[0x35] != '\0') {
                    uVar13 = uVar13 & 0xefff | 0x1000;
                  }
                  puVar20 = puVar18 + 3;
                  puVar18[2] = uVar13;
                  puVar18 = puVar18 + 4;
                  *puVar20 = uVar11 - _DAT_00fffca4;
                  uVar7 = CONCAT11((char)(uVar7 >> 8),(char)uVar7 + '\x01');
                }
              }
            }
            uVar13 = puVar15[5] + uVar13;
            puVar15 = puVar15 + 6;
            sVar10 = sVar10 + -1;
          } while (sVar10 != -1);
        }
LAB_00248c1a:
        pcVar21 = pcVar21 + 0x56;
        sVar6 = sVar6 + -1;
        if (sVar6 == -1) {
          *puVar18 = 1;
          puVar18[1] = 0;
          puVar18[2] = 0;
          puVar18[3] = 1;
          DAT_00fffbe1 = (char)uVar7;
          return;
        }
      } while( true );
    }
  } while( true );
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_00248c3a(void) {
  int iVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined4 in_D1;
  undefined4 extraout_D1;
  undefined4 extraout_D1_00;
  ushort uVar5;
  short sVar6;
  undefined4 in_A0;
  short extraout_A0w;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  byte *pbVar7;
  byte *extraout_A1;
  byte *extraout_A1_00;
  byte *extraout_A1_01;
  byte *extraout_A1_02;
  
  iVar4 = _DAT_00ffa6e6;
  if (DAT_00ffff6c == '\0') {
    _DAT_00fffda8 = 0;
    DAT_00fffd4e = 0;
    DAT_00fffd27 = 0;
    DAT_00fffd26 = 0;
    if (DAT_00fffd28 != '\0') {
      DAT_00fffd28 = DAT_00fffd28 + -1;
    }
    DAT_00fffd12 = DAT_00fffd11;
    DAT_00fffd11 = 0;
    DAT_00fffd2a = 0;
    DAT_00fffd0d = 0;
    if ((_DAT_00ffa6e6 != 0) && (DAT_00ffa6d2 != '\0')) {
      if (DAT_00ffa6db == '\0') {
        bVar2 = *(byte *)(_DAT_00ffa6e6 + 2);
        bVar3 = *(byte *)(_DAT_00ffa6e6 + 4);
      }
      else {
        bVar2 = -*(char *)(_DAT_00ffa6e6 + 4);
        bVar3 = -*(char *)(_DAT_00ffa6e6 + 2);
      }
      _DAT_00fffcb8 = _DAT_00ffa6d4 + (ushort)bVar2;
      _DAT_00fffcba = _DAT_00ffa6d4 + (ushort)bVar3;
      pbVar7 = &DAT_00ffa728;
      sVar6 = 0x19;
      do {
        if (((*pbVar7 != 0) && (pbVar7[0x54] = 0, *pbVar7 < 0x7a)) && (*(int *)(pbVar7 + 0x14) != 0)
           ) {
          iVar1 = *(int *)(pbVar7 + 0x14);
          if (pbVar7[9] == 0) {
            uVar5 = *(short *)(pbVar7 + 2) + (ushort)*(byte *)(iVar1 + 2);
          }
          else {
            uVar5 = *(short *)(pbVar7 + 2) + (ushort)(byte)-*(char *)(iVar1 + 4);
          }
          if ((uVar5 <= _DAT_00fffcba) &&
             ((ushort)(*(short *)(pbVar7 + 4) + (ushort)*(byte *)(iVar1 + 3)) <=
              (ushort)(_DAT_00ffa6d6 + (ushort)*(byte *)(iVar4 + 5)))) {
            if (pbVar7[9] == 0) {
              uVar5 = *(short *)(pbVar7 + 2) + (ushort)*(byte *)(iVar1 + 4);
            }
            else {
              uVar5 = *(short *)(pbVar7 + 2) + (ushort)(byte)-*(char *)(iVar1 + 2);
            }
            if ((_DAT_00fffcb8 < uVar5) &&
               ((ushort)(_DAT_00ffa6d6 + (ushort)*(byte *)(iVar4 + 3)) <
                (ushort)(*(short *)(pbVar7 + 4) + (ushort)*(byte *)(iVar1 + 5)))) {
              DAT_00fffd29 = '\0';
              DAT_00fffd2a = *pbVar7;
              (**(code **)((int)&PTR_LAB_000035e4 + (int)(short)((ushort)DAT_00fffd2a << 2)))();
              pbVar7 = extraout_A1;
              sVar6 = extraout_A0w;
              if ((extraout_A1[6] & 0x10) == 0) {
                extraout_A1[0x54] = 0xff;
              }
              else if ((DAT_00fffd29 == '\0') &&
                      ((((extraout_A1[0x54] = 0xff, *extraout_A1 == 0x57 || (*extraout_A1 == 0x58))
                        || (*extraout_A1 == 0x59)) || (DAT_00fffd23 == '\0')))) {
                if (_DAT_00ffa6ec != 0) {
                  DAT_00fffcf8 = 0;
                  _DAT_00ffa6f2 = 0x1ae5c4;
                  if ((_DAT_00fffcce == 0) && (_DAT_00ffa6f2 = 0x1adf00, 0x3b < DAT_00fffd25)) {
                    _DAT_00ffa6f2 = 0x1ade88;
                  }
                  _DAT_00ffa6ec = 0;
                  DAT_00ffa709 = 0;
                  DAT_00fffd0b = 0;
                }
                DAT_00fffcff = 0xff;
                DAT_00fffd11 = *extraout_A1;
                DAT_00fffd0d = 0xff;
                apply_scroll_offsets();
                pbVar7 = extraout_A1_00;
              }
            }
          }
        }
        pbVar7 = pbVar7 + 0x56;
        sVar6 = sVar6 + -1;
      } while (sVar6 != -1);
    }
    return;
  }
  if (DAT_00fffd28 != '\0') {
    DAT_00fffd28 = DAT_00fffd28 + -1;
  }
  _DAT_00fffef2 = _DAT_00ffa722 - 0x280;
  _DAT_00fffef4 = _DAT_00ffa722 + 0x280;
  _DAT_00fffef6 = _DAT_00ffa724 - 0x1c;
  _DAT_00fffef8 = _DAT_00ffa724 + 0x1c;
  _DAT_00ffff56 = _DAT_00ffa778 - 0x280;
  _DAT_00ffff58 = _DAT_00ffa778 + 0x280;
  _DAT_00ffff5a = _DAT_00ffa77a - 0x1c;
  _DAT_00ffff5c = _DAT_00ffa77a + 0x1c;
  sVar6 = 0x18;
  pbVar7 = &DAT_00ffa77e;
  do {
    if (*pbVar7 != 0) {
      if (((*pbVar7 < 0x7a) && ((ushort)(*(short *)(pbVar7 + 0x50) - 0x280U) < _DAT_00fffef4)) &&
         ((_DAT_00fffef2 <= (ushort)(*(short *)(pbVar7 + 0x50) + 0x280U) &&
          (((ushort)(*(short *)(pbVar7 + 0x52) - 0x1cU) < _DAT_00fffef8 &&
           (_DAT_00fffef6 <= (ushort)(*(short *)(pbVar7 + 0x52) + 0x1cU))))))) {
        (**(code **)((int)&PTR_LAB_000035e4 + (int)(short)((ushort)*pbVar7 << 2)))();
        in_D1 = extraout_D1;
        in_A0 = extraout_A0;
        pbVar7 = extraout_A1_01;
      }
      if (((((ushort)(*(short *)(pbVar7 + 0x50) - 0x280U) < _DAT_00ffff58) &&
           (_DAT_00ffff56 <= (ushort)(*(short *)(pbVar7 + 0x50) + 0x280U))) &&
          ((ushort)(*(short *)(pbVar7 + 0x52) - 0x1cU) < _DAT_00ffff5c)) &&
         (_DAT_00ffff5a <= (ushort)(*(short *)(pbVar7 + 0x52) + 0x1cU))) {
        FUN_00258a66();
        in_D1 = extraout_D1_00;
        in_A0 = extraout_A0_00;
        pbVar7 = extraout_A1_02;
      }
    }
    pbVar7 = pbVar7 + 0x56;
    sVar6 = sVar6 + -1;
  } while (sVar6 != -1);
  if (((_DAT_00fffef2 <= _DAT_00ffff58) && (_DAT_00ffff56 < _DAT_00fffef4)) &&
     (((ushort)(_DAT_00fffef6 - 0x58) < _DAT_00ffff5c &&
      (_DAT_00ffff5a <= (ushort)(_DAT_00fffef8 + 0x58))))) {
    if (DAT_00ffff9c != '\0') {
      FUN_002cbd12(0x16,_DAT_00fffef8 + 0x58,in_D1,in_A0,pbVar7);
      FUN_002cbcfc();
    }
    if (_DAT_00fffe90 != 0) {
      DAT_00ffa728 = 0x86;
      _DAT_00fffe92 = 0xf0;
      _DAT_00fffe8e = 0;
      _DAT_00ffa748 = &DAT_001b29e4;
      FUN_00258ad6();
      FUN_00258ad6();
      return;
    }
    if (_DAT_00ffa778 < _DAT_00ffa722) {
      _DAT_00fffe8e = 0x1c0;
      _DAT_00fffe98 = _DAT_00ffa778 - 0x1000;
      DAT_00ffff6d = 0x5a;
      _DAT_00ffa748 = (undefined *)0x1b46ea;
      DAT_00ffa75f = 0;
    }
    else {
      _DAT_00fffe8e = 0xfe40;
      _DAT_00fffe98 = _DAT_00ffa778 + 0x1000;
      DAT_00ffff6d = 0x5a;
      _DAT_00ffa748 = (undefined *)0x1b46ea;
      DAT_00ffa75f = 0;
    }
  }
  return;
}

void FUN_00248e58(void) {
  int iVar1;
  int iVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  short extraout_A0w;
  byte *pbVar6;
  byte *extraout_A1;
  byte *pbVar7;
  
  DAT_00fffdf8 = 0;
  pbVar6 = &DAT_00ffafe4;
  sVar5 = 10;
  do {
    if ((((*pbVar6 != 0) && (*pbVar6 < 0x85)) && (0x79 < *pbVar6)) && (*(int *)(pbVar6 + 0x14) != 0)
       ) {
      iVar1 = *(int *)(pbVar6 + 0x14);
      pbVar7 = &DAT_00ffa728;
      sVar4 = 0x19;
      do {
        if (((*pbVar7 != 0) && (*pbVar7 < 0x4f)) && (*(int *)(pbVar7 + 0x14) != 0)) {
          iVar2 = *(int *)(pbVar7 + 0x14);
          bVar3 = *(byte *)(iVar2 + 2);
          if (pbVar7[9] != 0) {
            bVar3 = -*(char *)(iVar2 + 4);
          }
          if ((ushort)(*(short *)(pbVar7 + 2) + (ushort)bVar3) <=
              (ushort)(*(short *)(pbVar6 + 2) + (ushort)*(byte *)(iVar1 + 4))) {
            bVar3 = *(byte *)(iVar2 + 3);
            if (pbVar7[0x35] != 0) {
              bVar3 = -*(char *)(iVar2 + 5);
            }
            if ((ushort)(*(short *)(pbVar7 + 4) + (ushort)bVar3) <=
                (ushort)(*(short *)(pbVar6 + 4) + (ushort)*(byte *)(iVar1 + 5))) {
              bVar3 = *(byte *)(iVar2 + 4);
              if (pbVar7[9] != 0) {
                bVar3 = -*(char *)(iVar2 + 2);
              }
              if ((ushort)(*(short *)(pbVar6 + 2) + (ushort)*(byte *)(iVar1 + 2)) <
                  (ushort)(*(short *)(pbVar7 + 2) + (ushort)bVar3)) {
                bVar3 = *(byte *)(iVar2 + 5);
                if (pbVar7[0x35] != 0) {
                  bVar3 = -*(char *)(iVar2 + 3);
                }
                if (((ushort)(*(short *)(pbVar6 + 4) + (ushort)*(byte *)(iVar1 + 3)) <
                     (ushort)(*(short *)(pbVar7 + 4) + (ushort)bVar3)) &&
                   (((**(code **)((int)&PTR_LAB_000037cc + (int)(short)((ushort)*pbVar7 * 4)))(),
                    pbVar6 = extraout_A1, 0x84 < *extraout_A1 ||
                    (sVar4 = extraout_A0w, *extraout_A1 < 0x7a)))) break;
              }
            }
          }
        }
        pbVar7 = pbVar7 + 0x56;
        sVar4 = sVar4 + -1;
      } while (sVar4 != -1);
    }
    pbVar6 = pbVar6 + 0x56;
    sVar5 = sVar5 + -1;
    if (sVar5 == -1) {
      return;
    }
  } while( true );
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_00248f7e(void) {
  int iVar1;
  code *pcVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  short sVar8;
  short extraout_A0w;
  byte *pbVar9;
  
  DAT_00fffdf8 = 0xff;
  if (((DAT_00fffdee != '\0') && (DAT_00ffa6d2 != '\0')) && (_DAT_00ffa6e6 != 0)) {
    bVar3 = *(byte *)(_DAT_00ffa6e6 + 6);
    if (DAT_00ffa6db != '\0') {
      bVar3 = -bVar3;
    }
    uVar6 = (_DAT_00ffa6d4 + (ushort)bVar3) - 8;
    uVar4 = _DAT_00ffa6d4 + (ushort)bVar3 + 8;
    bVar3 = *(byte *)(_DAT_00ffa6e6 + 7);
    if (DAT_00ffa707 != '\0') {
      bVar3 = -bVar3;
    }
    uVar7 = (_DAT_00ffa6d6 + (ushort)bVar3) - 8;
    uVar5 = _DAT_00ffa6d6 + (ushort)bVar3 + 8;
    pbVar9 = &DAT_00ffa728;
    sVar8 = 0x19;
    do {
      if (((*pbVar9 != 0) && (*pbVar9 < 0x4f)) && (*(int *)(pbVar9 + 0x14) != 0)) {
        iVar1 = *(int *)(pbVar9 + 0x14);
        if (pbVar9[9] == 0) {
          if ((((ushort)(*(short *)(pbVar9 + 2) + (ushort)*(byte *)(iVar1 + 2)) <= uVar4) &&
              ((ushort)(*(short *)(pbVar9 + 4) + (ushort)*(byte *)(iVar1 + 3)) <= uVar5)) &&
             ((uVar6 < (ushort)(*(short *)(pbVar9 + 2) + (ushort)*(byte *)(iVar1 + 4)) &&
              (uVar7 < (ushort)(*(short *)(pbVar9 + 4) + (ushort)*(byte *)(iVar1 + 5))))))
          goto LAB_0024908c;
        }
        else if (((((ushort)(*(short *)(pbVar9 + 2) + (ushort)(byte)-*(char *)(iVar1 + 4)) <= uVar4)
                  && ((ushort)(*(short *)(pbVar9 + 4) + (ushort)*(byte *)(iVar1 + 3)) <= uVar5)) &&
                 (uVar4 < (ushort)(*(short *)(pbVar9 + 2) + (ushort)(byte)-*(char *)(iVar1 + 2))))
                && (uVar5 < (ushort)(*(short *)(pbVar9 + 4) + (ushort)*(byte *)(iVar1 + 5)))) {
LAB_0024908c:
          pcVar2 = *(code **)((int)&PTR_LAB_00003908 + (int)(short)((ushort)*pbVar9 * 4));
          *(ushort *)((int)register0x0000003c + -4) = uVar7;
          *(ushort *)((int)register0x0000003c + -8) = uVar6;
          *(undefined4 *)((int)register0x0000003c + -0xc) = 0x2490a4;
          (*pcVar2)();
          uVar6 = *(ushort *)((int)register0x0000003c + -8);
          uVar7 = *(ushort *)((int)register0x0000003c + -6);
          register0x0000003c = (BADSPACEBASE *)((int)register0x0000003c + -4);
          sVar8 = extraout_A0w;
        }
      }
      pbVar9 = pbVar9 + 0x56;
      sVar8 = sVar8 + -1;
    } while (sVar8 != -1);
  }
  return;
}

void FUN_002490b4(void) {
  short sVar1;
  uint uVar2;
  short *in_A0;
  short *psVar3;
  int in_A1;
  undefined2 *unaff_A3;
  ushort *puVar4;
  undefined2 *puVar5;
  
  uVar2 = *(uint *)(in_A1 + 0x2e);
  sVar1 = *in_A0;
  psVar3 = in_A0 + 5;
  do {
    DAT_00fffbe3 = DAT_00fffbe3 + '\x01';
    puVar5 = (undefined2 *)(int)*psVar3;
    *unaff_A3 = *puVar5;
    unaff_A3[1] = puVar5[1];
    unaff_A3[2] = psVar3[2];
    unaff_A3[3] = psVar3[3];
    unaff_A3[4] = psVar3[4];
    puVar4 = unaff_A3 + 6;
    unaff_A3[5] = ((ushort)uVar2 & 0x3fff) + 0x4000;
    unaff_A3 = unaff_A3 + 7;
    *puVar4 = (ushort)(byte)(((byte)(uVar2 >> 8) >> 6) + 0x80);
    uVar2 = (uint)(ushort)(puVar5[2] + (ushort)uVar2);
    psVar3 = psVar3 + 6;
    sVar1 = sVar1 + -1;
  } while (sVar1 != -1);
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024910a(void) {
  short sVar1;
  undefined4 *extraout_A0;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *extraout_A1;
  
  if (_DAT_00fffbe2 != 0) {
    sVar1 = CONCAT11((char)((ushort)_DAT_00fffbe2 >> 8),(char)_DAT_00fffbe2 + -1);
    FUN_002cbb48();
    puVar3 = extraout_A0;
    do {
      *extraout_A1 = *puVar3;
      *extraout_A1 = puVar3[1];
      puVar2 = puVar3 + 3;
      *extraout_A1 = puVar3[2];
      puVar3 = (undefined4 *)((int)puVar3 + 0xe);
      _DAT_00ffb544 = *(undefined2 *)puVar2;
      *(undefined2 *)extraout_A1 = _DAT_00ffb544;
      sVar1 = sVar1 + -1;
    } while (sVar1 != -1);
    _DAT_00c00004 = 0x8164;
    FUN_002cbb86();
  }
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_00249168(void) {
  ushort *puVar1;
  byte bVar2;
  short sVar3;
  char *pcVar4;
  char *extraout_A1;
  char *extraout_A1_00;
  char *extraout_A1_01;
  
  DAT_00fffbe3 = 0;
  if ((DAT_00ffa6cf & 1) != 0) {
    DAT_00fffdee = 0;
    DAT_00fffd1c = 0;
    DAT_00ffa662 = 0;
    _DAT_00ffa65a = 0x249224;
    _DAT_00ffa65e = 0x249228;
    DAT_00fffbe3 = 0;
    pcVar4 = &DAT_00ffa6d2;
    sVar3 = 0x25;
    do {
      _DAT_00ff9922 = pcVar4;
      if ((*pcVar4 != '\0') &&
         (((*(int *)(pcVar4 + 0x2e) != 0 ||
           (FUN_00249a24(), pcVar4 = extraout_A1, *extraout_A1 != '\0')) &&
          (puVar1 = *(ushort **)(pcVar4 + 0x20), puVar1 != (ushort *)0x0)))) {
        if (*(int *)(uint)*puVar1 != *(int *)(pcVar4 + 0x14)) {
          *(int *)(pcVar4 + 0x14) = *(int *)(uint)*puVar1;
          FUN_002490b4();
          pcVar4 = extraout_A1_00;
        }
        if (pcVar4[0x37] == '\0') {
          while ((bVar2 = *(byte *)(puVar1 + 1), 0xe9 < bVar2 && (bVar2 != 0xff))) {
            (**(code **)((int)&PTR_LAB_00005978 + (int)(short)((ushort)(byte)(bVar2 + 0x16) * 4)))()
            ;
            pcVar4 = extraout_A1_01;
          }
          *(ushort **)(pcVar4 + 0x20) = puVar1 + 1;
        }
        else {
          pcVar4[0x37] = pcVar4[0x37] + -1;
        }
      }
      pcVar4 = pcVar4 + 0x56;
      sVar3 = sVar3 + -1;
    } while (sVar3 != -1);
    return;
  }
  return;
}

void FUN_00249178(void) {
  ushort *puVar1;
  byte bVar2;
  short sVar3;
  char *pcVar4;
  char *extraout_A1;
  char *extraout_A1_00;
  char *extraout_A1_01;
  
  DAT_00fffdee = 0;
  DAT_00fffd1c = 0;
  DAT_00ffa662 = 0;
  _DAT_00ffa65a = 0x249224;
  _DAT_00ffa65e = 0x249228;
  DAT_00fffbe3 = 0;
  pcVar4 = &DAT_00ffa6d2;
  sVar3 = 0x25;
  do {
    _DAT_00ff9922 = pcVar4;
    if ((*pcVar4 != '\0') &&
       (((*(int *)(pcVar4 + 0x2e) != 0 ||
         (FUN_00249a24(), pcVar4 = extraout_A1, *extraout_A1 != '\0')) &&
        (puVar1 = *(ushort **)(pcVar4 + 0x20), puVar1 != (ushort *)0x0)))) {
      if (*(int *)(uint)*puVar1 != *(int *)(pcVar4 + 0x14)) {
        *(int *)(pcVar4 + 0x14) = *(int *)(uint)*puVar1;
        FUN_002490b4();
        pcVar4 = extraout_A1_00;
      }
      if (pcVar4[0x37] == '\0') {
        while ((bVar2 = *(byte *)(puVar1 + 1), 0xe9 < bVar2 && (bVar2 != 0xff))) {
          (**(code **)((int)&PTR_LAB_00005978 + (int)(short)((ushort)(byte)(bVar2 + 0x16) * 4)))();
          pcVar4 = extraout_A1_01;
        }
        *(ushort **)(pcVar4 + 0x20) = puVar1 + 1;
      }
      else {
        pcVar4[0x37] = pcVar4[0x37] + -1;
      }
    }
    pcVar4 = pcVar4 + 0x56;
    sVar3 = sVar3 + -1;
  } while (sVar3 != -1);
  return;
}

undefined8 FUN_002493d6(void) {
  undefined4 in_D0;
  undefined4 in_D1;
  
  FUN_002cbd12();
  return CONCAT44(in_D0,in_D1);
}

void FUN_002495b0(void) {
  int in_A1;
  
  *(byte *)(in_A1 + 6) = *(byte *)(in_A1 + 6) | 1;
  return;
}

void FUN_002495b8(void) {
  undefined1 *extraout_A1;
  
  FUN_0024ae7a();
  FUN_0024adf6();
  *extraout_A1 = 0x86;
  *(undefined2 *)(extraout_A1 + 0x18) = 0;
  *(undefined2 *)(extraout_A1 + 0x1a) = 0;
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
undefined8 FUN_00249632(void) {
  undefined4 in_D0;
  short sVar1;
  undefined4 in_D1;
  undefined2 *puVar2;
  
  _DAT_00c00004 = 0x20;
  sVar1 = 0x3f;
  puVar2 = (undefined2 *)&DAT_00ffb4c4;
  do {
    *puVar2 = _DAT_00c00000;
    sVar1 = sVar1 + -1;
    puVar2 = puVar2 + 1;
  } while (sVar1 != -1);
  FUN_0024cdc8();
  return CONCAT44(in_D0,in_D1);
}

void FUN_00249772(void) {
  DAT_00ffa709 = 0;
  if (DAT_00fffd9a != '\0') {
    DAT_00fffdea = 4;
    return;
  }
  if (DAT_00fffd0e != '\0') {
    DAT_00fffdea = 9;
    if (DAT_00fffc84 != '\0') {
      DAT_00fffdea = 10;
    }
    return;
  }
  if ((DAT_00fffd11 == '_') || (DAT_00fffd11 == '^')) {
    DAT_00fffdea = 0x21;
    return;
  }
  if (DAT_00fffd14 != '\0') {
    DAT_00fffdea = 1;
    return;
  }
  if (DAT_00fffcff != '\0') {
    if (DAT_00fffd0b != '\0') {
      DAT_00fffdea = 8;
      return;
    }
    if (DAT_00fffd1e != '\0') {
      if (DAT_00fffd4b == '\0') {
        DAT_00fffdea = 0x23;
        return;
      }
      DAT_00fffdea = 0x23;
      return;
    }
    if (DAT_00fffddf != '\0') {
      DAT_00fffdea = 0;
      return;
    }
    DAT_00fffdea = 4;
    return;
  }
  if (DAT_00ffa692 == '\v') {
    DAT_00fffdea = 0x10;
    return;
  }
  DAT_00fffdea = 3;
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_002498d2(void) {
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int in_A1;
  int unaff_A2;
  
  bVar3 = *(byte *)(unaff_A2 + 1);
  cVar2 = bVar3 + (bVar3 >> 1);
  uVar1 = *(short *)(in_A1 + 4) + (short)-*(char *)(unaff_A2 + 2);
  if (((short)uVar1 < 0) || (uVar1 < _DAT_00ffa684)) {
    if ('\x10' < *(char *)(in_A1 + 0x1a)) goto LAB_00249908;
  }
  else {
    if (*(char *)(in_A1 + 0x1a) < -0x10) goto LAB_00249908;
    cVar2 = -cVar2;
  }
  *(char *)(in_A1 + 0x1a) = cVar2 + *(char *)(in_A1 + 0x1a);
LAB_00249908:
  uVar1 = *(short *)(in_A1 + 2) + (short)-*(char *)(unaff_A2 + 3);
  if (((short)uVar1 < 0) || (uVar1 < _DAT_00ffa682)) {
    if ('\x06' < *(char *)(in_A1 + 0x18)) {
      return;
    }
  }
  else {
    if (*(char *)(in_A1 + 0x18) < -6) {
      return;
    }
    bVar3 = -bVar3;
  }
  *(char *)(in_A1 + 0x18) = bVar3 + *(char *)(in_A1 + 0x18);
  return;
}

undefined8 FUN_00249a24(void) {
  byte bVar1;
  undefined4 in_D0;
  short sVar2;
  undefined4 in_D1;
  ushort uVar3;
  int in_A1;
  undefined1 *extraout_A1;
  char *pcVar4;
  char *pcVar5;
  
  bVar1 = *(byte *)(in_A1 + 0x29);
  uVar3 = (ushort)bVar1;
  sVar2 = 0x7f - (ushort)bVar1;
  pcVar4 = &DAT_00fffc02;
  while ((*pcVar4 != '\0' ||
         ((bVar1 != 0 &&
          ((pcVar4[1] != '\0' ||
           ((bVar1 != 1 &&
            ((pcVar4[2] != '\0' ||
             ((bVar1 != 2 &&
              ((pcVar4[3] != '\0' ||
               ((bVar1 != 3 &&
                ((pcVar4[4] != '\0' ||
                 ((bVar1 != 4 &&
                  ((pcVar4[5] != '\0' ||
                   ((bVar1 != 5 &&
                    ((pcVar4[6] != '\0' ||
                     ((bVar1 != 6 &&
                      ((pcVar4[7] != '\0' ||
                       ((bVar1 != 7 &&
                        ((pcVar4[8] != '\0' ||
                         ((bVar1 != 8 &&
                          ((pcVar4[9] != '\0' ||
                           ((bVar1 != 9 &&
                            ((pcVar4[10] != '\0' ||
                             ((bVar1 != 10 &&
                              ((pcVar4[0xb] != '\0' ||
                               ((bVar1 != 0xb &&
                                ((pcVar4[0xc] != '\0' ||
                                 ((bVar1 != 0xc &&
                                  ((pcVar4[0xd] != '\0' ||
                                   ((bVar1 != 0xd &&
                                    ((pcVar4[0xe] != '\0' ||
                                     ((bVar1 != 0xe &&
                                      ((pcVar4[0xf] != '\0' ||
                                       ((bVar1 != 0xf &&
                                        ((pcVar4[0x10] != '\0' ||
                                         ((bVar1 != 0x10 &&
                                          ((pcVar4[0x11] != '\0' ||
                                           ((bVar1 != 0x11 &&
                                            ((pcVar4[0x12] != '\0' ||
                                             ((bVar1 != 0x12 &&
                                              ((pcVar4[0x13] != '\0' ||
                                               ((bVar1 != 0x13 &&
                                                ((pcVar4[0x14] != '\0' ||
                                                 ((bVar1 != 0x14 &&
                                                  ((pcVar4[0x15] != '\0' ||
                                                   ((bVar1 != 0x15 &&
                                                    ((pcVar4[0x16] != '\0' ||
                                                     ((bVar1 != 0x16 &&
                                                      ((pcVar4[0x17] != '\0' ||
                                                       ((bVar1 != 0x17 &&
                                                        ((pcVar4[0x18] != '\0' ||
                                                         ((bVar1 != 0x18 &&
                                                          ((pcVar4[0x19] != '\0' ||
                                                           ((bVar1 != 0x19 &&
                                                            ((pcVar4[0x1a] != '\0' ||
                                                             ((bVar1 != 0x1a &&
                                                              ((pcVar4[0x1b] != '\0' ||
                                                               ((bVar1 != 0x1b &&
                                                                ((pcVar4[0x1c] != '\0' ||
                                                                 ((bVar1 != 0x1c &&
                                                                  ((pcVar4[0x1d] != '\0' ||
                                                                   ((bVar1 != 0x1d &&
                                                                    ((pcVar4[0x1e] != '\0' ||
                                                                     ((bVar1 != 0x1e &&
                                                                      (pcVar4[0x1f] != '\0')))))))))
                                                                  ))))))))))))))))))))))))))))))))))
                                                 )))))))))))))))))))))))))))))))))))))))))))))))))))
                       ))))))))))))))))))))))))))))))) {
    sVar2 = sVar2 + -1;
    pcVar4 = pcVar4 + 1;
    if (sVar2 == -1) {
      FUN_00253d20();
      *extraout_A1 = 0;
      return CONCAT44(in_D0,in_D1);
    }
  }
  *(char **)(in_A1 + 0x2a) = pcVar4;
  pcVar5 = pcVar4;
  do {
    *pcVar5 = -1;
    uVar3 = uVar3 - 1;
    pcVar5 = pcVar5 + 1;
  } while (uVar3 != 0xffff);
  *(undefined4 *)(in_A1 + 0x2e) =
       *(undefined4 *)(&DAT_00ff994a + (short)(((short)pcVar4 + 0x3fe) * 4));
  return CONCAT44(in_D0,in_D1);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_00249c56(void) {
  byte bVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  
  if (DAT_00fffd11 == '@') {
    DAT_00fffd09 = 0;
    DAT_00fffd0a = 0;
    if (_DAT_00ffa6e6 != 0) {
      uVar2 = (_DAT_00ffa678 + _DAT_00ffa67c) - 0x110;
      if ((-1 < (short)uVar2) && (uVar2 < (ushort)(_DAT_00ffa674 - 0x30U))) {
        uVar2 = (ushort)(_DAT_00ffa67a + _DAT_00ffa676) >> 4;
        iVar5 = (int)(short)uVar2 +
                (int)(short)uVar2 +
                *(int *)(&DAT_00ffb548 +
                        (short)(((_DAT_00ffa678 + _DAT_00ffa67c) - 0x10aU & 0xfff0) >> 2));
        DAT_00fffd03 = 0;
        DAT_00fffd04 = 0;
        DAT_00fffd05 = 0;
        uVar2 = *(ushort *)(_DAT_00ffa66c + iVar5) >> 1;
        if ((0xef < *(byte *)((short)uVar2 + 0xffb86a)) ||
           (((*(char *)((short)uVar2 + 0xffb86a) == 'u' ||
             (uVar2 = *(ushort *)((int)_DAT_00ffa66c + _DAT_00ffa66c + iVar5) >> 1,
             0xef < *(byte *)((short)uVar2 + 0xffb86a))) ||
            (*(char *)((short)uVar2 + 0xffb86a) == 'u')))) {
          DAT_00fffd03 = 0xff;
        }
        DAT_00fffd06 = 0;
        DAT_00fffd07 = 0;
        DAT_00fffd08 = 0;
        puVar3 = (ushort *)((int)_DAT_00ffa66c + iVar5 + 4);
        uVar2 = *puVar3 >> 1;
        if (((0xef < *(byte *)((short)uVar2 + 0xffb86a)) ||
            (*(char *)((short)uVar2 + 0xffb86a) == 't')) ||
           ((uVar2 = *(ushort *)((int)_DAT_00ffa66c + (int)puVar3) >> 1,
            0xef < *(byte *)((short)uVar2 + 0xffb86a) || (*(char *)((short)uVar2 + 0xffb86a) == 't')
            ))) {
          DAT_00fffd06 = 0xff;
        }
        if (((ushort)(ushort *)(iVar5 + 2) < _DAT_00ff9920) &&
           (0xef < *(byte *)((short)(*(ushort *)(iVar5 + 2) >> 1) + 0xffb86a))) {
          DAT_00fffd09 = 0xff;
        }
        puVar3 = (ushort *)((int)_DAT_00ffa66c + (int)_DAT_00ffa66c + _DAT_00ffa66c + iVar5 + 2);
        if (((ushort)puVar3 < _DAT_00ff9920) &&
           ((uVar2 = *puVar3 >> 1, 0xef < *(byte *)((short)uVar2 + 0xffb86a) ||
            (*(char *)((short)uVar2 + 0xffb86a) == 'Q')))) {
          DAT_00fffd0a = 0xff;
        }
      }
    }
    return;
  }
  DAT_00fffd09 = 0;
  DAT_00fffd0a = 0;
  if (_DAT_00ffa6e6 == 0) {
    DAT_00fffd09 = 0;
    DAT_00fffd0a = 0;
    return;
  }
  uVar2 = (_DAT_00ffa678 + _DAT_00ffa67c) - 0x110;
  if ((short)uVar2 < 0) {
    DAT_00fffd09 = 0;
    DAT_00fffd0a = 0;
    return;
  }
  if ((ushort)(_DAT_00ffa674 - 0x30U) <= uVar2) {
    DAT_00fffd09 = 0;
    DAT_00fffd0a = 0;
    return;
  }
  uVar2 = (ushort)(_DAT_00ffa67a + _DAT_00ffa676) >> 4;
  puVar3 = (ushort *)
           ((int)(short)uVar2 +
           (int)(short)uVar2 +
           *(int *)(&DAT_00ffb548 +
                   (short)(((_DAT_00ffa678 + _DAT_00ffa67c) - 0x10aU & 0xfff0) >> 2)));
  DAT_00fffd03 = 0;
  DAT_00fffd04 = 0;
  DAT_00fffd05 = 0;
  bVar1 = *(byte *)((short)(*puVar3 >> 1) + 0xffb86a);
  if (((bVar1 < 0xf0) && (bVar1 != 0x75)) && (bVar1 != 0x4f)) {
    puVar4 = (ushort *)((int)_DAT_00ffa66c + (int)puVar3);
    bVar1 = *(byte *)((short)(*puVar4 >> 1) + 0xffb86a);
    if (((0xef < bVar1) || (bVar1 == 0x75)) || (bVar1 == 0x4f)) goto LAB_00249db6;
    if (((DAT_00fffcf8 != '\0') || (DAT_00fffcff == '\0')) || (_DAT_00ffa6ec < 0)) {
      puVar4 = (ushort *)((int)_DAT_00ffa66c + (int)puVar4);
      bVar1 = *(byte *)((short)(*puVar4 >> 1) + 0xffb86a);
      if (((0xef < bVar1) || (bVar1 == 0x75)) || (bVar1 == 0x4f)) goto LAB_00249db6;
    }
    bVar1 = *(byte *)((short)(puVar4[-1] >> 1) + 0xffb86a);
    if (((0xef < bVar1) || (bVar1 == 0x75)) || (bVar1 == 0x4f)) {
      DAT_00fffd04 = 0xff;
    }
    bVar1 = *(byte *)((short)(puVar4[-2] >> 1) + 0xffb86a);
    if (((0xef < bVar1) || (bVar1 == 0x75)) || (bVar1 == 0x4f)) {
      DAT_00fffd05 = 0xff;
    }
  }
  else {
LAB_00249db6:
    DAT_00fffd03 = 0xff;
  }
  DAT_00fffd06 = 0;
  DAT_00fffd07 = 0;
  DAT_00fffd08 = 0;
  bVar1 = *(byte *)((short)(puVar3[2] >> 1) + 0xffb86a);
  if (((bVar1 < 0xf0) && (bVar1 != 0x74)) && (bVar1 != 0x3f)) {
    puVar4 = (ushort *)((int)_DAT_00ffa66c + (int)(puVar3 + 2));
    bVar1 = *(byte *)((short)(*puVar4 >> 1) + 0xffb86a);
    if (((bVar1 < 0xf0) && (bVar1 != 0x74)) && (bVar1 != 0x3f)) {
      if (((DAT_00fffcf8 != '\0') || (DAT_00fffcff == '\0')) || (_DAT_00ffa6ec < 0)) {
        puVar4 = (ushort *)((int)_DAT_00ffa66c + (int)puVar4);
        bVar1 = *(byte *)((short)(*puVar4 >> 1) + 0xffb86a);
        if (((0xef < bVar1) || (bVar1 == 0x74)) || (bVar1 == 0x3f)) goto LAB_00249e9c;
      }
      bVar1 = *(byte *)((short)(puVar4[1] >> 1) + 0xffb86a);
      if (((0xef < bVar1) || (bVar1 == 0x74)) || (bVar1 == 0x3f)) {
        DAT_00fffd07 = 0xff;
      }
      bVar1 = *(byte *)((short)(puVar4[2] >> 1) + 0xffb86a);
      if (((0xef < bVar1) || (bVar1 == 0x74)) || (bVar1 == 0x3f)) {
        DAT_00fffd08 = 0xff;
      }
      goto LAB_00249ea2;
    }
  }
LAB_00249e9c:
  DAT_00fffd06 = 0xff;
LAB_00249ea2:
  puVar4 = (ushort *)((int)puVar3 + (2 - _DAT_00ffa66c));
  if (((ushort)puVar4 < _DAT_00ff9920) && (0xef < *(byte *)((short)(*puVar4 >> 1) + 0xffb86a))) {
    DAT_00fffd09 = 0xff;
  }
  puVar3 = (ushort *)
           ((int)puVar3 + (int)_DAT_00ffa66c + (int)_DAT_00ffa66c + (int)_DAT_00ffa66c + 2);
  if (((ushort)puVar3 < _DAT_00ff9920) && (0xef < *(byte *)((short)(*puVar3 >> 1) + 0xffb86a))) {
    DAT_00fffd0a = 0xff;
  }
  return;
}

undefined8 FUN_0024a03c(void) {
  short sVar1;
  undefined4 in_D0;
  undefined4 in_D1;
  short *in_A0;
  
  sVar1 = *in_A0;
  *in_A0 = (ushort)DAT_00ffa6cf << 3;
  FUN_00247a56();
  *in_A0 = sVar1;
  return CONCAT44(in_D0,in_D1);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024a086(void) {
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  byte bVar4;
  ushort uVar5;
  byte bVar6;
  short sVar7;
  ushort *puVar8;
  int extraout_A0;
  int extraout_A0_00;
  int extraout_A1;
  int extraout_A1_00;
  int extraout_A1_01;
  
  if (_DAT_00ffa6e6 == 0) {
    DAT_00fffcff = 0;
    return;
  }
  if (DAT_00fffddf != '\0') {
    if (((DAT_00ffa6d8 & 0x40) != 0) && (((short)_DAT_00ffa6ec < 0 || (_DAT_00ffa6ec < 0x1000)))) {
      _DAT_00ffa6ec = _DAT_00ffa6ec + 0x78;
    }
    return;
  }
  if (DAT_00fffd15 != '\0') {
    DAT_00fffcff = 0;
    return;
  }
  if (DAT_00fffdea == 'O') {
    DAT_00fffcff = 0xff;
    return;
  }
  if (DAT_00fffdea == 'F') {
    DAT_00fffcff = 0;
    return;
  }
  if (DAT_00fffdea == 'H') {
    DAT_00fffcff = 0;
    return;
  }
  if (DAT_00fffdea == 'G') {
    DAT_00fffcff = 0;
    return;
  }
  if (DAT_00fffdea == 'I') {
    if ((ushort)(_DAT_00ffa6ec + 0x78) < 0x800) {
      _DAT_00ffa6ec = _DAT_00ffa6ec + 0x78;
      DAT_00fffcff = 0;
      return;
    }
    DAT_00fffcff = 0;
    return;
  }
  if (DAT_00fffd0d != '\0') {
    return;
  }
  if (DAT_00ffff78 != '\0') {
    DAT_00fffcff = 0;
    return;
  }
  sVar1 = _DAT_00ffa678 + _DAT_00ffa67c;
  uVar3 = sVar1 - 0x100;
  if (((short)uVar3 < 0) || ((ushort)(_DAT_00ffa674 - 0x20U) <= uVar3)) goto LAB_0024a3ce;
  uVar2 = _DAT_00ffa67a + _DAT_00ffa676 & 0xf;
  uVar5 = (ushort)(_DAT_00ffa67a + _DAT_00ffa676 + 0x10U) >> 4;
  puVar8 = (ushort *)
           ((int)(short)uVar5 +
           (int)(short)uVar5 + *(int *)(&DAT_00ffb54c + (short)((uVar3 & 0xfff0) >> 2)));
  if (_DAT_00ff9920 <= (ushort)puVar8) goto LAB_0024a3ce;
  uVar3 = *puVar8;
  FUN_0024a4cc();
  DAT_00ffa6da = *(byte *)(extraout_A1 + (short)(uVar3 >> 1));
  bVar6 = (&DAT_00003d4b)[(short)(uVar2 + (ushort)DAT_00ffa6da * 0x10)] & 0x3f;
  sVar7 = sVar1 + -0x10;
  if (bVar6 == 0) {
    if (_DAT_00ff9920 <= (ushort)(ushort *)(_DAT_00ffa66c + extraout_A0)) goto LAB_0024a3ce;
    uVar3 = *(ushort *)(_DAT_00ffa66c + extraout_A0);
    FUN_0024a4cc();
    DAT_00ffa6da = *(byte *)(extraout_A1_00 + (short)(uVar3 >> 1));
    bVar6 = (&DAT_00003d4b)[(short)(uVar2 + (ushort)DAT_00ffa6da * 0x10)] & 0x3f;
    sVar7 = sVar1;
    if (bVar6 != 0) goto LAB_0024a20e;
    sVar7 = sVar1 + 0x10;
    if (_DAT_00ff9920 <= (ushort)(ushort *)(_DAT_00ffa66c + extraout_A0_00)) goto LAB_0024a3ce;
    uVar3 = *(ushort *)(_DAT_00ffa66c + extraout_A0_00);
    FUN_0024a4cc();
    DAT_00ffa6da = *(byte *)(extraout_A1_01 + (short)(uVar3 >> 1));
    bVar6 = (&DAT_00003d4b)[(short)(uVar2 + (ushort)DAT_00ffa6da * 0x10)] & 0x3f;
    if (bVar6 != 0) goto LAB_0024a20e;
  }
  else {
LAB_0024a20e:
    bVar4 = DAT_00fffd25;
    DAT_00ffa6da = (&DAT_00005af8)[(short)(ushort)DAT_00ffa6da];
    if (DAT_00fffcf7 != '\0') goto LAB_0024a3ce;
    DAT_00fffcff = bVar6;
    uVar3 = CONCAT11((char)((ushort)sVar7 >> 8),bVar6 - 1 | (byte)sVar7 & 0xf0) - _DAT_00ffa678;
    uVar2 = _DAT_00ffa67c;
    if (_DAT_00ffa67c == uVar3) {
LAB_0024a292:
      _DAT_00ffa67c = uVar2;
      if (DAT_00fffd0e != '\0') {
        if (((-1 < (short)_DAT_00ffa6ec) && (DAT_00ffa6da != '\0')) && (DAT_00ffa6da != '\0')) {
          if ((char)DAT_00ffa6da < '\0') {
            _DAT_00ffa6ea = _DAT_00ffa6ea - (_DAT_00ffa6ec >> 4);
            return;
          }
          _DAT_00ffa6ea = (_DAT_00ffa6ec >> 4) + _DAT_00ffa6ea;
          return;
        }
        DAT_00fffcff = 0;
        return;
      }
      if (DAT_00fffcf8 == '\0') {
        if (DAT_00fffd25 < 10) {
          return;
        }
        DAT_00fffd25 = 0;
        if (0x3b < bVar4) {
          if ((DAT_00fffd23 == '\0') && (_DAT_00ffa6f2 = 0x1ade98, 0xff < _DAT_00ffa6ec)) {
            _DAT_00ffa6f2 = 0x1ade88;
          }
          _DAT_00ffa6ec = 0;
          if (DAT_00fffd4b != '\0') {
            _DAT_00ffa6f2 = 0x1af594;
          }
          if (DAT_00fffdea != 'H') {
            DAT_00ffa709 = 0;
            DAT_00fffd0b = 0;
            DAT_00fffd25 = 0;
            _DAT_00fffcce = 0;
            return;
          }
          _DAT_00ffa6ec = 0;
          DAT_00fffd25 = 0;
          return;
        }
      }
      else if ((short)_DAT_00ffa6ec < 0) {
        DAT_00fffcff = 0;
        return;
      }
      DAT_00fffcf8 = 0;
      _DAT_00ffa6ec = 0;
      if (_DAT_00fffc82 == 0) {
        DAT_00fffd0b = '\0';
      }
      if (DAT_00fffd0b != '\0') {
        if (DAT_00fffd23 == '\0') {
          _DAT_00ffa6f2 = 0x1adf20;
          DAT_00ffa709 = 0;
          if (DAT_00fffd4b != '\0') {
            _DAT_00ffa6f2 = 0x1af5b8;
          }
        }
        if (DAT_00fffdea != 'F') {
          DAT_00fffbee = 0;
          return;
        }
        _DAT_00ffa6ec = 0;
        DAT_00fffcf8 = 0;
        return;
      }
      if (DAT_00fffd23 == '\0') {
        _DAT_00ffa6f2 = 0x1adf00;
        DAT_00ffa709 = 0;
        if (DAT_00fffd4b != '\0') {
          _DAT_00ffa6f2 = 0x1af594;
        }
      }
      if (DAT_00fffdea != 'F') {
        DAT_00fffbee = 0;
        return;
      }
      _DAT_00ffa6ec = 0;
      DAT_00fffcf8 = 0;
      return;
    }
    uVar2 = uVar3;
    if (_DAT_00ffa67c < uVar3) {
      if ((short)_DAT_00ffa6ec < 0) {
        DAT_00fffcff = 0xff;
        return;
      }
      if ((ushort)(uVar3 - _DAT_00ffa67c) < 0xe) {
        if ((DAT_00fffd0e != '\0') && (DAT_00fffc84 != '\0')) {
          DAT_00fffcff = 0xff;
          return;
        }
        goto LAB_0024a292;
      }
    }
    else if (((ushort)(_DAT_00ffa67c - uVar3) == 0xe) || ((ushort)(_DAT_00ffa67c - uVar3) < 0xe))
    goto LAB_0024a292;
  }
  DAT_00fffcff = 0;
LAB_0024a3ce:
  DAT_00ffa6da = 0;
  if ((DAT_00fffd0e != '\0') && (DAT_00fffc84 != '\0')) {
    DAT_00ffa6da = 0;
    DAT_00fffcff = 0;
    return;
  }
  if (((DAT_00fffcf8 == '\0') || (DAT_00fffcfa != '\0')) && (DAT_00fffd14 == '\0')) {
    if ((ushort)(_DAT_00ffa6ec + 0x78) < 0x800) {
      _DAT_00ffa67c = _DAT_00ffa67c + 1;
      _DAT_00ffa6ec = _DAT_00ffa6ec + 0x78;
    }
    if (DAT_00fffd0e != '\0') {
      DAT_00ffa6da = 0;
      DAT_00fffcff = 0;
      return;
    }
    if (DAT_00fffd25 != 0xff) {
      DAT_00fffd25 = DAT_00fffd25 + 1;
    }
    if (DAT_00fffd25 == 0x3c) {
      if ((DAT_00fffd23 == '\0') && (DAT_00fffdea != '\r')) {
        _DAT_00ffa6f2 = 0x1ade62;
        DAT_00ffa709 = 0;
      }
      return;
    }
  }
  return;
}

undefined8 FUN_0024a4c4(void) {
  short sVar1;
  undefined4 in_D0;
  undefined4 in_D1;
  short *unaff_A4;
  
  sVar1 = *unaff_A4;
  *unaff_A4 = (ushort)DAT_00ffa6cf << 3;
  FUN_00247a56();
  *unaff_A4 = sVar1;
  return CONCAT44(in_D0,in_D1);
}

void FUN_0024a4cc(void) {
  return;
}

undefined8 FUN_0024a4ce(void) {
  short sVar1;
  undefined4 in_D0;
  undefined4 in_D1;
  short *in_A0;
  
  sVar1 = *in_A0;
  *in_A0 = (ushort)DAT_00ffa6cf << 3;
  FUN_00247a56();
  *in_A0 = sVar1;
  return CONCAT44(in_D0,in_D1);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024a4f4(void) {
  byte bVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  byte bVar6;
  ushort uVar7;
  short sVar8;
  char *pcVar9;
  char *extraout_A0;
  ushort *puVar10;
  
  pcVar9 = &DAT_00ffa728;
  sVar8 = 0x24;
  do {
    if ((*pcVar9 != '\0') && (*(int *)(pcVar9 + 0x14) != 0)) {
      pcVar9[0x3d] = '\0';
      pcVar9[7] = pcVar9[7] & 0xef;
      if ((pcVar9[0x3c] & 8U) == 0) {
        if (((pcVar9[6] & 1U) != 0) && (*(int *)(pcVar9 + 0x14) != 0)) {
          if ((ushort)(_DAT_00ffa674 + 0x100U) < *(ushort *)(pcVar9 + 4)) {
LAB_0024a734:
            if ((pcVar9[0x3c] & 2U) == 0) {
              pcVar9[6] = pcVar9[6] & 0xfe;
              pcVar9[6] = pcVar9[6] | 0x40;
              goto LAB_0024a75c;
            }
          }
          else {
            uVar2 = *(ushort *)(pcVar9 + 4);
            if (0xff < uVar2) {
              uVar4 = *(ushort *)(pcVar9 + 2) & 0xf;
              uVar5 = (ushort)(*(ushort *)(pcVar9 + 2) + 0x10) >> 4;
              puVar10 = (ushort *)
                        ((int)(short)uVar5 +
                        (int)(short)uVar5 +
                        *(int *)(&DAT_00ffb548 + (short)((uVar2 - 0xf0 & 0xfff0) >> 2)));
              if ((ushort)puVar10 < _DAT_00ff9920) {
                uVar7 = *puVar10 >> 1;
                pcVar9[0x3d] = *(char *)((short)uVar7 + 0xffb86a);
                bVar1 = *(byte *)((short)uVar7 + 0xffb868);
                pcVar9[8] = bVar1;
                bVar6 = (&DAT_00003d4b)[(short)(uVar4 + (ushort)bVar1 * 0x10)] & 0x3f;
                uVar5 = uVar2 - 0x10;
                if (((&DAT_00003d4b)[(short)(uVar4 + (ushort)bVar1 * 0x10)] & 0x3f) == 0) {
                  bVar1 = *(byte *)((short)uVar7 + 0xffb869);
                  pcVar9[8] = bVar1;
                  bVar6 = (&DAT_00003d4b)[(short)(uVar4 + (ushort)bVar1 * 0x10)] & 0x3f;
                  if (((&DAT_00003d4b)[(short)(uVar4 + (ushort)bVar1 * 0x10)] & 0x3f) == 0) {
                    puVar10 = (ushort *)((int)_DAT_00ffa66c + (int)puVar10);
                    if (_DAT_00ff9920 <= (ushort)puVar10) goto LAB_0024a734;
                    uVar7 = *puVar10 >> 1;
                    bVar1 = *(byte *)((short)uVar7 + 0xffb868);
                    pcVar9[8] = bVar1;
                    bVar6 = (&DAT_00003d4b)[(short)(uVar4 + (ushort)bVar1 * 0x10)] & 0x3f;
                    uVar5 = uVar2;
                    if (((&DAT_00003d4b)[(short)(uVar4 + (ushort)bVar1 * 0x10)] & 0x3f) == 0) {
                      bVar1 = *(byte *)((short)uVar7 + 0xffb869);
                      pcVar9[8] = bVar1;
                      bVar6 = (&DAT_00003d4b)[(short)(uVar4 + (ushort)bVar1 * 0x10)] & 0x3f;
                      if (((&DAT_00003d4b)[(short)(uVar4 + (ushort)bVar1 * 0x10)] & 0x3f) == 0) {
                        uVar5 = uVar2 + 0x10;
                        if (_DAT_00ff9920 <= (ushort)(ushort *)((int)_DAT_00ffa66c + (int)puVar10))
                        goto LAB_0024a734;
                        uVar7 = *(ushort *)((int)_DAT_00ffa66c + (int)puVar10) >> 1;
                        bVar1 = *(byte *)((short)uVar7 + 0xffb868);
                        pcVar9[8] = bVar1;
                        bVar6 = (&DAT_00003d4b)[(short)(uVar4 + (ushort)bVar1 * 0x10)] & 0x3f;
                        if (((&DAT_00003d4b)[(short)(uVar4 + (ushort)bVar1 * 0x10)] & 0x3f) == 0) {
                          bVar1 = *(byte *)((short)uVar7 + 0xffb869);
                          pcVar9[8] = bVar1;
                          bVar6 = (&DAT_00003d4b)[(short)(uVar4 + (ushort)bVar1 * 0x10)] & 0x3f;
                          if (((&DAT_00003d4b)[(short)(uVar4 + (ushort)bVar1 * 0x10)] & 0x3f) == 0)
                          goto LAB_0024a74a;
                        }
                      }
                    }
                  }
                }
                pcVar9[0x3d] = *(char *)((short)uVar7 + 0xffb86a);
                if (-1 < *(short *)(pcVar9 + 0x1a)) {
                  pcVar9[0x1a] = '\0';
                  pcVar9[0x1b] = '\0';
                  *(ushort *)(pcVar9 + 4) = (ushort)(byte)(bVar6 - 1) + (uVar5 & 0xfff0);
                  pcVar9[7] = pcVar9[7] | 0x10;
                }
                goto LAB_0024a75c;
              }
              goto LAB_0024a734;
            }
          }
LAB_0024a74a:
          if ((pcVar9[6] & 0x80U) == 0) {
            *(short *)(pcVar9 + 4) = *(short *)(pcVar9 + 4) + 1;
            *(short *)(pcVar9 + 0x1a) = *(short *)(pcVar9 + 0x1a) + 0x78;
          }
        }
      }
      else if (((ushort)(_DAT_00ffa674 - 0x80U) != *(ushort *)(pcVar9 + 4)) &&
              (*(ushort *)(pcVar9 + 4) <= (ushort)(_DAT_00ffa674 - 0x80U))) {
        uVar2 = *(ushort *)(pcVar9 + 2) & 0xf;
        uVar4 = (ushort)(*(ushort *)(pcVar9 + 2) + 0x10) >> 4;
        puVar10 = (ushort *)
                  ((int)(short)uVar4 +
                  (int)(short)uVar4 +
                  *(int *)(&DAT_00ffb548 + (short)((*(short *)(pcVar9 + 4) - 0xf0U & 0xfff0) >> 2)))
        ;
        if (_DAT_00ff9920 <= (ushort)puVar10) goto LAB_0024a734;
        iVar3 = (int)(short)(*puVar10 >> 1);
        if (((((&DAT_00003d4b)[(short)(uVar2 + (ushort)*(byte *)(iVar3 + 0xffb868) * 0x10)] & 0x3f)
              != 0) ||
            (((&DAT_00003d4b)[(short)(uVar2 + (ushort)*(byte *)(iVar3 + 0xffb869) * 0x10)] & 0x3f)
             != 0)) || (bVar1 = *(byte *)(iVar3 + 0xffb86a), pcVar9[0x3d] = bVar1, 0xef < bVar1)) {
          FUN_0024ae7a();
          FUN_00253eaa();
          pcVar9 = extraout_A0;
        }
      }
    }
LAB_0024a75c:
    pcVar9 = pcVar9 + 0x56;
    sVar8 = sVar8 + -1;
    if (sVar8 == -1) {
      return;
    }
  } while( true );
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024a766(void) {
  char *pcVar1;
  ushort uVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  short sVar6;
  char *pcVar7;
  char *extraout_A1;
  char *extraout_A1_00;
  char *extraout_A1_01;
  bool bVar8;
  
  DAT_00fffd3d = '\0';
  DAT_00ffa662 = 0xff;
  _DAT_00ffa65a = 0x24aaec;
  _DAT_00ffa65e = 0x24aaf0;
  pcVar7 = &DAT_00ffa6d2;
  sVar6 = 0x25;
  do {
    if (*pcVar7 != '\0') {
      DAT_00fffd3d = DAT_00fffd3d + '\x01';
      _DAT_00fffcbc = *(undefined2 *)(pcVar7 + 2);
      _DAT_00fffcbe = *(undefined2 *)(pcVar7 + 4);
      if (*(int *)(pcVar7 + 0x14) != 0) {
        if ((*(code **)(pcVar7 + 0x42) != (code *)0x0) &&
           ((**(code **)(pcVar7 + 0x42))(), pcVar7 = extraout_A1, *extraout_A1 == '\0'))
        goto LAB_0024ab0c;
        if (*pcVar7 == -0x7b) goto LAB_0024aa4e;
        if ((((pcVar7[6] & 8U) == 0) &&
            (((((ushort)(*(short *)(pcVar7 + 4) - 0x88U) < _DAT_00ffa678 ||
               ((ushort)(_DAT_00ffa678 + 0x158) < (ushort)(*(short *)(pcVar7 + 4) - 0x100U))) ||
              ((ushort)(*(short *)(pcVar7 + 2) + 0x78U) < _DAT_00ffa676)) ||
             ((ushort)(_DAT_00ffa676 + 0x1b8) < *(ushort *)(pcVar7 + 2))))) &&
           ((pcVar7[0x3c] & 2U) == 0)) {
          if ((pcVar7[0x3c] & 0x40U) == 0) {
            FUN_0024ab16();
            pcVar7 = extraout_A1_00;
          }
          else {
            if (_DAT_00fffc86 != (undefined1 *)0x0) {
              *_DAT_00fffc86 = 0;
              FUN_0024ae7a();
              FUN_0024ab3a();
            }
            if (_DAT_00fffc8a != (undefined1 *)0x0) {
              *_DAT_00fffc8a = 0;
              FUN_0024ae7a();
            }
            if (_DAT_00fffc8e != (undefined1 *)0x0) {
              *_DAT_00fffc8e = 0;
              FUN_0024ae7a();
            }
            if (_DAT_00fffc92 != (undefined1 *)0x0) {
              *_DAT_00fffc92 = 0;
              FUN_0024ae7a();
            }
            if (_DAT_00fffc96 != (undefined1 *)0x0) {
              *_DAT_00fffc96 = 0;
              FUN_0024ae7a();
            }
          }
          goto LAB_0024aaf0;
        }
        if (*pcVar7 == '@') {
          uVar2 = *(ushort *)(pcVar7 + 0x18);
          if (uVar2 != 0) {
            if ((short)uVar2 < 0) {
              if ((ushort)-uVar2 < 8) goto LAB_0024a916;
              *(short *)(pcVar7 + 2) = (short)(char)(pcVar7[0x18] + '\x01') + *(short *)(pcVar7 + 2)
              ;
              bVar8 = CARRY2(*(short *)(pcVar7 + 0x18) * -0x100,_DAT_00fffd18);
              _DAT_00fffd18 = *(short *)(pcVar7 + 0x18) * -0x100 + _DAT_00fffd18;
              if (bVar8) {
                *(short *)(pcVar7 + 2) = *(short *)(pcVar7 + 2) + -1;
              }
              *(short *)(pcVar7 + 0x18) = *(short *)(pcVar7 + 0x18) + 8;
            }
            else if (uVar2 < 8) {
LAB_0024a916:
              pcVar7[0x18] = '\0';
              pcVar7[0x19] = '\0';
            }
            else {
              *(short *)(pcVar7 + 2) = (short)pcVar7[0x18] + *(short *)(pcVar7 + 2);
              bVar8 = CARRY2(*(short *)(pcVar7 + 0x18) * 0x100,_DAT_00fffd18);
              _DAT_00fffd18 = *(short *)(pcVar7 + 0x18) * 0x100 + _DAT_00fffd18;
              if (bVar8) {
                *(short *)(pcVar7 + 2) = *(short *)(pcVar7 + 2) + 1;
              }
              *(short *)(pcVar7 + 0x18) = *(short *)(pcVar7 + 0x18) + -8;
            }
          }
          uVar2 = *(ushort *)(pcVar7 + 0x1a);
          if (uVar2 != 0) {
            if ((short)uVar2 < 0) {
              if ((ushort)-uVar2 < 8) goto LAB_0024a97e;
              *(short *)(pcVar7 + 4) = (short)(char)(pcVar7[0x1a] + '\x01') + *(short *)(pcVar7 + 4)
              ;
              bVar8 = CARRY2(*(short *)(pcVar7 + 0x1a) * -0x100,_DAT_00fffd1a);
              _DAT_00fffd1a = *(short *)(pcVar7 + 0x1a) * -0x100 + _DAT_00fffd1a;
              if (bVar8) {
                *(short *)(pcVar7 + 4) = *(short *)(pcVar7 + 4) + -1;
              }
              *(short *)(pcVar7 + 0x1a) = *(short *)(pcVar7 + 0x1a) + 8;
            }
            else if (uVar2 < 8) {
LAB_0024a97e:
              pcVar7[0x1a] = '\0';
              pcVar7[0x1b] = '\0';
            }
            else {
              *(short *)(pcVar7 + 4) = (short)pcVar7[0x1a] + *(short *)(pcVar7 + 4);
              bVar8 = CARRY2(*(short *)(pcVar7 + 0x1a) * 0x100,_DAT_00fffd1a);
              _DAT_00fffd1a = *(short *)(pcVar7 + 0x1a) * 0x100 + _DAT_00fffd1a;
              if (bVar8) {
                *(short *)(pcVar7 + 4) = *(short *)(pcVar7 + 4) + 1;
              }
              *(short *)(pcVar7 + 0x1a) = *(short *)(pcVar7 + 0x1a) + -8;
            }
          }
        }
        else {
          uVar2 = *(ushort *)(pcVar7 + 0x18);
          if (uVar2 != 0) {
            if ((short)uVar2 < 0) {
              if ((ushort)-uVar2 < 0x28) goto LAB_0024a9e0;
              *(short *)(pcVar7 + 2) = (short)(char)(pcVar7[0x18] + '\x01') + *(short *)(pcVar7 + 2)
              ;
              if ((pcVar7[0x3c] & 1U) == 0) {
                *(short *)(pcVar7 + 0x18) = *(short *)(pcVar7 + 0x18) + 0x28;
              }
            }
            else if (uVar2 < 0x28) {
LAB_0024a9e0:
              pcVar7[0x18] = '\0';
              pcVar7[0x19] = '\0';
            }
            else {
              *(short *)(pcVar7 + 2) = (short)pcVar7[0x18] + *(short *)(pcVar7 + 2);
              if ((pcVar7[0x3c] & 1U) == 0) {
                *(short *)(pcVar7 + 0x18) = *(short *)(pcVar7 + 0x18) + -0x28;
              }
            }
          }
          if ((pcVar7[6] & 0x40U) != 0) {
            *(short *)(pcVar7 + 0x1a) = *(short *)(pcVar7 + 0x1a) + 0x78;
          }
          uVar2 = *(ushort *)(pcVar7 + 0x1a);
          if (uVar2 != 0) {
            if ((short)uVar2 < 0) {
              if ((ushort)-uVar2 < 0x3c) goto LAB_0024aa4a;
              *(short *)(pcVar7 + 4) = (short)(char)(pcVar7[0x1a] + '\x01') + *(short *)(pcVar7 + 4)
              ;
              if ((pcVar7[0x3c] & 1U) == 0) {
                *(short *)(pcVar7 + 0x1a) = *(short *)(pcVar7 + 0x1a) + 0x3c;
              }
            }
            else if (uVar2 < 0x3c) {
LAB_0024aa4a:
              pcVar7[0x1a] = '\0';
              pcVar7[0x1b] = '\0';
            }
            else {
              *(short *)(pcVar7 + 4) = (short)pcVar7[0x1a] + *(short *)(pcVar7 + 4);
              if ((pcVar7[0x3c] & 1U) == 0) {
                *(short *)(pcVar7 + 0x1a) = *(short *)(pcVar7 + 0x1a) + -0x3c;
              }
            }
          }
        }
LAB_0024aa4e:
        pcVar1 = *(char **)(pcVar7 + 10);
        if ((pcVar1 != (char *)0x0) && ((pcVar7[6] & 2U) == 0)) {
          if (*pcVar7 == -0x7b) {
            cVar4 = *pcVar1;
            *(short *)(pcVar7 + 2) = (short)cVar4 + *(short *)(pcVar7 + 2);
            _DAT_00ffa67a = cVar4 + _DAT_00ffa67a;
            cVar4 = pcVar1[1];
            *(short *)(pcVar7 + 4) = (short)cVar4 + *(short *)(pcVar7 + 4);
            _DAT_00ffa67c = cVar4 + _DAT_00ffa67c;
          }
          else {
            sVar5 = (short)*pcVar1;
            if (pcVar7[9] != '\0') {
              sVar5 = -sVar5;
            }
            *(short *)(pcVar7 + 2) = sVar5 + *(short *)(pcVar7 + 2);
            sVar5 = (short)pcVar1[1];
            if (pcVar7[0x35] != '\0') {
              sVar5 = -sVar5;
            }
            if (((sVar5 < 0) || ((pcVar7[6] & 1U) == 0)) || ((pcVar7[7] & 0x10U) == 0)) {
              *(short *)(pcVar7 + 4) = sVar5 + *(short *)(pcVar7 + 4);
            }
          }
          if (pcVar7[0x36] == '\0') {
            while ((bVar3 = pcVar1[2], 0x7f < bVar3 && (bVar3 < 0x95))) {
              (**(code **)((int)&PTR_LAB_00005978 + (int)(short)((ushort)(byte)(bVar3 + 0x80) * 4)))
                        ();
              pcVar7 = extraout_A1_01;
            }
            *(char **)(pcVar7 + 10) = pcVar1 + 2;
          }
          else {
            pcVar7[0x36] = pcVar7[0x36] + -1;
          }
        }
      }
LAB_0024aaf0:
      pcVar7[0x1c] = (char)*(undefined2 *)(pcVar7 + 2) - (char)_DAT_00fffcbc;
      pcVar7[0x1d] = (char)*(undefined2 *)(pcVar7 + 4) - (char)_DAT_00fffcbe;
    }
LAB_0024ab0c:
    pcVar7 = pcVar7 + 0x56;
    sVar6 = sVar6 + -1;
    if (sVar6 == -1) {
      return;
    }
  } while( true );
}

void FUN_0024ab16(void) {
  undefined1 *in_A1;
  int extraout_A1;
  
  *in_A1 = 0;
  FUN_0024ae7a();
  FUN_0024ab3a();
  if (*(int *)(extraout_A1 + 0x3e) != 0) {
    **(undefined1 **)(extraout_A1 + 0x3e) = 0;
    FUN_0024ae7a(extraout_A1);
    FUN_0024ab3a();
  }
  return;
}

void FUN_0024ab3a(void) {
  int in_A1;
  
  if (((*(byte *)(in_A1 + 6) & 0x20) != 0) && (*(char *)(in_A1 + 0x34) != '\0')) {
    *(undefined1 *)(*(short *)(in_A1 + 0x32) + 0xffb86b) = *(undefined1 *)(in_A1 + 0x34);
  }
  return;
}

// WARNING: Removing unreachable block (ram,0x0024abcc)
// WARNING: Removing unreachable block (ram,0x0024ac0c)
// WARNING: Removing unreachable block (ram,0x0024ac18)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024ab5c(void) {
  if ((((DAT_00fffcfd == '\0') && (DAT_00ffff98 != '\x02')) && ((DAT_00ffa6cf & 1) == 0)) &&
     (_DAT_00fffdb8 != 0)) {
    do {
    } while( true );
  }
  return;
}

// WARNING: Removing unreachable block (ram,0x0024abcc)
// WARNING: Removing unreachable block (ram,0x0024ac0c)
// WARNING: Removing unreachable block (ram,0x0024ac18)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024ab7e(void) {
  if (_DAT_00fffdb8 == 0) {
    return;
  }
  do {
  } while( true );
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024ac2c(void) {
  _DAT_00fffbdc = (&PTR_DAT_0025bbe4)[(uint)DAT_00ffa692 * 0x10];
  FUN_0024ca9c();
  return;
}

void FUN_0024ac50(void) {
  return;
}

void FUN_0024ac6a(void) {
  if (DAT_00ffff9f != '\0') {
    FUN_002cbcfc((&DAT_0025bbde)[(uint)DAT_00ffa692 * 0x40]);
  }
  return;
}

void FUN_0024ac98(void) {
  short sVar1;
  undefined1 *puVar2;
  
  sVar1 = 0xcc3;
  puVar2 = &DAT_00ffa6d2;
  do {
    *puVar2 = 0;
    sVar1 = sVar1 + -1;
    puVar2 = puVar2 + 1;
  } while (sVar1 != -1);
  return;
}

void FUN_0024acaa(void) {
  short sVar1;
  undefined1 *puVar2;
  
  sVar1 = 0xc6d;
  puVar2 = &DAT_00ffa728;
  do {
    *puVar2 = 0;
    sVar1 = sVar1 + -1;
    puVar2 = puVar2 + 1;
  } while (sVar1 != -1);
  return;
}

void FUN_0024acbc(void) {
  FUN_0024acd2();
  return;
}

void FUN_0024acc8(void) {
  short sVar1;
  char *pcVar2;
  char *extraout_A1;
  
  pcVar2 = &DAT_00ffa728;
  sVar1 = 0x24;
  do {
    if (*pcVar2 != '\0') {
      *pcVar2 = '\0';
      FUN_0024ae7a();
      pcVar2 = extraout_A1;
      if (((extraout_A1[6] & 0x20U) != 0) && (extraout_A1[0x34] != '\0')) {
        *(char *)(*(short *)(extraout_A1 + 0x32) + 0xffb86b) = extraout_A1[0x34];
      }
    }
    pcVar2 = pcVar2 + 0x56;
    sVar1 = sVar1 + -1;
  } while (sVar1 != -1);
  return;
}

void FUN_0024acd2(void) {
  short unaff_D4w;
  char *in_A1;
  char *extraout_A1;
  
  do {
    if (*in_A1 != '\0') {
      *in_A1 = '\0';
      FUN_0024ae7a();
      in_A1 = extraout_A1;
      if (((extraout_A1[6] & 0x20U) != 0) && (extraout_A1[0x34] != '\0')) {
        *(char *)(*(short *)(extraout_A1 + 0x32) + 0xffb86b) = extraout_A1[0x34];
      }
    }
    in_A1 = in_A1 + 0x56;
    unaff_D4w = unaff_D4w + -1;
  } while (unaff_D4w != -1);
  return;
}

void FUN_0024ad06(void) {
  short sVar1;
  char *pcVar2;
  
  pcVar2 = &DAT_00ffa7d4;
  sVar1 = 0x15;
  do {
    if (*pcVar2 == '\0') {
      return;
    }
    pcVar2 = pcVar2 + 0x56;
    sVar1 = sVar1 + -1;
  } while (sVar1 != -1);
  return;
}

void FUN_0024ad10(void) {
  short in_D0w;
  char *unaff_A5;
  
  do {
    if (*unaff_A5 == '\0') {
      return;
    }
    unaff_A5 = unaff_A5 + 0x56;
    in_D0w = in_D0w + -1;
  } while (in_D0w != -1);
  return;
}

void FUN_0024ad1e(void) {
  short sVar1;
  char *pcVar2;
  
  pcVar2 = &DAT_00ffb23e;
  sVar1 = 3;
  do {
    if (*pcVar2 == '\0') {
      return;
    }
    pcVar2 = pcVar2 + 0x56;
    sVar1 = sVar1 + -1;
  } while (sVar1 != -1);
  return;
}

void FUN_0024ad36(void) {
  short sVar1;
  char *pcVar2;
  
  pcVar2 = &DAT_00ffa728;
  sVar1 = 0x19;
  do {
    if (*pcVar2 == '\0') {
      return;
    }
    pcVar2 = pcVar2 + 0x56;
    sVar1 = sVar1 + -1;
  } while (sVar1 != -1);
  return;
}

void FUN_0024ad4e(void) {
  short sVar1;
  char *pcVar2;
  
  pcVar2 = &DAT_00ffaf8e;
  sVar1 = 0x19;
  do {
    if (*pcVar2 == '\0') {
      return;
    }
    pcVar2 = pcVar2 + -0x56;
    sVar1 = sVar1 + -1;
  } while (sVar1 != -1);
  return;
}

void FUN_0024ad66(void) {
  short sVar1;
  char *pcVar2;
  
  pcVar2 = &DAT_00ffae36;
  sVar1 = 0x15;
  do {
    if (*pcVar2 == '\0') {
      return;
    }
    pcVar2 = pcVar2 + -0x56;
    sVar1 = sVar1 + -1;
  } while (sVar1 != -1);
  return;
}

void FUN_0024ad96(void) {
  short sVar1;
  char *pcVar2;
  
  pcVar2 = &DAT_00ffafe4;
  sVar1 = 7;
  do {
    if (*pcVar2 == '\0') {
      return;
    }
    pcVar2 = pcVar2 + 0x56;
    sVar1 = sVar1 + -1;
  } while (sVar1 != -1);
  return;
}

void FUN_0024adae(void) {
  char in_D0b;
  short sVar1;
  char *pcVar2;
  
  pcVar2 = &DAT_00ffafe4;
  sVar1 = 10;
  do {
    if (in_D0b == *pcVar2) {
      return;
    }
    pcVar2 = pcVar2 + 0x56;
    sVar1 = sVar1 + -1;
  } while (sVar1 != -1);
  return;
}

void FUN_0024adba(void) {
  char in_D0b;
  short sVar1;
  char *pcVar2;
  
  pcVar2 = &DAT_00ffa728;
  sVar1 = 0x19;
  do {
    if (in_D0b == *pcVar2) {
      return;
    }
    pcVar2 = pcVar2 + 0x56;
    sVar1 = sVar1 + -1;
  } while (sVar1 != -1);
  return;
}

void FUN_0024add2(void) {
  short sVar1;
  
  sVar1 = 0x19;
  do {
    sVar1 = sVar1 + -1;
  } while (sVar1 != -1);
  return;
}

void FUN_0024adf6(void) {
  undefined1 *unaff_A5;
  undefined1 *unaff_A6;
  
  *unaff_A5 = *unaff_A6;
  unaff_A5[1] = unaff_A6[1];
  unaff_A5[6] = unaff_A6[2];
  unaff_A5[7] = unaff_A6[3];
  unaff_A5[8] = 0;
  unaff_A5[9] = unaff_A6[5];
  *(undefined4 *)(unaff_A5 + 10) = *(undefined4 *)(unaff_A6 + 6);
  unaff_A5[0x13] = 0;
  *(undefined4 *)(unaff_A5 + 0x14) = 0;
  *(undefined2 *)(unaff_A5 + 0x18) = 0;
  *(undefined2 *)(unaff_A5 + 0x1a) = 0;
  unaff_A5[0x1c] = 0;
  unaff_A5[0x1d] = 0;
  *(undefined2 *)(unaff_A5 + 0x1e) = *(undefined2 *)(unaff_A6 + 10);
  *(undefined4 *)(unaff_A5 + 0x20) = *(undefined4 *)(unaff_A6 + 0xc);
  unaff_A5[0x29] = unaff_A6[0x10];
  *(undefined4 *)(unaff_A5 + 0x2a) = 0;
  *(undefined4 *)(unaff_A5 + 0x2e) = 0;
  *(undefined2 *)(unaff_A5 + 0x32) = 0;
  unaff_A5[0x34] = 0;
  unaff_A5[0x35] = unaff_A6[0x11];
  unaff_A5[0x36] = 0;
  unaff_A5[0x37] = 0;
  unaff_A5[0x3c] = unaff_A6[0x12];
  unaff_A5[0x3d] = 0;
  *(undefined4 *)(unaff_A5 + 0x3e) = 0;
  *(undefined4 *)(unaff_A5 + 0x42) = *(undefined4 *)(unaff_A6 + 0x14);
  unaff_A5[0x46] = 0;
  *(undefined4 *)(unaff_A5 + 0x48) = 0;
  *(undefined2 *)(unaff_A5 + 0x50) = 0;
  *(undefined2 *)(unaff_A5 + 0x52) = 0;
  unaff_A5[0x54] = 0;
  return;
}

undefined2 FUN_0024ae7a(void) {
  undefined2 in_D0w;
  ushort uVar1;
  int in_A1;
  undefined1 *puVar2;
  
  puVar2 = *(undefined1 **)(in_A1 + 0x2a);
  if (puVar2 != (undefined1 *)0x0) {
    *(undefined4 *)(in_A1 + 0x2a) = 0;
    *(undefined4 *)(in_A1 + 0x2e) = 0;
    uVar1 = (ushort)*(byte *)(in_A1 + 0x29);
    *(undefined1 *)(in_A1 + 0x29) = 0;
    do {
      *puVar2 = 0;
      uVar1 = uVar1 - 1;
      puVar2 = puVar2 + 1;
    } while (uVar1 != 0xffff);
  }
  return in_D0w;
}

undefined2 FUN_0024aed6(void) {
  undefined2 in_D0w;
  ushort uVar1;
  int unaff_A2;
  undefined1 *puVar2;
  
  puVar2 = *(undefined1 **)(unaff_A2 + 0x2a);
  if (puVar2 != (undefined1 *)0x0) {
    *(undefined4 *)(unaff_A2 + 0x2a) = 0;
    *(undefined4 *)(unaff_A2 + 0x2e) = 0;
    uVar1 = (ushort)*(byte *)(unaff_A2 + 0x29);
    *(undefined1 *)(unaff_A2 + 0x29) = 0;
    do {
      *puVar2 = 0;
      uVar1 = uVar1 - 1;
      puVar2 = puVar2 + 1;
    } while (uVar1 != 0xffff);
  }
  return in_D0w;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024af04(void) {
  char cVar1;
  short sVar2;
  short sVar3;
  undefined4 in_D0;
  uint uVar4;
  undefined4 in_D1;
  uint uVar5;
  undefined4 uVar6;
  short sVar7;
  ushort uVar8;
  ushort *puVar9;
  
  sVar3 = _DAT_00ffa66c;
  _DAT_00fffdcc = 0xfff0;
  _DAT_00fffdce = 0xf0;
  uVar4 = CONCAT31((int3)(CONCAT22((short)((uint)in_D0 >> 0x10),_DAT_00ffa686) >> 8),
                   (char)_DAT_00ffa686) & 0xfffffff0;
  _DAT_00ffa698 = (undefined2)uVar4;
  uVar8 = _DAT_00ffa688 & 0xfff0;
  sVar7 = 0xf;
  puVar9 = _DAT_00ffa694;
  do {
    cVar1 = *(char *)((short)(*puVar9 >> 1) + 0xffb86b);
    uVar6 = CONCAT31((int3)((uint)in_D1 >> 8),cVar1);
    if (cVar1 != '\0') {
      uVar5 = CONCAT22((short)((uint)in_D1 >> 0x10),(short)uVar6) & 0xffff00ff;
      sVar2 = (short)uVar5 << 2;
      uVar6 = CONCAT22((short)(uVar5 >> 0x10),sVar2);
      _DAT_00ffa69a = uVar8;
      (**(code **)((int)&PTR_LAB_00005178 + (int)sVar2))(uVar4,uVar6,*puVar9 >> 1,cVar1);
    }
    puVar9 = (ushort *)((int)sVar3 + (int)puVar9);
    uVar8 = uVar8 + 0x10;
    sVar7 = sVar7 + -1;
    in_D1 = uVar6;
  } while (sVar7 != -1);
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024af0e(void) {
  char cVar1;
  short sVar2;
  short sVar3;
  undefined4 in_D0;
  uint uVar4;
  undefined4 in_D1;
  uint uVar5;
  undefined4 uVar6;
  short sVar7;
  ushort uVar8;
  ushort *puVar9;
  
  sVar3 = _DAT_00ffa66c;
  _DAT_00fffdcc = 0x150;
  _DAT_00fffdce = 0xf0;
  uVar4 = CONCAT31((int3)(CONCAT22((short)((uint)in_D0 >> 0x10),_DAT_00ffa686) >> 8),
                   (char)_DAT_00ffa686) & 0xfffffff0;
  _DAT_00ffa698 = (undefined2)uVar4;
  uVar8 = _DAT_00ffa688 & 0xfff0;
  sVar7 = 0xf;
  puVar9 = _DAT_00ffa694;
  do {
    cVar1 = *(char *)((short)(*puVar9 >> 1) + 0xffb86b);
    uVar6 = CONCAT31((int3)((uint)in_D1 >> 8),cVar1);
    if (cVar1 != '\0') {
      uVar5 = CONCAT22((short)((uint)in_D1 >> 0x10),(short)uVar6) & 0xffff00ff;
      sVar2 = (short)uVar5 << 2;
      uVar6 = CONCAT22((short)(uVar5 >> 0x10),sVar2);
      _DAT_00ffa69a = uVar8;
      (**(code **)((int)&PTR_LAB_00005178 + (int)sVar2))(uVar4,uVar6,*puVar9 >> 1,cVar1);
    }
    puVar9 = (ushort *)((int)sVar3 + (int)puVar9);
    uVar8 = uVar8 + 0x10;
    sVar7 = sVar7 + -1;
    in_D1 = uVar6;
  } while (sVar7 != -1);
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024af86(void) {
  char cVar1;
  short sVar2;
  undefined4 in_D0;
  uint uVar3;
  undefined4 in_D1;
  uint uVar4;
  undefined4 uVar5;
  short sVar6;
  undefined4 unaff_D5;
  ushort uVar7;
  undefined4 unaff_D7;
  ushort *puVar8;
  
  _DAT_00fffdce = 0xf0;
  _DAT_00fffdcc = 0xfff0;
  uVar3 = CONCAT31((int3)(CONCAT22((short)((uint)in_D0 >> 0x10),_DAT_00ffa688) >> 8),
                   (char)_DAT_00ffa688) & 0xfffffff0;
  _DAT_00ffa69a = (undefined2)uVar3;
  uVar7 = _DAT_00ffa686 & 0xfff0;
  sVar6 = 0x16;
  puVar8 = _DAT_00ffa694;
  do {
    cVar1 = *(char *)((short)(*puVar8 >> 1) + 0xffb86b);
    uVar5 = CONCAT31((int3)((uint)in_D1 >> 8),cVar1);
    if (cVar1 != '\0') {
      uVar4 = CONCAT22((short)((uint)in_D1 >> 0x10),(short)uVar5) & 0xffff00ff;
      sVar2 = (short)uVar4 << 2;
      uVar5 = CONCAT22((short)(uVar4 >> 0x10),sVar2);
      _DAT_00ffa698 = uVar7;
      (**(code **)((int)&PTR_LAB_00005178 + (int)sVar2))
                (uVar3,uVar5,*puVar8 >> 1,cVar1,sVar6,unaff_D5,uVar7,unaff_D7);
    }
    uVar7 = uVar7 + 0x10;
    sVar6 = sVar6 + -1;
    in_D1 = uVar5;
    puVar8 = puVar8 + 1;
  } while (sVar6 != -1);
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024af90(void) {
  char cVar1;
  short sVar2;
  undefined4 in_D0;
  uint uVar3;
  undefined4 in_D1;
  uint uVar4;
  undefined4 uVar5;
  short sVar6;
  undefined4 unaff_D5;
  ushort uVar7;
  undefined4 unaff_D7;
  ushort *puVar8;
  
  _DAT_00fffdce = 0x1e0;
  _DAT_00fffdcc = 0xfff0;
  uVar3 = CONCAT31((int3)(CONCAT22((short)((uint)in_D0 >> 0x10),_DAT_00ffa688) >> 8),
                   (char)_DAT_00ffa688) & 0xfffffff0;
  _DAT_00ffa69a = (undefined2)uVar3;
  uVar7 = _DAT_00ffa686 & 0xfff0;
  sVar6 = 0x16;
  puVar8 = _DAT_00ffa694;
  do {
    cVar1 = *(char *)((short)(*puVar8 >> 1) + 0xffb86b);
    uVar5 = CONCAT31((int3)((uint)in_D1 >> 8),cVar1);
    if (cVar1 != '\0') {
      uVar4 = CONCAT22((short)((uint)in_D1 >> 0x10),(short)uVar5) & 0xffff00ff;
      sVar2 = (short)uVar4 << 2;
      uVar5 = CONCAT22((short)(uVar4 >> 0x10),sVar2);
      _DAT_00ffa698 = uVar7;
      (**(code **)((int)&PTR_LAB_00005178 + (int)sVar2))
                (uVar3,uVar5,*puVar8 >> 1,cVar1,sVar6,unaff_D5,uVar7,unaff_D7);
    }
    uVar7 = uVar7 + 0x10;
    sVar6 = sVar6 + -1;
    in_D1 = uVar5;
    puVar8 = puVar8 + 1;
  } while (sVar6 != -1);
  return;
}

undefined4 FUN_0024b000(void) {
  undefined4 in_D0;
  
  FUN_0024b00e();
  return in_D0;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024b00e(void) {
  byte unaff_D7b;
  byte bVar1;
  
  if (((((DAT_00fffd23 == '\0') && (DAT_00fffe02 == '\0')) && (DAT_00fffdea != '>')) &&
      ((DAT_00fffd21 == '\0' && (DAT_00fffd24 == '\0')))) && (DAT_00fffd28 == '\0')) {
    if (((-1 < _DAT_00ffa6ec) && (DAT_00fffddf == '\0')) &&
       ((DAT_00fffcff != '\0' && ((DAT_00fffd14 == '\0' && (DAT_00fffd11 != '`')))))) {
      if (DAT_00fffd4b == '\0') {
        _DAT_00ffa6f2 = 0x1aec22;
        DAT_00fffdea = '>';
      }
      else {
        _DAT_00ffa6f2 = 0x1aec94;
      }
      DAT_00ffa709 = 0;
      DAT_00fffd0b = 0;
      _DAT_00ffa6ea = 0;
      _DAT_00ffa6ec = 0;
    }
    DAT_00fffbec = 0;
    if (DAT_00ffff9c != '\0') {
      FUN_0024d448();
      bVar1 = unaff_D7b & 3;
      if (bVar1 == 3) {
        bVar1 = 1;
      }
      FUN_002cbd12(bVar1 + 0x6b);
      FUN_002cbcfc();
    }
    FUN_0024b3dc();
  }
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024b124(void) {
  if ((((DAT_00fffd23 == '\0') && (DAT_00fffdea != '>')) && (DAT_00fffd21 == '\0')) &&
     ((DAT_00fffd24 == '\0' && (DAT_00fffd28 == '\0')))) {
    if ((-1 < _DAT_00ffa6ec) && ((DAT_00fffcff != '\0' && (DAT_00fffd14 == '\0')))) {
      if (DAT_00fffd4b == '\0') {
        _DAT_00ffa6f2 = 0x1aecc6;
      }
      else {
        _DAT_00ffa6f2 = 0x1aec94;
      }
      DAT_00ffa709 = 0;
      DAT_00fffd0b = 0;
      _DAT_00ffa6ea = 0;
      _DAT_00ffa6ec = 0;
    }
    DAT_00fffbec = 0;
    FUN_0024b3ce();
    FUN_0024b3ce();
    if (DAT_00ffa6ab != '\0') {
      FUN_0024b3ce();
      FUN_0024b3ce();
      if (DAT_00ffa6ab != '\x01') {
        FUN_0024b3ce();
        FUN_0024b3ce();
      }
    }
  }
  return;
}

void FUN_0024b1ea(void) {
  DAT_00fffbf3 = 0;
  DAT_00fffbf4 = 0x31;
  DAT_00fffbf5 = 0x30;
  DAT_00fffbf6 = 0x30;
  DAT_00fffbf7 = 0x30;
  DAT_00fffbf8 = 0;
  return;
}

void FUN_0024b20c(void) {
  DAT_00ffa6c8 = 0x35;
  if ((DAT_00ffa6ab != '\0') && (DAT_00ffa6c8 = 0x33, DAT_00ffa6ab != '\x01')) {
    DAT_00ffa6c8 = 0x32;
  }
  DAT_00ffa6c9 = 0;
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024b23c(void) {
  char *pcVar1;
  
  if (_DAT_00fffdc6 < 0) {
    if (_DAT_00fffbf4 == 0x30303030) {
      _DAT_00fffdc6 = 0;
      return;
    }
    _DAT_00fffdc6 = _DAT_00fffdc6 + 1;
    pcVar1 = &DAT_00fffbf7;
    if (DAT_00fffbf7 != '\0') {
      if (DAT_00fffbf7 != '0') {
        _DAT_00fffbf4 = CONCAT31(_DAT_00fffbf4,DAT_00fffbf7 + -1);
        return;
      }
      do {
        pcVar1 = pcVar1 + -1;
        if (*pcVar1 == '\0') goto LAB_0024b274;
      } while (*pcVar1 == '0');
      *pcVar1 = *pcVar1 + -1;
      while (pcVar1 = pcVar1 + 1, *pcVar1 != '\0') {
        *pcVar1 = '9';
      }
    }
  }
  else if (_DAT_00fffdc6 != 0) {
    if (_DAT_00fffbf4 == 0x35303030) {
      _DAT_00fffdc6 = 0;
      return;
    }
    _DAT_00fffdc6 = _DAT_00fffdc6 + -1;
    for (pcVar1 = &DAT_00fffbf7; *pcVar1 != '\0'; pcVar1 = pcVar1 + -1) {
      if (*pcVar1 != '9') {
        *pcVar1 = *pcVar1 + '\x01';
        break;
      }
      *pcVar1 = '0';
    }
  }
LAB_0024b274:
  if (((_DAT_00fffdc6 == 0) && (_DAT_00fffbf4 < 0x30313030)) && ((DAT_00ffa6cf & 0xf) == 0)) {
    _DAT_00fffdc6 = 1;
    return;
  }
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024b2ec(void) {
  char *pcVar1;
  
  if (_DAT_00fffdc8 < 0) {
    if (_DAT_00fffbfc == 0x30303030) {
      DAT_00fffd21 = 10;
      _DAT_00fffdc8 = 0;
      return;
    }
    _DAT_00fffdc8 = _DAT_00fffdc8 + 1;
    pcVar1 = &DAT_00fffbff;
    if (DAT_00fffbff != '\0') {
      if (DAT_00fffbff != '0') {
        _DAT_00fffbfc = CONCAT31(_DAT_00fffbfc,DAT_00fffbff + -1);
        return;
      }
      do {
        pcVar1 = pcVar1 + -1;
        if (*pcVar1 == '\0') goto LAB_0024b324;
      } while (*pcVar1 == '0');
      *pcVar1 = *pcVar1 + -1;
      while (pcVar1 = pcVar1 + 1, *pcVar1 != '\0') {
        *pcVar1 = '9';
      }
    }
  }
  else if (_DAT_00fffdc8 != 0) {
    pcVar1 = &DAT_00fffbff;
    if (_DAT_00fffbfc == 0x30313030) {
      _DAT_00fffdc8 = 0;
      return;
    }
    _DAT_00fffdc8 = _DAT_00fffdc8 + -1;
    for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + -1) {
      if (*pcVar1 != '9') {
        *pcVar1 = *pcVar1 + '\x01';
        break;
      }
      *pcVar1 = '0';
    }
  }
LAB_0024b324:
  if (((DAT_00fffddf == '\0') && (_DAT_00fffbfc == 0x30303030)) && (DAT_00fffd21 == '\0')) {
    DAT_00fffd21 = 0xc;
    return;
  }
  return;
}

void FUN_0024b3aa(void) {
  DAT_00fffbfb = 0;
  DAT_00fffbfc = 0x30;
  DAT_00fffbfd = 0x31;
  DAT_00fffbfe = 0x30;
  DAT_00fffbff = 0x30;
  DAT_00fffc00 = 0;
  return;
}

undefined4 FUN_0024b3ce(void) {
  undefined4 in_D0;
  
  FUN_0024b3dc();
  return in_D0;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024b3dc(void) {
  short in_D0w;
  
  if ((((DAT_00fffd24 == '\0') && (DAT_00fffd21 == '\0')) && (DAT_00ffa6aa == '\0')) &&
     (DAT_00fffd28 == '\0')) {
    if (DAT_00fffddf != '\0') {
      _DAT_00fffdc8 = _DAT_00fffdc8 - in_D0w;
      DAT_00fffd28 = 0x78;
      return;
    }
    _DAT_00fffdc8 = _DAT_00fffdc8 - in_D0w;
    DAT_00fffd28 = 'K';
  }
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024b42c(void) {
  if ((((DAT_00fffd24 == '\0') && (DAT_00fffd21 == '\0')) && (DAT_00ffa6aa == '\0')) &&
     (DAT_00fffd28 == '\0')) {
    _DAT_00fffdc8 = _DAT_00fffdc8 + -10;
  }
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024b47a(void) {
  _DAT_00ffa68a = _DAT_00ffa67a + (_DAT_00ffa676 & 0xf);
  _DAT_00ffa68c = _DAT_00ffa67c + (_DAT_00ffa678 & 0xf);
  _DAT_00ffa68e = _DAT_00ffa676 & 0xfff0;
  _DAT_00ffa690 = _DAT_00ffa678 & 0xfff0;
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024b4c8(void) {
  _DAT_00ffa67a = _DAT_00ffa68a;
  _DAT_00ffa67c = _DAT_00ffa68c;
  _DAT_00ffa676 = _DAT_00ffa68e;
  _DAT_00ffa678 = _DAT_00ffa690;
  _DAT_00ffa682 = _DAT_00ffa68a + _DAT_00ffa68e;
  _DAT_00ffa6d4 = _DAT_00ffa68a + _DAT_00ffa68e;
  _DAT_00ffa684 = _DAT_00ffa68c + _DAT_00ffa690;
  _DAT_00ffa6d6 = _DAT_00ffa68c + _DAT_00ffa690;
  _DAT_00fffcd0 = 0;
  _DAT_00fffcd2 = 0;
  _DAT_00ffa686 = _DAT_00ffa68e;
  _DAT_00ffa688 = _DAT_00ffa690;
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024b638(void) {
  short sVar1;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 extraout_A0_02;
  undefined4 extraout_A1;
  int iVar2;
  int extraout_A1_00;
  undefined2 extraout_A1w;
  undefined2 extraout_A1w_00;
  char cVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  if (DAT_00ffa6d0 != '\0') {
    FUN_002cbd3e();
    FUN_0024cc9a();
    _DAT_00c00004 = 0x8b00;
    FUN_0024c5f6();
    DAT_00fffde5 = 0;
    FUN_0024d2c0();
    FUN_0024d7c8();
    DAT_00fffd28 = 0;
    FUN_0024acbc();
    FUN_0024ca12();
    FUN_0024d8dc();
    FUN_0024d8dc();
    _DAT_00ffa676 = 0x80;
    _DAT_00ffa678 = 0;
    DAT_00fffd9a = 0xff;
    uVar6 = 0xb8dc;
    FUN_0024adf6();
    _DAT_00ffa72a = 0x120;
    _DAT_00ffa72c = 0x1c2;
    FUN_0024c4e4();
    uVar7 = 0xa728;
    FUN_0024cd32(0xa728);
    FUN_0024cb08();
    uVar4 = FUN_0024cb2c();
    if (DAT_00ffff9f != '\0') {
      uVar6 = 0xb8dc;
      FUN_002cbd12(0xf,uVar4,extraout_A0,extraout_A1,0xb8dc);
      FUN_002cbcfc();
    }
    iVar2 = CONCAT22(0xff,uVar7);
    do {
      FUN_0024cd3a((short)iVar2);
      DAT_00fffc83 = 0;
      cVar3 = '\x01';
      FUN_0024d6fe();
      DAT_00fffc83 = -cVar3;
      DAT_00fffc82 = 0;
      cVar3 = '\x01';
      uVar4 = FUN_0024d708();
      DAT_00fffc82 = -cVar3;
      if (DAT_00fffc83 != '\0') {
        _DAT_00ffa748 = &DAT_001b00dc;
        DAT_00ffa75f = 0;
        uVar7 = (undefined2)extraout_A1_00;
        uVar5 = extraout_A0_00;
        FUN_002cbd3e(uVar4,extraout_A0_00,uVar7,uVar6);
        if (DAT_00ffff9f != '\0') {
          FUN_002cbd12(0x11,uVar4,uVar5,uVar7,uVar6);
          FUN_002cbcfc();
        }
        DAT_00ffa731 = 0xff;
        sVar1 = 400;
        do {
          FUN_0024cd3a();
          sVar1 = sVar1 + -1;
        } while (sVar1 != -1);
        uVar4 = FUN_0024cc9a();
        DAT_00fffd9a = 0;
        FUN_002cbd3e(uVar4,extraout_A0_01,extraout_A1w,uVar6);
        FUN_002456d6();
        return;
      }
      iVar2 = extraout_A1_00;
    } while (DAT_00fffc82 == '\0');
    *(undefined **)(extraout_A1_00 + 0x20) = &DAT_001b5fb8;
    *(undefined1 *)(extraout_A1_00 + 0x37) = 0;
    _DAT_00ffa748 = &DAT_001ae5ba;
    DAT_00ffa75f = 0;
    _DAT_00ffa732 = &DAT_001ac9a2;
    DAT_00ffa75e = 0;
    DAT_00ffa731 = 0;
    FUN_0024b20c();
    FUN_0024b3aa();
    FUN_0024d8fc();
    DAT_00ffa6d0 = DAT_00ffa6d0 + -1;
    sVar1 = 0x78;
    do {
      FUN_0024cd3a();
      sVar1 = sVar1 + -1;
    } while (sVar1 != -1);
    uVar4 = FUN_0024cc9a();
    DAT_00fffd9a = 0;
    FUN_002cbd3e(uVar4,extraout_A0_02,extraout_A1w_00,uVar6);
  }
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint FUN_0024b840(void) {
  byte bVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  uint uVar6;
  short sVar7;
  short sVar8;
  undefined4 extraout_A0;
  char *pcVar9;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 extraout_A1;
  char *pcVar10;
  undefined4 extraout_A1_00;
  undefined4 extraout_A1_01;
  undefined4 unaff_A6;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 uVar13;
  char cVar14;
  undefined8 uVar15;
  
  bVar1 = DAT_00ffff7a ^ 0xff;
  uVar6 = DAT_00ffff7a ^ 0xff;
  if (DAT_00ff9941 == 0xff) {
    if (bVar1 != 0) {
      return uVar6;
    }
    DAT_00ff9941 = 0;
    return uVar6;
  }
  if (bVar1 != 0) {
    (&DAT_00ff9942)[(short)(ushort)DAT_00ff9941] =
         bVar1 | (&DAT_00ff9942)[(short)(ushort)DAT_00ff9941];
    DAT_00ff9940 = 0xb4;
    return uVar6;
  }
  if ((&DAT_00ff9942)[(short)(ushort)DAT_00ff9941] == '\0') {
    if (DAT_00ff9940 == '\0') {
      uVar6 = FUN_0024bad6();
      return uVar6;
    }
    DAT_00ff9940 = DAT_00ff9940 + -1;
    return uVar6;
  }
  DAT_00ff9941 = DAT_00ff9941 + 1;
  if (DAT_00ff9941 != '\b') {
    DAT_00ff9940 = 0xb4;
    return uVar6;
  }
  sVar7 = 0x2e;
  pcVar10 = &DAT_0000c372;
  while( true ) {
    pcVar9 = &DAT_00ff9942;
    cVar14 = *pcVar10;
    bVar4 = false;
    sVar8 = 7;
    pcVar10 = pcVar10 + 1;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      cVar3 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      if (cVar3 != cVar2) {
        bVar4 = true;
      }
      sVar8 = sVar8 + -1;
    } while (sVar8 != -1);
    if (!bVar4) break;
    sVar7 = sVar7 + -1;
    if (sVar7 == -1) {
      uVar6 = FUN_0024bad6();
      return uVar6;
    }
  }
  uVar15 = FUN_0024bad6();
  if (cVar14 == -1) {
    FUN_0024d7ea();
    FUN_0024ca00();
    FUN_0024ca12();
    FUN_0024790a();
    FUN_0024cf2a();
    puVar11 = &stack0x00000004;
LAB_002457aa:
    do {
      *(undefined4 *)(puVar11 + -4) = 0x2457b0;
      FUN_0024d2c0();
      *(undefined4 *)(puVar11 + -4) = 0x2457b4;
      FUN_0024b3aa();
      *(undefined4 *)(puVar11 + -4) = 0x2457b8;
      FUN_0024b1ea();
      *(undefined4 *)(puVar11 + -4) = 0x2457bc;
      FUN_0024b20c();
      _DAT_00c00004 = 0x8c81;
      *(undefined4 *)(puVar11 + -4) = 0x2457ca;
      FUN_0024ca00();
      *(undefined4 *)(puVar11 + -4) = 0x2457d0;
      FUN_0024ca12();
      *(undefined4 *)(puVar11 + -4) = 0x2457d6;
      FUN_0024d282();
      *(undefined4 *)(puVar11 + -4) = 0x2457dc;
      FUN_002513f8();
      *(undefined4 *)(puVar11 + -4) = 0x2457e0;
      FUN_0024acc8();
      if (DAT_00ffff98 == '\x01') {
        DAT_00ffa6cf = '\0';
        _DAT_00ffa6bc = 0xbc614e;
      }
      *(undefined4 *)(puVar11 + -4) = 0x245800;
      flush_vram_fifo();
      *(undefined4 *)(puVar11 + -4) = 0x245804;
      FUN_0024b47a();
      *(undefined4 *)(puVar11 + -4) = 0x245808;
      FUN_00247940();
      *(undefined4 *)(puVar11 + -4) = 0x24580c;
      FUN_0024811e();
      *(undefined4 *)(puVar11 + -4) = 0x245810;
      uVar15 = FUN_00248330();
      *(undefined4 *)(puVar11 + -4) = unaff_A6;
      *(undefined4 *)(puVar11 + -8) = extraout_A1;
      *(undefined4 *)(puVar11 + -0xc) = extraout_A0;
      *(undefined8 *)(puVar11 + -0x14) = uVar15;
      *(undefined4 *)(puVar11 + -0x18) = 0x24581a;
      FUN_002cbd3e();
      unaff_A6 = *(undefined4 *)(puVar11 + -4);
      *(undefined4 *)(puVar11 + -4) = 0x245822;
      FUN_0024ac6a();
      DAT_00ffa6cf = -1;
      *(undefined4 *)(puVar11 + -4) = 0x24582c;
      apply_scroll_offsets();
      *(undefined4 *)(puVar11 + -4) = 0x245832;
      FUN_0024bda8();
      *(undefined4 *)(puVar11 + -4) = 0x245836;
      FUN_00249178();
      *(undefined4 *)(puVar11 + -4) = 0x24583a;
      FUN_0024847e();
      *(undefined4 *)(puVar11 + -4) = 0x24583e;
      FUN_0024910a();
      *(undefined4 *)(puVar11 + -4) = 0x245842;
      FUN_00248430();
      *(undefined4 *)(puVar11 + -4) = 0x245846;
      FUN_0024801c();
      *(undefined4 *)(puVar11 + -4) = 0x24584a;
      FUN_0024ab5c();
      *(undefined4 *)(puVar11 + -4) = 0x24584e;
      FUN_0024ac2c();
      puVar12 = puVar11;
      while( true ) {
        *(undefined4 *)(puVar12 + -4) = 0x245854;
        FUN_00258b04();
        uVar13 = DAT_00fffdec == '\0';
        puVar11 = puVar12;
        if (!(bool)uVar13) {
          while( true ) {
            *(undefined4 *)(puVar12 + -4) = 0x245874;
            FUN_0024d476();
            do {
              *(undefined4 *)(puVar12 + -4) = 0x24587a;
              uVar5 = FUN_0024d98a();
            } while (!(bool)uVar13);
            puVar11 = puVar12 + -4;
            *(undefined4 *)(puVar12 + -4) = uVar5;
            *(undefined4 *)(puVar12 + -8) = 0x245884;
            FUN_002cbd12();
            if (DAT_00fffdec == '\0') break;
            *(uint *)(puVar12 + -8) = (uint)DAT_00fffdeb;
            uVar13 = DAT_00fffdeb == 0;
            *(undefined4 *)(puVar12 + -0xc) = 0x24586e;
            FUN_002cbcfc();
            puVar12 = puVar12 + -4;
          }
        }
        DAT_00ffa6cf = DAT_00ffa6cf + '\x01';
        DAT_00ffff67 = DAT_00ffff67 + -1;
        if (DAT_00ffff67 < '\0') {
          DAT_00ffff67 = '\x05';
        }
        *(undefined4 *)(puVar11 + -4) = 0x2458a8;
        wait_for_user_input();
        *(undefined4 *)(puVar11 + -4) = 0x2458ac;
        apply_scroll_offsets();
        *(undefined4 *)(puVar11 + -4) = 0x2458b0;
        FUN_0024a086();
        *(undefined4 *)(puVar11 + -4) = 0x2458b4;
        apply_scroll_offsets();
        *(undefined4 *)(puVar11 + -4) = 0x2458b8;
        FUN_00249c56();
        *(undefined4 *)(puVar11 + -4) = 0x2458bc;
        FUN_0024a766();
        *(undefined4 *)(puVar11 + -4) = 0x2458c0;
        FUN_0024a4f4();
        *(undefined4 *)(puVar11 + -4) = 0x2458c4;
        FUN_00248c3a();
        if (DAT_00ffa6cd != '\0') break;
        DAT_00fffc85 = 0;
        cVar14 = '\x01';
        *(undefined4 *)(puVar11 + -4) = 0x2458da;
        FUN_0024d6f4();
        DAT_00fffc85 = -cVar14;
        DAT_00fffc84 = 0;
        cVar14 = '\x01';
        *(undefined4 *)(puVar11 + -4) = 0x2458ec;
        FUN_0024d6ea();
        DAT_00fffc84 = -cVar14;
        DAT_00fffc83 = 0;
        cVar14 = '\x01';
        *(undefined4 *)(puVar11 + -4) = 0x2458fe;
        FUN_0024d6fe();
        DAT_00fffc83 = -cVar14;
        DAT_00fffc82 = 0;
        cVar14 = '\x01';
        *(undefined4 *)(puVar11 + -4) = 0x245910;
        FUN_0024d708();
        DAT_00fffc82 = -cVar14;
        *(undefined4 *)(puVar11 + -4) = 0x24591c;
        FUN_0024bce4();
        *(undefined4 *)(puVar11 + -4) = 0x245920;
        FUN_00247210();
        *(undefined4 *)(puVar11 + -4) = 0x245924;
        set_vram_tiles();
        *(undefined4 *)(puVar11 + -4) = 0x245928;
        update_controller_state();
        *(undefined4 *)(puVar11 + -4) = 0x24592c;
        initialize_input_state();
        *(undefined4 *)(puVar11 + -4) = 0x245930;
        apply_scroll_offsets();
        *(undefined4 *)(puVar11 + -4) = 0x245934;
        FUN_00247b2c();
        *(undefined4 *)(puVar11 + -4) = 0x245938;
        render_menu_text();
        *(undefined4 *)(puVar11 + -4) = 0x24593c;
        apply_palette_colors();
        *(undefined4 *)(puVar11 + -4) = 0x245940;
        FUN_00248e58();
        *(undefined4 *)(puVar11 + -4) = 0x245944;
        FUN_00248f7e();
        *(undefined4 *)(puVar11 + -4) = 0x245948;
        fade_out_sequence();
        *(undefined4 *)(puVar11 + -4) = 0x24594c;
        no_op();
        *(undefined4 *)(puVar11 + -4) = 0x245950;
        FUN_0024b23c();
        *(undefined4 *)(puVar11 + -4) = 0x245954;
        FUN_0024b2ec();
        *(undefined4 *)(puVar11 + -4) = 0x245958;
        apply_scroll_offsets();
        *(undefined4 *)(puVar11 + -4) = 0x24595c;
        update_menu_animation();
        *(undefined4 *)(puVar11 + -4) = 0x245960;
        FUN_00249168();
        *(undefined4 *)(puVar11 + -4) = 0x245964;
        FUN_0024847e();
        *(undefined4 *)(puVar11 + -4) = 0x24596a;
        FUN_0024c9c8();
        *(undefined4 *)(puVar11 + -4) = 0x245970;
        FUN_0024d5c0();
        *(undefined4 *)(puVar11 + -4) = 0x245974;
        FUN_0024801c();
        *(undefined4 *)(puVar11 + -4) = 0x245978;
        FUN_0024910a();
        *(undefined4 *)(puVar11 + -4) = 0x24597c;
        FUN_00248430();
        *(undefined4 *)(puVar11 + -4) = 0x245980;
        FUN_0024ab5c();
        *(undefined4 *)(puVar11 + -4) = 0x245984;
        FUN_00247fd2();
        *(undefined4 *)(puVar11 + -4) = 0x245988;
        update_menu_cursor();
        puVar12 = puVar11;
      }
      *(undefined4 *)(puVar11 + -4) = 0x24d6a2;
      FUN_0024acbc();
      *(undefined4 *)(puVar11 + -4) = 0x24d6a6;
      FUN_0024cc9a();
      *(undefined4 *)(puVar11 + -4) = 0x24d6aa;
      FUN_0024cb8c();
      *(undefined4 *)(puVar11 + -4) = 0x24d6ae;
      poll_vdp_ready();
      *(undefined4 *)(puVar11 + -4) = 0x24d6b2;
      FUN_0024d744();
      DAT_00ffff98 = '\0';
      *(undefined4 *)(puVar11 + -4) = 0x2457aa;
      FUN_00259dfe();
    } while( true );
  }
  if (DAT_00ffff9c != '\0') {
    FUN_002cbd12(0x25,uVar15,extraout_A0_00,extraout_A1_00);
    FUN_002cbcfc();
  }
  uVar15 = FUN_0024d2d2();
  uVar6 = (uint)((ulonglong)uVar15 >> 0x20);
  if (cVar14 != -0x10) {
    if (cVar14 != -0xf) {
      if (cVar14 != -0xe) {
        if (cVar14 != -0xd) {
          if (cVar14 != -0xc) {
            if (cVar14 != -0xb) {
              if (cVar14 == -10) {
LAB_0024ba24:
                if (DAT_00ffff9c != '\0') {
                  FUN_002cbd12(0x6e,uVar15,extraout_A0_01,extraout_A1_01,unaff_A6);
                  FUN_002cbcfc();
                }
                DAT_00fffded = 9;
                DAT_00fffbf2 = 0xff;
                return uVar6;
              }
              if (cVar14 == -9) {
                if (DAT_00ffff75 == '\0') {
                  DAT_00ffff75 = -1;
                  goto LAB_0024ba24;
                }
              }
              else {
                if (cVar14 != -8) {
                  if (cVar14 != -7) {
                    if (cVar14 == -4) {
                      DAT_00ffa6aa = DAT_00ffa6aa ^ 0xff;
                      return uVar6;
                    }
                    if (cVar14 == -3) {
                      DAT_00ff993d = 0xff;
                      DAT_00fffd5a = 0;
                      DAT_00fffd5b = 0;
                      DAT_00fffd5c = 0;
                      DAT_00fffde3 = 0;
                      return uVar6;
                    }
                    if (cVar14 == -2) {
                      DAT_00fffd24 = 0xff;
                      uVar6 = FUN_0024d2d2();
                      return uVar6;
                    }
                    if (cVar14 == -5) {
                      uVar6 = FUN_0024c11a();
                      return uVar6;
                    }
                    FUN_0024cba0();
                    FUN_0024acbc();
                    FUN_0024cb8c();
                    FUN_0024ac98();
                    puVar11 = &stack0x00000004;
                    DAT_00ffa692 = cVar14;
                    goto LAB_002457aa;
                  }
                  if (DAT_00ffff76 != '\0') {
                    return uVar6;
                  }
                  DAT_00ffff76 = -1;
                }
                if (DAT_00ffa6d0 != '\x05') {
                  DAT_00ffa6d0 = DAT_00ffa6d0 + '\x01';
                  return uVar6;
                }
              }
              return uVar6;
            }
            if (DAT_00ffff74 != '\0') {
              return uVar6;
            }
            DAT_00ffff74 = -1;
          }
          if (DAT_00ffff9c != '\0') {
            FUN_002cbd12(100,uVar15,extraout_A0_01,extraout_A1_01,unaff_A6);
            FUN_002cbcfc();
          }
          _DAT_00fffbf4 = 0x31303030;
          return uVar6;
        }
        if (DAT_00ffff73 != '\0') {
          return uVar6;
        }
        DAT_00ffff73 = -1;
      }
      uVar6 = FUN_0024b3aa();
      return uVar6;
    }
    if (DAT_00ffff72 != '\0') {
      return uVar6;
    }
    DAT_00ffff72 = -1;
  }
  uVar6 = FUN_00253da0();
  return uVar6;
}

void FUN_0024bad6(void) {
  short sVar1;
  undefined1 *puVar2;
  
  DAT_00ff9940 = 0xb4;
  DAT_00ff9941 = 0xff;
  sVar1 = 7;
  puVar2 = &DAT_00ff9942;
  do {
    *puVar2 = 0;
    sVar1 = sVar1 + -1;
    puVar2 = puVar2 + 1;
  } while (sVar1 != -1);
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024baf8(void) {
  undefined4 in_D0;
  undefined4 in_D1;
  short sVar1;
  undefined4 in_A0;
  undefined4 extraout_A0;
  undefined2 in_A1w;
  undefined2 extraout_A1w;
  bool bVar2;
  undefined8 uVar3;
  
  uVar3 = CONCAT44(in_D0,in_D1);
  if ((DAT_00fffdf9 == '\0') && (uVar3 = CONCAT44(in_D0,in_D1), DAT_00fffd15 != '\0')) {
    uVar3 = FUN_0024bbe0();
    in_A0 = extraout_A0;
    in_A1w = extraout_A1w;
  }
  FUN_002cbd3e(uVar3,in_A0,in_A1w);
  FUN_0024cc9a();
  _DAT_00c00004 = 0x8b00;
  DAT_00fffd28 = 0;
  if (DAT_00fffbf1 != '\0') {
    DAT_00fffde5 = 0;
    FUN_0024d2c0();
    FUN_0024c5f6();
    FUN_0024ca74();
    FUN_0024acbc();
    FUN_0024cb8c();
    FUN_0024ca12();
    FUN_0024d8dc();
    FUN_0024d8dc();
    FUN_0024adf6();
    _DAT_00ffa72a = 0xe7;
    _DAT_00ffa72c = 0x13b;
    FUN_0024cd32();
    FUN_0024caca();
    sVar1 = 299;
    while( true ) {
      FUN_0024cd3a();
      bVar2 = sVar1 == 0;
      FUN_0024d71c();
      if (((bVar2) || (FUN_0024d726(), bVar2)) || (FUN_0024d712(), bVar2)) break;
      FUN_0024d6e0();
      if ((bVar2) || (sVar1 = sVar1 + -1, sVar1 == -1)) break;
    }
  }
  FUN_0024cc9a();
  FUN_0024acbc();
  FUN_0024cb8c();
  return;
}

void FUN_0024bbe0(void) {
  FUN_0024bbe6();
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024bbe6(void) {
  short sVar1;
  undefined4 extraout_A0;
  undefined4 in_A1;
  int extraout_A1;
  undefined2 extraout_A1w;
  int unaff_A5;
  bool bVar2;
  undefined8 uVar3;
  undefined2 uStack_8;
  undefined2 uVar4;
  
  uStack_8 = (undefined2)((uint)in_A1 >> 0x10);
  uVar4 = (undefined2)in_A1;
  FUN_002cbd3e();
  bVar2 = CONCAT22(uStack_8,uVar4) == 0;
  FUN_0024ad06(uVar4);
  if (!bVar2) {
    DAT_00ffa8d6 = 0;
    FUN_0024ae7a();
    unaff_A5 = extraout_A1;
  }
  uVar4 = 0xba14;
  if (DAT_00fffbf1 == 0) {
    uVar4 = 0xba2c;
  }
  FUN_0024adf6();
  *(undefined2 *)(unaff_A5 + 2) = _DAT_00ffa682;
  *(undefined2 *)(unaff_A5 + 4) = _DAT_00ffa684;
  DAT_00ffa6d2 = 0;
  uVar3 = FUN_0024ae7a();
  if (DAT_00fffbf1 == 0) {
    if (DAT_00ffff9f != '\0') {
      FUN_002cbd12(0x11,uVar3,extraout_A0,extraout_A1w,uVar4);
      FUN_002cbcfc();
    }
  }
  else if (DAT_00ffff9f != '\0') {
    FUN_002cbd12(0xe,uVar3,extraout_A0,extraout_A1w,uVar4);
    FUN_002cbcfc();
  }
  sVar1 = 600;
  do {
    FUN_0024cd3a();
    sVar1 = sVar1 + -1;
  } while (sVar1 != -1);
  if (1 < DAT_00fffbf1) {
    FUN_0024c526();
  }
  FUN_0024cc9a();
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024bce4(void) {
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  
  if (((DAT_00fffdea != 'I') && (DAT_00fffe02 == '\0')) && (_DAT_00ffa6e6 != 0)) {
    DAT_00fffd13 = 0;
    DAT_00fffd0e = 0;
    if (((DAT_00fffd11 != '`') &&
        (uVar1 = (_DAT_00ffa678 + _DAT_00ffa67c) - 0xf0, -1 < (short)uVar1)) &&
       ((uVar1 < _DAT_00ffa674 &&
        (uVar2 = (ushort)(_DAT_00ffa67a + _DAT_00ffa676 + 0x10U) >> 4,
        puVar3 = (ushort *)
                 ((int)(short)uVar2 +
                 (int)(short)uVar2 + *(int *)(&DAT_00ffb548 + (short)((uVar1 & 0xfff0) >> 2))),
        (ushort)puVar3 < _DAT_00ff9920)))) {
      DAT_00fffd01 = *(char *)((short)(*puVar3 >> 1) + 0xffb86a);
      if (DAT_00fffd01 != 'D') {
        DAT_00fffd00 = 0;
      }
      if (DAT_00fffd01 != '\0') {
        return;
      }
    }
  }
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024bda8(void) {
  if (DAT_00ffa692 != '\v') {
    if (DAT_00ffa692 == '\x0e') {
      _DAT_00ffa6f2 = (undefined *)0x1ade62;
      DAT_00ffa709 = 0;
      return;
    }
    DAT_00fffd25 = 0x38;
    if (DAT_00ffa692 == '\a') {
      _DAT_00ffa748 = &DAT_001b41c6;
      DAT_00ffa75f = 0;
    }
    DAT_00ffa709 = 0;
    if (DAT_00fffdf9 == '\0') {
      if (DAT_00fffddf != '\0') {
        _DAT_00ffa6f2 = &DAT_001afbc4;
        return;
      }
      if (DAT_00fffd15 == '\0') {
        if (DAT_00fffd4b != '\0') {
          _DAT_00ffa6f2 = &DAT_001af4d2;
          return;
        }
        _DAT_00ffa6f2 = (undefined *)0x1ae08c;
      }
      else {
        _DAT_00ffa6f2 = (undefined *)0x1aef46;
      }
      return;
    }
  }
  _DAT_00ffa6f2 = (undefined *)0x1af290;
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024be54(void) {
  DAT_00ffa709 = 0;
  if (DAT_00fffddf != '\0') {
    _DAT_00ffa6f2 = &DAT_001afbc4;
    return;
  }
  if (DAT_00fffd15 != '\0') {
    _DAT_00ffa6f2 = (undefined *)0x1aef46;
    return;
  }
  _DAT_00ffa6f2 = &DAT_001ae0aa;
  if (DAT_00fffd4b != '\0') {
    _DAT_00ffa6f2 = &DAT_001af4d2;
  }
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024bea0(void) {
  if (DAT_00fffd4b != '\0') {
    _DAT_00ffa6f2 = (undefined *)0x1af528;
    DAT_00ffa709 = 0;
    _DAT_00fffcce = 1;
    return;
  }
  _DAT_00ffa6f2 = &DAT_001ae556;
  DAT_00ffa709 = 0;
  _DAT_00fffcce = 3;
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024c11a(void) {
  short sVar1;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined2 *puVar2;
  undefined4 extraout_A0_02;
  undefined2 extraout_A1w;
  undefined2 extraout_A1w_00;
  undefined2 extraout_A1w_01;
  undefined2 *puVar3;
  undefined2 extraout_A1w_02;
  undefined2 unaff_A6w;
  bool bVar4;
  undefined8 uVar5;
  undefined2 uVar6;
  
  FUN_0024cba0();
  FUN_0024acbc();
  FUN_0024cb8c();
  _DAT_00c00004 = 0x8b00;
  _DAT_00fffdb8 = 0;
  _DAT_00fffdc0 = 0;
  FUN_0024c5f6();
  DAT_00fffde5 = 0;
  FUN_0024d2c0();
  FUN_0024d7c8();
  DAT_00fffd28 = 0;
  FUN_0024ca12();
  FUN_0024d8dc();
  FUN_0024d8dc();
  FUN_0024cd32();
  FUN_0024cb68();
  uVar5 = FUN_0024cb2c();
  if (DAT_00ffff9c != '\0') {
    FUN_002cbd12(0x26,uVar5,extraout_A0,extraout_A1w);
    FUN_002cbcfc();
  }
  sVar1 = 0xef;
  while( true ) {
    FUN_0024cd3a();
    bVar4 = sVar1 == 0;
    FUN_0024d71c();
    if (((bVar4) || (FUN_0024d726(), bVar4)) || (FUN_0024d712(), bVar4)) break;
    FUN_0024d6e0();
    if ((bVar4) || (sVar1 = sVar1 + -1, sVar1 == -1)) break;
  }
  uVar5 = FUN_0024cc9a();
  FUN_002cbd3e(uVar5,extraout_A0_00,extraout_A1w_00,unaff_A6w);
  FUN_0024ca00();
  FUN_0024d8dc();
  FUN_0024d8dc();
  FUN_0024adf6();
  _DAT_00ffa72a = 0x20;
  _DAT_00ffa72c = 400;
  FUN_0024adf6();
  _DAT_00ffa780 = 0x168;
  _DAT_00ffa782 = 0x17b;
  FUN_0024adf6();
  _DAT_00ffa7d6 = 0x152;
  _DAT_00ffa7d8 = 0x8d;
  FUN_0024adf6();
  _DAT_00ffa882 = 0x165;
  _DAT_00ffa884 = 0x179;
  FUN_0024adf6();
  _DAT_00ffa82c = 0x165;
  _DAT_00ffa82e = 0x179;
  FUN_0024ad06();
  FUN_0024adf6();
  _DAT_00ffa82c = 0xa0;
  _DAT_00ffa82e = 0x1ca;
  FUN_0024ad06();
  uVar6 = 0xb9e4;
  FUN_0024adf6();
  _DAT_00ffa82c = 0x117;
  _DAT_00ffa82e = 0x1cb;
  _DAT_00ffa84a = &DAT_001b5f56;
  DAT_00fffd77 = '\0';
  FUN_0024cd32();
  FUN_0024caee();
  uVar5 = FUN_0024cb2c();
  if (DAT_00ffff9f != '\0') {
    uVar6 = 0xb9e4;
    FUN_002cbd12(0xf,uVar5,extraout_A0_01,extraout_A1w_01,0xb9e4);
    FUN_002cbcfc();
  }
  DAT_00fffd3a = 0;
  sVar1 = 6;
  puVar2 = &DAT_001b83b4;
  puVar3 = (undefined2 *)&DAT_00ffb496;
  do {
    *puVar3 = *puVar2;
    sVar1 = sVar1 + -1;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (sVar1 != -1);
  DAT_00fffd11 = 1;
  while( true ) {
    FUN_0024cd3a();
    FUN_0024c40a();
    FUN_0024c3ac();
    bVar4 = DAT_00fffd77 == '\r';
    if ((bVar4) || (FUN_0024d6e0(), bVar4)) break;
    if (DAT_00fffd77 == '\a') {
      FUN_0024d25a();
      FUN_0024cb40();
      FUN_0024c44a();
      FUN_0024ca00();
      DAT_00fffd77 = '\b';
    }
  }
  uVar5 = FUN_0024cc9a();
  FUN_002cbd3e(uVar5,extraout_A0_02,extraout_A1w_02,uVar6);
  FUN_002456d6();
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024c3ac(void) {
  ushort in_D0w;
  ushort uVar1;
  
  _DAT_00c00004 = 0x40000010;
  _DAT_00fffca2 = 0;
  if (DAT_00fffd3a != 0) {
    uVar1 = (ushort)DAT_00fffd3a;
    DAT_00fffd3a = DAT_00fffd3a + 1;
    if (((DAT_00fffd3a == 0x10) || (DAT_00fffd3a == 0x30)) || (DAT_00fffd3a == 0x20)) {
      DAT_00fffd3a = 0;
    }
    _DAT_00fffca2 = -(short)*(char *)((int)&PTR_DAT_0025e300 + (int)(short)uVar1);
    in_D0w = (short)*(char *)((int)&PTR_DAT_0025e300 + (int)(short)uVar1) + in_D0w & 0xff;
  }
  _DAT_00c00000 = in_D0w;
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024c40a(void) {
  undefined2 uVar1;
  short sVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  
  uVar1 = _DAT_00ffb496;
  if ((DAT_00ffa6cf & 3) == 0) {
    _DAT_00c00004 = 0xc0120000;
    sVar2 = 5;
    puVar3 = (undefined2 *)&DAT_00ffb496;
    puVar5 = (undefined2 *)&DAT_00ffb498;
    do {
      puVar4 = puVar3 + 1;
      *puVar3 = *puVar5;
      sVar2 = sVar2 + -1;
      puVar3 = puVar4;
      puVar5 = puVar5 + 1;
    } while (sVar2 != -1);
    *puVar4 = uVar1;
    _DAT_00c00000 = uVar1;
  }
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024c44a(void) {
  ushort extraout_D0u;
  undefined4 extraout_D1;
  undefined4 unaff_D2;
  undefined4 unaff_D3;
  short sVar1;
  ushort uVar2;
  char *pcVar3;
  char *extraout_A0;
  char *extraout_A0_00;
  bool bVar4;
  undefined8 uVar5;
  ushort uVar6;
  
  pcVar3 = &DAT_001b6f77;
  uVar2 = 0;
  do {
    FUN_0024c6ae();
    uVar5 = CONCAT44((uint)extraout_D0u << 0x10,extraout_D1);
    if (*pcVar3 == '\a') {
      pcVar3 = pcVar3 + 1;
    }
    else {
      if (*pcVar3 == -3) {
        return;
      }
      uVar5 = FUN_0024c6ae();
      pcVar3 = extraout_A0;
    }
    sVar1 = 0xf;
    do {
      uVar6 = uVar2;
      DAT_00ffa6cf = DAT_00ffa6cf + '\x01';
      FUN_0024cd3a(uVar5,unaff_D2,unaff_D3,sVar1,uVar6,pcVar3);
      FUN_0024c40a();
      FUN_0024cd3a();
      FUN_0024c40a();
      if (DAT_00ffa6cd != '\0') {
        return;
      }
      _DAT_00c00004 = 0x40000010;
      uVar2 = uVar6 + 1 & 0xff;
      sVar1 = sVar1 + -1;
      _DAT_00c00000 = uVar6;
    } while (sVar1 != -1);
    bVar4 = ((short)uVar5 + 2U & 0x1f) == 0;
    FUN_0024d6e0();
    pcVar3 = extraout_A0_00;
  } while (!bVar4);
  return;
}

undefined8 FUN_0024c4e4(void) {
  undefined4 in_D0;
  undefined4 in_D1;
  ushort uVar1;
  short sVar2;
  int unaff_A5;
  bool bVar3;
  
  uVar1 = (ushort)(byte)(DAT_00ffa6d0 - 1U);
  sVar2 = (ushort)(byte)(DAT_00ffa6d0 - 1U) * -0x10 + 0x120;
  do {
    bVar3 = sVar2 == 0;
    FUN_0024ad06();
    if (!bVar3) break;
    FUN_0024adf6();
    *(short *)(unaff_A5 + 2) = sVar2;
    *(short *)(unaff_A5 + 4) = (short)in_D0;
    sVar2 = sVar2 + 0x20;
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0xffff);
  return CONCAT44(in_D0,in_D1);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
undefined8 FUN_0024c526(void) {
  short sVar1;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A1;
  undefined4 extraout_A1_00;
  int unaff_A5;
  undefined4 unaff_A6;
  undefined8 uVar2;
  
  DAT_00ffa6d0 = DAT_00ffa6d0 + '\x01';
  FUN_002cbd3e();
  FUN_0024cc9a();
  _DAT_00c00004 = 0x8b00;
  FUN_0024c5f6();
  DAT_00fffde5 = 0;
  FUN_0024d2c0();
  FUN_0024d7c8();
  DAT_00fffd28 = 0;
  FUN_0024acbc();
  FUN_0024ca12();
  FUN_0024d8dc();
  FUN_0024d8dc();
  FUN_0024cd32();
  FUN_0024cb08();
  uVar2 = FUN_0024cb2c();
  if (DAT_00ffff9f != '\0') {
    FUN_002cbd12(0xf,uVar2,extraout_A0,extraout_A1,unaff_A6);
    FUN_002cbcfc();
  }
  FUN_0024c4e4();
  *(undefined **)(unaff_A5 + 0x20) = &DAT_001b5f70;
  sVar1 = 300;
  do {
    uVar2 = FUN_0024cd3a();
    sVar1 = sVar1 + -1;
  } while (sVar1 != -1);
  FUN_002cbd3e(uVar2,extraout_A0_00,extraout_A1_00,unaff_A6);
  return uVar2;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024c5f6(void) {
  _DAT_00c00004 = 0x40020010;
  _DAT_00c00000 = 0;
  return;
}

undefined8 FUN_0024c61c(void) {
  undefined4 in_D0;
  short sVar1;
  undefined4 in_D1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  
  uVar2 = 0xc000;
  if (DAT_00fffde5 != '\0') {
    uVar2 = 0xe000;
  }
  sVar1 = 0x1f;
  puVar4 = (uint *)&DAT_00ffb396;
  puVar5 = (uint *)&DAT_00ffb416;
  do {
    uVar3 = CONCAT22((short)((uVar2 << 2) >> 0x10),(ushort)(uVar2 << 2) >> 2) | 0x4000;
    *puVar4 = uVar3;
    *puVar5 = uVar3;
    uVar2 = (uint)(ushort)((short)in_D1 + (short)uVar2);
    sVar1 = sVar1 + -1;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  } while (sVar1 != -1);
  return CONCAT44(in_D0,in_D1);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
undefined8 FUN_0024c660(void) {
  short in_D0w;
  ushort uVar1;
  undefined4 in_D1;
  ushort unaff_D2w;
  
  uVar1 = (ushort)((uint)*(undefined4 *)(&DAT_00ffb396 + (short)((short)in_D1 << 2)) >> 0x10);
  _DAT_00c00004 =
       CONCAT22(uVar1,in_D0w * 2 |
                      (ushort)*(undefined4 *)(&DAT_00ffb396 + (short)((short)in_D1 << 2))) << 0x10 |
       (uint)uVar1;
  _DAT_00c00000 = (_DAT_00fffbe4 | unaff_D2w) + 0x87c0;
  return CONCAT44((int)in_D0w,in_D1);
}

void FUN_0024c6ae(void) {
  byte *in_A0;
  byte *extraout_A0;
  byte *extraout_A0_00;
  
  while (DAT_00ffa6cd == '\0') {
    if (*in_A0 < 0x20) {
      (**(code **)((int)&PTR_LAB_000059cc + (int)(short)(ushort)(byte)(*in_A0 << 2)))();
      in_A0 = extraout_A0;
    }
    else {
      if (DAT_00fffbeb != '\0') {
        FUN_0024d2fe();
      }
      FUN_0024c660();
      in_A0 = extraout_A0_00;
    }
  }
  return;
}

void FUN_0024c6ee(void) {
  ushort *puVar1;
  byte bVar2;
  short sVar3;
  undefined2 uVar4;
  short extraout_D1w;
  ushort uVar5;
  ushort unaff_D7w;
  byte *pbVar6;
  byte *pbVar7;
  byte *extraout_A0;
  byte *extraout_A0_00;
  byte *extraout_A0_01;
  undefined4 extraout_A1;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  DAT_00fffd9d = 0;
  DAT_00fffd9c = 0;
  FUN_0024cb40();
  sVar3 = *(short *)(&DAT_001b6914 + (short)((ushort)DAT_00fffde4 << 3));
  pbVar6 = *(byte **)((int)&PTR_DAT_001b6910 + (int)(short)((ushort)DAT_00fffde4 << 3));
  uVar10 = extraout_A1;
  do {
    while( true ) {
      while( true ) {
        pbVar7 = pbVar6 + 1;
        bVar2 = *pbVar6;
        if (bVar2 != 0x20) break;
        sVar3 = sVar3 + 0x10;
        pbVar6 = pbVar7;
      }
      if (0x1f < bVar2) break;
      sVar3 = (**(code **)((int)&PTR_LAB_000059cc + (int)(short)(ushort)(byte)(bVar2 * '\x04')))();
      pbVar6 = extraout_A0;
    }
    uVar5 = (ushort)(byte)(bVar2 - 0x20);
    if (DAT_00fffbeb != '\0') {
      uVar9 = CONCAT22(sVar3,uVar5);
      FUN_0024d2d2(uVar9,uVar10);
      sVar3 = (short)((uint)uVar9 >> 0x10);
      uVar5 = (ushort)uVar9;
      pbVar7 = extraout_A0_00;
    }
    puVar1 = *(ushort **)(&DAT_00005a0c + (short)(uVar5 * 4));
    if (puVar1 != (ushort *)0x0) {
      pcVar8 = &DAT_00ffa728;
      sVar3 = 0x24;
      while (*pcVar8 != '\0') {
        pcVar8 = pcVar8 + 0x56;
        sVar3 = sVar3 + -1;
        if (sVar3 == -1) {
          return;
        }
      }
      uVar4 = FUN_0024adf6();
      *(ushort **)(pcVar8 + 0x20) = puVar1;
      *(undefined ***)(pcVar8 + 10) = &PTR_DAT_001a348a;
      *(undefined2 *)(pcVar8 + 2) = uVar4;
      pcVar8[0x1e] = -0x40;
      pcVar8[0x1f] = '\0';
      sVar3 = FUN_0024d448();
      unaff_D7w = extraout_D1w + (unaff_D7w & 7);
      *(ushort *)(pcVar8 + 4) = unaff_D7w;
      pbVar7 = extraout_A0_01;
    }
    sVar3 = (*(byte *)(*(int *)(uint)*puVar1 + 4) - 0x80) + sVar3;
    pbVar6 = pbVar7;
  } while( true );
}

void FUN_0024c710(void) {
  int iVar1;
  byte bVar2;
  undefined2 uVar3;
  short extraout_D1w;
  short sVar4;
  ushort unaff_D7w;
  byte *pbVar5;
  byte *pbVar6;
  byte *extraout_A0;
  byte *extraout_A0_00;
  byte *extraout_A0_01;
  char *pcVar7;
  
  pbVar5 = *(byte **)((int)&PTR_DAT_001b6910 + (int)(short)((ushort)DAT_00fffde4 << 3));
  do {
    do {
      while( true ) {
        do {
          pbVar6 = pbVar5 + 1;
          bVar2 = *pbVar5;
          pbVar5 = pbVar6;
        } while (bVar2 == 0x20);
        if (0x1f < bVar2) break;
        (**(code **)((int)&PTR_LAB_000059cc + (int)(short)(ushort)(byte)(bVar2 * '\x04')))();
        pbVar5 = extraout_A0;
      }
      if (DAT_00fffbeb != '\0') {
        FUN_0024d2d2();
        pbVar6 = extraout_A0_00;
      }
      iVar1 = *(int *)(&DAT_00005a0c + (short)((ushort)(byte)(bVar2 - 0x20) * 4));
      pbVar5 = pbVar6;
    } while (iVar1 == 0);
    pcVar7 = &DAT_00ffa728;
    sVar4 = 0x24;
    while (*pcVar7 != '\0') {
      pcVar7 = pcVar7 + 0x56;
      sVar4 = sVar4 + -1;
      if (sVar4 == -1) {
        return;
      }
    }
    uVar3 = FUN_0024adf6();
    *(int *)(pcVar7 + 0x20) = iVar1;
    *(undefined ***)(pcVar7 + 10) = &PTR_DAT_001a348a;
    *(undefined2 *)(pcVar7 + 2) = uVar3;
    pcVar7[0x1e] = -0x60;
    pcVar7[0x1f] = '\0';
    FUN_0024d448();
    unaff_D7w = extraout_D1w + (unaff_D7w & 7);
    *(ushort *)(pcVar7 + 4) = unaff_D7w;
    pbVar5 = extraout_A0_01;
  } while( true );
}

undefined8 FUN_0024c8d8(void) {
  undefined4 in_D0;
  undefined4 in_D1;
  
  FUN_0024c9c8();
  FUN_0024cc9a();
  FUN_0024ca00();
  FUN_0024cb2c();
  return CONCAT44(in_D0,in_D1);
}

undefined8 FUN_0024c8f8(void) {
  undefined2 uVar1;
  undefined4 in_D0;
  undefined4 in_D1;
  undefined2 extraout_D1w;
  int in_A0;
  int unaff_A5;
  bool bVar2;
  
  uVar1 = *(undefined2 *)(in_A0 + 4);
  bVar2 = *(char *)(in_A0 + 7) == '\0';
  FUN_0024ad06();
  if (bVar2) {
    FUN_0024adf6();
    *(undefined2 *)(unaff_A5 + 2) = uVar1;
    *(undefined2 *)(unaff_A5 + 4) = extraout_D1w;
  }
  return CONCAT44(in_D0,in_D1);
}

void FUN_0024c934(void) {
  short sVar1;
  char *pcVar2;
  char *extraout_A1;
  
  pcVar2 = &DAT_00ffa728;
  sVar1 = 0x24;
  do {
    if (*pcVar2 == -0x79) {
      *pcVar2 = '\0';
      FUN_0024ae7a();
      pcVar2 = extraout_A1;
    }
    pcVar2 = pcVar2 + 0x56;
    sVar1 = sVar1 + -1;
  } while (sVar1 != -1);
  return;
}

// WARNING: Removing unreachable block (ram,0x0024c9e4)
void FUN_0024c9c8(void) {
  undefined1 uVar1;
  
  uVar1 = DAT_00ffa6a8 == '\0';
  if (!(bool)uVar1) {
    do {
      FUN_0024d6e0();
    } while ((bool)uVar1);
  }
  do {
  } while( true );
}

void FUN_0024ca00(void) {
  FUN_0024ca24();
  return;
}

void FUN_0024ca12(void) {
  FUN_0024ca24();
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
undefined4 FUN_0024ca24(void) {
  undefined4 in_D0;
  short sVar1;
  undefined2 in_D1w;
  ushort uVar2;
  int in_A0;
  
  sVar1 = (short)in_D0 + -1;
  uVar2 = (ushort)((uint)(in_A0 << 2) >> 0x10);
  _DAT_00c00004 = (CONCAT22(uVar2,(ushort)(in_A0 << 2) >> 2) | 0x4000) << 0x10 | (uint)uVar2;
  do {
    _DAT_00c00000 = in_D1w;
    sVar1 = sVar1 + -1;
  } while (sVar1 != -1);
  return in_D0;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
undefined8 FUN_0024ca4c(void) {
  undefined4 in_D0;
  short sVar1;
  ushort uVar2;
  undefined4 in_D1;
  undefined2 *in_A0;
  int in_A1;
  
  sVar1 = (short)in_D0 + -1;
  uVar2 = (ushort)((uint)(in_A1 << 2) >> 0x10);
  _DAT_00c00004 = (CONCAT22(uVar2,(ushort)(in_A1 << 2) >> 2) | 0x4000) << 0x10 | (uint)uVar2;
  do {
    _DAT_00c00000 = *in_A0;
    sVar1 = sVar1 + -1;
    in_A0 = in_A0 + 1;
  } while (sVar1 != -1);
  return CONCAT44(in_D0,in_D1);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024ca74(void) {
  short *psVar1;
  short sVar2;
  int *in_A1;
  int *piVar3;
  
  _DAT_00c00004 = 0x70000003;
  sVar2 = 0x1ff;
  do {
    piVar3 = (int *)((int)in_A1 + 2);
    _DAT_00c00000 = *(short *)in_A1;
    if (_DAT_00c00000 == -1) {
      psVar1 = (short *)*piVar3;
      piVar3 = (int *)(psVar1 + 1);
      _DAT_00c00000 = *psVar1;
    }
    sVar2 = sVar2 + -1;
    in_A1 = piVar3;
  } while (sVar2 != -1);
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
undefined4 FUN_0024ca9c(void) {
  undefined2 uVar1;
  undefined2 in_D0w;
  short sVar2;
  undefined2 *in_A0;
  
  _DAT_00ff9926 = in_A0;
  sVar2 = (short)in_A0;
  uVar1 = (undefined2)((uint)in_A0 >> 0x10);
  _DAT_00ff992a = CONCAT22(uVar1,sVar2 + 0x20);
  _DAT_00ff992e = CONCAT22(uVar1,sVar2 + 0x40);
  _DAT_00ff9932 = CONCAT22(uVar1,sVar2 + 0x60);
  sVar2 = 0x3f;
  _DAT_00c00004 = 0xc0000000;
  do {
    _DAT_00c00000 = *in_A0;
    sVar2 = sVar2 + -1;
    in_A0 = in_A0 + 1;
  } while (sVar2 != -1);
  return CONCAT22(uVar1,in_D0w);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
undefined4 FUN_0024caca(void) {
  undefined2 uVar1;
  undefined2 in_D0w;
  short sVar2;
  undefined2 *in_A0;
  
  _DAT_00ff9926 = in_A0;
  uVar1 = (undefined2)((uint)in_A0 >> 0x10);
  _DAT_00ff992a = CONCAT22(uVar1,(short)in_A0 + 0x20);
  _DAT_00ff992e = CONCAT22(uVar1,(short)in_A0 + 0x40);
  sVar2 = 0x2f;
  _DAT_00c00004 = 0xc0000000;
  do {
    _DAT_00c00000 = *in_A0;
    sVar2 = sVar2 + -1;
    in_A0 = in_A0 + 1;
  } while (sVar2 != -1);
  return CONCAT22(uVar1,in_D0w);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
undefined4 FUN_0024caee(void) {
  undefined2 uVar1;
  undefined2 in_D0w;
  short sVar2;
  undefined2 *in_A0;
  
  _DAT_00ff9926 = in_A0;
  uVar1 = (undefined2)((uint)in_A0 >> 0x10);
  _DAT_00ff992a = CONCAT22(uVar1,(short)in_A0 + 0x20);
  sVar2 = 0x1f;
  _DAT_00c00004 = 0xc0000000;
  do {
    _DAT_00c00000 = *in_A0;
    sVar2 = sVar2 + -1;
    in_A0 = in_A0 + 1;
  } while (sVar2 != -1);
  return CONCAT22(uVar1,in_D0w);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
undefined2 FUN_0024cb08(void) {
  undefined2 in_D0w;
  short sVar1;
  undefined2 *in_A0;
  
  _DAT_00ff9926 = in_A0;
  sVar1 = 0xf;
  _DAT_00c00004 = 0xc0000000;
  do {
    _DAT_00c00000 = *in_A0;
    sVar1 = sVar1 + -1;
    in_A0 = in_A0 + 1;
  } while (sVar1 != -1);
  return in_D0w;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
undefined2 FUN_0024cb2c(void) {
  undefined2 in_D0w;
  short sVar1;
  undefined2 *in_A0;
  
  _DAT_00ff9932 = in_A0;
  _DAT_00c00004 = 0xc0600000;
  sVar1 = 0xf;
  do {
    _DAT_00c00000 = *in_A0;
    sVar1 = sVar1 + -1;
    in_A0 = in_A0 + 1;
  } while (sVar1 != -1);
  return in_D0w;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
undefined2 FUN_0024cb40(void) {
  undefined2 in_D0w;
  short sVar1;
  undefined2 *in_A0;
  
  _DAT_00ff992e = in_A0;
  _DAT_00c00004 = 0xc0400000;
  sVar1 = 0xf;
  do {
    _DAT_00c00000 = *in_A0;
    sVar1 = sVar1 + -1;
    in_A0 = in_A0 + 1;
  } while (sVar1 != -1);
  return in_D0w;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
undefined2 FUN_0024cb54(void) {
  undefined2 in_D0w;
  short sVar1;
  undefined2 *in_A0;
  
  _DAT_00ff992a = in_A0;
  _DAT_00c00004 = 0xc0200000;
  sVar1 = 0xf;
  do {
    _DAT_00c00000 = *in_A0;
    sVar1 = sVar1 + -1;
    in_A0 = in_A0 + 1;
  } while (sVar1 != -1);
  return in_D0w;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
undefined2 FUN_0024cb68(void) {
  undefined2 in_D0w;
  short sVar1;
  undefined2 *in_A0;
  
  _DAT_00ff9926 = in_A0;
  _DAT_00c00004 = 0xc0000000;
  sVar1 = 0xf;
  do {
    _DAT_00c00000 = *in_A0;
    sVar1 = sVar1 + -1;
    in_A0 = in_A0 + 1;
  } while (sVar1 != -1);
  return in_D0w;
}

void FUN_0024cb8c(void) {
  FUN_0024ca4c();
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
undefined2 FUN_0024cba0(void) {
  undefined2 in_D0w;
  short sVar1;
  
  DAT_00fffd9d = 0;
  _DAT_00c00004 = 0xc0000000;
  sVar1 = 0x3f;
  do {
    _DAT_00c00000 = 0;
    sVar1 = sVar1 + -1;
  } while (sVar1 != -1);
  return in_D0w;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
undefined2 FUN_0024cbc6(void) {
  undefined2 in_D0w;
  short sVar1;
  
  _DAT_00c00004 = 0xc0000000;
  sVar1 = 0x3f;
  do {
    _DAT_00c00000 = 0xeee;
    sVar1 = sVar1 + -1;
  } while (sVar1 != -1);
  return in_D0w;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024cbe6(void) {
  short sVar1;
  undefined2 *puVar2;
  
  _DAT_00c00004 = 0x20;
  sVar1 = 0x3f;
  puVar2 = (undefined2 *)&DAT_00ffb4c4;
  do {
    *puVar2 = _DAT_00c00000;
    sVar1 = sVar1 + -1;
    puVar2 = puVar2 + 1;
  } while (sVar1 != -1);
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024cc9a(void) {
  short sVar1;
  undefined *puVar2;
  undefined *extraout_A0;
  undefined2 *puVar3;
  
  puVar2 = &DAT_001b750c;
  _DAT_00ffa6c0 = &DAT_001b750c;
  _DAT_00ff9926 = &DAT_001b750c;
  _DAT_00ff992a = 0x1b752c;
  _DAT_00ff992e = 0x1b754c;
  _DAT_00ff9932 = 0x1b756c;
  _DAT_00c00004 = 0x20;
  sVar1 = 0x3f;
  puVar3 = (undefined2 *)&DAT_00ffb4c4;
  do {
    *puVar3 = _DAT_00c00000;
    sVar1 = sVar1 + -1;
    puVar3 = puVar3 + 1;
  } while (sVar1 != -1);
  sVar1 = 0xf;
  do {
    if (DAT_00fffd31 == '\0') {
      FUN_0024c9c8();
    }
    else {
      FUN_0024cd3a(puVar2);
    }
    FUN_0024cda2();
    sVar1 = sVar1 + -1;
    puVar2 = extraout_A0;
  } while (sVar1 != -1);
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024cca0(void) {
  undefined2 uVar1;
  short sVar2;
  undefined4 in_A0;
  undefined4 extraout_A0;
  undefined2 *puVar3;
  
  sVar2 = (short)in_A0;
  uVar1 = (undefined2)((uint)in_A0 >> 0x10);
  _DAT_00ff992a = CONCAT22(uVar1,sVar2 + 0x20);
  _DAT_00ff992e = CONCAT22(uVar1,sVar2 + 0x40);
  _DAT_00ff9932 = CONCAT22(uVar1,sVar2 + 0x60);
  _DAT_00c00004 = 0x20;
  sVar2 = 0x3f;
  puVar3 = (undefined2 *)&DAT_00ffb4c4;
  _DAT_00ff9926 = in_A0;
  _DAT_00ffa6c0 = in_A0;
  do {
    *puVar3 = _DAT_00c00000;
    sVar2 = sVar2 + -1;
    puVar3 = puVar3 + 1;
  } while (sVar2 != -1);
  sVar2 = 0xf;
  do {
    if (DAT_00fffd31 == '\0') {
      FUN_0024c9c8();
    }
    else {
      FUN_0024cd3a(in_A0);
    }
    FUN_0024cda2();
    sVar2 = sVar2 + -1;
    in_A0 = extraout_A0;
  } while (sVar2 != -1);
  return;
}

undefined8 FUN_0024cd18(void) {
  undefined4 in_D0;
  undefined4 in_D1;
  
  FUN_0024ca00();
  do {
    FUN_0024cd3a();
  } while (DAT_00fffd39 == '\0');
  return CONCAT44(in_D0,in_D1);
}

void FUN_0024cd32(void) {
  DAT_00ffa6cf = 0xff;
  FUN_0024a766();
  FUN_00249168();
  FUN_0024845e();
  FUN_0024c9c8();
  FUN_0024910a();
  FUN_00248430();
  return;
}

void FUN_0024cd3a(void) {
  DAT_00ffa6cf = DAT_00ffa6cf + '\x01';
  FUN_0024a766();
  FUN_00249168();
  FUN_0024845e();
  FUN_0024c9c8();
  FUN_0024910a();
  FUN_00248430();
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024cda2(void) {
  undefined2 uVar1;
  short sVar2;
  ushort *in_A0;
  ushort *puVar3;
  
  sVar2 = (short)in_A0;
  uVar1 = (undefined2)((uint)in_A0 >> 0x10);
  _DAT_00ff992a = CONCAT22(uVar1,sVar2 + 0x20);
  _DAT_00ff992e = CONCAT22(uVar1,sVar2 + 0x40);
  _DAT_00ff9932 = CONCAT22(uVar1,sVar2 + 0x60);
  sVar2 = 0x3f;
  _DAT_00c00004 = 0xc0000000;
  puVar3 = (ushort *)&DAT_00ffb4c4;
  _DAT_00ff9926 = in_A0;
  do {
    if ((*puVar3 & 0xe) != (*in_A0 & 0xe)) {
      if ((*puVar3 & 0xe) < (*in_A0 & 0xe)) {
        *puVar3 = *puVar3 + 2;
      }
      else {
        *puVar3 = *puVar3 - 2;
      }
    }
    if ((*puVar3 & 0xe0) != (*in_A0 & 0xe0)) {
      if ((*puVar3 & 0xe0) < (*in_A0 & 0xe0)) {
        *puVar3 = *puVar3 + 0x20;
      }
      else {
        *puVar3 = *puVar3 - 0x20;
      }
    }
    if ((*puVar3 & 0xe00) != (*in_A0 & 0xe00)) {
      if ((*puVar3 & 0xe00) < (*in_A0 & 0xe00)) {
        *puVar3 = *puVar3 + 0x200;
      }
      else {
        *puVar3 = *puVar3 - 0x200;
      }
    }
    _DAT_00c00000 = *puVar3;
    sVar2 = sVar2 + -1;
    in_A0 = in_A0 + 1;
    puVar3 = puVar3 + 1;
  } while (sVar2 != -1);
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024cdc8(void) {
  short sVar1;
  ushort *in_A0;
  ushort *puVar2;
  
  sVar1 = 0x3f;
  _DAT_00c00004 = 0xc0000000;
  puVar2 = (ushort *)&DAT_00ffb4c4;
  do {
    if ((*puVar2 & 0xe) != (*in_A0 & 0xe)) {
      if ((*puVar2 & 0xe) < (*in_A0 & 0xe)) {
        *puVar2 = *puVar2 + 2;
      }
      else {
        *puVar2 = *puVar2 - 2;
      }
    }
    if ((*puVar2 & 0xe0) != (*in_A0 & 0xe0)) {
      if ((*puVar2 & 0xe0) < (*in_A0 & 0xe0)) {
        *puVar2 = *puVar2 + 0x20;
      }
      else {
        *puVar2 = *puVar2 - 0x20;
      }
    }
    if ((*puVar2 & 0xe00) != (*in_A0 & 0xe00)) {
      if ((*puVar2 & 0xe00) < (*in_A0 & 0xe00)) {
        *puVar2 = *puVar2 + 0x200;
      }
      else {
        *puVar2 = *puVar2 - 0x200;
      }
    }
    _DAT_00c00000 = *puVar2;
    sVar1 = sVar1 + -1;
    in_A0 = in_A0 + 1;
    puVar2 = puVar2 + 1;
  } while (sVar1 != -1);
  return;
}

void FUN_0024cf0e(void) {
  FUN_0024c6ae();
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024cf2a(void) {
  undefined4 extraout_A0;
  undefined4 extraout_A1;
  ushort *puVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_0024d744();
  _DAT_00c00004 = CONCAT22(0x8c81,DAT_00c00004_2);
  FUN_002cbd3e(uVar4,extraout_A0,extraout_A1);
  DAT_00ffff7a = 0xff;
  FUN_0024d2c0();
  FUN_0024c6ae();
  DAT_00ff993c = '\x01';
  DAT_00ff993d = 0;
  _DAT_00fffbe4 = 0x4000;
  FUN_0024d952();
  FUN_0024d952();
  FUN_0024d93e();
  FUN_0024d93e();
  FUN_0024d948();
  FUN_0024d952();
  FUN_0024d952();
  FUN_0024d95c();
  FUN_0024c6ae();
  FUN_0024cca0();
LAB_0024d034:
  do {
    FUN_0024cf0e();
    _DAT_00fffbe4 = 0x4000;
    FUN_0024c6ae();
    FUN_0024c6ae();
    FUN_0024c6ae();
    FUN_0024c6ae();
    FUN_0024d476();
    do {
      while( true ) {
        FUN_0024c9c8();
        DAT_00ffa6cf = DAT_00ffa6cf + 1;
        uVar2 = (DAT_00ffa6cf & 0x1f) == 0;
        if ((bool)uVar2) {
          _DAT_00c00000 = 0xa0;
          if ((DAT_00ffa6cf & 0x20) != 0) {
            _DAT_00c00000 = 0xc0;
          }
          _DAT_00c00004 = 0xc06a0000;
          uVar2 = _DAT_00c00000 == 0;
        }
        FUN_0024d6ea();
        if ((bool)uVar2) {
          uVar2 = DAT_00ff993c == '\0';
          if (!(bool)uVar2) {
            DAT_00ff993c = DAT_00ff993c + -1;
            goto LAB_0024d034;
          }
        }
        else {
          FUN_0024d6f4();
          if (((bool)uVar2) && (uVar2 = DAT_00ff993c == '\x03', !(bool)uVar2)) {
            DAT_00ff993c = DAT_00ff993c + '\x01';
            goto LAB_0024d034;
          }
        }
        FUN_0024d6e0();
        if ((bool)uVar2) {
          _DAT_00ffff82 = &DAT_00004e14;
          goto LAB_0024d23a;
        }
        bVar3 = DAT_00ff993c == '\0';
        if (bVar3) break;
        bVar3 = DAT_00ff993c == '\x01';
        if (bVar3) {
          FUN_0024d712();
          if (bVar3) {
            DAT_00ffa692 = DAT_00ffa692 - 1;
            if (0x1c < DAT_00ffa692) {
              DAT_00ffa692 = 0x1c;
            }
            FUN_0024d752();
            goto LAB_0024d034;
          }
          FUN_0024d71c();
          if (bVar3) {
            DAT_00ffa692 = DAT_00ffa692 + 1;
            if (0x1c < DAT_00ffa692) {
              DAT_00ffa692 = 0;
            }
            FUN_0024d752();
            goto LAB_0024d034;
          }
        }
        else {
          bVar3 = DAT_00ff993c == '\x02';
          if (bVar3) {
            FUN_0024d712();
            if (bVar3) {
              DAT_00ffa6a8 = 0;
              FUN_0024d752();
              goto LAB_0024d034;
            }
            FUN_0024d71c();
            if (bVar3) {
              DAT_00ffa6a8 = 0xff;
              FUN_0024d752();
              goto LAB_0024d034;
            }
          }
          else {
            bVar3 = DAT_00ff993c == '\x03';
            if (bVar3) {
              FUN_0024d712();
              if (bVar3) {
                DAT_00ff993d = 0;
                FUN_0024d752();
                goto LAB_0024d034;
              }
              FUN_0024d71c();
              if (bVar3) {
                DAT_00ff993d = 0xff;
                FUN_0024d752();
                goto LAB_0024d034;
              }
            }
          }
        }
      }
      FUN_0024d712();
      if (bVar3) {
        DAT_00ffa6aa = 0;
        FUN_0024d752();
        goto LAB_0024d034;
      }
      FUN_0024d71c();
    } while (!bVar3);
    DAT_00ffa6aa = 0xff;
    FUN_0024d752();
  } while( true );
  while (_DAT_00ffff82 = _DAT_00ffff82 + 2, (ushort)DAT_00ffa692 != *puVar1) {
LAB_0024d23a:
    puVar1 = (ushort *)(_DAT_00ffff82 + 1);
    if (*_DAT_00ffff82 == 0xff) {
      _DAT_00ffff82 = &DAT_00004e14;
      break;
    }
  }
  FUN_0024cc9a();
  FUN_0024ca00();
  return;
}

void FUN_0024d25a(void) {
  FUN_0024ca4c();
  FUN_0024ca4c();
  return;
}

void FUN_0024d282(void) {
  FUN_0024ca4c();
  FUN_0024ca4c();
  return;
}

void FUN_0024d2ac(void) {
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024d2c0(void) {
  _DAT_00c00004 = 0x9001;
  FUN_0024c61c();
  return;
}

void FUN_0024d2d2(void) {
  short sVar1;
  
  do {
    if (DAT_00ffa6cd != '\0') {
      return;
    }
    sVar1 = FUN_0024c9c8();
  } while (sVar1 != 0);
  return;
}

void FUN_0024d2e4(void) {
  short in_D0w;
  
  do {
    if (DAT_00ffa6cd != '\0') {
      return;
    }
    FUN_0024cd3a();
    FUN_0024c9c8();
    in_D0w = in_D0w + -1;
  } while (in_D0w != -1);
  return;
}

void FUN_0024d2fe(void) {
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024d416(void) {
  _DAT_00ffa6bc = _DAT_00ffa6bc * 0xd + 7;
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024d448(void) {
  _DAT_00ffa6bc = _DAT_00ffa6bc * 0xd + 7;
  return;
}

void FUN_0024d476(void) {
  undefined1 in_ZF;
  
  do {
    do {
      do {
        do {
          do {
            do {
              do {
                do {
                  FUN_0024c9c8();
                  FUN_0024d712();
                } while ((bool)in_ZF);
                FUN_0024d71c();
              } while ((bool)in_ZF);
              FUN_0024d726();
            } while ((bool)in_ZF);
            FUN_0024d6e0();
          } while ((bool)in_ZF);
          FUN_0024d6ea();
        } while ((bool)in_ZF);
        FUN_0024d6f4();
      } while ((bool)in_ZF);
      FUN_0024d6fe();
    } while ((bool)in_ZF);
    FUN_0024d708();
  } while ((bool)in_ZF);
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024d5c0(void) {
  undefined2 *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 extraout_A0;
  undefined4 extraout_A1;
  undefined4 unaff_A6;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  char cVar7;
  undefined8 uVar8;
  uint auStack_c [3];
  
  if (DAT_00ffff98 == '\x01') {
    pcVar2 = _DAT_00ffff86;
    if (DAT_00ffff9a == '\0') {
      DAT_00ffff99 = _DAT_00ffff86[1];
      DAT_00ffff9a = *_DAT_00ffff86 + '\x01';
      pcVar2 = _DAT_00ffff86 + 2;
      if (DAT_00ffff99 == '\0') {
        DAT_00ffff9a = 0;
        puVar5 = &stack0x00000004;
        if (_DAT_00ffff8a == 0) goto LAB_0024579c;
        FUN_0024acbc();
        puVar5 = &stack0x00000004;
        FUN_0024cc9a();
        FUN_0024cb8c();
        puVar1 = *(undefined2 **)((int)&PTR_DAT_0025c3cc + (int)(short)(_DAT_00ffff8a * 6));
        DAT_00ffa692 = (&DAT_0025c3d0)[(short)(_DAT_00ffff8a * 6)];
        DAT_00ffff9a = 0;
        _DAT_00ffff90 = *puVar1;
        _DAT_00ffff92 = puVar1[1];
        _DAT_00ffff94 = puVar1[2];
        _DAT_00ffff86 = (char *)(puVar1 + 4);
        _DAT_00ffff96 = puVar1[3];
        _DAT_00ffff8a = _DAT_00ffff8a + 1;
        if (_DAT_00ffff8a == 8) {
          _DAT_00ffff8a = 0;
        }
        FUN_0024d730();
        do {
          *(undefined4 *)(puVar5 + -4) = 0x2457b0;
          FUN_0024d2c0();
          *(undefined4 *)(puVar5 + -4) = 0x2457b4;
          FUN_0024b3aa();
          *(undefined4 *)(puVar5 + -4) = 0x2457b8;
          FUN_0024b1ea();
          *(undefined4 *)(puVar5 + -4) = 0x2457bc;
          FUN_0024b20c();
          _DAT_00c00004 = 0x8c81;
          *(undefined4 *)(puVar5 + -4) = 0x2457ca;
          FUN_0024ca00();
          *(undefined4 *)(puVar5 + -4) = 0x2457d0;
          FUN_0024ca12();
          *(undefined4 *)(puVar5 + -4) = 0x2457d6;
          FUN_0024d282();
          *(undefined4 *)(puVar5 + -4) = 0x2457dc;
          FUN_002513f8();
          *(undefined4 *)(puVar5 + -4) = 0x2457e0;
          FUN_0024acc8();
          if (DAT_00ffff98 == '\x01') {
            DAT_00ffa6cf = '\0';
            _DAT_00ffa6bc = 0xbc614e;
          }
          *(undefined4 *)(puVar5 + -4) = 0x245800;
          flush_vram_fifo();
          *(undefined4 *)(puVar5 + -4) = 0x245804;
          FUN_0024b47a();
          *(undefined4 *)(puVar5 + -4) = 0x245808;
          FUN_00247940();
          *(undefined4 *)(puVar5 + -4) = 0x24580c;
          FUN_0024811e();
          *(undefined4 *)(puVar5 + -4) = 0x245810;
          uVar8 = FUN_00248330();
          *(undefined4 *)(puVar5 + -4) = unaff_A6;
          *(undefined4 *)(puVar5 + -8) = extraout_A1;
          *(undefined4 *)(puVar5 + -0xc) = extraout_A0;
          *(undefined8 *)(puVar5 + -0x14) = uVar8;
          *(undefined4 *)(puVar5 + -0x18) = 0x24581a;
          FUN_002cbd3e();
          unaff_A6 = *(undefined4 *)(puVar5 + -4);
          *(undefined4 *)(puVar5 + -4) = 0x245822;
          FUN_0024ac6a();
          DAT_00ffa6cf = -1;
          *(undefined4 *)(puVar5 + -4) = 0x24582c;
          apply_scroll_offsets();
          *(undefined4 *)(puVar5 + -4) = 0x245832;
          FUN_0024bda8();
          *(undefined4 *)(puVar5 + -4) = 0x245836;
          FUN_00249178();
          *(undefined4 *)(puVar5 + -4) = 0x24583a;
          FUN_0024847e();
          *(undefined4 *)(puVar5 + -4) = 0x24583e;
          FUN_0024910a();
          *(undefined4 *)(puVar5 + -4) = 0x245842;
          FUN_00248430();
          *(undefined4 *)(puVar5 + -4) = 0x245846;
          FUN_0024801c();
          *(undefined4 *)(puVar5 + -4) = 0x24584a;
          FUN_0024ab5c();
          *(undefined4 *)(puVar5 + -4) = 0x24584e;
          FUN_0024ac2c();
          puVar4 = puVar5;
          while( true ) {
            *(undefined4 *)(puVar4 + -4) = 0x245854;
            FUN_00258b04();
            uVar6 = DAT_00fffdec == '\0';
            puVar5 = puVar4;
            if (!(bool)uVar6) {
              while( true ) {
                *(undefined4 *)(puVar4 + -4) = 0x245874;
                FUN_0024d476();
                do {
                  *(undefined4 *)(puVar4 + -4) = 0x24587a;
                  uVar3 = FUN_0024d98a();
                } while (!(bool)uVar6);
                puVar5 = puVar4 + -4;
                *(undefined4 *)(puVar4 + -4) = uVar3;
                *(undefined4 *)(puVar4 + -8) = 0x245884;
                FUN_002cbd12();
                if (DAT_00fffdec == '\0') break;
                *(uint *)(puVar4 + -8) = (uint)DAT_00fffdeb;
                uVar6 = DAT_00fffdeb == 0;
                *(undefined4 *)(puVar4 + -0xc) = 0x24586e;
                FUN_002cbcfc();
                puVar4 = puVar4 + -4;
              }
            }
            DAT_00ffa6cf = DAT_00ffa6cf + '\x01';
            DAT_00ffff67 = DAT_00ffff67 + -1;
            if (DAT_00ffff67 < '\0') {
              DAT_00ffff67 = '\x05';
            }
            *(undefined4 *)(puVar5 + -4) = 0x2458a8;
            wait_for_user_input();
            *(undefined4 *)(puVar5 + -4) = 0x2458ac;
            apply_scroll_offsets();
            *(undefined4 *)(puVar5 + -4) = 0x2458b0;
            FUN_0024a086();
            *(undefined4 *)(puVar5 + -4) = 0x2458b4;
            apply_scroll_offsets();
            *(undefined4 *)(puVar5 + -4) = 0x2458b8;
            FUN_00249c56();
            *(undefined4 *)(puVar5 + -4) = 0x2458bc;
            FUN_0024a766();
            *(undefined4 *)(puVar5 + -4) = 0x2458c0;
            FUN_0024a4f4();
            *(undefined4 *)(puVar5 + -4) = 0x2458c4;
            FUN_00248c3a();
            if (DAT_00ffa6cd != '\0') break;
            DAT_00fffc85 = 0;
            cVar7 = '\x01';
            *(undefined4 *)(puVar5 + -4) = 0x2458da;
            FUN_0024d6f4();
            DAT_00fffc85 = -cVar7;
            DAT_00fffc84 = 0;
            cVar7 = '\x01';
            *(undefined4 *)(puVar5 + -4) = 0x2458ec;
            FUN_0024d6ea();
            DAT_00fffc84 = -cVar7;
            DAT_00fffc83 = 0;
            cVar7 = '\x01';
            *(undefined4 *)(puVar5 + -4) = 0x2458fe;
            FUN_0024d6fe();
            DAT_00fffc83 = -cVar7;
            DAT_00fffc82 = 0;
            cVar7 = '\x01';
            *(undefined4 *)(puVar5 + -4) = 0x245910;
            FUN_0024d708();
            DAT_00fffc82 = -cVar7;
            *(undefined4 *)(puVar5 + -4) = 0x24591c;
            FUN_0024bce4();
            *(undefined4 *)(puVar5 + -4) = 0x245920;
            FUN_00247210();
            *(undefined4 *)(puVar5 + -4) = 0x245924;
            set_vram_tiles();
            *(undefined4 *)(puVar5 + -4) = 0x245928;
            update_controller_state();
            *(undefined4 *)(puVar5 + -4) = 0x24592c;
            initialize_input_state();
            *(undefined4 *)(puVar5 + -4) = 0x245930;
            apply_scroll_offsets();
            *(undefined4 *)(puVar5 + -4) = 0x245934;
            FUN_00247b2c();
            *(undefined4 *)(puVar5 + -4) = 0x245938;
            render_menu_text();
            *(undefined4 *)(puVar5 + -4) = 0x24593c;
            apply_palette_colors();
            *(undefined4 *)(puVar5 + -4) = 0x245940;
            FUN_00248e58();
            *(undefined4 *)(puVar5 + -4) = 0x245944;
            FUN_00248f7e();
            *(undefined4 *)(puVar5 + -4) = 0x245948;
            fade_out_sequence();
            *(undefined4 *)(puVar5 + -4) = 0x24594c;
            no_op();
            *(undefined4 *)(puVar5 + -4) = 0x245950;
            FUN_0024b23c();
            *(undefined4 *)(puVar5 + -4) = 0x245954;
            FUN_0024b2ec();
            *(undefined4 *)(puVar5 + -4) = 0x245958;
            apply_scroll_offsets();
            *(undefined4 *)(puVar5 + -4) = 0x24595c;
            update_menu_animation();
            *(undefined4 *)(puVar5 + -4) = 0x245960;
            FUN_00249168();
            *(undefined4 *)(puVar5 + -4) = 0x245964;
            FUN_0024847e();
            *(undefined4 *)(puVar5 + -4) = 0x24596a;
            FUN_0024c9c8();
            *(undefined4 *)(puVar5 + -4) = 0x245970;
            FUN_0024d5c0();
            *(undefined4 *)(puVar5 + -4) = 0x245974;
            FUN_0024801c();
            *(undefined4 *)(puVar5 + -4) = 0x245978;
            FUN_0024910a();
            *(undefined4 *)(puVar5 + -4) = 0x24597c;
            FUN_00248430();
            *(undefined4 *)(puVar5 + -4) = 0x245980;
            FUN_0024ab5c();
            *(undefined4 *)(puVar5 + -4) = 0x245984;
            FUN_00247fd2();
            *(undefined4 *)(puVar5 + -4) = 0x245988;
            update_menu_cursor();
            puVar4 = puVar5;
          }
LAB_0024579c:
          *(undefined4 *)(puVar5 + -4) = 0x24d6a2;
          FUN_0024acbc();
          *(undefined4 *)(puVar5 + -4) = 0x24d6a6;
          FUN_0024cc9a();
          *(undefined4 *)(puVar5 + -4) = 0x24d6aa;
          FUN_0024cb8c();
          *(undefined4 *)(puVar5 + -4) = 0x24d6ae;
          poll_vdp_ready();
          *(undefined4 *)(puVar5 + -4) = 0x24d6b2;
          FUN_0024d744();
          DAT_00ffff98 = '\0';
          *(undefined4 *)(puVar5 + -4) = 0x2457aa;
          FUN_00259dfe();
        } while( true );
      }
    }
    _DAT_00ffff86 = pcVar2;
    DAT_00ffff7a = DAT_00ffff99;
    DAT_00ffff9a = DAT_00ffff9a + -1;
  }
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024d69e(void) {
  undefined4 uVar1;
  undefined4 extraout_A0;
  undefined4 extraout_A1;
  undefined4 unaff_A6;
  undefined1 *puVar2;
  undefined1 uVar3;
  char cVar4;
  undefined8 uVar5;
  
  do {
    *(undefined4 *)((int)register0x0000003c + -4) = 0x24d6a2;
    FUN_0024acbc();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x24d6a6;
    FUN_0024cc9a();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x24d6aa;
    FUN_0024cb8c();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x24d6ae;
    poll_vdp_ready();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x24d6b2;
    FUN_0024d744();
    DAT_00ffff98 = '\0';
    *(undefined4 *)((int)register0x0000003c + -4) = 0x2457aa;
    FUN_00259dfe();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x2457b0;
    FUN_0024d2c0();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x2457b4;
    FUN_0024b3aa();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x2457b8;
    FUN_0024b1ea();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x2457bc;
    FUN_0024b20c();
    _DAT_00c00004 = 0x8c81;
    *(undefined4 *)((int)register0x0000003c + -4) = 0x2457ca;
    FUN_0024ca00();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x2457d0;
    FUN_0024ca12();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x2457d6;
    FUN_0024d282();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x2457dc;
    FUN_002513f8();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x2457e0;
    FUN_0024acc8();
    if (DAT_00ffff98 == '\x01') {
      DAT_00ffa6cf = '\0';
      _DAT_00ffa6bc = 0xbc614e;
    }
    *(undefined4 *)((int)register0x0000003c + -4) = 0x245800;
    flush_vram_fifo();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x245804;
    FUN_0024b47a();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x245808;
    FUN_00247940();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x24580c;
    FUN_0024811e();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x245810;
    uVar5 = FUN_00248330();
    *(undefined4 *)((int)register0x0000003c + -4) = unaff_A6;
    *(undefined4 *)((int)register0x0000003c + -8) = extraout_A1;
    *(undefined4 *)((int)register0x0000003c + -0xc) = extraout_A0;
    *(undefined8 *)((int)register0x0000003c + -0x14) = uVar5;
    *(undefined4 *)((int)register0x0000003c + -0x18) = 0x24581a;
    FUN_002cbd3e();
    unaff_A6 = *(undefined4 *)((int)register0x0000003c + -4);
    *(undefined4 *)((int)register0x0000003c + -4) = 0x245822;
    FUN_0024ac6a();
    DAT_00ffa6cf = -1;
    *(undefined4 *)((int)register0x0000003c + -4) = 0x24582c;
    apply_scroll_offsets();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x245832;
    FUN_0024bda8();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x245836;
    FUN_00249178();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x24583a;
    FUN_0024847e();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x24583e;
    FUN_0024910a();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x245842;
    FUN_00248430();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x245846;
    FUN_0024801c();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x24584a;
    FUN_0024ab5c();
    *(undefined4 *)((int)register0x0000003c + -4) = 0x24584e;
    FUN_0024ac2c();
    puVar2 = (undefined1 *)register0x0000003c;
    while( true ) {
      *(undefined4 *)(puVar2 + -4) = 0x245854;
      FUN_00258b04();
      uVar3 = DAT_00fffdec == '\0';
      register0x0000003c = (BADSPACEBASE *)puVar2;
      if (!(bool)uVar3) {
        while( true ) {
          *(undefined4 *)(puVar2 + -4) = 0x245874;
          FUN_0024d476();
          do {
            *(undefined4 *)(puVar2 + -4) = 0x24587a;
            uVar1 = FUN_0024d98a();
          } while (!(bool)uVar3);
          register0x0000003c = (BADSPACEBASE *)(puVar2 + -4);
          *(undefined4 *)(puVar2 + -4) = uVar1;
          *(undefined4 *)(puVar2 + -8) = 0x245884;
          FUN_002cbd12();
          if (DAT_00fffdec == '\0') break;
          *(uint *)(puVar2 + -8) = (uint)DAT_00fffdeb;
          uVar3 = DAT_00fffdeb == 0;
          *(undefined4 *)(puVar2 + -0xc) = 0x24586e;
          FUN_002cbcfc();
          puVar2 = puVar2 + -4;
        }
      }
      DAT_00ffa6cf = DAT_00ffa6cf + '\x01';
      DAT_00ffff67 = DAT_00ffff67 + -1;
      if (DAT_00ffff67 < '\0') {
        DAT_00ffff67 = '\x05';
      }
      *(undefined4 *)((int)register0x0000003c + -4) = 0x2458a8;
      wait_for_user_input();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x2458ac;
      apply_scroll_offsets();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x2458b0;
      FUN_0024a086();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x2458b4;
      apply_scroll_offsets();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x2458b8;
      FUN_00249c56();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x2458bc;
      FUN_0024a766();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x2458c0;
      FUN_0024a4f4();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x2458c4;
      FUN_00248c3a();
      if (DAT_00ffa6cd != '\0') break;
      DAT_00fffc85 = 0;
      cVar4 = '\x01';
      *(undefined4 *)((int)register0x0000003c + -4) = 0x2458da;
      FUN_0024d6f4();
      DAT_00fffc85 = -cVar4;
      DAT_00fffc84 = 0;
      cVar4 = '\x01';
      *(undefined4 *)((int)register0x0000003c + -4) = 0x2458ec;
      FUN_0024d6ea();
      DAT_00fffc84 = -cVar4;
      DAT_00fffc83 = 0;
      cVar4 = '\x01';
      *(undefined4 *)((int)register0x0000003c + -4) = 0x2458fe;
      FUN_0024d6fe();
      DAT_00fffc83 = -cVar4;
      DAT_00fffc82 = 0;
      cVar4 = '\x01';
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245910;
      FUN_0024d708();
      DAT_00fffc82 = -cVar4;
      *(undefined4 *)((int)register0x0000003c + -4) = 0x24591c;
      FUN_0024bce4();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245920;
      FUN_00247210();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245924;
      set_vram_tiles();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245928;
      update_controller_state();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x24592c;
      initialize_input_state();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245930;
      apply_scroll_offsets();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245934;
      FUN_00247b2c();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245938;
      render_menu_text();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x24593c;
      apply_palette_colors();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245940;
      FUN_00248e58();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245944;
      FUN_00248f7e();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245948;
      fade_out_sequence();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x24594c;
      no_op();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245950;
      FUN_0024b23c();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245954;
      FUN_0024b2ec();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245958;
      apply_scroll_offsets();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x24595c;
      update_menu_animation();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245960;
      FUN_00249168();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245964;
      FUN_0024847e();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x24596a;
      FUN_0024c9c8();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245970;
      FUN_0024d5c0();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245974;
      FUN_0024801c();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245978;
      FUN_0024910a();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x24597c;
      FUN_00248430();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245980;
      FUN_0024ab5c();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245984;
      FUN_00247fd2();
      *(undefined4 *)((int)register0x0000003c + -4) = 0x245988;
      update_menu_cursor();
      puVar2 = (undefined1 *)register0x0000003c;
    }
  } while( true );
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024d6b6(void) {
  (*_DAT_00ffa69c)();
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024d6c4(void) {
  (*_DAT_00ffa6a0)();
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024d6d2(void) {
  (*_DAT_00ffa6a4)();
  return;
}

void FUN_0024d6e0(void) {
  return;
}

void FUN_0024d6ea(void) {
  return;
}

void FUN_0024d6f4(void) {
  return;
}

void FUN_0024d6fe(void) {
  return;
}

void FUN_0024d708(void) {
  return;
}

void FUN_0024d712(void) {
  return;
}

void FUN_0024d71c(void) {
  return;
}

void FUN_0024d726(void) {
  return;
}

void FUN_0024d730(void) {
  DAT_00ffa6cc = 0xff;
  DAT_00ffa6cd = 0;
  DAT_00ffff7a = 0xff;
  return;
}

void FUN_0024d744(void) {
  DAT_00ffa6cc = 0;
  DAT_00ffa6cd = 0;
  return;
}

void FUN_0024d752(void) {
  if (DAT_00ffff9c != '\0') {
    FUN_002cbd12(0x47);
    FUN_002cbcfc();
  }
  return;
}

undefined8 FUN_0024d776(void) {
  undefined4 in_D0;
  undefined4 in_D1;
  
  FUN_002cbcfc(0x47);
  return CONCAT44(in_D0,in_D1);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024d7ba(void) {
  undefined4 *in_A0;
  
  _DAT_00ffa69c = *in_A0;
  _DAT_00ffa6a0 = in_A0[1];
  _DAT_00ffa6a4 = in_A0[2];
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024d7c8(void) {
  undefined2 unaff_D3w;
  
  _DAT_00c00004 = 0x70020003;
  _DAT_00c00000 = unaff_D3w;
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024d7ea(void) {
  undefined4 extraout_A0;
  undefined4 extraout_A1;
  undefined4 unaff_A6;
  undefined8 uVar1;
  
  FUN_002cbd3e();
  FUN_0024cba0();
  FUN_0024acbc();
  FUN_0024cb8c();
  FUN_0024ac98();
  _DAT_00c00004 = 0x8c81;
  FUN_0024c5f6();
  FUN_0024d25a();
  FUN_0024d7c8();
  FUN_0024ca00();
  FUN_0024d8dc();
  FUN_0024d8dc();
  FUN_0024cb68();
  FUN_0024cb40();
  DAT_00fffbeb = 0xff;
  uVar1 = FUN_0024c6ae();
  DAT_00fffbeb = 0;
  if (DAT_00ffff9c != '\0') {
    FUN_002cbd12(0x25,uVar1,extraout_A0,extraout_A1,unaff_A6);
    FUN_002cbcfc();
  }
  FUN_0024d2d2();
  FUN_0024cc9a();
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024d8dc(void) {
  ushort uVar1;
  int in_A1;
  
  uVar1 = (ushort)((uint)(in_A1 << 2) >> 0x10);
  _DAT_00c00004 = (CONCAT22(uVar1,(ushort)(in_A1 << 2) >> 2) | 0x4000) << 0x10 | (uint)uVar1;
  FUN_002599de();
  return;
}

void FUN_0024d8fc(void) {
  FUN_00259c26();
  return;
}

void FUN_0024d93e(void) {
                    // WARNING: Subroutine does not return
  FUN_0024d974();
}

void FUN_0024d948(void) {
                    // WARNING: Subroutine does not return
  FUN_0024d974();
}

void FUN_0024d952(void) {
                    // WARNING: Subroutine does not return
  FUN_0024d974();
}

void FUN_0024d95c(void) {
                    // WARNING: Subroutine does not return
  FUN_0024d974();
}

char FUN_0024d974(void) {
  char cVar1;
  uint unaff_D3;
  uint unaff_D4;
  
  for (; unaff_D4 <= unaff_D3; unaff_D3 = unaff_D3 - unaff_D4) {
  }
  cVar1 = FUN_0024c660();
  return cVar1 + '\x01';
}

void FUN_0024d98a(void) {
  undefined1 in_ZF;
  
  FUN_0024d6e0();
  if (!(bool)in_ZF) {
    FUN_0024d712();
    if (!(bool)in_ZF) {
      FUN_0024d71c();
      if (!(bool)in_ZF) {
        FUN_0024d726();
      }
    }
  }
  return;
}

void FUN_0024d9a2(void) {
  short unaff_D4w;
  
  do {
    FUN_0024cd3a();
    if (DAT_00ffa6cd != '\0') {
      return;
    }
    unaff_D4w = unaff_D4w + -1;
  } while (unaff_D4w != -1);
  return;
}

// WARNING: Removing unreachable block (ram,0x0024da66)
void FUN_0024da50(void) {
                    // WARNING: Do nothing block with infinite loop
  do {
  } while( true );
}

void FUN_0024db08(void) {
  undefined1 in_ZF;
  
  FUN_0024ad4e();
  if ((bool)in_ZF) {
    FUN_0024db1e();
    return;
  }
  return;
}

void FUN_0024db10(void) {
  undefined1 in_ZF;
  
  FUN_0024ad66();
  if ((bool)in_ZF) {
    FUN_0024db1e();
    return;
  }
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
ushort FUN_0024db18(void) {
  ushort uVar1;
  short unaff_D2w;
  undefined1 unaff_D3b;
  int unaff_A2;
  int unaff_A5;
  undefined1 in_ZF;
  
  uVar1 = FUN_0024ad06();
  if ((bool)in_ZF) {
    FUN_0024adf6();
    *(short *)(unaff_A5 + 0x32) = unaff_D2w;
    *(undefined1 *)(unaff_A5 + 0x34) = unaff_D3b;
    *(short *)(unaff_A5 + 2) = _DAT_00ffa698 + _DAT_00fffdcc;
    uVar1 = _DAT_00ffa69a + _DAT_00fffdce;
    *(ushort *)(unaff_A5 + 4) = uVar1;
    *(undefined1 *)(unaff_A2 + unaff_D2w) = 0;
    uVar1 = uVar1 & 0xff00;
  }
  return uVar1;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
ushort FUN_0024db1e(void) {
  ushort uVar1;
  short unaff_D2w;
  undefined1 unaff_D3b;
  int unaff_A2;
  int unaff_A5;
  
  FUN_0024adf6();
  *(short *)(unaff_A5 + 0x32) = unaff_D2w;
  *(undefined1 *)(unaff_A5 + 0x34) = unaff_D3b;
  *(short *)(unaff_A5 + 2) = _DAT_00ffa698 + _DAT_00fffdcc;
  uVar1 = _DAT_00ffa69a + _DAT_00fffdce;
  *(ushort *)(unaff_A5 + 4) = uVar1;
  *(undefined1 *)(unaff_A2 + unaff_D2w) = 0;
  return uVar1 & 0xff00;
}

void FUN_0024db8a(void) {
  DAT_00fffdfa = 0xff;
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024e0c0(void) {
  ushort unaff_D7w;
  ushort uVar1;
  int unaff_A5;
  bool bVar2;
  
  FUN_0024d448();
  bVar2 = (unaff_D7w & 1) == 0;
  if (!bVar2) {
    FUN_0024ad06();
    if (bVar2) {
      FUN_0024adf6();
      *(undefined2 *)(unaff_A5 + 2) = _DAT_00ffa682;
      *(undefined2 *)(unaff_A5 + 4) = _DAT_00ffa684;
      if ((unaff_D7w & 2) == 0) {
        uVar1 = -((unaff_D7w & 0x3ff) + 0x400);
      }
      else {
        uVar1 = (unaff_D7w & 0x3ff) + 0x400;
      }
      *(ushort *)(unaff_A5 + 0x18) = uVar1;
      FUN_0024d448();
      *(ushort *)(unaff_A5 + 0x1a) = -((uVar1 & 0x7ff) + 0x200);
    }
  }
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
undefined8 FUN_0024e9f0(void) {
  undefined4 in_D0;
  undefined4 in_D1;
  undefined4 extraout_A0;
  undefined4 extraout_A1;
  undefined4 unaff_A6;
  undefined8 uVar1;
  
  DAT_00fffd9d = 0;
  DAT_00fffd9c = 0;
  DAT_00fffbec = 0;
  _DAT_00ffa6ea = 0;
  _DAT_00ffa6ec = 0;
  DAT_00fffcf8 = 0;
  DAT_00fffcf9 = 0;
  DAT_00fffd0b = 0;
  DAT_00fffd5a = 0;
  _DAT_00ffa6f2 = 0x1ad964;
  DAT_00ffa709 = 0;
  DAT_00fffdf1 = '\0';
  DAT_00fffdf0 = 0xff;
  if (DAT_00ffff9c != '\0') {
    FUN_002cbd12(0x52);
    FUN_002cbcfc();
  }
  _DAT_00ffa6f0 = 0x6000;
  FUN_0024acc8();
  do {
    FUN_0024eb7a();
  } while (DAT_00fffdf1 == '\0');
  FUN_0024cba0();
  DAT_00ffa692 = (undefined1)*_DAT_00ffa668;
  uVar1 = FUN_0024ebc6();
  DAT_00fffdf1 = '\0';
  if (DAT_00ffff9c != '\0') {
    FUN_002cbd12(0x51,uVar1,extraout_A0,extraout_A1,unaff_A6);
    FUN_002cbcfc();
  }
  do {
    FUN_0024eb7a();
  } while (DAT_00fffdf1 == '\0');
  DAT_00fffdf0 = 0;
  return CONCAT44(in_D0,in_D1);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
undefined8 FUN_0024eadc(void) {
  undefined4 in_D0;
  undefined4 in_D1;
  
  DAT_00fffbec = 0;
  _DAT_00ffa6ea = 0;
  _DAT_00ffa6ec = 0;
  DAT_00fffcf8 = 0;
  DAT_00fffcf9 = 0;
  DAT_00fffd0b = 0;
  _DAT_00ffa6f2 = 0x1ad964;
  DAT_00ffa709 = 0;
  DAT_00fffdf1 = '\0';
  DAT_00fffdf0 = 0xff;
  if (DAT_00ffff9c != '\0') {
    FUN_002cbd12(0x52);
    FUN_002cbcfc();
  }
  do {
    FUN_0024eb7a();
  } while (DAT_00fffdf1 == '\0');
  FUN_0024cba0();
  DAT_00ffa692 = (undefined1)*_DAT_00ffa668;
  FUN_0024ebc6();
  DAT_00fffdf1 = 0;
  DAT_00fffdf0 = 0;
  return CONCAT44(in_D0,in_D1);
}

void FUN_0024eb7a(void) {
  DAT_00ffa6cf = DAT_00ffa6cf + '\x01';
  wait_for_user_input();
  apply_scroll_offsets();
  FUN_0024a766();
  FUN_0024a4f4();
  FUN_00247b2c();
  no_op();
  apply_scroll_offsets();
  FUN_00249168();
  FUN_0024847e();
  FUN_0024c9c8();
  FUN_0024801c();
  FUN_0024910a();
  FUN_00248430();
  FUN_0024ab5c();
  FUN_00247fd2();
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024ebc6(void) {
  uint uVar1;
  int iVar2;
  undefined4 extraout_A0;
  undefined4 extraout_A1;
  undefined8 uVar3;
  
  _DAT_00c00004 = 0x8b00;
  FUN_0024acc8();
  FUN_0024acaa();
  _DAT_00fffcd0 = 0;
  _DAT_00fffcd2 = 0;
  uVar1 = (uint)DAT_00ffa692;
  iVar2 = uVar1 * 0x40;
  _DAT_00ffa676 = *(undefined2 *)(_DAT_00ffa668 + 2);
  _DAT_00ffa686 = *(undefined2 *)(_DAT_00ffa668 + 2);
  _DAT_00ffa67a = *(undefined2 *)(_DAT_00ffa668 + 6);
  _DAT_00ffa67e = 0xb0;
  _DAT_00ffa678 = *(undefined2 *)(_DAT_00ffa668 + 4);
  _DAT_00ffa688 = *(undefined2 *)(_DAT_00ffa668 + 4);
  _DAT_00ffa67c = *(undefined2 *)(_DAT_00ffa668 + 8);
  _DAT_00ffa680 = 400;
  DAT_00fffde5 = (&DAT_0025bc00)[iVar2];
  if ((&PTR_DAT_0025bbe0)[uVar1 * 0x10] != (undefined *)0x0) {
    FUN_0024d8dc();
  }
  if ((&PTR_DAT_0025bbd4)[uVar1 * 0x10] != (undefined *)0x0) {
    FUN_00259c26();
  }
  _DAT_00fffdb8 = (&PTR_DAT_0025bbd8)[uVar1 * 0x10];
  _DAT_00fffdc0 = *(undefined2 *)(&DAT_0025bbdc + iVar2);
  _DAT_00ffa6b4 = (&PTR_LAB_0025bbf0)[uVar1 * 0x10];
  _DAT_00ffa664 = (&PTR_LAB_0025bbf8)[uVar1 * 0x10];
  DAT_00fffdde = (&DAT_0025bbdf)[iVar2];
  _DAT_00ffa66e = *(short *)(&DAT_0025bbf4 + iVar2);
  _DAT_00ffa66c = _DAT_00ffa66e * 2;
  _DAT_00ffa670 = _DAT_00ffa66e << 4;
  _DAT_00ffa672 = *(short *)(&DAT_0025bbf6 + iVar2);
  _DAT_00ffa674 = _DAT_00ffa672 << 4;
  _DAT_00ff9920 = _DAT_00ffa66c * _DAT_00ffa672;
  FUN_002478ec();
  DAT_00fffbec = 0xff;
  DAT_00fffcf9 = 0xff;
  FUN_0024b47a((&PTR_LAB_0025bbec)[uVar1 * 0x10]);
  FUN_00247940();
  FUN_0024811e();
  uVar3 = FUN_00248330();
  FUN_002cbd3e(uVar3,extraout_A0,extraout_A1,&DAT_0025bbc4 + iVar2);
  FUN_0024ac6a();
  DAT_00ffa6cf = 0xff;
  apply_scroll_offsets();
  FUN_00249178();
  FUN_0024847e();
  FUN_0024910a();
  FUN_00248430();
  FUN_0024801c();
  FUN_0024ab5c();
  FUN_0024ac2c();
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024ed44(void) {
  uint uVar1;
  int iVar2;
  
  FUN_0024cba0();
  _DAT_00c00004 = 0x8b00;
  FUN_0024acd2();
  _DAT_00fffcd0 = 0;
  _DAT_00fffcd2 = 0;
  uVar1 = (uint)DAT_00ffa692;
  iVar2 = uVar1 * 0x40;
  _DAT_00ffa676 = *(undefined2 *)(&DAT_0025bbc4 + iVar2);
  _DAT_00ffa686 = *(undefined2 *)(&DAT_0025bbc4 + iVar2);
  _DAT_00ffa67a = *(undefined2 *)(&DAT_0025bbc8 + iVar2);
  _DAT_00ffa67e = 0xb0;
  _DAT_00ffa678 = *(undefined2 *)(&DAT_0025bbc6 + iVar2);
  _DAT_00ffa688 = *(undefined2 *)(&DAT_0025bbc6 + iVar2);
  _DAT_00ffa67c = *(undefined2 *)(&DAT_0025bbca + iVar2);
  _DAT_00ffa680 = 400;
  apply_scroll_offsets();
  DAT_00fffde5 = (&DAT_0025bc00)[iVar2];
  if ((&PTR_DAT_0025bbd4)[uVar1 * 0x10] != (undefined *)0x0) {
    FUN_00259c26();
  }
  _DAT_00fffdb8 = (&PTR_DAT_0025bbd8)[uVar1 * 0x10];
  _DAT_00fffdc0 = *(undefined2 *)(&DAT_0025bbdc + iVar2);
  _DAT_00ffa6b4 = (&PTR_LAB_0025bbf0)[uVar1 * 0x10];
  _DAT_00ffa664 = (&PTR_LAB_0025bbf8)[uVar1 * 0x10];
  DAT_00fffdde = (&DAT_0025bbdf)[iVar2];
  _DAT_00ffa66e = *(short *)(&DAT_0025bbf4 + iVar2);
  _DAT_00ffa66c = _DAT_00ffa66e * 2;
  _DAT_00ffa670 = _DAT_00ffa66e << 4;
  _DAT_00ffa672 = *(short *)(&DAT_0025bbf6 + iVar2);
  _DAT_00ffa674 = _DAT_00ffa672 << 4;
  _DAT_00ff9920 = _DAT_00ffa66c * _DAT_00ffa672;
  FUN_002478ec();
  DAT_00fffbec = 0xff;
  DAT_00fffcf9 = 0xff;
  (*(code *)(&PTR_LAB_0025bbec)[uVar1 * 0x10])();
  FUN_0024b47a();
  FUN_00247940();
  FUN_0024811e();
  FUN_00248330();
  DAT_00ffa6cf = 0xff;
  apply_scroll_offsets();
  FUN_00249178();
  FUN_0024847e();
  FUN_0024910a();
  FUN_00248430();
  FUN_0024801c();
  FUN_0024ac2c();
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024fbc0(void) {
  short in_D0w;
  ushort *in_A0;
  ushort *in_A1;
  
  _DAT_00c00004 = 0xc0020000;
  do {
    if ((*in_A1 & 0xe) != (*in_A0 & 0xe)) {
      if ((*in_A1 & 0xe) < (*in_A0 & 0xe)) {
        *in_A1 = *in_A1 + 2;
      }
      else {
        *in_A1 = *in_A1 - 2;
      }
    }
    if ((*in_A1 & 0xe0) != (*in_A0 & 0xe0)) {
      if ((*in_A1 & 0xe0) < (*in_A0 & 0xe0)) {
        *in_A1 = *in_A1 + 0x20;
      }
      else {
        *in_A1 = *in_A1 - 0x20;
      }
    }
    if ((*in_A1 & 0xe00) != (*in_A0 & 0xe00)) {
      if ((*in_A1 & 0xe00) < (*in_A0 & 0xe00)) {
        *in_A1 = *in_A1 + 0x200;
      }
      else {
        *in_A1 = *in_A1 - 0x200;
      }
    }
    in_A1 = in_A1 + 1;
    in_D0w = in_D0w + -1;
    in_A0 = in_A0 + 1;
  } while (in_D0w != -1);
  return;
}

void FUN_0024fc28(void) {
  char cVar1;
  short sVar2;
  int in_A1;
  int extraout_A1;
  int extraout_A1_00;
  int extraout_A1_01;
  int extraout_A1_02;
  int extraout_A1_03;
  
  sVar2 = 0;
  do {
    cVar1 = *(char *)(in_A1 + sVar2);
    if (cVar1 == 'A') {
      FUN_0024fcce();
      in_A1 = extraout_A1;
    }
    else if (cVar1 == 'O') {
      FUN_0024fc9c();
      in_A1 = extraout_A1_00;
    }
    else if (cVar1 == 'P') {
      FUN_0024fc8c();
      in_A1 = extraout_A1_01;
    }
    else if (cVar1 == 'T') {
      FUN_0024fcfa();
      in_A1 = extraout_A1_02;
    }
    else if (cVar1 == 'S') {
      FUN_0024fce4();
      in_A1 = extraout_A1_03;
    }
    sVar2 = sVar2 + 1;
  } while (sVar2 != 0x11);
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024fc8c(void) {
  short unaff_D7w;
  
  _DAT_00fffe9a = (unaff_D7w + 8) * 0x400;
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
ushort FUN_0024fc9c(void) {
  ushort uVar1;
  undefined2 extraout_D1w;
  ushort unaff_D7w;
  int unaff_A5;
  bool bVar2;
  
  bVar2 = _DAT_00ffa77a == 0;
  if (_DAT_00ffa77a < 0) {
    FUN_0024d448();
    bVar2 = (unaff_D7w & 1) == 0;
    if (!bVar2) {
      return unaff_D7w & 1;
    }
  }
  uVar1 = FUN_0024ad66();
  if (bVar2) {
    uVar1 = FUN_0024adf6();
    *(undefined2 *)(unaff_A5 + 0x50) = extraout_D1w;
    *(undefined2 *)(unaff_A5 + 0x52) = 0;
  }
  return uVar1;
}

void FUN_0024fcce(void) {
  undefined2 extraout_D1w;
  int unaff_A5;
  undefined1 in_ZF;
  
  FUN_0024ad66();
  if ((bool)in_ZF) {
    FUN_0024adf6();
    *(undefined2 *)(unaff_A5 + 0x50) = extraout_D1w;
  }
  return;
}

void FUN_0024fce4(void) {
  undefined2 extraout_D1w;
  int unaff_A5;
  undefined1 in_ZF;
  
  FUN_0024ad66();
  if ((bool)in_ZF) {
    FUN_0024adf6();
    *(undefined2 *)(unaff_A5 + 0x50) = extraout_D1w;
  }
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
ushort FUN_0024fcfa(void) {
  ushort uVar1;
  undefined2 extraout_D1w;
  ushort unaff_D7w;
  int unaff_A5;
  bool bVar2;
  
  bVar2 = _DAT_00ffa77a == 0;
  if (_DAT_00ffa77a < 0) {
    FUN_0024d448();
    bVar2 = (unaff_D7w & 3) == 0;
    if (!bVar2) {
      return unaff_D7w & 3;
    }
  }
  uVar1 = FUN_0024ad66();
  if (bVar2) {
    uVar1 = FUN_0024adf6();
    *(undefined2 *)(unaff_A5 + 0x50) = extraout_D1w;
  }
  return uVar1;
}

void FUN_0024ff20(void) {
  short sVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  sVar1 = 6;
  puVar2 = &DAT_001b7abe;
  puVar3 = (undefined2 *)&DAT_00ffb496;
  do {
    *puVar3 = *puVar2;
    sVar1 = sVar1 + -1;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (sVar1 != -1);
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0024ff38(void) {
  bool bVar1;
  undefined1 uVar2;
  
  DAT_00fffd5a = 0;
  DAT_00fffd66 = 1;
  _DAT_00ffa680 = 0x170;
  _DAT_00fffcde = 0xffff;
  DAT_00fffddf = 0xff;
  _DAT_00fffcda = 0;
  FUN_0024ae7a();
  FUN_0024adf6();
  FUN_0024adf6();
  DAT_00ffa76e = 4;
  DAT_00fffd6a = 0;
  bVar1 = true;
  FUN_0024ad66();
  if (bVar1) {
    FUN_0024adf6();
    _DAT_00ffa72a = 0x98;
    _DAT_00ffa72c = 0x148;
    DAT_00fffd70 = 10;
    uVar2 = false;
    FUN_0024ad66();
    if ((bool)uVar2) {
      FUN_0024adf6();
      FUN_0024ad66();
      if ((bool)uVar2) {
        FUN_0024adf6();
        DAT_00ffa75d = 0xff;
        DAT_00fffd6b = 0xff;
        DAT_00fffd6c = 2;
        _DAT_00ffff4a = 0xff;
        DAT_00ffff48 = 0;
        _DAT_00ffff54 = 0;
        DAT_00fffd6d = 0;
        bVar1 = true;
        FUN_0024ad66();
        if (bVar1) {
          FUN_0024adf6();
          _DAT_00fffce4 = &DAT_00ffa728;
          DAT_00fffd6e = 0;
          _DAT_00ffa72a = 0x178;
          _DAT_00ffa72c = 0x179;
          _DAT_00fffce8 = 0x80;
          _DAT_00fffcea = 0x180;
          _DAT_00fffcec = 0;
          _DAT_00fffcee = 0;
          DAT_00fffd71 = 10;
          bVar1 = false;
          FUN_0024ad66();
          if (bVar1) {
            FUN_0024adf6();
            _DAT_00ffa72a = 0x1a8;
            _DAT_00ffa72c = 0x148;
          }
        }
      }
    }
  }
  FUN_00250082();
  return;
}

void FUN_00250082(void) {
  short sVar1;
  char *pcVar2;
  char *extraout_A1;
  
  pcVar2 = &DAT_00ffa6d2;
  sVar1 = 0x25;
  do {
    if ((*pcVar2 != '\0') && (*(int *)(pcVar2 + 0x2e) == 0)) {
      FUN_00249a24();
      pcVar2 = extraout_A1;
    }
    pcVar2 = pcVar2 + 0x56;
    sVar1 = sVar1 + -1;
  } while (sVar1 != -1);
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0025035a(void) {
  short sVar1;
  undefined4 in_A0;
  undefined2 *puVar2;
  int unaff_A5;
  bool bVar3;
  undefined1 uVar4;
  
  _DAT_00fffd56 = _DAT_00ffa676;
  _DAT_00fffd58 = _DAT_00ffa678;
  DAT_00fffd5a = 0xff;
  DAT_00fffd15 = 0xff;
  _DAT_00ffa724 = 0x5c0;
  _DAT_00ffa6f2 = 0x1aef46;
  DAT_00ffa709 = 0;
  _DAT_00ffa722 = 0x4000;
  DAT_00fffeaa = 0;
  DAT_00ffff60 = 0;
  bVar3 = true;
  _DAT_00fffe0a = in_A0;
  FUN_0024ad36();
  if (bVar3) {
    FUN_0024adf6();
    _DAT_00fffe94 = 2;
    *(undefined2 *)(unaff_A5 + 0x52) = 0x700;
    _DAT_00fffe96 = 0x20;
    *(undefined2 *)(unaff_A5 + 0x50) = 0x3000;
    _DAT_00fffe9a = 0x3000;
    _DAT_00fffe98 = 0x3000;
    sVar1 = 0x3f;
    puVar2 = (undefined2 *)&DAT_00fffe0e;
    do {
      *puVar2 = 0x3000;
      sVar1 = sVar1 + -1;
      puVar2 = puVar2 + 1;
    } while (sVar1 != -1);
  }
  _DAT_00fffef0 = 0;
  DAT_00ffff61 = 0;
  FUN_00250436();
  _DAT_00fffe9c = 0;
  uVar4 = true;
  FUN_0024ad06();
  if ((bool)uVar4) {
    FUN_0024adf6();
    *(undefined1 *)(unaff_A5 + 0x46) = 3;
    uVar4 = 0;
  }
  FUN_0024ad06();
  if ((bool)uVar4) {
    FUN_0024adf6();
  }
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_00250436(void) {
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  
  _DAT_00ffff3a = 0;
  puVar2 = _DAT_00fffe0a;
  piVar3 = (int *)register0x0000003c;
LAB_00250442:
  do {
    uVar1 = *puVar2;
    if ((uVar1 != 0) && (uVar1 < 0x10)) {
      if (uVar1 == 6) {
        puVar2 = puVar2 + 2;
        goto LAB_00250442;
      }
      if (uVar1 == 2) {
        piVar3[-1] = (int)puVar2;
        puVar2 = (ushort *)CONCAT22((short)((uint)puVar2 >> 0x10),puVar2[1]);
        piVar3 = piVar3 + -1;
        goto LAB_00250442;
      }
      if (uVar1 == 3) {
        puVar2 = (ushort *)(*piVar3 + 4);
        piVar3 = piVar3 + 1;
        goto LAB_00250442;
      }
      if (uVar1 == 10) {
        puVar2 = puVar2 + 1;
        goto LAB_00250442;
      }
      if (uVar1 == 9) {
        puVar2 = puVar2 + 1;
        goto LAB_00250442;
      }
      if (uVar1 == 8) {
        return;
      }
    }
    puVar2 = puVar2 + 1;
    _DAT_00ffff3a = _DAT_00ffff3a + 1;
  } while( true );
}

undefined8 FUN_002506b6(void) {
  undefined4 in_D0;
  undefined4 in_D1;
  int unaff_A5;
  bool bVar1;
  
  bVar1 = false;
  FUN_0024adba();
  if (!bVar1) {
    FUN_0024db18();
    *(undefined1 *)(unaff_A5 + 0x47) = 5;
  }
  return CONCAT44(in_D0,in_D1);
}

void FUN_00250a90(void) {
  undefined4 in_D0;
  undefined4 in_D1;
  undefined4 in_A0;
  undefined4 in_A1;
  int unaff_A5;
  undefined4 unaff_A6;
  undefined1 uVar1;
  
  FUN_002cbd3e();
  uVar1 = DAT_00ffff9f == '\0';
  if (!(bool)uVar1) {
    FUN_002cbd12(0x12,in_D0,in_D1,in_A0,in_A1,unaff_A6);
    FUN_002cbcfc();
  }
  FUN_0024db08();
  if ((bool)uVar1) {
    *(short *)(unaff_A5 + 2) = *(short *)(unaff_A5 + 2) + 0xf;
    *(short *)(unaff_A5 + 4) = *(short *)(unaff_A5 + 4) + 0x1d;
    DAT_00fffd9c = 6;
  }
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
undefined8 FUN_00250c78(void) {
  short sVar1;
  undefined4 in_D0;
  undefined4 in_D1;
  int extraout_A1;
  int extraout_A1_00;
  int extraout_A1_01;
  int extraout_A1_02;
  int extraout_A1_03;
  undefined1 *unaff_A5;
  bool bVar2;
  int iVar3;
  
  bVar2 = false;
  FUN_0024adba();
  if (bVar2) {
LAB_00250d9c:
    return CONCAT44(in_D0,in_D1);
  }
  DAT_00fffd0f = 0xf;
  DAT_00fffd10 = 0;
  _DAT_00fffca0 = 0x1e;
  DAT_00fffcfe = 0x41;
  bVar2 = false;
  FUN_0024db08();
  if (bVar2) {
    unaff_A5[0x50] = 0;
    bVar2 = extraout_A1 == 0;
    _DAT_00fffc86 = unaff_A5;
    iVar3 = extraout_A1;
    FUN_0024ad36(extraout_A1);
    if (bVar2) {
      FUN_0024adf6();
      _DAT_00fffc92 = unaff_A5;
      *(short *)(unaff_A5 + 2) = *(short *)(extraout_A1_00 + 2) + -0x2a;
      sVar1 = *(short *)(extraout_A1_00 + 4) + 0x1b;
      *(short *)(unaff_A5 + 4) = sVar1;
      bVar2 = sVar1 == 0;
      FUN_0024ad36(iVar3);
      if (bVar2) {
        FUN_0024adf6();
        _DAT_00fffc96 = unaff_A5;
        *(short *)(unaff_A5 + 2) = *(short *)(extraout_A1_01 + 2) + 0x2a;
        sVar1 = *(short *)(extraout_A1_01 + 4) + 0x1b;
        *(short *)(unaff_A5 + 4) = sVar1;
        bVar2 = sVar1 == 0;
        unaff_A5[9] = 0xff;
        FUN_0024ad36(iVar3);
        if (bVar2) {
          FUN_0024adf6();
          _DAT_00fffc8a = unaff_A5;
          *unaff_A5 = 0x96;
          *(short *)(unaff_A5 + 2) = *(short *)(extraout_A1_02 + 2) + -0x2a;
          sVar1 = *(short *)(extraout_A1_02 + 4) + 0x1b;
          *(short *)(unaff_A5 + 4) = sVar1;
          bVar2 = sVar1 == 0;
          FUN_0024ad36();
          if (bVar2) {
            FUN_0024adf6();
            _DAT_00fffc8e = unaff_A5;
            *unaff_A5 = 0x97;
            *(short *)(unaff_A5 + 2) = *(short *)(extraout_A1_03 + 2) + 0x2a;
            *(short *)(unaff_A5 + 4) = *(short *)(extraout_A1_03 + 4) + 0x1b;
            unaff_A5[9] = 0xff;
            FUN_00253568();
            FUN_002535cc();
            goto LAB_00250d9c;
          }
        }
      }
    }
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}

undefined2 FUN_00250e02(void) {
  short sVar1;
  short in_D1w;
  char unaff_D5b;
  char *pcVar2;
  
  pcVar2 = &DAT_00ffb23e;
  sVar1 = 3;
  while ((unaff_D5b != *pcVar2 || (in_D1w != *(short *)(pcVar2 + 2)))) {
    pcVar2 = pcVar2 + 0x56;
    sVar1 = sVar1 + -1;
    if (sVar1 == -1) {
      return 0;
    }
  }
  return 1;
}

void FUN_0025114a(void) {
  int unaff_A2;
  int unaff_A5;
  bool bVar1;
  
  bVar1 = unaff_A2 == 0;
  FUN_0024db18();
  if (bVar1) {
    FUN_0024ad06();
    if (bVar1) {
      FUN_0024adf6();
      *(undefined2 *)(unaff_A5 + 2) = *(undefined2 *)(unaff_A5 + 2);
      *(undefined2 *)(unaff_A5 + 4) = *(undefined2 *)(unaff_A5 + 4);
      *(short *)(unaff_A5 + 4) = *(short *)(unaff_A5 + 4) + 0x2c;
      DAT_00fffd9c = 0xd;
    }
  }
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_002513f8(void) {
  short sVar1;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined2 extraout_A1w;
  undefined2 extraout_A1w_00;
  undefined2 unaff_A6w;
  bool bVar2;
  undefined8 uVar3;
  
  _DAT_00fffdac = 0;
  FUN_002cbd3e();
  DAT_00fffbec = -1;
  FUN_0024cba0();
  FUN_0024c5f6();
  FUN_0024acbc();
  FUN_0024cb8c();
  DAT_00fffde5 = 0;
  FUN_0024d2c0();
  FUN_0024c5f6();
  FUN_0024ca74();
  FUN_0024ca12();
  FUN_0024d8dc();
  FUN_0024d8dc();
  FUN_0024d8dc();
  _DAT_00c00004 = 0x8b00;
  FUN_0024cd32();
  FUN_0024caee();
  DAT_00fffd28 = 0;
  DAT_00fffde4 = DAT_00ffa692;
  FUN_0024c6ee();
  FUN_0024cd32();
  uVar3 = FUN_0024cb40();
  if (DAT_00ffff9f != '\0') {
    FUN_002cbd12(5,uVar3,extraout_A0,extraout_A1w,unaff_A6w);
    FUN_002cbcfc();
  }
  sVar1 = 299;
  do {
    while( true ) {
      FUN_0024cd3a();
      bVar2 = sVar1 == 0;
      uVar3 = FUN_0024d98a();
      if (bVar2) break;
      DAT_00fffbec = '\0';
      sVar1 = sVar1 + -1;
      if (sVar1 == -1) goto LAB_0025150c;
    }
  } while (DAT_00fffbec != '\0');
  FUN_002cbd3e(uVar3,extraout_A0_00,extraout_A1w_00,unaff_A6w);
  if (DAT_00ffff98 == '\x01') {
    FUN_0024d69e();
    return;
  }
LAB_0025150c:
  FUN_0024cc9a();
  return;
}

void FUN_002523d4(void) {
  char cVar1;
  char cVar2;
  ushort uVar3;
  int in_A1;
  undefined1 *puVar4;
  
  uVar3 = (ushort)(byte)(DAT_001a5b54 - 1);
  puVar4 = &DAT_00ffa728;
  cVar1 = *(char *)(in_A1 + 0x1c);
  cVar2 = *(char *)(in_A1 + 0x1d);
  do {
    *(short *)(puVar4 + 2) = (short)cVar1 + *(short *)(puVar4 + 2);
    *(short *)(puVar4 + 4) = (short)cVar2 + *(short *)(puVar4 + 4);
    puVar4 = puVar4 + 0x56;
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0xffff);
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_00252b3a(void) {
  int in_A1;
  
  if (DAT_00fffdf3 != '\x06') {
    DAT_00fffdf3 = '\x06';
    *(undefined ***)(in_A1 + 10) = &PTR_s_P_P_P_P_A_P_P_O_P_O_O_P_P_P_P_P_A_001a2cba;
    *(undefined1 *)(in_A1 + 0x36) = 0;
    _DAT_00ffa6f2 = 0x1af6a0;
    DAT_00ffa709 = 0;
    _DAT_00ffa6ec = 0xf800;
    if (*(ushort *)(in_A1 + 2) <= _DAT_00ffa682) {
      _DAT_00ffa6ea = 0x800;
      return;
    }
    _DAT_00ffa6ea = 0xf800;
  }
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_00252b90(void) {
  int in_A1;
  
  if (DAT_00fffcff == '\0') {
    _DAT_00ffa6f2 = 0x1af6a0;
    DAT_00ffa709 = 0;
  }
  if (-1 < *(char *)(in_A1 + 9)) {
    _DAT_00ffa6ea = 0x600;
    return;
  }
  _DAT_00ffa6ea = 64000;
  return;
}

undefined8 FUN_00252bc2(void) {
  undefined4 in_D0;
  undefined4 in_D1;
  int in_A1;
  undefined1 *extraout_A1;
  
  *(short *)(in_A1 + 0x52) = (ushort)DAT_00ffff60 + *(short *)(in_A1 + 0x52);
  FUN_00258ba4();
  FUN_00258888();
  if (0x69f < *(ushort *)(extraout_A1 + 0x52)) {
    *extraout_A1 = 0;
    FUN_0024ae7a();
  }
  return CONCAT44(in_D0,in_D1);
}

undefined8 FUN_00252bf8(void) {
  undefined4 in_D0;
  undefined4 in_D1;
  int in_A1;
  undefined1 *extraout_A1;
  
  *(short *)(in_A1 + 0x52) = (ushort)DAT_00ffff60 + *(short *)(in_A1 + 0x52);
  FUN_00258ba4();
  FUN_00258888();
  if (0x69f < *(ushort *)(extraout_A1 + 0x52)) {
    *extraout_A1 = 0;
    FUN_0024ae7a();
  }
  return CONCAT44(in_D0,in_D1);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_00253568(void) {
  undefined4 uVar1;
  int iVar2;
  int in_A1;
  
  iVar2 = _DAT_00fffc8a;
  uVar1 = *(undefined4 *)((int)&PTR_DAT_0000c120 + (int)(short)((ushort)DAT_00fffd0f * 4));
  *(undefined4 *)(_DAT_00fffc8a + 0x20) = uVar1;
  *(short *)(iVar2 + 2) = *(short *)(in_A1 + 2) + -0x2a;
  *(short *)(iVar2 + 4) = *(short *)(in_A1 + 4) + 0x1b;
  iVar2 = _DAT_00fffc8e;
  *(undefined4 *)(_DAT_00fffc8e + 0x20) = uVar1;
  *(short *)(iVar2 + 2) = *(short *)(in_A1 + 2) + 0x2a;
  *(short *)(iVar2 + 4) = *(short *)(in_A1 + 4) + 0x1b;
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_002535cc(void) {
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = _DAT_00fffc92;
  if (DAT_00fffd0f != DAT_00fffd10) {
    DAT_00fffd10 = DAT_00fffd0f;
    uVar1 = *(undefined4 *)((int)&PTR_DAT_0000c220 + (int)(short)((ushort)DAT_00fffd0f * 4));
    *(undefined4 *)(_DAT_00fffc92 + 0x20) = uVar1;
    *(byte *)(iVar2 + 7) = *(byte *)(iVar2 + 7) & 0xdf;
    iVar2 = _DAT_00fffc96;
    *(undefined4 *)(_DAT_00fffc96 + 0x20) = uVar1;
    *(byte *)(iVar2 + 7) = *(byte *)(iVar2 + 7) & 0xdf;
    return;
  }
  *(byte *)(_DAT_00fffc92 + 7) = *(byte *)(_DAT_00fffc92 + 7) & 0xdf;
  *(byte *)(_DAT_00fffc96 + 7) = *(byte *)(_DAT_00fffc96 + 7) & 0xdf;
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0025361a(void) {
  *(byte *)(_DAT_00fffc92 + 7) = *(byte *)(_DAT_00fffc92 + 7) & 0xdf;
  *(byte *)(_DAT_00fffc96 + 7) = *(byte *)(_DAT_00fffc96 + 7) & 0xdf;
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_00253638(void) {
  int iVar1;
  int in_A1;
  
  iVar1 = _DAT_00fffc92;
  *(byte *)(_DAT_00fffc92 + 7) = *(byte *)(_DAT_00fffc92 + 7) | 0x20;
  *(short *)(iVar1 + 2) = *(short *)(in_A1 + 2) + -0x2a;
  *(short *)(iVar1 + 4) = *(short *)(in_A1 + 4) + 0x1b;
  iVar1 = _DAT_00fffc96;
  *(byte *)(_DAT_00fffc96 + 7) = *(byte *)(_DAT_00fffc96 + 7) | 0x20;
  *(short *)(iVar1 + 2) = *(short *)(in_A1 + 2) + 0x2a;
  *(short *)(iVar1 + 4) = *(short *)(in_A1 + 4) + 0x1b;
  return;
}

void FUN_00253d20(void) {
  int in_A1;
  
  if (*(char *)(in_A1 + 0x34) != '\0') {
    *(undefined1 *)(*(short *)(in_A1 + 0x32) + 0xffb86b) = *(undefined1 *)(in_A1 + 0x34);
  }
  return;
}

undefined2 FUN_00253da0(void) {
  undefined2 in_D0w;
  
  DAT_00ffa6c8 = DAT_00ffa6c8 + 1;
  if (0x39 < DAT_00ffa6c8) {
    DAT_00ffa6c8 = 0x39;
  }
  if (DAT_00ffff9c != '\0') {
    FUN_002cbd12(0x26,DAT_00ffa6c8);
    FUN_002cbcfc();
  }
  return in_D0w;
}

void FUN_00253eaa(void) {
  int in_A1;
  
  FUN_0024adf6();
  if ((DAT_00ffa6cf & 2) != 0) {
    *(undefined1 *)(in_A1 + 9) = 0xff;
  }
  return;
}

void FUN_0025400c(void) {
  undefined1 *in_A1;
  int extraout_A1;
  int unaff_A2;
  
  *in_A1 = 0x86;
  *(undefined **)(in_A1 + 0x20) = &DAT_001b615e;
  in_A1[0x37] = 0;
  *(undefined2 *)(in_A1 + 0x1a) = 0xf600;
  *(undefined2 *)(in_A1 + 0x18) = 0x200;
  FUN_002495b0();
  DAT_00fffe02 = 0xff;
  *(undefined **)(extraout_A1 + 10) = &DAT_001ace70;
  *(undefined1 *)(unaff_A2 + 0x36) = 0;
  return;
}

void FUN_0025421e(void) {
  ushort uVar1;
  uint uVar2;
  ushort unaff_D7w;
  int unaff_A2;
  int unaff_A5;
  undefined1 in_ZF;
  
  FUN_0024ad66();
  if ((bool)in_ZF) {
    FUN_0024adf6();
    *(undefined ***)(unaff_A5 + 10) = &PTR_DAT_001a3322;
    *(undefined2 *)(unaff_A5 + 2) = *(undefined2 *)(unaff_A2 + 2);
    *(undefined2 *)(unaff_A5 + 4) = *(undefined2 *)(unaff_A2 + 4);
    uVar2 = FUN_0024d448();
    if ((uVar2 & 1) != 0) {
      *(undefined1 *)(unaff_A5 + 9) = 0xff;
    }
    uVar1 = (unaff_D7w & 0x7ff) - 0x200;
    *(ushort *)(unaff_A5 + 0x18) = uVar1;
    FUN_0024d448();
    *(ushort *)(unaff_A5 + 0x1a) = -((uVar1 & 0x7ff) + 0x600);
  }
  return;
}

undefined8 FUN_0025449c(void) {
  short in_D0w;
  int extraout_A1;
  int extraout_A1_00;
  int extraout_A1_01;
  int extraout_A1_02;
  int unaff_A5;
  bool bVar1;
  short sStack_6;
  
  if (DAT_00fffbf2 == '\0') {
    bVar1 = false;
    FUN_0024adba();
    if (bVar1) {
      *(undefined **)(unaff_A5 + 0x20) = &DAT_001b3826;
      *(undefined1 *)(unaff_A5 + 0x37) = 0;
      *(undefined2 *)(unaff_A5 + 2) = *(undefined2 *)(extraout_A1 + 2);
      *(undefined2 *)(unaff_A5 + 4) = *(undefined2 *)(extraout_A1 + 4);
      return CONCAT44((int)in_D0w,(int)sStack_6);
    }
    FUN_0024ad36();
    if (bVar1) {
      FUN_0024adf6();
      *(undefined2 *)(unaff_A5 + 2) = *(undefined2 *)(extraout_A1_00 + 2);
      *(undefined2 *)(unaff_A5 + 4) = *(undefined2 *)(extraout_A1_00 + 4);
    }
  }
  else {
    bVar1 = false;
    FUN_0024adba();
    if (bVar1) {
      *(undefined **)(unaff_A5 + 0x20) = &DAT_001b37ea;
      *(undefined1 *)(unaff_A5 + 0x37) = 0;
      *(undefined2 *)(unaff_A5 + 2) = *(undefined2 *)(extraout_A1_01 + 2);
      *(undefined2 *)(unaff_A5 + 4) = *(undefined2 *)(extraout_A1_01 + 4);
      return CONCAT44((int)in_D0w,(int)sStack_6);
    }
    FUN_0024ad36();
    if (bVar1) {
      FUN_0024adf6();
      *(undefined2 *)(unaff_A5 + 2) = *(undefined2 *)(extraout_A1_02 + 2);
      *(undefined2 *)(unaff_A5 + 4) = *(undefined2 *)(extraout_A1_02 + 4);
      return CONCAT44((int)in_D0w,(int)sStack_6);
    }
  }
  return CONCAT44((int)in_D0w,(int)sStack_6);
}

undefined8 FUN_0025454c(void) {
  short in_D0w;
  int extraout_A1;
  int extraout_A1_00;
  int unaff_A5;
  bool bVar1;
  short sStack_6;
  
  bVar1 = false;
  FUN_0024adba();
  if (bVar1) {
    *(undefined **)(unaff_A5 + 0x20) = &DAT_001b2ae2;
    *(undefined1 *)(unaff_A5 + 0x37) = 0;
    *(undefined2 *)(unaff_A5 + 2) = *(undefined2 *)(extraout_A1 + 2);
    *(undefined2 *)(unaff_A5 + 4) = *(undefined2 *)(extraout_A1 + 4);
    return CONCAT44((int)in_D0w,(int)sStack_6);
  }
  FUN_0024ad36();
  if (bVar1) {
    FUN_0024adf6();
    *(undefined2 *)(unaff_A5 + 2) = *(undefined2 *)(extraout_A1_00 + 2);
    *(undefined2 *)(unaff_A5 + 4) = *(undefined2 *)(extraout_A1_00 + 4);
  }
  return CONCAT44((int)in_D0w,(int)sStack_6);
}

undefined8 FUN_002545a0(void) {
  short in_D0w;
  int extraout_A1;
  int extraout_A1_00;
  int unaff_A5;
  bool bVar1;
  short sStack_6;
  
  bVar1 = false;
  FUN_0024adba();
  if (bVar1) {
    *(undefined **)(unaff_A5 + 0x20) = &DAT_001b2af6;
    *(undefined1 *)(unaff_A5 + 0x37) = 0;
    *(undefined2 *)(unaff_A5 + 2) = *(undefined2 *)(extraout_A1 + 2);
    *(undefined2 *)(unaff_A5 + 4) = *(undefined2 *)(extraout_A1 + 4);
    return CONCAT44((int)in_D0w,(int)sStack_6);
  }
  FUN_0024ad36();
  if (bVar1) {
    FUN_0024adf6();
    *(undefined2 *)(unaff_A5 + 2) = *(undefined2 *)(extraout_A1_00 + 2);
    *(undefined2 *)(unaff_A5 + 4) = *(undefined2 *)(extraout_A1_00 + 4);
  }
  return CONCAT44((int)in_D0w,(int)sStack_6);
}

undefined8 FUN_002545f4(void) {
  short in_D0w;
  int unaff_A2;
  int unaff_A5;
  bool bVar1;
  short sStack_6;
  
  bVar1 = false;
  FUN_0024adba();
  if (bVar1) {
    *(undefined **)(unaff_A5 + 0x20) = &DAT_001b3826;
    *(undefined1 *)(unaff_A5 + 0x37) = 0;
    *(undefined2 *)(unaff_A5 + 2) = *(undefined2 *)(unaff_A2 + 2);
    *(undefined2 *)(unaff_A5 + 4) = *(undefined2 *)(unaff_A2 + 4);
    return CONCAT44((int)in_D0w,(int)sStack_6);
  }
  FUN_0024ad36();
  if (bVar1) {
    FUN_0024adf6();
    *(undefined2 *)(unaff_A5 + 2) = *(undefined2 *)(unaff_A2 + 2);
    *(undefined2 *)(unaff_A5 + 4) = *(undefined2 *)(unaff_A2 + 4);
  }
  return CONCAT44((int)in_D0w,(int)sStack_6);
}

int FUN_002546be(void) {
  ushort uVar1;
  int in_D0;
  ushort unaff_D7w;
  int unaff_A2;
  int unaff_A5;
  bool bVar2;
  
  bVar2 = in_D0 == 0;
  FUN_0024ad06();
  if (bVar2) {
    FUN_0024adf6();
    *(undefined2 *)(unaff_A5 + 2) = *(undefined2 *)(unaff_A2 + 2);
    *(undefined2 *)(unaff_A5 + 4) = *(undefined2 *)(unaff_A2 + 4);
    *(undefined **)(unaff_A5 + 0x20) = &DAT_001b35b2;
    FUN_0024d448();
    uVar1 = -((unaff_D7w & 0x7ff) + 0x600);
    *(ushort *)(unaff_A5 + 0x1a) = uVar1;
    FUN_0024d448();
    *(ushort *)(unaff_A5 + 0x18) = (uVar1 & 0x7ff) - 0x400;
  }
  return in_D0;
}

int FUN_0025470e(void) {
  ushort uVar1;
  int in_D0;
  ushort unaff_D7w;
  int unaff_A2;
  int unaff_A5;
  bool bVar2;
  
  bVar2 = in_D0 == 0;
  FUN_0024ad06();
  if (bVar2) {
    FUN_0024adf6();
    *(undefined2 *)(unaff_A5 + 2) = *(undefined2 *)(unaff_A2 + 2);
    *(undefined2 *)(unaff_A5 + 4) = *(undefined2 *)(unaff_A2 + 4);
    *(undefined **)(unaff_A5 + 0x20) = &DAT_001b35e8;
    FUN_0024d448();
    uVar1 = -((unaff_D7w & 0x7ff) + 0x200);
    *(ushort *)(unaff_A5 + 0x1a) = uVar1;
    FUN_0024d448();
    *(ushort *)(unaff_A5 + 0x18) = (uVar1 & 0xfff) - 0x800;
  }
  return in_D0;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0025475e(void) {
  ushort uVar1;
  int in_D0;
  ushort unaff_D7w;
  int unaff_A2;
  int unaff_A5;
  bool bVar2;
  
  if (_DAT_00fffbfc < 0x30313030) {
    bVar2 = in_D0 == 0;
    FUN_0024ad06();
    if (bVar2) {
      FUN_0024adf6();
      *(undefined2 *)(unaff_A5 + 2) = *(undefined2 *)(unaff_A2 + 2);
      *(undefined2 *)(unaff_A5 + 4) = *(undefined2 *)(unaff_A2 + 4);
      FUN_0024d448();
      uVar1 = (unaff_D7w & 0x3ff) - 0x100;
      *(ushort *)(unaff_A5 + 0x18) = uVar1;
      FUN_0024d448();
      *(ushort *)(unaff_A5 + 0x1a) = -((uVar1 & 0x3ff) + 0x100);
    }
  }
  return;
}

void FUN_002548e8(void) {
  int extraout_A1;
  int unaff_A5;
  undefined1 in_ZF;
  
  FUN_0024ad1e();
  if ((bool)in_ZF) {
    FUN_0024adf6();
    *(undefined2 *)(unaff_A5 + 2) = *(undefined2 *)(extraout_A1 + 2);
    *(undefined2 *)(unaff_A5 + 4) = *(undefined2 *)(extraout_A1 + 4);
  }
  return;
}

void FUN_00254d72(void) {
  int unaff_A2;
  int unaff_A5;
  undefined1 in_ZF;
  
  FUN_0024ad66();
  if ((bool)in_ZF) {
    FUN_0024adf6();
    *(undefined2 *)(unaff_A5 + 2) = *(undefined2 *)(unaff_A2 + 2);
    *(undefined2 *)(unaff_A5 + 4) = *(undefined2 *)(unaff_A2 + 4);
  }
  return;
}

void FUN_00254de4(void) {
  int unaff_A2;
  int unaff_A5;
  undefined1 in_ZF;
  
  FUN_0024ad06();
  if ((bool)in_ZF) {
    FUN_0024adf6();
    *(undefined2 *)(unaff_A5 + 2) = *(undefined2 *)(unaff_A2 + 2);
    *(undefined2 *)(unaff_A5 + 4) = *(undefined2 *)(unaff_A2 + 4);
  }
  return;
}

void FUN_00255b9e(void) {
  int in_A1;
  
  *(undefined1 *)(*(int *)(in_A1 + 0x48) + 1) = 4;
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_00255fd6(void) {
  ushort uVar1;
  short sVar2;
  int unaff_A2;
  
  uVar1 = CONCAT11((char)((ushort)_DAT_00fffdda >> 8),(char)_DAT_00fffdda << 2);
  sVar2 = *(short *)(&DAT_00256006 + uVar1);
  if (DAT_00ffa6db != '\0') {
    sVar2 = -sVar2;
  }
  *(short *)(unaff_A2 + 0x18) = sVar2 + *(short *)(unaff_A2 + 0x18);
  *(short *)(unaff_A2 + 0x1a) = *(short *)(&DAT_00256008 + uVar1) + *(short *)(unaff_A2 + 0x1a);
  return;
}

void FUN_00256114(void) {
  undefined4 extraout_A0;
  undefined4 extraout_A1;
  int unaff_A2;
  undefined8 uVar1;
  
  FUN_0024aed6();
  uVar1 = FUN_0024adf6();
  *(undefined2 *)(unaff_A2 + 2) = *(undefined2 *)(unaff_A2 + 2);
  *(undefined2 *)(unaff_A2 + 4) = *(undefined2 *)(unaff_A2 + 4);
  if (DAT_00ffff9c != '\0') {
    FUN_002cbd12(0x16,uVar1,extraout_A0,extraout_A1,&DAT_0025ac04);
    FUN_002cbcfc();
  }
  FUN_00256188();
  FUN_00256188();
  FUN_00256188();
  FUN_00256188();
  FUN_00256188();
  FUN_00256188();
  FUN_00256188();
  FUN_00256188();
  return;
}

void FUN_00256188(void) {
  ushort uVar1;
  ushort unaff_D7w;
  int unaff_A2;
  int unaff_A5;
  undefined1 in_ZF;
  
  FUN_0024ad06();
  if ((bool)in_ZF) {
    FUN_0024adf6();
    *(undefined2 *)(unaff_A5 + 2) = *(undefined2 *)(unaff_A2 + 2);
    *(undefined2 *)(unaff_A5 + 4) = *(undefined2 *)(unaff_A2 + 4);
    FUN_0024d448();
    uVar1 = (unaff_D7w & 0x7ff) - 0x3ff;
    *(ushort *)(unaff_A5 + 0x18) = uVar1;
    FUN_0024d448();
    *(ushort *)(unaff_A5 + 0x1a) = -(uVar1 & 0x7ff);
  }
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_00256518(void) {
  _DAT_00ffa6ea = 0;
  _DAT_00ffa6ec = 0;
  DAT_00fffcf8 = 0;
  DAT_00fffcf9 = 0;
  DAT_00fffbec = 0;
  DAT_00fffd0b = 0;
  DAT_00fffdf0 = 0xff;
  DAT_00ffa692 = DAT_00ffa692 + '\x01';
  FUN_0024ed44();
  DAT_00fffdf0 = 0;
  return;
}

void FUN_00256b9a(void) {
  int extraout_A1;
  int unaff_A5;
  bool bVar1;
  
  bVar1 = true;
  FUN_0024ad06();
  if (bVar1) {
    FUN_0024adf6();
    *(undefined2 *)(unaff_A5 + 2) = *(undefined2 *)(extraout_A1 + 2);
    *(undefined2 *)(unaff_A5 + 4) = *(undefined2 *)(extraout_A1 + 4);
    *(undefined1 *)(unaff_A5 + 9) = *(undefined1 *)(extraout_A1 + 9);
    *(undefined1 *)(unaff_A5 + 0x35) = *(undefined1 *)(extraout_A1 + 0x35);
  }
  return;
}

undefined4 FUN_00256bcc(void) {
  undefined4 in_D0;
  byte bVar1;
  char unaff_D6b;
  ushort unaff_D7w;
  int unaff_A5;
  
  bVar1 = FUN_0024d448();
  if ((byte)unaff_D7w < bVar1) {
    FUN_00256b9a();
    if (unaff_D6b != '\0') {
      FUN_0024d448();
      *(short *)(unaff_A5 + 2) = (unaff_D7w & 7) + *(short *)(unaff_A5 + 2);
      *(undefined2 *)(unaff_A5 + 0x1a) = 0xf600;
    }
  }
  return in_D0;
}

undefined4 FUN_00256c02(void) {
  undefined4 in_D0;
  byte bVar1;
  char unaff_D6b;
  ushort unaff_D7w;
  int unaff_A5;
  
  bVar1 = FUN_0024d448();
  if ((byte)unaff_D7w < bVar1) {
    FUN_00256b9a();
    if (unaff_D6b != '\0') {
      FUN_0024d448();
      *(short *)(unaff_A5 + 2) = (unaff_D7w & 7) + *(short *)(unaff_A5 + 2);
    }
  }
  return in_D0;
}

undefined4 FUN_00256c32(void) {
  undefined4 in_D0;
  byte bVar1;
  char unaff_D6b;
  byte unaff_D7b;
  int unaff_A5;
  
  bVar1 = FUN_0024d448();
  if (unaff_D7b < bVar1) {
    FUN_00256b9a();
    if (unaff_D6b != '\0') {
      *(undefined **)(unaff_A5 + 10) = &DAT_001a3a30;
    }
  }
  return in_D0;
}

undefined4 FUN_00256c5c(void) {
  undefined4 in_D0;
  byte bVar1;
  char unaff_D6b;
  byte unaff_D7b;
  int unaff_A5;
  
  bVar1 = FUN_0024d448();
  if (unaff_D7b < bVar1) {
    FUN_00256b9a();
    if (unaff_D6b != '\0') {
      *(undefined **)(unaff_A5 + 10) = &DAT_001a3a30;
    }
  }
  return in_D0;
}

undefined4 FUN_00256c86(void) {
  undefined4 in_D0;
  byte bVar1;
  char unaff_D6b;
  byte unaff_D7b;
  int unaff_A5;
  
  bVar1 = FUN_0024d448();
  if (unaff_D7b < bVar1) {
    FUN_00256b9a();
    if (unaff_D6b != '\0') {
      *(undefined **)(unaff_A5 + 10) = &DAT_001a3a04;
    }
  }
  return in_D0;
}

undefined4 FUN_00256cb0(void) {
  undefined4 in_D0;
  byte bVar1;
  char unaff_D6b;
  byte unaff_D7b;
  int unaff_A5;
  
  bVar1 = FUN_0024d448();
  if (unaff_D7b < bVar1) {
    FUN_00256b9a();
    if (unaff_D6b != '\0') {
      *(undefined **)(unaff_A5 + 10) = &DAT_001a3a04;
    }
  }
  return in_D0;
}

undefined4 FUN_00256cda(void) {
  undefined4 in_D0;
  byte bVar1;
  char unaff_D6b;
  byte unaff_D7b;
  int unaff_A5;
  
  bVar1 = FUN_0024d448();
  if (unaff_D7b < bVar1) {
    FUN_00256b9a();
    if (unaff_D6b != '\0') {
      *(undefined **)(unaff_A5 + 10) = &DAT_001a39c8;
    }
  }
  return in_D0;
}

undefined4 FUN_00256d04(void) {
  undefined4 in_D0;
  byte bVar1;
  char unaff_D6b;
  byte unaff_D7b;
  int unaff_A5;
  
  bVar1 = FUN_0024d448();
  if (unaff_D7b < bVar1) {
    FUN_00256b9a();
    if (unaff_D6b != '\0') {
      *(undefined **)(unaff_A5 + 10) = &DAT_001a39c8;
    }
  }
  return in_D0;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_00256d2e(void) {
  byte bVar1;
  int iVar2;
  int in_A1;
  
  iVar2 = _DAT_00ffa6e6;
  if (_DAT_00ffa6e6 != 0) {
    bVar1 = *(byte *)(_DAT_00ffa6e6 + 8);
    if (DAT_00ffa6db != '\0') {
      bVar1 = -bVar1;
    }
    *(ushort *)(in_A1 + 2) = _DAT_00ffa682 + (ushort)bVar1 + -0x80;
    *(ushort *)(in_A1 + 4) = _DAT_00ffa684 + (ushort)*(byte *)(iVar2 + 9) + -0x80;
    *(char *)(in_A1 + 9) = DAT_00ffa6db;
  }
  return;
}

undefined4 FUN_00257390(void) {
  undefined4 uVar1;
  ushort unaff_D7w;
  undefined4 extraout_A1;
  undefined8 uVar2;
  
  uVar2 = FUN_0024d448();
  uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if (DAT_00ffff9c != '\0') {
    FUN_002cbd12((&DAT_0000c320)[(short)(unaff_D7w & 7)],uVar2,&DAT_0000c320,extraout_A1);
    FUN_002cbcfc();
  }
  return uVar1;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0025759e(void) {
  if (DAT_00ffa6ef < '\0') {
    FUN_002575ba();
    return;
  }
  _DAT_00ffa6f2 = 0x1afa3e;
  DAT_00ffa709 = 0;
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_002575ac(void) {
  if (DAT_00ffa6ef < '\0') {
    FUN_002575ba();
    return;
  }
  _DAT_00ffa6f2 = 0x1afa3e;
  DAT_00ffa709 = 0;
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_002575ba(void) {
  _DAT_00ffa6f2 = 0x1af900;
  DAT_00ffa709 = 0;
  return;
}

void FUN_002579d2(void) {
  ushort unaff_D7w;
  int unaff_A5;
  
  FUN_0024add2();
  if (unaff_D7w != 3) {
    if (3 < unaff_D7w) {
      return;
    }
    FUN_00257a3a();
  }
  FUN_00257a3a();
  *(undefined **)(unaff_A5 + 0x20) = &DAT_001b0d76;
  *(undefined1 *)(unaff_A5 + 0x37) = 0;
  *(short *)(unaff_A5 + 4) = *(short *)(unaff_A5 + 4) + 6;
  return;
}

void FUN_00257a06(void) {
  ushort unaff_D7w;
  int unaff_A5;
  
  FUN_0024add2();
  if (unaff_D7w != 3) {
    if (3 < unaff_D7w) {
      return;
    }
    FUN_00257a9c();
  }
  FUN_00257a9c();
  *(undefined **)(unaff_A5 + 0x20) = &DAT_001b0d76;
  *(undefined1 *)(unaff_A5 + 0x37) = 0;
  *(short *)(unaff_A5 + 4) = *(short *)(unaff_A5 + 4) + 6;
  return;
}

void FUN_00257a3a(void) {
  short sVar1;
  ushort uVar2;
  int extraout_A1;
  int unaff_A5;
  undefined1 in_ZF;
  
  FUN_0024ad66();
  if ((bool)in_ZF) {
    FUN_0024adf6();
    *(short *)(unaff_A5 + 2) = *(short *)(extraout_A1 + 2) + -8;
    *(undefined2 *)(unaff_A5 + 4) = *(undefined2 *)(extraout_A1 + 4);
    uVar2 = (ushort)DAT_00ffa6ef;
    FUN_002580c2();
    sVar1 = FUN_0024d448();
    uVar2 = (sVar1 - (uVar2 & 0x3ff)) - 0x200;
    *(ushort *)(unaff_A5 + 0x1a) = uVar2;
    FUN_0024d448();
    *(ushort *)(unaff_A5 + 0x18) = -((uVar2 & 0x3ff) + 0x400);
  }
  return;
}

void FUN_00257a9c(void) {
  short sVar1;
  ushort uVar2;
  int extraout_A1;
  int unaff_A5;
  undefined1 in_ZF;
  
  FUN_0024ad66();
  if ((bool)in_ZF) {
    FUN_0024adf6();
    *(short *)(unaff_A5 + 2) = *(short *)(extraout_A1 + 2) + 0x10;
    *(undefined2 *)(unaff_A5 + 4) = *(undefined2 *)(extraout_A1 + 4);
    uVar2 = (ushort)DAT_00ffa6ef;
    FUN_002580c2();
    sVar1 = FUN_0024d448();
    uVar2 = (sVar1 - (uVar2 & 0x3ff)) - 0x200;
    *(ushort *)(unaff_A5 + 0x1a) = uVar2;
    FUN_0024d448();
    *(ushort *)(unaff_A5 + 0x18) = -((uVar2 & 0x3ff) + 0x400);
  }
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_00257ed4(void) {
  ushort uVar1;
  ushort uVar2;
  char *pcVar3;
  undefined1 *in_A1;
  
  pcVar3 = _DAT_00fffce4;
  if ((*_DAT_00fffce4 != '\0') && (*_DAT_00fffce4 != -0x6d)) {
    if (DAT_00fffd6e == '\0') {
      uVar1 = (_DAT_00ffa678 - _DAT_00fffd74) + 0x170;
      uVar2 = *(short *)(_DAT_00fffce4 + 4) - 0x80;
      *(ushort *)(in_A1 + 4) = uVar2;
      if ((uVar1 <= uVar2) && (_DAT_00ffa678 <= (ushort)(uVar2 - uVar1))) {
        *(ushort *)(in_A1 + 4) = uVar1 + _DAT_00ffa678;
      }
      *(undefined2 *)(in_A1 + 2) = *(undefined2 *)(pcVar3 + 2);
      return;
    }
    if (DAT_00fffd6e != '\x02') {
      if (in_A1[0x35] != '\0') goto LAB_00257f56;
      *(undefined **)(in_A1 + 0x20) = &DAT_001b0d46;
      DAT_00fffd6e = DAT_00fffd6e + '\x01';
    }
    *(undefined2 *)(in_A1 + 4) = *(undefined2 *)(pcVar3 + 4);
    *(undefined2 *)(in_A1 + 2) = *(undefined2 *)(pcVar3 + 2);
    return;
  }
LAB_00257f56:
  *in_A1 = 0;
  FUN_0024ae7a();
  return;
}

void FUN_002580c2(void) {
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_002580d8(void) {
  ushort uVar1;
  int in_A1;
  
  if (*(byte *)(_DAT_00fffce4 + 1) != DAT_00fffd71) {
    uVar1 = *(byte *)(_DAT_00fffce4 + 1) & 0xf;
    DAT_00fffd71 = (byte)uVar1;
    *(undefined4 *)(in_A1 + 0x20) = *(undefined4 *)(&DAT_0025813e + (short)(uVar1 * 4));
    *(undefined1 *)(in_A1 + 0x37) = 0;
  }
  return;
}

void FUN_00258340(void) {
  int iVar1;
  char unaff_D6b;
  int in_A1;
  
  if (((DAT_00ffa6aa == '\0') && ((DAT_00ffa6d9 & 0x20) == 0)) && (unaff_D6b != '\0')) {
    *(char *)(in_A1 + 0x50) = *(char *)(in_A1 + 0x50) + '\x01';
    iVar1 = *(int *)((int)&PTR_DAT_0000c93a + (int)(short)((ushort)*(byte *)(in_A1 + 0x50) << 2));
    if (iVar1 == 0) {
      if (DAT_00ffff9c != '\0') {
        FUN_002cbd12(0x3b);
        FUN_002cbcfc();
      }
    }
    else {
      *(int *)(in_A1 + 0x20) = iVar1;
    }
  }
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_002583d8(void) {
  _DAT_00fffd56 = _DAT_00ffa676;
  _DAT_00fffd58 = _DAT_00ffa678;
  DAT_00fffd5a = 0xff;
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
undefined8 FUN_00258518(void) {
  byte bVar1;
  undefined4 in_D0;
  undefined4 in_D1;
  undefined **ppuVar2;
  int in_A1;
  
  bVar1 = DAT_00ffa72f;
  *(byte *)(in_A1 + 7) = DAT_00ffa72f;
  if ((bVar1 & 0x20) == 0) {
    *(undefined2 *)(in_A1 + 4) = _DAT_00ffa72c;
    if (DAT_00ffa731 == '\0') {
      *(undefined2 *)(in_A1 + 2) = _DAT_00ffa72a;
    }
    else {
      *(undefined2 *)(in_A1 + 2) = _DAT_00ffa72a;
    }
    *(char *)(in_A1 + 9) = DAT_00ffa731;
    if (DAT_00ffff67 >> 1 == 0) {
      *(byte *)(in_A1 + 7) = *(byte *)(in_A1 + 7) | 0x20;
    }
    else {
      *(byte *)(in_A1 + 7) = *(byte *)(in_A1 + 7) & 0xdf;
      if (DAT_00ffff63 == '\0') {
        ppuVar2 = &PTR_DAT_00006f38;
        if ((DAT_00ffff67 >> 1 & 1) == 0) {
          ppuVar2 = &PTR_DAT_00006f38;
        }
      }
      else {
        ppuVar2 = &PTR_DAT_00006ff8;
        if ((DAT_00ffff67 >> 1 & 1) == 0) {
          ppuVar2 = &PTR_DAT_00006ff8;
        }
      }
      *(undefined4 *)(in_A1 + 0x20) =
           *(undefined4 *)((int)ppuVar2 + (int)(short)(ushort)DAT_00ffff62);
    }
  }
  else {
    *(undefined2 *)(in_A1 + 4) = 0;
  }
  return CONCAT44(in_D0,in_D1);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
undefined8 FUN_002585ca(void) {
  undefined4 in_D0;
  ushort uVar1;
  short sVar2;
  undefined4 in_D1;
  undefined1 *in_A1;
  int extraout_A1;
  int extraout_A1_00;
  int extraout_A1_01;
  int extraout_A1_02;
  int extraout_A1_03;
  int extraout_A1_04;
  int iVar3;
  
  if (_DAT_00fffe92 != 0) {
    _DAT_00fffe92 = _DAT_00fffe92 + -1;
    uVar1 = ((ushort)DAT_00ffff60 + *(short *)(in_A1 + 0x52)) - 4;
    if (0x69f < uVar1) {
      uVar1 = 0x6a0;
    }
    *(ushort *)(in_A1 + 0x52) = uVar1;
    sVar2 = 0x100;
    if (*(ushort *)(in_A1 + 0x50) <= _DAT_00ffa722) {
      sVar2 = -0x100;
    }
    *(short *)(in_A1 + 0x50) = sVar2 + *(short *)(in_A1 + 0x50);
    *(ushort *)(in_A1 + 0x50) = *(ushort *)(in_A1 + 0x50) & 0x7fff;
    FUN_00258ba4();
    return CONCAT44(in_D0,in_D1);
  }
  if (DAT_00ffff6d == 0) {
    *in_A1 = 0xf;
    FUN_002587cc();
    iVar3 = extraout_A1_00;
    if (_DAT_00fffea6 == 0) {
      uVar1 = *(ushort *)(extraout_A1_00 + 0x52);
      if ((short)uVar1 < 0) {
        uVar1 = 0;
      }
      if (0x7fe < uVar1) {
        uVar1 = 0x7ff;
      }
      _DAT_00fffe98 =
           *(ushort *)
            (&DAT_00fffe0e +
            (short)((_DAT_00fffea8 + ((ushort)(_DAT_00fffeaa + uVar1) >> 6)) - 2 & 0x7e));
    }
  }
  else {
    DAT_00ffff6d = DAT_00ffff6d - 1;
    _DAT_00fffea6 = (ushort)DAT_00ffff6d;
    FUN_002587cc();
    iVar3 = extraout_A1;
    if (*(ushort *)(extraout_A1 + 0x52) <= (ushort)(_DAT_00ffa724 - 0x100)) {
      *(ushort *)(extraout_A1 + 0x52) = _DAT_00ffa724 - 0x100;
    }
  }
  if (_DAT_00fffea6 != 0) {
    _DAT_00fffea6 = _DAT_00fffea6 - 1;
  }
  if (*(ushort *)(iVar3 + 0x50) == _DAT_00fffe98) goto LAB_002586fc;
  if (*(ushort *)(iVar3 + 0x50) < _DAT_00fffe98) {
    sVar2 = FUN_002587b0();
    uVar1 = *(short *)(extraout_A1_01 + 0x50) + sVar2;
    iVar3 = extraout_A1_01;
    if ((uVar1 != _DAT_00fffe98) && (_DAT_00fffe98 <= uVar1)) {
      if (_DAT_00fffe98 > uVar1) goto LAB_002586dc;
      goto LAB_002586f2;
    }
  }
  else {
LAB_002586dc:
    sVar2 = FUN_002587b0();
    uVar1 = *(short *)(extraout_A1_02 + 0x50) - sVar2;
    iVar3 = extraout_A1_02;
    if ((uVar1 != _DAT_00fffe98) && (uVar1 < _DAT_00fffe98)) {
LAB_002586f2:
      uVar1 = _DAT_00fffe98;
    }
  }
  *(ushort *)(iVar3 + 0x50) = uVar1;
LAB_002586fc:
  *(undefined1 *)(iVar3 + 9) = 0;
  if (_DAT_00ffa722 <= *(ushort *)(iVar3 + 0x50)) {
    *(undefined1 *)(iVar3 + 9) = 0xff;
  }
  FUN_00258ba4();
  uVar1 = *(ushort *)(extraout_A1_03 + 0x52);
  if ((-1 < (short)uVar1) && (0x1ff < uVar1)) {
    sVar2 = 0x80;
    if ((0x2ff < uVar1) && (sVar2 = 0x40, 0x3ff < uVar1)) {
      sVar2 = 0;
    }
    *(short *)(extraout_A1_03 + 4) =
         *(short *)(&DAT_00006a6c + (short)(sVar2 + (DAT_00ffa6cf & 0x1f) * 2)) +
         *(short *)(extraout_A1_03 + 4);
  }
  iVar3 = extraout_A1_03;
  if (_DAT_00fffea6 == 0) {
    DAT_00ffff63 = 0;
    if ((ushort)((_DAT_00ffa722 - *(short *)(extraout_A1_03 + 0x50)) + 0x800) < 0x1000) {
      DAT_00ffff63 = 0xff;
    }
    DAT_00ffff62 = FUN_00258888();
    iVar3 = extraout_A1_04;
  }
  *(byte *)(iVar3 + 0x3c) = *(byte *)(iVar3 + 0x3c) & 0x7f;
  if (_DAT_00ffa724 <= *(ushort *)(iVar3 + 0x52)) {
    *(byte *)(iVar3 + 0x3c) = *(byte *)(iVar3 + 0x3c) | 0x80;
  }
  return CONCAT44(in_D0,in_D1);
}

short FUN_002587b0(void) {
  ushort in_D0w;
  ushort uVar1;
  
  uVar1 = in_D0w >> 7 & 0xfe;
  if (0x20 < uVar1) {
    uVar1 = 0x20;
  }
  return *(short *)(&DAT_000070b8 + (short)uVar1) << 4;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_002587cc(void) {
  ushort uVar1;
  short sVar2;
  int in_A1;
  
  if (_DAT_00fffe96 == _DAT_00fffea4) {
    sVar2 = (ushort)DAT_00ffff60 - *(short *)(&DAT_00fffe9e + (short)((DAT_00ffa6cf & 3) * 2));
    uVar1 = (*(short *)(in_A1 + 0x52) - _DAT_00ffa724) + 0x100;
    if (uVar1 < 0x200) {
      if (uVar1 < 0x100) {
        sVar2 = sVar2 + -2;
      }
      else {
        sVar2 = sVar2 + -2;
      }
    }
    *(short *)(in_A1 + 0x52) = sVar2 + *(short *)(in_A1 + 0x52);
  }
  else {
    if ((DAT_00ffa6cf & 3) == 0) {
      if (_DAT_00fffe96 < _DAT_00fffea4) {
        _DAT_00fffe96 = _DAT_00fffe96 + 1;
      }
      else {
        _DAT_00fffe96 = _DAT_00fffe96 - 1;
      }
    }
    *(ushort *)(in_A1 + 0x52) = ((ushort)DAT_00ffff60 + *(short *)(in_A1 + 0x52)) - _DAT_00fffe96;
  }
  if ((-1 < (short)*(ushort *)(in_A1 + 0x52)) && (0x9ff < *(ushort *)(in_A1 + 0x52))) {
    *(undefined2 *)(in_A1 + 0x52) = 0xa00;
  }
  if ((*(short *)(in_A1 + 0x52) < 0) && (*(ushort *)(in_A1 + 0x52) < 0xa800)) {
    *(undefined2 *)(in_A1 + 0x52) = 0xa800;
  }
  return;
}

void FUN_00258888(void) {
  ushort uVar1;
  int in_A0;
  int in_A1;
  
  uVar1 = *(ushort *)(in_A1 + 0x52);
  if ((short)uVar1 < 0) {
    uVar1 = 0;
  }
  if (0x7fe < uVar1) {
    uVar1 = 0x7ff;
  }
  uVar1 = (uVar1 >> 5) << 2;
  if (0xbb < uVar1) {
    uVar1 = 0xbc;
  }
  *(undefined4 *)(in_A1 + 0x20) = *(undefined4 *)(in_A0 + (short)uVar1);
  return;
}

undefined8 FUN_002588b0(void) {
  undefined4 in_D0;
  undefined4 in_D1;
  int in_A1;
  undefined1 *extraout_A1;
  
  *(short *)(in_A1 + 0x52) = (ushort)DAT_00ffff60 + *(short *)(in_A1 + 0x52);
  FUN_00258ba4();
  FUN_00258888();
  if (0x69f < *(ushort *)(extraout_A1 + 0x52)) {
    *extraout_A1 = 0;
    FUN_0024ae7a();
  }
  return CONCAT44(in_D0,in_D1);
}

undefined8 FUN_00258a02(void) {
  undefined4 in_D0;
  undefined4 in_D1;
  int in_A1;
  undefined1 *extraout_A1;
  
  *(short *)(in_A1 + 0x52) = (ushort)DAT_00ffff60 + *(short *)(in_A1 + 0x52);
  FUN_00258ba4();
  if (0x69f < *(ushort *)(extraout_A1 + 0x52)) {
    *extraout_A1 = 0;
    FUN_0024ae7a();
  }
  return CONCAT44(in_D0,in_D1);
}

undefined8 FUN_00258a30(void) {
  undefined4 in_D0;
  undefined4 in_D1;
  int in_A1;
  undefined1 *extraout_A1;
  
  *(short *)(in_A1 + 0x52) = (ushort)DAT_00ffff60 + *(short *)(in_A1 + 0x52);
  FUN_00258ba4();
  FUN_00258888();
  if (0x69f < *(ushort *)(extraout_A1 + 0x52)) {
    *extraout_A1 = 0;
    FUN_0024ae7a();
  }
  return CONCAT44(in_D0,in_D1);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_00258a66(void) {
  char *in_A1;
  
  if (*in_A1 == '\x01') {
    if (((-1 < *(short *)(in_A1 + 0x52)) && (0xff < *(ushort *)(in_A1 + 0x52))) &&
       (_DAT_00fffea4 == _DAT_00fffe96)) {
      _DAT_00fffe96 = 0;
      FUN_00258ad6();
      FUN_00258ad6();
      FUN_00258ad6();
      FUN_00258ad6();
    }
    return;
  }
  if (*in_A1 != '\x12') {
    *in_A1 = '\0';
    FUN_0024ae7a();
    return;
  }
  _DAT_00fffe96 = 0x2c;
  *in_A1 = '\0';
  FUN_0024ae7a();
  return;
}

void FUN_00258ad6(void) {
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_00258b04(void) {
  if ((((DAT_00fffd4b == '\0') && (DAT_00fffe02 != '\0')) && (_DAT_00ffa6ec == 0)) &&
     (DAT_00fffcff != '\0')) {
    _DAT_00ffa6f2 = 0x1afcdc;
    DAT_00ffa709 = 0;
    DAT_00fffe02 = '\0';
    DAT_00fffd23 = 0xff;
    DAT_00fffdea = 0x48;
  }
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
undefined8 FUN_00258ba4(void) {
  ushort uVar1;
  ushort uVar2;
  undefined4 in_D0;
  ushort uVar3;
  short sVar4;
  undefined4 in_D1;
  int in_A1;
  
  uVar3 = (ushort)(*(short *)(in_A1 + 0x50) + 0x4000U) >> 5 & 0x3fe;
  uVar1 = *(ushort *)(&DAT_0025d1cc + (short)uVar3);
  uVar2 = *(ushort *)(&DAT_0025d2cc + (short)uVar3);
  uVar3 = *(ushort *)(in_A1 + 0x52);
  if ((short)uVar3 < 0) {
    uVar3 = 0;
  }
  if (0x7fe < uVar3) {
    uVar3 = 0x7ff;
  }
  uVar3 = *(ushort *)((int)&PTR_DAT_0025d9cc + (int)(short)(uVar3 & 0x7fe));
  if ((short)uVar1 < 0) {
    sVar4 = (short)(-((uint)(ushort)-uVar1 * (uint)uVar3) >> 8);
  }
  else {
    sVar4 = (short)((uint)uVar1 * (uint)uVar3 >> 8);
  }
  *(short *)(in_A1 + 2) = _DAT_00ffff40 + sVar4;
  if ((short)uVar2 < 0) {
    sVar4 = (short)(-((uint)(ushort)-uVar2 * (uint)uVar3) >> 8);
  }
  else {
    sVar4 = (short)((uint)uVar2 * (uint)uVar3 >> 8);
  }
  *(short *)(in_A1 + 4) = _DAT_00ffff42 + sVar4;
  *(byte *)(in_A1 + 7) = *(byte *)(in_A1 + 7) & 0xdf;
  if (0x69f < *(ushort *)(in_A1 + 0x52)) {
    *(byte *)(in_A1 + 7) = *(byte *)(in_A1 + 7) | 0x20;
  }
  return CONCAT44(in_D0,in_D1);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
undefined8 FUN_00258c50(void) {
  undefined4 in_D0;
  undefined4 in_D1;
  int in_A1;
  
  if (((DAT_00fffd23 == '\0') && (_DAT_00fffc9e == 0)) && (DAT_00ffff5f != '\0')) {
    *(byte *)(in_A1 + 7) = *(byte *)(in_A1 + 7) & 0xdf;
    DAT_00ffff66 = DAT_00ffff66 - 1;
    if ((char)DAT_00ffff66 < '\0') {
      DAT_00ffff66 = 5;
    }
    *(undefined4 *)(in_A1 + 0x20) =
         *(undefined4 *)
          (&DAT_0000665a + (short)(((ushort)(DAT_00ffff66 >> 1) + (_DAT_00ffa722 >> 8 & 0x7c)) * 4))
    ;
    *(undefined1 *)(in_A1 + 9) = DAT_00ffa6db;
  }
  else {
    *(byte *)(in_A1 + 7) = *(byte *)(in_A1 + 7) | 0x20;
  }
  return CONCAT44(in_D0,in_D1);
}

undefined8 FUN_002592b6(void) {
  undefined4 in_D0;
  undefined4 in_D1;
  int in_A1;
  undefined1 *extraout_A1;
  
  *(short *)(in_A1 + 0x52) = DAT_00ffff60 + 8 + *(short *)(in_A1 + 0x52);
  *(short *)(in_A1 + 0x50) = *(short *)(in_A1 + 0x18) + *(short *)(in_A1 + 0x50);
  FUN_00258ba4();
  if (0x69f < *(ushort *)(extraout_A1 + 0x52)) {
    *extraout_A1 = 0;
    FUN_0024ae7a();
  }
  return CONCAT44(in_D0,in_D1);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
undefined8 FUN_002592ec(void) {
  undefined4 in_D0;
  int iVar1;
  undefined4 uVar2;
  undefined4 in_D1;
  ushort uVar3;
  char cVar4;
  short sVar5;
  uint unaff_D7;
  int in_A1;
  int extraout_A1;
  
  if (DAT_00fffd8a != '\0') {
    DAT_00fffd8a = DAT_00fffd8a + -1;
  }
  if (DAT_00fffd8b != '\0') {
    DAT_00fffd8b = DAT_00fffd8b + -1;
  }
  if (DAT_00fffd88 < 5) {
    if ((ushort)(*(byte *)(in_A1 + 0x1c) + 3) < 7) {
      uVar3 = *(short *)(in_A1 + 2) - _DAT_00ffa682;
      if ((short)uVar3 < 0) {
        uVar3 = -uVar3;
      }
      if (uVar3 < 0x1e) {
        sVar5 = 1;
      }
      else {
        uVar3 = *(short *)(in_A1 + 4) - _DAT_00ffa684;
        if (((short)uVar3 < 0) || (uVar3 < 0x28)) {
          if ((short)(uVar3 + 0x28) < 0) {
            sVar5 = 2;
          }
          else {
            sVar5 = 3;
          }
        }
        else {
          sVar5 = 0;
        }
      }
    }
    else {
      sVar5 = 0;
    }
    cVar4 = '\0';
    if (-1 < (short)(*(short *)(in_A1 + 2) - _DAT_00ffa682)) {
      cVar4 = -1;
    }
    if (cVar4 == DAT_00fffd8d) {
      if (((byte)sVar5 != DAT_00fffd88) && (DAT_00fffd8b == '\0')) {
        DAT_00fffd88 = (byte)sVar5;
        *(undefined4 *)(in_A1 + 0x20) =
             *(undefined4 *)((int)&DAT_0000c9d6 + (int)(short)(sVar5 << 2));
        *(undefined1 *)(in_A1 + 0x37) = 0;
        DAT_00fffd8b = '\x1e';
      }
      if ((DAT_00ffa6cf & 7) == 0) {
        iVar1 = (uint)DAT_00fffd89 * 4;
        uVar2 = FUN_002498d2();
        if (((short)(_DAT_00ffa682 + (char)(&DAT_0000c9bd)[iVar1]) < 0) && (DAT_00fffd89 < 3)) {
          DAT_00fffd89 = DAT_00fffd89 + 3;
        }
        sVar5 = (*(short *)(extraout_A1 + 2) - _DAT_00ffa682) - (short)(char)(&DAT_0000c9bd)[iVar1];
        if ((((-1 < (short)(sVar5 + 0x11)) && ((short)(sVar5 + -0x11) < 0)) &&
            (sVar5 = (*(short *)(extraout_A1 + 4) - _DAT_00ffa684) -
                     (short)(char)(&DAT_0000c9bc)[iVar1], -1 < (short)(sVar5 + 0x11))) &&
           ((short)(sVar5 + -0x11) < 0)) {
          *(undefined4 *)(extraout_A1 + 0x20) =
               *(undefined4 *)
                (&DAT_0000c9e6 +
                (short)((short)CONCAT31((int3)((uint)uVar2 >> 8),DAT_00fffd89) << 2));
          *(undefined1 *)(extraout_A1 + 0x37) = 0;
          DAT_00fffd88 = 6;
          DAT_00fffd8b = '\0';
          if ((DAT_00fffd89 == 0) || ((DAT_00fffd89 != 5 && (FUN_0024d448(), (unaff_D7 & 1) == 0))))
          {
            DAT_00fffd89 = DAT_00fffd89 + 1;
          }
          else {
            DAT_00fffd89 = DAT_00fffd89 - 1;
          }
        }
      }
    }
    else {
      *(char *)(in_A1 + 9) = DAT_00fffd8d;
      DAT_00fffd8d = cVar4;
      *(undefined **)(in_A1 + 0x20) = &DAT_001b4724;
      *(undefined1 *)(in_A1 + 0x37) = 0;
      DAT_00fffd88 = 4;
      DAT_00fffd8b = '\x1e';
    }
  }
  return CONCAT44(in_D0,in_D1);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_00259746(void) {
  ushort uVar1;
  undefined *puVar2;
  int extraout_A0;
  int unaff_A5;
  bool bVar3;
  
  if ((DAT_00ffa6cf & 0x7f) == 0) {
    for (puVar2 = &DAT_002597a8; uVar1 = *(ushort *)(puVar2 + 4), uVar1 != 0; puVar2 = puVar2 + 6) {
      bVar3 = uVar1 == _DAT_00ffa684;
      if (uVar1 < _DAT_00ffa684) {
        FUN_0024ad06();
        if (!bVar3) {
          return;
        }
        FUN_0024adf6();
        *(undefined2 *)(unaff_A5 + 2) = *(undefined2 *)(extraout_A0 + 2);
        *(undefined2 *)(unaff_A5 + 4) = *(undefined2 *)(extraout_A0 + 4);
        *(undefined1 *)(unaff_A5 + 9) = *(undefined1 *)(extraout_A0 + 1);
        DAT_00fffd9c = 0xf;
        return;
      }
    }
  }
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
undefined8 FUN_002599de(void) {
  ushort uVar1;
  undefined4 in_D0;
  short sVar2;
  ushort uVar3;
  undefined4 in_D1;
  uint uVar4;
  short sVar5;
  ushort uVar6;
  ushort uVar7;
  short sVar8;
  ushort uVar9;
  int in_A0;
  undefined1 *puVar10;
  int in_A1;
  undefined2 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  
  puVar12 = (undefined1 *)(in_A0 + 0x12);
  sVar8 = *(byte *)(in_A0 + 0x11) - 1;
  uVar9 = 0;
  FUN_00259b7a();
  do {
    FUN_00259b9e();
    FUN_00259b9e();
    FUN_00259b9e();
    sVar2 = FUN_00259b7a();
    sVar2 = sVar2 + -1;
LAB_00259abc:
    uVar3 = FUN_00259b44();
    puVar13 = puVar12;
    while (puVar12 = puVar13, uVar3 != 0) {
      puVar11 = (undefined2 *)(in_A1 + (short)uVar9);
      if ((uVar9 & 1) != 0) {
        puVar12 = puVar13 + 1;
        *(undefined1 *)puVar11 = *puVar13;
        _DAT_00c00000 = *(undefined2 *)((int)puVar11 + -1);
        uVar7 = uVar9 + 1;
        uVar9 = uVar7 & 0x3fff;
        uVar3 = uVar3 - 1;
        if (uVar3 == 0) break;
        puVar11 = (undefined2 *)(in_A1 + (short)(uVar7 & 0x3fff));
      }
      uVar7 = 0x4000 - uVar9;
      if (uVar3 < (ushort)(0x4000 - uVar9)) {
        uVar7 = uVar3;
      }
      uVar3 = uVar3 - uVar7;
      uVar4 = (uint)uVar7 << 0x1f | (uint)(uVar7 >> 1);
      while (sVar5 = (short)uVar4 + -1, uVar4 = CONCAT22((short)(uVar4 >> 0x10),sVar5), sVar5 != -1)
      {
        puVar13 = puVar12 + 1;
        *(undefined1 *)puVar11 = *puVar12;
        puVar12 = puVar12 + 2;
        *(undefined1 *)((int)puVar11 + 1) = *puVar13;
        _DAT_00c00000 = *puVar11;
        puVar11 = puVar11 + 1;
      }
      puVar13 = puVar12;
      if (CARRY4(uVar4,uVar4)) {
        puVar13 = puVar12 + 1;
        *(undefined1 *)puVar11 = *puVar12;
      }
      uVar9 = uVar7 + uVar9 & 0x3fff;
    }
    sVar2 = sVar2 + -1;
    if (sVar2 != -1) {
      sVar5 = FUN_00259b44();
      uVar7 = uVar9 - (sVar5 + 1);
      sVar5 = FUN_00259b44();
      uVar3 = sVar5 + 2;
      do {
        uVar7 = uVar7 & 0x3fff;
        puVar13 = (undefined1 *)(in_A1 + (short)uVar7);
        puVar11 = (undefined2 *)(in_A1 + (short)uVar9);
        if ((uVar9 & 1) != 0) {
          *(undefined1 *)puVar11 = *puVar13;
          _DAT_00c00000 = *(undefined2 *)((int)puVar11 + -1);
          uVar6 = uVar9 + 1;
          uVar9 = uVar6 & 0x3fff;
          uVar3 = uVar3 - 1;
          if (uVar3 == 0) break;
          uVar7 = uVar7 + 1 & 0x3fff;
          puVar13 = (undefined1 *)(in_A1 + (short)uVar7);
          puVar11 = (undefined2 *)(in_A1 + (short)(uVar6 & 0x3fff));
        }
        uVar6 = uVar9;
        if (uVar9 <= uVar7) {
          uVar6 = uVar7;
        }
        uVar1 = 0x4000 - uVar6;
        if (uVar3 <= (ushort)(0x4000 - uVar6)) {
          uVar1 = uVar3;
        }
        uVar3 = uVar3 - uVar1;
        uVar7 = uVar1 + uVar7;
        uVar4 = (uint)uVar1 << 0x1f | (uint)(uVar1 >> 1);
        while (sVar5 = (short)uVar4 + -1, uVar4 = CONCAT22((short)(uVar4 >> 0x10),sVar5),
              sVar5 != -1) {
          puVar10 = puVar13 + 1;
          *(undefined1 *)puVar11 = *puVar13;
          puVar13 = puVar13 + 2;
          *(undefined1 *)((int)puVar11 + 1) = *puVar10;
          _DAT_00c00000 = *puVar11;
          puVar11 = puVar11 + 1;
        }
        if (CARRY4(uVar4,uVar4)) {
          *(undefined1 *)puVar11 = *puVar13;
        }
        uVar9 = uVar1 + uVar9 & 0x3fff;
      } while (uVar3 != 0);
      goto LAB_00259abc;
    }
    sVar8 = sVar8 + -1;
    if (sVar8 == -1) {
      return CONCAT44(in_D0,in_D1);
    }
  } while( true );
}

uint FUN_00259b44(void) {
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_D6;
  char unaff_D7b;
  ushort *in_A0;
  ushort *puVar5;
  ushort *extraout_A0;
  
  do {
    puVar5 = in_A0;
    in_A0 = puVar5 + 2;
  } while (((ushort)unaff_D6 & *puVar5) != puVar5[1]);
  bVar1 = *(byte *)(puVar5 + 0x20);
  uVar4 = (uint)bVar1;
  bVar2 = unaff_D7b - bVar1;
  if (SBORROW1(unaff_D7b,bVar1) != (short)((ushort)bVar2 << 8) < 0) {
    uVar4 = FUN_00259b86();
    in_A0 = extraout_A0;
  }
  bVar1 = *(byte *)((int)in_A0 + 0x3d);
  uVar3 = (uint)bVar1;
  if ('\x01' < (char)bVar1) {
    bVar1 = bVar1 - 1;
    uVar3 = (uint)((ushort)(unaff_D6 >> (uVar4 & 0x3f)) & in_A0[0x1f]);
    if (SBORROW1(bVar2,bVar1) != (short)((ushort)(byte)(bVar2 - bVar1) << 8) < 0) {
      uVar3 = FUN_00259b86();
    }
    uVar3 = uVar3 | 1 << (bVar1 & 0x1f);
  }
  return uVar3;
}

ushort FUN_00259b7a(void) {
  ushort in_D0w;
  ushort uVar1;
  char in_D1b;
  ushort unaff_D6w;
  char unaff_D7b;
  
  uVar1 = unaff_D6w & in_D0w;
  if (unaff_D7b < in_D1b) {
    uVar1 = FUN_00259b86();
  }
  return uVar1;
}

void FUN_00259b86(void) {
  return;
}

void FUN_00259b9e(void) {
  char cVar1;
  uint uVar2;
  short sVar4;
  undefined1 uVar5;
  uint uVar3;
  uint uVar6;
  char cVar7;
  short sVar9;
  uint uVar8;
  uint uVar10;
  ushort unaff_D6w;
  short sVar11;
  short *extraout_A0;
  short *psVar12;
  short *psVar13;
  undefined1 *extraout_A1;
  char *pcVar14;
  bool bVar15;
  char acStack_10 [12];
  undefined4 uStack_4;
  
  uStack_4 = 0x259ba4;
  sVar4 = FUN_00259b7a();
  sVar4 = sVar4 + -1;
  if (-1 < sVar4) {
    sVar9 = sVar4;
    do {
      uVar5 = FUN_00259b7a();
      *extraout_A1 = uVar5;
      sVar9 = sVar9 + -1;
    } while (sVar9 != -1);
    uVar3 = 0x80000000;
    uVar6 = 1;
    uVar8 = 0;
    sVar9 = sVar4;
    psVar12 = extraout_A0;
    pcVar14 = acStack_10;
    do {
      do {
        cVar7 = (char)uVar6;
        psVar13 = psVar12;
        if (cVar7 == *pcVar14) {
          *psVar12 = (1 << (uVar6 & 0x3f)) + -1;
          uVar10 = uVar8 >> 0x10;
          bVar15 = (short)uVar6 == 0;
          sVar11 = (short)uVar6 + -1;
          do {
            uVar2 = uVar10 & 0x8000;
            uVar10 = (uint)(ushort)((short)uVar10 << 1 | (ushort)bVar15);
            bVar15 = (unaff_D6w & 1) != 0;
            unaff_D6w = (ushort)(uVar2 != 0) << 0xf | unaff_D6w >> 1;
            sVar11 = sVar11 + -1;
          } while (sVar11 != -1);
          psVar13 = psVar12 + 2;
          psVar12[1] = unaff_D6w >> (0x10U - cVar7 & 0x3f);
          *(char *)(psVar12 + 0x20) = cVar7;
          cVar1 = (char)sVar4 - (char)sVar9;
          *(char *)((int)psVar12 + 0x41) = cVar1;
          unaff_D6w = (1 << (cVar1 - 1U & 0x3f)) - 1;
          psVar12[0x21] = unaff_D6w;
          uVar8 = uVar3 + uVar8;
        }
        sVar9 = sVar9 + -1;
        psVar12 = psVar13;
        pcVar14 = pcVar14 + 1;
      } while (sVar9 != -1);
      uVar3 = uVar3 >> 1;
      uVar6 = (uint)(byte)(cVar7 + 1U);
      sVar9 = sVar4;
      pcVar14 = acStack_10;
    } while ((byte)(cVar7 + 1U) != 0x11);
  }
  return;
}

undefined8 FUN_00259c26(void) {
  undefined4 in_D0;
  int iVar1;
  short sVar2;
  short sVar3;
  undefined4 in_D1;
  int extraout_A0;
  undefined1 *extraout_A1;
  undefined1 *extraout_A1_00;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar7;
  undefined1 *puVar6;
  
  iVar1 = FUN_00259d20();
  puVar5 = (undefined1 *)(extraout_A0 + 10);
  FUN_00259cfc();
  puVar7 = extraout_A1;
  do {
    FUN_00259d2c();
    FUN_00259d2c();
    FUN_00259d2c();
    sVar2 = FUN_00259cfc();
    sVar2 = sVar2 + -1;
    while( true ) {
      sVar3 = FUN_00259cc6();
      sVar3 = sVar3 + -1;
      puVar6 = puVar5;
      puVar4 = puVar7;
      if (-1 < sVar3) {
        do {
          puVar5 = puVar6 + 1;
          puVar7 = puVar4 + 1;
          *puVar4 = *puVar6;
          sVar3 = sVar3 + -1;
          puVar6 = puVar5;
          puVar4 = puVar7;
        } while (sVar3 != -1);
      }
      sVar2 = sVar2 + -1;
      if (sVar2 == -1) break;
      FUN_00259cc6();
      sVar3 = FUN_00259cc6();
      *puVar7 = *extraout_A1_00;
      puVar6 = puVar7 + 1;
      puVar4 = extraout_A1_00;
      do {
        puVar4 = puVar4 + 1;
        puVar7 = puVar6 + 1;
        *puVar6 = *puVar4;
        sVar3 = sVar3 + -1;
        puVar6 = puVar7;
      } while (sVar3 != -1);
    }
  } while (puVar7 < extraout_A1 + iVar1);
  return CONCAT44(in_D0,in_D1);
}

uint FUN_00259cc6(void) {
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_D6;
  char unaff_D7b;
  ushort *in_A0;
  ushort *puVar5;
  ushort *extraout_A0;
  
  do {
    puVar5 = in_A0;
    in_A0 = puVar5 + 2;
  } while (((ushort)unaff_D6 & *puVar5) != puVar5[1]);
  bVar1 = *(byte *)(puVar5 + 0x20);
  uVar4 = (uint)bVar1;
  bVar2 = unaff_D7b - bVar1;
  if (SBORROW1(unaff_D7b,bVar1) != (short)((ushort)bVar2 << 8) < 0) {
    uVar4 = FUN_00259d08();
    in_A0 = extraout_A0;
  }
  bVar1 = *(byte *)((int)in_A0 + 0x3d);
  uVar3 = (uint)bVar1;
  if ('\x01' < (char)bVar1) {
    bVar1 = bVar1 - 1;
    uVar3 = (uint)((ushort)(unaff_D6 >> (uVar4 & 0x3f)) & in_A0[0x1f]);
    if (SBORROW1(bVar2,bVar1) != (short)((ushort)(byte)(bVar2 - bVar1) << 8) < 0) {
      uVar3 = FUN_00259d08();
    }
    uVar3 = uVar3 | 1 << (bVar1 & 0x1f);
  }
  return uVar3;
}

ushort FUN_00259cfc(void) {
  ushort in_D0w;
  ushort uVar1;
  char in_D1b;
  ushort unaff_D6w;
  char unaff_D7b;
  
  uVar1 = unaff_D6w & in_D0w;
  if (unaff_D7b < in_D1b) {
    uVar1 = FUN_00259d08();
  }
  return uVar1;
}

void FUN_00259d08(void) {
  return;
}

undefined4 FUN_00259d20(void) {
  undefined4 in_D0;
  short sVar1;
  undefined1 *in_A0;
  
  sVar1 = 3;
  do {
    in_D0 = CONCAT31((int3)in_D0,*in_A0);
    sVar1 = sVar1 + -1;
    in_A0 = in_A0 + 1;
  } while (sVar1 != -1);
  return in_D0;
}

void FUN_00259d2c(void) {
  char cVar1;
  uint uVar2;
  short sVar4;
  undefined1 uVar5;
  uint uVar3;
  uint uVar6;
  char cVar7;
  short sVar9;
  uint uVar8;
  uint uVar10;
  ushort unaff_D6w;
  short sVar11;
  short *extraout_A0;
  short *psVar12;
  short *psVar13;
  undefined1 *extraout_A1;
  char *pcVar14;
  bool bVar15;
  char acStack_10 [12];
  undefined4 uStack_4;
  
  uStack_4 = 0x259d32;
  sVar4 = FUN_00259cfc();
  sVar4 = sVar4 + -1;
  if (-1 < sVar4) {
    sVar9 = sVar4;
    do {
      uVar5 = FUN_00259cfc();
      *extraout_A1 = uVar5;
      sVar9 = sVar9 + -1;
    } while (sVar9 != -1);
    uVar3 = 0x80000000;
    uVar6 = 1;
    uVar8 = 0;
    sVar9 = sVar4;
    psVar12 = extraout_A0;
    pcVar14 = acStack_10;
    do {
      do {
        cVar7 = (char)uVar6;
        psVar13 = psVar12;
        if (cVar7 == *pcVar14) {
          *psVar12 = (1 << (uVar6 & 0x3f)) + -1;
          uVar10 = uVar8 >> 0x10;
          bVar15 = (short)uVar6 == 0;
          sVar11 = (short)uVar6 + -1;
          do {
            uVar2 = uVar10 & 0x8000;
            uVar10 = (uint)(ushort)((short)uVar10 << 1 | (ushort)bVar15);
            bVar15 = (unaff_D6w & 1) != 0;
            unaff_D6w = (ushort)(uVar2 != 0) << 0xf | unaff_D6w >> 1;
            sVar11 = sVar11 + -1;
          } while (sVar11 != -1);
          psVar13 = psVar12 + 2;
          psVar12[1] = unaff_D6w >> (0x10U - cVar7 & 0x3f);
          *(char *)(psVar12 + 0x20) = cVar7;
          cVar1 = (char)sVar4 - (char)sVar9;
          *(char *)((int)psVar12 + 0x41) = cVar1;
          unaff_D6w = (1 << (cVar1 - 1U & 0x3f)) - 1;
          psVar12[0x21] = unaff_D6w;
          uVar8 = uVar3 + uVar8;
        }
        sVar9 = sVar9 + -1;
        psVar12 = psVar13;
        pcVar14 = pcVar14 + 1;
      } while (sVar9 != -1);
      uVar3 = uVar3 >> 1;
      uVar6 = (uint)(byte)(cVar7 + 1U);
      sVar9 = sVar4;
      pcVar14 = acStack_10;
    } while ((byte)(cVar7 + 1U) != 0x11);
  }
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_00259db4(void) {
  short sVar1;
  undefined2 *puVar2;
  
  if ((DAT_00ffa6cf & 1) == 0) {
    _DAT_00c00004 = 0xc0020000;
    sVar1 = 0xe;
    puVar2 = (undefined2 *)(&DAT_001b834c + (short)_DAT_00ff9b4a);
    do {
      _DAT_00c00000 = *puVar2;
      sVar1 = sVar1 + -1;
      puVar2 = puVar2 + 1;
    } while (sVar1 != -1);
    _DAT_00ff9b4a = _DAT_00ff9b4a + 2;
    if (0x37 < _DAT_00ff9b4a) {
      _DAT_00ff9b4a = 0;
    }
  }
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_00259dfe(void) {
  undefined2 *puVar1;
  short sVar2;
  undefined4 extraout_A0;
  undefined4 extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 extraout_A0_02;
  undefined2 extraout_A1w;
  undefined2 extraout_A1w_00;
  undefined2 extraout_A1w_01;
  undefined2 extraout_A1w_02;
  bool bVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  
  FUN_002cbd3e();
  DAT_00ffff7a = 0xff;
  FUN_0024d730();
  FUN_0024cba0();
  _DAT_00c00004 = 0x8c81;
  FUN_0024c5f6();
  FUN_0024792e();
  FUN_0024d7c8();
  FUN_0024acbc();
  FUN_0024cb8c();
  DAT_00fffde5 = 0;
  FUN_0024d2c0();
  FUN_0024d25a();
  DAT_00fffd28 = 0;
  FUN_0024d8dc();
  FUN_0024d8dc();
  FUN_0024d8dc();
  FUN_0024cd32();
  _DAT_00ff9b4a = 0;
  uVar8 = 0xa64c;
  FUN_0024adf6();
  _DAT_00ffa72a = 0x120;
  _DAT_00ffa72c = 0x1b8;
  FUN_0024cd32();
  FUN_0024cca0();
  FUN_00259db4();
  DAT_00ffa6cd = '\0';
  sVar2 = 0x1a3;
  do {
    FUN_0024cd3a();
    FUN_00259db4();
    if (DAT_00ffa6cd != '\0') goto LAB_00259ffc;
    sVar2 = sVar2 + -1;
  } while (sVar2 != -1);
  FUN_0024cc9a();
  if (DAT_00ffa6cd == '\0') {
    FUN_0024acbc();
    FUN_0024cb8c();
    FUN_0024ca00();
    FUN_0024ca12();
    FUN_0024c6ae();
    FUN_0024cca0();
    FUN_0024d2e4();
    FUN_0024cc9a();
    FUN_0024acbc();
    uVar5 = FUN_0024cb8c();
    if (DAT_00ffa6cd == '\0') {
      uVar8 = 0xa64c;
      uVar6 = extraout_A0;
      uVar7 = extraout_A1w;
      FUN_002cbd3e(uVar5,extraout_A0,extraout_A1w,0xa64c);
      if (DAT_00ffff9f != '\0') {
        FUN_002cbd12(5,uVar5,uVar6,uVar7,uVar8);
        FUN_002cbcfc();
      }
      DAT_00fffd2f = -1;
      FUN_0024acbc();
      FUN_0024cb8c();
      FUN_0024ac98();
      FUN_0024ca00();
      FUN_0024d8dc();
      FUN_0024cca0();
      bVar3 = false;
      FUN_0024d9a2();
      if (bVar3) {
        FUN_0024cc9a();
      }
    }
  }
LAB_00259ffc:
  uVar5 = FUN_0024cba0();
  if ((DAT_00fffd2f == '\0') && (DAT_00ffff9f != '\0')) {
    FUN_002cbd12(5,uVar5,extraout_A0_00,extraout_A1w_00,uVar8);
    FUN_002cbcfc();
  }
  _DAT_00c00004 = 0x8b00;
  FUN_0024acbc();
  FUN_0024cb8c();
  _DAT_00c00004 = 0x8c81;
  FUN_0024d744();
LAB_0025a04e:
  _DAT_00fffdac = 0;
  FUN_0024ca00();
  FUN_0024d8dc();
  DAT_00ffa6cf = -1;
  DAT_00fffde4 = 0x1d;
  FUN_0024c710();
  DAT_00fffde4 = 0x1e;
  FUN_0024c710();
  FUN_0024cd32();
  uVar5 = FUN_0024cca0();
  if (DAT_00ffff9c != '\0') {
    FUN_002cbd12(0x28,uVar5,extraout_A0_01,extraout_A1w_01,uVar8);
    FUN_002cbcfc();
  }
  DAT_00fffde2 = 0;
  DAT_00fffbed = -1;
  DAT_00fffbec = -1;
  _DAT_00fffdac = 0;
LAB_0025a0e0:
  do {
    _DAT_00fffdb4 = 0x1e0;
LAB_0025a0e8:
    do {
      DAT_00ffa6cf = DAT_00ffa6cf + '\x01';
      _DAT_00fffdb4 = _DAT_00fffdb4 + -1;
      uVar4 = _DAT_00fffdb4 == 0;
      if ((bool)uVar4) {
        FUN_0024cc9a();
        FUN_0024acbc();
        FUN_0024cb8c();
        FUN_0024d2c0();
        poll_vdp_ready();
        FUN_0024791c();
        FUN_0024792e();
        DAT_00ffa6cf = '\0';
        _DAT_00ffa6bc = 0xbc614e;
        DAT_00ffff98 = 1;
        puVar1 = *(undefined2 **)((int)&PTR_DAT_0025c3cc + (int)(short)(_DAT_00ffff8a * 6));
        DAT_00ffa692 = (&DAT_0025c3d0)[(short)(_DAT_00ffff8a * 6)];
        DAT_00ffff9a = 0;
        _DAT_00ffff90 = *puVar1;
        _DAT_00ffff92 = puVar1[1];
        _DAT_00ffff94 = puVar1[2];
        _DAT_00ffff86 = puVar1 + 4;
        _DAT_00ffff96 = puVar1[3];
        FUN_0024d730();
        _DAT_00ffff8a = _DAT_00ffff8a + 1;
        if (_DAT_00ffff8a == 8) {
          _DAT_00ffff8a = 0;
          DAT_00ffff98 = 0;
          FUN_0025a4fe();
          FUN_0024d730();
        }
LAB_0025a16c:
        FUN_0024cbc6();
        FUN_0024acbc();
        FUN_0024cb8c();
        return;
      }
      FUN_0024cd3a();
      FUN_0024d98a();
      if ((bool)uVar4) {
        if (DAT_00fffbed != '\0') goto LAB_0025a0e0;
        if (_DAT_00fffdac == 0) goto LAB_0025a16c;
        if (_DAT_00fffdac != 1) goto LAB_0025a0e0;
        _DAT_00fffdac = 0xff;
        FUN_0024cbe6();
        FUN_0024cba0();
        FUN_0024acbc();
        FUN_0024cb8c();
        FUN_0024d8dc();
        FUN_0024d8dc();
        FUN_0024d7ba();
        FUN_0025a4ba();
        FUN_0024adf6();
        _DAT_00ffa72a = 0x144;
        _DAT_00ffa72c = 0x168;
        uVar8 = 0xbbac;
        FUN_0024adf6();
        _DAT_00ffa780 = 0x11d;
        _DAT_00ffa782 = 0x123;
        DAT_00fffde4 = 0x22;
        FUN_0024c710();
        FUN_0025a496();
        FUN_0024cd32();
        FUN_0024cb68();
        FUN_0024cb54();
        FUN_0024cb40();
        FUN_0024cb2c();
        _DAT_00fffdac = 0;
        DAT_00fffde2 = 1;
        DAT_00fffbec = -1;
        goto LAB_0025a26e;
      }
      DAT_00fffbed = '\0';
      bVar3 = true;
      FUN_0024d6f4();
      if ((!bVar3) && (FUN_0024d6ea(), !bVar3)) {
        DAT_00fffbec = '\0';
        goto LAB_0025a0e8;
      }
    } while (DAT_00fffbec != '\0');
    _DAT_00fffdac = _DAT_00fffdac ^ 1;
    FUN_0024d752();
    DAT_00fffbec = -1;
  } while( true );
LAB_0025a26e:
  DAT_00ffa6cf = DAT_00ffa6cf + '\x01';
  uVar4 = DAT_00ffa6cf == '\0';
  FUN_0024cd3a();
  FUN_0024d6e0();
  if (!(bool)uVar4) {
    FUN_0024d98a();
    if (!(bool)uVar4) {
      DAT_00fffbec = '\0';
      bVar3 = true;
      goto LAB_0025a396;
    }
    bVar3 = DAT_00fffbec == '\0';
    if (!bVar3) goto LAB_0025a396;
    uVar5 = FUN_0024d776();
    if (_DAT_00fffdac == 0) {
      DAT_00fffbec = -1;
      _DAT_00fffdac = 0xfe;
      if (DAT_00ffff9c != '\0') {
        FUN_002cbd12(0x2b,uVar5,extraout_A0_02,extraout_A1w_02,uVar8);
        FUN_002cbcfc();
      }
      sVar2 = 0x1f;
      do {
        FUN_0024cd3a();
        sVar2 = sVar2 + -1;
      } while (sVar2 != -1);
      DAT_00ffa6ab = DAT_00ffa6ab + 1;
      if (2 < DAT_00ffa6ab) {
        DAT_00ffa6ab = 0;
      }
      FUN_0025a496();
    }
    else {
      DAT_00fffbec = -1;
      _DAT_00ff9b4c = _DAT_00ff9b4c + 7;
      if (*_DAT_00ff9b4c == (undefined *)0x0) {
        _DAT_00ff9b4c = &PTR_FUN_00004d68;
      }
      FUN_0024d7ba();
      FUN_0025a4ba();
      _DAT_00ffa748 = 0x1adbe8;
      _DAT_00ffa79e = 0x1adbb2;
    }
    goto LAB_0025a26e;
  }
  bVar3 = DAT_00fffbec == '\0';
  if (!bVar3) {
LAB_0025a396:
    FUN_0024d6ea();
    if ((bVar3) || (FUN_0024d6f4(), bVar3)) {
      if (DAT_00fffcf9 == '\0') {
        DAT_00fffcf9 = -1;
        _DAT_00fffdac = _DAT_00fffdac ^ 1;
        FUN_0024d752();
      }
    }
    else {
      DAT_00fffcf9 = '\0';
    }
    goto LAB_0025a26e;
  }
  _DAT_00fffdac = 0xff;
  FUN_0024ca00();
  FUN_0024cba0();
  FUN_0024acbc();
  FUN_0024cb8c();
  FUN_0024d8dc();
  goto LAB_0025a04e;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0025a496(void) {
  DAT_00ffa6cf = 0xff;
  _DAT_00fffdac = 0;
  DAT_00fffde4 = DAT_00ffa6ab + '\x1f';
  FUN_0024c710();
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_0025a4ba(void) {
  _DAT_00fffbe4 = 0x4000;
  FUN_0024c6ae();
  _DAT_00fffbe4 = 0x4000;
  FUN_0024c6ae();
  _DAT_00fffbe4 = 0x4000;
  FUN_0024c6ae();
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
undefined8 FUN_0025a4fe(void) {
  ushort extraout_D0u;
  undefined4 extraout_D1;
  uint unaff_D2;
  uint uVar1;
  uint unaff_D3;
  uint uVar2;
  short sVar3;
  ushort uVar4;
  undefined4 extraout_A0;
  char *pcVar5;
  char *extraout_A0_00;
  undefined4 extraout_A0_01;
  undefined4 extraout_A1;
  undefined4 extraout_A1_00;
  undefined4 extraout_A1_01;
  undefined4 uVar6;
  undefined4 extraout_A1_02;
  undefined4 unaff_A6;
  undefined8 uVar7;
  ushort uVar8;
  
  FUN_002cbd3e();
  uVar7 = FUN_0024cc9a();
  if (DAT_00ffff9f != '\0') {
    FUN_002cbd12(0xf,uVar7,extraout_A0,extraout_A1,unaff_A6);
    FUN_002cbcfc();
  }
  FUN_0024c5f6();
  uVar1 = unaff_D2 & 0xffff0000;
  uVar2 = unaff_D3 & 0xffff0000;
  FUN_0024d7c8();
  FUN_0024d25a();
  FUN_0024cb8c();
  FUN_0024ca00();
  FUN_0024ca12();
  FUN_0024cb54();
  FUN_0024cb40();
  FUN_0024cb2c();
  pcVar5 = &DAT_001b6f77;
  uVar4 = 0;
  do {
    FUN_0024c6ae();
    uVar7 = CONCAT44((uint)extraout_D0u << 0x10,extraout_D1);
    if (*pcVar5 == '\a') {
      pcVar5 = pcVar5 + 1;
    }
    else {
      uVar6 = extraout_A1_00;
      if (*pcVar5 == -3) {
LAB_0025a60a:
        FUN_002cbd3e(uVar7,pcVar5,uVar6,unaff_A6);
        FUN_0024cc9a();
        uVar7 = FUN_0024c5f6();
        FUN_002cbd3e(uVar7,extraout_A0_01,extraout_A1_02,unaff_A6);
        return uVar7;
      }
      uVar7 = FUN_0024c6ae();
      pcVar5 = extraout_A0_00;
    }
    sVar3 = 0xf;
    uVar8 = uVar4;
    do {
      DAT_00ffa6cf = DAT_00ffa6cf + '\x01';
      FUN_0024cd3a(uVar7,uVar1,uVar2);
      FUN_0024cd3a();
      uVar6 = extraout_A1_01;
      if (DAT_00ffa6cd != '\0') goto LAB_0025a60a;
      _DAT_00c00004 = 0x40000010;
      uVar4 = uVar8 + 1 & 0xff;
      sVar3 = sVar3 + -1;
      _DAT_00c00000 = uVar8;
      uVar8 = uVar4;
    } while (sVar3 != -1);
  } while( true );
}

// WARNING: Removing unreachable block (ram,0x002cbb60)
// WARNING: Removing unreachable block (ram,0x002cbb82)
// WARNING: Removing unreachable block (ram,0x002cbb7a)
// WARNING: Removing unreachable block (ram,0x002cbb7c)
// WARNING: Removing unreachable block (ram,0x002cbb80)
void FUN_002cbb48(void) {
                    // WARNING: Do nothing block with infinite loop
  do {
  } while( true );
}

void FUN_002cbb86(void) {
  FUN_002cbba4();
  DAT_00a01b20 = 0;
  FUN_002cbbb8();
  return;
}

// WARNING: Removing unreachable block (ram,0x002cbbb6)
void FUN_002cbba4(void) {
                    // WARNING: Do nothing block with infinite loop
  do {
  } while( true );
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_002cbbb8(void) {
  _DAT_00a11100 = 0;
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_002cbbc2(void) {
  short sVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  _DAT_00a11200 = 0x100;
  FUN_002cbba4();
  sVar1 = 0x1885;
  puVar3 = &DAT_0025e340;
  puVar2 = &DAT_00a00000;
  do {
    *puVar2 = *puVar3;
    sVar1 = sVar1 + -1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar2 + 1;
    puVar2 = puVar2 + 1;
  } while (sVar1 != -1);
  do {
    puVar3 = puVar4 + 1;
    *puVar4 = 0;
    puVar4 = puVar3;
  } while (puVar3 != (undefined1 *)0xa02000);
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_002cbc06(void) {
  int iVar1;
  
  iVar1 = 0xf;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  _DAT_00a11100 = 0;
  _DAT_00a11200 = 0x100;
  return;
}

// WARNING: Removing unreachable block (ram,0x002cbc5e)
void FUN_002cbc2e(void) {
                    // WARNING: Do nothing block with infinite loop
  do {
  } while( true );
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void FUN_002cbc64(void) {
  _DAT_00a11100 = 0;
  return;
}

void FUN_002cbc76(void) {
  byte bVar1;
  undefined1 in_D0b;
  short in_D1w;
  byte *in_A0;
  int in_A1;
  
  *(undefined1 *)(in_A1 + in_D1w) = 0xff;
  bVar1 = (char)in_D1w + 1;
  *(undefined1 *)(in_A1 + (short)(CONCAT11((char)((ushort)in_D1w >> 8),bVar1) & 0xff3f)) = in_D0b;
  *in_A0 = (bVar1 & 0x3f) + 1 & 0x3f;
  return;
}

void FUN_002cbc82(void) {
  undefined1 in_D0b;
  short in_D1w;
  byte *in_A0;
  int in_A1;
  
  *(undefined1 *)(in_A1 + in_D1w) = in_D0b;
  *in_A0 = (char)in_D1w + 1U & 0x3f;
  return;
}

void FUN_002cbc90(void) {
  FUN_002cbc2e();
  FUN_002cbc82();
  FUN_002cbc64();
  return;
}

void FUN_002cbca0(void) {
  FUN_002cbc2e();
  FUN_002cbc82();
  FUN_002cbc82();
  FUN_002cbc82();
  FUN_002cbc64();
  return;
}

void FUN_002cbcbc(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4) {
  FUN_002cbbc2();
  FUN_002cbc06();
  FUN_002cbc90(0xffffffff);
  FUN_002cbc90(0xb);
  FUN_002cbca0(param_1);
  FUN_002cbca0(param_2);
  FUN_002cbca0(param_3);
  FUN_002cbca0(param_4);
  return;
}


void FUN_002cbcfc(void) {
  FUN_002cbc2e();
  FUN_002cbc76();
  FUN_002cbc82();
  FUN_002cbc64();
  return;
}


void FUN_002cbd12(void) {
  FUN_002cbc2e();
  FUN_002cbc76();
  FUN_002cbc82();
  FUN_002cbc64();
  return;
}

void FUN_002cbd22(void) {
  FUN_002cbc2e();
  FUN_002cbc76();
  FUN_002cbc64();
  return;
}

void FUN_002cbd30(void) {
  FUN_002cbc2e();
  FUN_002cbc76();
  FUN_002cbc64();
  return;
}

void FUN_002cbd3e(void) {
  FUN_002cbc2e();
  FUN_002cbc76();
  FUN_002cbc64();
  return;
}