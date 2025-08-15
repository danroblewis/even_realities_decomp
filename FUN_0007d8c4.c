/*
 * Function: FUN_0007d8c4
 * Entry:    0007d8c4
 * Prototype: undefined FUN_0007d8c4()
 */


void FUN_0007d8c4(int param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < param_3; uVar1 = uVar1 + 4) {
    *(uint *)(param_1 + uVar1) =
         (uint)param_2[2] << 0x10 | (uint)param_2[1] << 8 | (uint)*param_2 |
         (uint)param_2[3] << 0x18;
    param_2 = param_2 + 4;
  }
  return;
}


