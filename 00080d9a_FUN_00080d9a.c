/*
 * Function: FUN_00080d9a
 * Entry:    00080d9a
 * Prototype: undefined FUN_00080d9a()
 */


undefined4 FUN_00080d9a(undefined1 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_3 == 4) {
    *param_1 = 1;
    *(undefined4 *)(param_1 + 4) = *param_2;
  }
  else if (param_3 == 0x10) {
    *param_1 = 2;
    puVar1 = (undefined4 *)(param_1 + 1);
    puVar2 = param_2;
    do {
      puVar3 = puVar2 + 1;
      *puVar1 = *puVar2;
      puVar1 = puVar1 + 1;
      puVar2 = puVar3;
    } while (puVar3 != param_2 + 4);
  }
  else {
    if (param_3 != 2) {
      return 0;
    }
    *param_1 = 0;
    *(undefined2 *)(param_1 + 2) = *(undefined2 *)param_2;
  }
  return 1;
}


