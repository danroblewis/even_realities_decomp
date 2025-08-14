/*
 * Function: FUN_00030c24
 * Entry:    00030c24
 * Prototype: undefined FUN_00030c24()
 */


int FUN_00030c24(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined1 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined1 local_c;
  
  local_18 = 0;
  local_c = 7;
  local_20 = param_1;
  uStack_1c = param_2;
  local_14 = param_3;
  uStack_10 = param_4;
  iVar1 = (**(code **)(*(int *)(DAT_20002418 + 8) + 8))(DAT_20002418,&local_20,2,0x12);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return -iVar1;
}


