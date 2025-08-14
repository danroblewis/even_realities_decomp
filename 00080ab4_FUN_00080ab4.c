/*
 * Function: FUN_00080ab4
 * Entry:    00080ab4
 * Prototype: undefined FUN_00080ab4()
 */


void FUN_00080ab4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 extraout_r1;
  int local_b8;
  undefined1 *puStack_b4;
  undefined1 *local_b0;
  undefined1 auStack_ac [56];
  undefined1 auStack_74 [100];
  
  while (iVar1 = thunk_FUN_000727ac(param_1 + 0x10,param_2,0,0), iVar1 != 0) {
    local_b0 = auStack_ac;
    local_b8 = param_1;
    puStack_b4 = auStack_74;
    FUN_000513e8(&local_b8,iVar1);
    param_2 = extraout_r1;
  }
  return;
}


