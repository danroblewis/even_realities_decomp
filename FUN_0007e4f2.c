/*
 * Function: FUN_0007e4f2
 * Entry:    0007e4f2
 * Prototype: undefined FUN_0007e4f2()
 */


void FUN_0007e4f2(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x10) << 0x1d < 0) {
    uVar2 = *(uint *)(param_1 + 0x28);
    uVar1 = FUN_0007e33a();
    if (uVar1 <= uVar2) {
      *(uint *)(param_1 + 0x28) = uVar2;
    }
    if (uVar1 > uVar2) {
      *(uint *)(param_1 + 0x28) = uVar1;
    }
  }
  return;
}


