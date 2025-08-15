/*
 * Function: process_data_with_memory_bounds_validation_and_padding
 * Entry:    0007ec0e
 * Prototype: undefined process_data_with_memory_bounds_validation_and_padding()
 */


int process_data_with_memory_bounds_validation_and_padding
              (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int *ptr;
  undefined4 *puVar5;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar5 = *(undefined4 **)(param_1 + 4);
  ptr = (int *)(iVar3 + 0x3bc);
  if (*ptr != 2) {
    return -0x78;
  }
  *ptr = 1;
  if ((*(char *)(iVar3 + 100) != '\0') || (*(char *)(iVar3 + 0xd4) != '\0')) {
    return -0x10;
  }
  iVar1 = initialize_ble_connection_parameters(iVar3,*(undefined4 *)(iVar3 + 0x3b8),0,0,param_4);
  if (iVar1 == 0) {
    iVar4 = *(int *)(param_1 + 0x10);
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x14);
    pcVar2 = *(code **)(*(int *)(iVar1 + 8) + 0x10);
    if (pcVar2 == (code *)0x0) {
      iVar1 = -0x58;
    }
    else {
      iVar1 = (*pcVar2)(iVar1,*(undefined4 *)(*(int *)(param_1 + 4) + 0x18),0);
      if (iVar1 == 0) {
        iVar4 = iVar4 + 0x2c0;
        manage_ble_connection_state_with_privilege_control(iVar4,1);
        process_data_with_callback_validation_alt5(iVar4);
        iVar1 = initialize_microphone_system_with_callbacks(iVar3 + 0x1c8,*puVar5);
        if (iVar1 == 0) {
          fill_memory_buffer(iVar3 + 0x1c8,0,0xe8);
          fill_memory_buffer(iVar3,0,0x1c4);
          iVar3 = 0;
          goto LAB_0007eca4;
        }
      }
    }
  }
  iVar3 = 2;
LAB_0007eca4:
  atomic_exchange_value(ptr,iVar3);
  return iVar1;
}


