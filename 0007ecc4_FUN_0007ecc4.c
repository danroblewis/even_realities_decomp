/*
 * Function: FUN_0007ecc4
 * Entry:    0007ecc4
 * Prototype: undefined FUN_0007ecc4(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


undefined4
FUN_0007ecc4(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  code *pcVar1;
  
  if (param_3 == 0) {
    if (*(char *)(param_5 + 100) == '\0') {
      *(undefined1 *)(param_5 + 100) = 1;
      FUN_0004cefc(param_5);
    }
  }
  else {
    pcVar1 = *(code **)(*(int *)(param_5 + 0x68) + 4);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_2,param_3,*(undefined4 *)(param_5 + 0x6c));
    }
  }
  return 0;
}


