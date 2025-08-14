/*
 * Function: FUN_00084880
 * Entry:    00084880
 * Prototype: undefined FUN_00084880()
 */


void FUN_00084880(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_24 [4];
  int local_20;
  
  iVar1 = *param_2;
  if (iVar1 != 0) {
    fill_memory_buffer(local_24,0,0x14);
    local_24[0] = 4;
    local_20 = iVar1;
    FUN_00084840(param_1,local_24);
    *param_2 = 0;
  }
  return;
}


