/*
 * Function: FUN_0004b01c
 * Entry:    0004b01c
 * Prototype: undefined FUN_0004b01c()
 */


undefined4 FUN_0004b01c(uint param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 < 0x10) && (*(int *)(&DAT_20002550 + param_1 * 0x28) != 0)) {
    return 0;
  }
  puVar1 = (undefined4 *)thunk_FUN_00071678();
  *puVar1 = 9;
  return 0xffffffff;
}


