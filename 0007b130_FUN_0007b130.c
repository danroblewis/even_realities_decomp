/*
 * Function: FUN_0007b130
 * Entry:    0007b130
 * Prototype: undefined FUN_0007b130(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined4 param_6)
 */


undefined4
FUN_0007b130(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4,
            undefined4 param_5,int *param_6)

{
  int iVar1;
  undefined1 local_19;
  
  local_19 = 0;
  iVar1 = FUN_0007c004(param_1,param_2,1,&local_19);
  if (iVar1 != 0) {
    return 0xf50000;
  }
  *param_3 = param_1;
  *(undefined1 *)(param_3 + 1) = local_19;
  if (param_6 != (int *)0x0) {
    if ((param_4 != 0) && (iVar1 = FUN_0007c004(param_4,param_5,0,&local_19), iVar1 != 0)) {
      return 0xf50000;
    }
    *param_6 = param_4;
    *(undefined1 *)(param_6 + 1) = local_19;
  }
  return 0;
}


