/*
 * Function: manage_device_memory_and_state_changes
 * Entry:    00060dd0
 * Prototype: undefined manage_device_memory_and_state_changes()
 */


int manage_device_memory_and_state_changes(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_38;
  char *local_34;
  uint uStack_30;
  uint local_2c;
  undefined4 uStack_28;
  
  iVar3 = *(int *)(param_1 + 4);
  uStack_28 = param_4;
  if (((int)param_2 < 0) || (*(uint *)(iVar3 + 0x2c) < param_2 + param_3)) {
    iVar3 = set_device_property_and_log(param_2,param_3);
    return iVar3;
  }
  if ((param_3 == 0) || (((param_3 | param_2) & 0xfff) != 0)) {
    return -0x16;
  }
  iVar1 = check_device_capabilities_and_state();
  if (iVar1 == 0) {
    set_ble_connection_state(*(undefined4 *)(param_1 + 0x10));
    iVar1 = validate_device_properties_with_size_parameter(param_1,0);
    if (iVar1 == 0) {
      handle_ble_connection_state_and_status_flags(param_1);
      do {
        if (*(uint *)(iVar3 + 0x2c) != param_3) {
          if (0xffff < param_3) {
            if ((param_2 & 0xffff) != 0) goto LAB_00060e9a;
            iVar2 = handle_hardware_interrupt_trigger(1,param_2);
            uVar4 = 0x10000;
            goto LAB_00060e40;
          }
          if (0xfff < param_3) {
LAB_00060e9a:
            if ((param_2 & 0xfff) == 0) {
              iVar2 = handle_hardware_interrupt_trigger(0,param_2);
              uVar4 = 0x1000;
              goto LAB_00060e40;
            }
          }
          local_34 = "unsupported at 0x%lx size %zu";
          local_38 = 4;
          uStack_30 = param_2;
          local_2c = param_3;
          execute_device_memory_data_compression(&DAT_00088270,0x2040,&local_38);
          handle_device_state_change(*(undefined4 *)(param_1 + 0x10),0xbad0004);
          iVar2 = 0xbad0004;
LAB_00060eda:
          local_34 = "erase error at 0x%lx size %zu";
          local_38 = 4;
          uStack_30 = param_2;
          local_2c = param_3;
          execute_device_memory_data_compression(&DAT_00088270,0x2040,&local_38);
          iVar1 = lookup_device_property_from_table(iVar2);
          break;
        }
        iVar2 = trigger_hardware_interrupt_wrapper();
        uVar4 = param_3;
LAB_00060e40:
        handle_device_state_change(*(undefined4 *)(param_1 + 0x10),iVar2);
        if (iVar2 != 0xbad0000) goto LAB_00060eda;
        param_3 = param_3 - uVar4;
        param_2 = param_2 + uVar4;
      } while (param_3 != 0);
      manage_device_state_with_spin_lock_validation(param_1);
      iVar3 = validate_device_properties_with_size_parameter(param_1,1);
      if (iVar1 == 0) {
        iVar1 = iVar3;
      }
    }
    z_spin_lock_valid(*(undefined4 *)(param_1 + 0x10));
  }
  initialize_device_and_ble_connection(param_1);
  return iVar1;
}


