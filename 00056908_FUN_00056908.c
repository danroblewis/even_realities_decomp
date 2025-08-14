/*
 * Function: FUN_00056908
 * Entry:    00056908
 * Prototype: undefined FUN_00056908()
 */


int FUN_00056908(undefined4 param_1,byte param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_28;
  char *local_24;
  undefined4 uStack_20;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  iVar1 = FUN_000813e8(&DAT_20006138,1,param_1);
  if (iVar1 != 0) {
    if ((param_2 & *(byte *)(iVar1 + 2)) != 0) {
      return iVar1;
    }
    local_24 = "incompatible handle %u";
    local_28 = 3;
    uStack_20 = param_1;
    FUN_000813ca(&DAT_00088108,0x1880,&local_28);
    FUN_000566a4(iVar1);
  }
  return 0;
}


