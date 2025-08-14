/*
 * Function: FUN_0007f570
 * Entry:    0007f570
 * Prototype: undefined FUN_0007f570()
 */


undefined4 * FUN_0007f570(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  
  do {
    param_2 = (undefined4 *)FUN_0007f542(param_1,param_2);
    if (param_2 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    iVar1 = FUN_00080d3e(param_3,*param_2);
  } while (iVar1 != 0);
  return param_2;
}


