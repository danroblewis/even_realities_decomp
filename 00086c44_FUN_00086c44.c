/*
 * Function: FUN_00086c44
 * Entry:    00086c44
 * Prototype: undefined FUN_00086c44()
 */


void FUN_00086c44(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar2 = param_2 + param_3;
  if ((param_2 < param_1) && (param_1 < puVar2)) {
    puVar1 = param_1 + param_3;
    while (puVar1 != param_1) {
      puVar2 = puVar2 + -1;
      puVar1 = puVar1 + -1;
      *puVar1 = *puVar2;
    }
  }
  else {
    param_1 = param_1 + -1;
    for (; param_2 != puVar2; param_2 = param_2 + 1) {
      param_1 = param_1 + 1;
      *param_1 = *param_2;
    }
  }
  return;
}


