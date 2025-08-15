/*
 * Function: FUN_00059afc
 * Entry:    00059afc
 * Prototype: undefined FUN_00059afc()
 */


void FUN_00059afc(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (((param_1 == 0) || (param_2 == 0)) ||
     (iVar1 = bt_connection_disconnect_with_parameter_validation_and_callback_and_state_validation_and_callback_execution_and_parameter
                        (), iVar1 == 0)) {
    return;
  }
  piVar3 = *(int **)(iVar1 + 0x30);
  if (piVar3 == (int *)0x0) {
LAB_00059b4a:
    FUN_00081de2(iVar1 + 4,param_2);
  }
  else {
    piVar2 = piVar3 + -100;
    piVar3 = (int *)*piVar3;
    if (piVar3 != (int *)0x0) {
      piVar3 = piVar3 + -100;
    }
    while (param_2 != piVar2[0x49]) {
      if (piVar3 == (int *)0x0) goto LAB_00059b4a;
      while (piVar2 = piVar3, piVar3 = (int *)piVar2[100], piVar3 != (int *)0x0) {
        piVar3 = piVar3 + -100;
        if (param_2 == piVar2[0x49]) goto LAB_00059b3a;
      }
    }
LAB_00059b3a:
    piVar2[0x49] = (int)&DAT_2000aea0;
  }
  FUN_00059708(param_2);
  return;
}


