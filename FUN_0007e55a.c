/*
 * Function: FUN_0007e55a
 * Entry:    0007e55a
 * Prototype: undefined FUN_0007e55a()
 */


void FUN_0007e55a(int param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2 + 0x10000;
  *param_2 = uVar1;
  if ((uint)*(ushort *)(param_1 + 0xe) == uVar1 >> 0x10) {
    *param_2 = uVar1 - (uVar1 & 0xffff0000);
  }
  return;
}


