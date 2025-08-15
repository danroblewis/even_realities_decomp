/*
 * Function: handle_ble_characteristic_write_request
 * Entry:    0005b680
 * Prototype: undefined __stdcall handle_ble_characteristic_write_request(undefined4 connection_handle, undefined2 characteristic_handle, undefined4 write_request_data)
 */


/* Setting prototype: int handle_ble_characteristic_write_request(int connection_handle, uint16_t
   characteristic_handle, int *write_request_data) */

undefined4
handle_ble_characteristic_write_request
          (int connection_handle,undefined2 characteristic_handle,int write_request_data)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  int *piVar5;
  int *piVar6;
  undefined4 local_28;
  char *local_24;
  
  iVar2 = ble_permission_access_validator
                    (connection_handle,*(undefined4 *)(write_request_data + 4),0x94);
  if (iVar2 == 0) {
    iVar2 = ble_attribute_validation_handler
                      (connection_handle,*(undefined4 *)(write_request_data + 4),1);
    if (iVar2 == 0) {
      local_24 = "Device is not subscribed to characteristic";
      local_28 = 2;
      ble_data_processing_wrapper(&DAT_00088128,0x1080,&local_28);
      uVar3 = 0xffffffea;
    }
    else {
      iVar2 = process_ble_characteristic_value_change_with_callback_execution
                        (connection_handle,0x1b,*(ushort *)(write_request_data + 0xc) + 2);
      if (iVar2 != 0) {
        puVar4 = (undefined2 *)ble_memory_allocation_utility(iVar2 + 0xc,2);
        *puVar4 = characteristic_handle;
        ble_memory_allocation_utility(iVar2 + 0xc,*(undefined2 *)(write_request_data + 0xc));
        memcpy(puVar4 + 1,*(undefined4 *)(write_request_data + 8),
               *(undefined2 *)(write_request_data + 0xc));
        update_ble_connection_state
                  (iVar2,*(undefined4 *)(write_request_data + 0x10),
                   *(undefined4 *)(write_request_data + 0x14),1);
        if (connection_handle == 0) {
          DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","conn",
                       "WEST_TOPDIR/zephyr/subsys/bluetooth/host/att.c",0xf22);
          uVar3 = 0xf22;
        }
        else {
          if (iVar2 != 0) {
            iVar1 = bt_connection_disconnect_with_parameter_validation_and_callback_and_state_validation_and_callback_execution_and_parameter
                              ();
            if (iVar1 == 0) {
              bt_connection_disconnect_with_callback_validation_and_parameter_and_state_validation_and_callback_execution
                        (*(undefined4 *)(iVar2 + 0x18));
              decrement_reference_count_and_cleanup_memory(iVar2);
              uVar3 = 0xffffff80;
            }
            else {
              initialize_debug_system_with_validation(iVar1 + 0xc,iVar2);
              piVar5 = *(int **)(iVar1 + 0x30);
              if (piVar5 != (int *)0x0) {
                piVar6 = (int *)*piVar5;
                piVar5 = piVar5 + -100;
                if (piVar6 != (int *)0x0) {
                  piVar6 = piVar6 + -100;
                }
                while (iVar2 = FUN_00082114(piVar5,iVar1 + 0xc), piVar5 = piVar6, iVar2 != 0) {
                  while( true ) {
                    if (piVar5 == (int *)0x0) goto LAB_00059a5a;
                    piVar6 = (int *)piVar5[100];
                    if (piVar6 != (int *)0x0) {
                      piVar6 = piVar6 + -100;
                    }
                    if (iVar2 != -2) break;
                    iVar2 = -2;
                    piVar5 = piVar6;
                  }
                }
              }
LAB_00059a5a:
              uVar3 = 0;
            }
            return uVar3;
          }
          DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","buf",
                       "WEST_TOPDIR/zephyr/subsys/bluetooth/host/att.c",0xf23);
          uVar3 = 0xf23;
        }
                    /* WARNING: Subroutine does not return */
        trigger_system_service_call("WEST_TOPDIR/zephyr/subsys/bluetooth/host/att.c",uVar3);
      }
      local_24 = "No buffer available to send notification";
      local_28 = 2;
      ble_data_processing_wrapper(&DAT_00088128,0x1080,&local_28);
      uVar3 = 0xfffffff4;
    }
  }
  else {
    local_24 = "Link is not encrypted";
    local_28 = 2;
    ble_data_processing_wrapper(&DAT_00088128,0x1080,&local_28);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


