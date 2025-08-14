/*
 * Function: FUN_000574ec
 * Entry:    000574ec
 * Prototype: undefined FUN_000574ec()
 */


void FUN_000574ec(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FUN_000864e8(param_1 + 0x30,uVar1);
  FUN_000732d4(param_1 + 0x50,0x818dd);
  return;
}


