/*
 * Function: FUN_000820ae
 * Entry:    000820ae
 * Prototype: undefined FUN_000820ae()
 */


void FUN_000820ae(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  
  piVar2 = *(int **)(param_1 + 0x30);
  if (piVar2 == (int *)0x0) {
    return;
  }
  piVar5 = (int *)*piVar2;
  if (piVar5 != (int *)0x0) {
    piVar5 = piVar5 + -100;
  }
  piVar3 = (int *)0x0;
  puVar4 = (undefined4 *)0x0;
  piVar2 = piVar2 + -100;
  while( true ) {
    piVar6 = piVar5;
    if ((piVar2[0x49] == 0) &&
       (((puVar4 != (undefined4 *)0x0 || (piVar3 == (int *)0x0)) &&
        (puVar4 = (undefined4 *)FUN_00081bac(param_1 + 4), piVar3 = piVar2,
        puVar4 != (undefined4 *)0x0)))) {
      iVar1 = process_ble_characteristic_value_change_with_validation(piVar2,puVar4);
      if (-1 < iVar1) {
        return;
      }
      *puVar4 = *(undefined4 *)(param_1 + 4);
      *(undefined4 **)(param_1 + 4) = puVar4;
      if (*(int *)(param_1 + 8) == 0) {
        *(undefined4 **)(param_1 + 8) = puVar4;
      }
    }
    if (piVar6 == (int *)0x0) break;
    piVar5 = (int *)piVar6[100];
    piVar2 = piVar6;
    if (piVar5 != (int *)0x0) {
      piVar5 = piVar5 + -100;
    }
  }
  return;
}


