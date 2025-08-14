/*
 * Function: FUN_0004fa34
 * Entry:    0004fa34
 * Prototype: undefined FUN_0004fa34()
 */


int FUN_0004fa34(int param_1,byte *param_2)

{
  uint *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint local_44 [12];
  
  local_44[0] = 0;
  local_44[1] = 0x1000000;
  local_44[2] = 0x2000000;
  local_44[3] = 0x4000000;
  local_44[4] = 0x8000000;
  local_44[5] = 0x10000000;
  local_44[6] = 0x20000000;
  local_44[7] = 0x40000000;
  local_44[8] = 0x80000000;
  local_44[9] = 0x1b000000;
  local_44[10] = 0x36000000;
  if (param_1 != 0) {
    if (param_2 == (byte *)0x0) {
      param_1 = 0;
    }
    else {
      pbVar2 = param_2;
      puVar1 = (uint *)(param_1 + -4);
      do {
        pbVar3 = pbVar2 + 4;
        puVar1 = puVar1 + 1;
        *puVar1 = (uint)pbVar2[1] << 0x10 | (uint)*pbVar2 << 0x18 | (uint)pbVar2[3] |
                  (uint)pbVar2[2] << 8;
        pbVar2 = pbVar3;
      } while (param_2 + 0x10 != pbVar3);
      uVar4 = 4;
      puVar1 = (uint *)(param_1 + -4);
      do {
        uVar5 = puVar1[4];
        if ((uVar4 & 3) == 0) {
          uVar5 = *(uint *)((int)local_44 + (uVar4 & 0xfffffffc)) ^
                  ((uint)(byte)(&DAT_000f1968)[uVar5 >> 0x18] |
                   (uint)(byte)(&DAT_000f1968)[(uVar5 << 8) >> 0x18] << 0x18 |
                   (uint)(byte)(&DAT_000f1968)[(uVar5 << 0x10) >> 0x18] << 0x10 |
                  (uint)(byte)(&DAT_000f1968)[uVar5 & 0xff] << 8);
        }
        uVar4 = uVar4 + 1;
        puVar1[5] = uVar5 ^ puVar1[1];
        puVar1 = puVar1 + 1;
      } while (uVar4 != 0x2c);
      param_1 = 1;
    }
  }
  return param_1;
}


