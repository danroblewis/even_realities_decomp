/*
 * Function: FUN_000267ac
 * Entry:    000267ac
 * Prototype: undefined FUN_000267ac()
 */


void FUN_000267ac(int param_1)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = thunk_FUN_00074f68();
  uVar1 = (uint)(lVar2 * 1000) >> 0xf | (int)((ulonglong)(lVar2 * 1000) >> 0x20) * 0x20000;
  *(float *)(param_1 + 0x40) = (float)(uVar1 - *(int *)(param_1 + 0x3c)) / 1000.0;
  *(uint *)(param_1 + 0x38) = uVar1;
  *(uint *)(param_1 + 0x3c) = uVar1;
  return;
}


