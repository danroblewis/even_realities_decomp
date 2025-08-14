/*
 * Function: FUN_000839fe
 * Entry:    000839fe
 * Prototype: undefined FUN_000839fe()
 */


undefined4 FUN_000839fe(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 local_18;
  char *local_14;
  
  iVar1 = FUN_000839dc(param_2,param_4);
  if (iVar1 == 0) {
    local_14 = "invalid address: 0x%08lx:%zu";
    local_18 = 4;
    FUN_0004d944(&DAT_000881b0,0x2040,&local_18,0);
    return 0xffffffea;
  }
  if (param_4 != 0) {
    memcpy(param_3,param_2,param_4);
  }
  return 0;
}


