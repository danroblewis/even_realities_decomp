/*
 * Function: FUN_000596c0
 * Entry:    000596c0
 * Prototype: undefined FUN_000596c0()
 */


undefined4 FUN_000596c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_14;
  undefined4 uStack_10;
  
  local_14 = 0;
  uVar2 = param_1;
  uStack_10 = param_3;
  iVar1 = FUN_000748ac();
  if (DAT_2000ae9c == iVar1) {
    param_2 = 0;
    param_1 = param_2;
  }
  iVar1 = FUN_00071c20(&DAT_20003798,&local_14,param_1,param_2,uVar2);
  if (iVar1 == 0) {
    uVar2 = fill_memory_buffer(local_14,0,0x1c);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


