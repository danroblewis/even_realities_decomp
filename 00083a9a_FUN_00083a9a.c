/*
 * Function: FUN_00083a9a
 * Entry:    00083a9a
 * Prototype: undefined FUN_00083a9a()
 */


int FUN_00083a9a(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *local_10;
  int local_c;
  undefined4 uStack_8;
  
  local_10 = param_1;
  local_c = param_2;
  uStack_8 = param_3;
  (**(code **)(param_1[2] + 0x10))(param_1,&local_10,&local_c);
  iVar1 = 0;
  while (local_c != 0) {
    iVar1 = iVar1 + *local_10;
    local_10 = local_10 + 2;
    local_c = local_c + -1;
  }
  return iVar1;
}


