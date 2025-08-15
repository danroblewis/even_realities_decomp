/*
 * Function: FUN_00081adc
 * Entry:    00081adc
 * Prototype: undefined FUN_00081adc()
 */


int FUN_00081adc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined8 uVar5;
  
  uVar5 = bt_connection_disconnect_with_callback_and_state_validation();
  puVar4 = (undefined2 *)((ulonglong)uVar5 >> 0x20);
  iVar1 = bt_connection_disconnect_with_parameter_validation_and_callback_and_state_validation
                    (0x12,(int)uVar5,8);
  if (iVar1 == 0) {
    iVar3 = -0xc;
  }
  else {
    puVar2 = (undefined2 *)ble_memory_allocation_utility(iVar1 + 0xc,8);
    *puVar2 = *puVar4;
    puVar2[1] = puVar4[1];
    puVar2[2] = puVar4[2];
    puVar2[3] = puVar4[3];
    iVar3 = FUN_00081820(param_1,5,iVar1,0,0,param_2);
    if (iVar3 != 0) {
      decrement_reference_count_and_cleanup_memory(iVar1);
    }
  }
  return iVar3;
}


