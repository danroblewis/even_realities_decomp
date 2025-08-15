/*
 * Function: FUN_0008206c
 * Entry:    0008206c
 * Prototype: undefined FUN_0008206c()
 */


void FUN_0008206c(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((((*param_2 << 0x1f < 0) && (*(int *)(param_1 + -8) != 0)) && (*(int *)(param_1 + 0x11c) == 0)
      ) && ((puVar1 = (undefined4 *)remove_element_from_linked_list(*(int *)(param_1 + -8) + 4),
            puVar1 != (undefined4 *)0x0 &&
            (iVar2 = process_ble_characteristic_value_change_with_validation(param_1 + -8,puVar1),
            iVar2 < 0)))) {
    iVar2 = *(int *)(param_1 + -8);
    *puVar1 = *(undefined4 *)(iVar2 + 4);
    *(undefined4 **)(iVar2 + 4) = puVar1;
    if (*(int *)(iVar2 + 8) == 0) {
      *(undefined4 **)(iVar2 + 8) = puVar1;
    }
  }
  return;
}


