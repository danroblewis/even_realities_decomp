/*
 * Function: FUN_0004e124
 * Entry:    0004e124
 * Prototype: undefined FUN_0004e124()
 */


int FUN_0004e124(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_38;
  char *local_34;
  int iStack_30;
  int local_24;
  undefined4 local_20;
  
  iVar1 = FUN_00083a92(*(undefined4 *)(param_1 + 0xc),param_2,&local_24);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x20) != local_24) {
      iVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc) + 8) + 8))
                        (*(int *)(param_1 + 0xc),local_24,local_20);
      if (iVar2 == 0) {
        *(int *)(param_1 + 0x20) = local_24;
      }
      else {
        local_34 = "Error %d while erasing page";
        local_38 = 3;
        iStack_30 = iVar2;
        FUN_0004d944(&DAT_000880d8,0x1840,&local_38,0);
        iVar1 = iVar2;
      }
    }
  }
  else {
    local_34 = "Error %d while getting page info";
    local_38 = 3;
    iStack_30 = iVar1;
    FUN_0004d944(&DAT_000880d8,0x1840,&local_38,0);
  }
  return iVar1;
}


