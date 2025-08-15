/*
 * Function: handle_ble_characteristic_operation_with_validation
 * Entry:    00082d2e
 * Prototype: undefined handle_ble_characteristic_operation_with_validation()
 */


void handle_ble_characteristic_operation_with_validation(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 != 0) {
    if (param_2 == 0xffff) {
      *(undefined2 *)(param_3 + 8) = 0xffff;
      goto LAB_00082d4e;
    }
    *(short *)(param_3 + 8) = (short)(param_2 + 1U);
    if ((uint)*(ushort *)(param_3 + 0xe) < (param_2 + 1U & 0xffff)) goto LAB_00082d4e;
  }
  iVar1 = process_ble_characteristic_operation_by_type(param_1,param_3);
  if (iVar1 == 0) {
    return;
  }
LAB_00082d4e:
                    /* WARNING: Could not recover jumptable at 0x00082d5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 4))(param_1,0,param_3);
  return;
}


