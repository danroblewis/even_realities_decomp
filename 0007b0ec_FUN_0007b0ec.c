/*
 * Function: FUN_0007b0ec
 * Entry:    0007b0ec
 * Prototype: undefined FUN_0007b0ec()
 */


undefined4 FUN_0007b0ec(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_2;
  do {
    uVar1 = uVar2 & *(uint *)(param_1 + 0x20);
    uVar2 = uVar2 << 1;
    if (uVar1 != 0) {
      return 0;
    }
    *param_2 = uVar2;
  } while (uVar2 < 9);
  return 0xf10c31;
}


