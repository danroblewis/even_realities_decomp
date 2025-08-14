/*
 * Function: FUN_0005a28c
 * Entry:    0005a28c
 * Prototype: undefined FUN_0005a28c()
 */


int FUN_0005a28c(undefined4 param_1,undefined4 param_2,code *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_20;
  char *local_1c;
  int iStack_18;
  
  iVar1 = (*param_3)(param_4,&DAT_20006390,0x10);
  if (iVar1 < 0) {
    local_1c = "Failed to decode value (err %zd)";
    local_20 = 3;
    iStack_18 = iVar1;
    FUN_00082a42(&DAT_00088128,0x1840,&local_20);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


