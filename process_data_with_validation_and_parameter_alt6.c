/*
 * Function: process_data_with_validation_and_parameter_alt6
 * Entry:    00052b48
 * Prototype: undefined process_data_with_validation_and_parameter_alt6()
 */


/* WARNING: Removing unreachable block (ram,0x0005ad44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 process_data_with_validation_and_parameter_alt6(void)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  ushort uVar10;
  ushort uVar11;
  undefined4 local_58;
  char *local_54;
  uint uStack_50;
  undefined1 local_44 [2];
  undefined2 local_42;
  undefined4 local_40;
  undefined4 local_30;
  char *local_2c;
  
  if (DATA_PROCESSING_BUFFER_POINTERS == (undefined4 *)0x0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","svc->attrs",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/gatt.c",0x671);
    DEBUG_PRINT2("\tinvalid parameters\n\n");
    uVar6 = 0x671;
LAB_0005ad5c:
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("WEST_TOPDIR/zephyr/subsys/bluetooth/host/gatt.c",uVar6);
  }
  if (DAT_200028bc == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","svc->attr_count",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/gatt.c",0x672);
    DEBUG_PRINT2("\tinvalid parameters\n\n");
    uVar6 = 0x672;
    goto LAB_0005ad5c;
  }
  iVar3 = get_ble_handle_value(&DAT_2000af04);
  if ((iVar3 << 0x1f < 0) && (iVar3 = get_ble_handle_value(&DAT_20006448), -1 < iVar3 << 0x1d)) {
    local_2c = "Can\'t register service after init and before settings are loaded.";
    local_30 = 2;
    ble_data_processing_wrapper(&DAT_00088128,0x1040,&local_30);
    return 0xffffffea;
  }
  update_ble_connection_handle_counter();
  local_44[0] = 0;
  local_42 = 0x1800;
  iVar3 = compare_data_structures(*DATA_PROCESSING_BUFFER_POINTERS,local_44);
  if (iVar3 == 0) {
    return 0xffffff88;
  }
  local_40._0_2_ = (ushort)local_40 & 0xff00;
  local_40 = CONCAT22(0x1801,(ushort)local_40);
  iVar3 = compare_data_structures(*DATA_PROCESSING_BUFFER_POINTERS,&local_40);
  if (iVar3 == 0) {
    return 0xffffff88;
  }
  process_ble_connection_state();
  puVar7 = DATA_PROCESSING_BUFFER_POINTERS;
  uVar2 = DAT_200028bc;
  if (BLE_HANDLE_MAPPING_PROCESSING_STATE == (undefined4 *)0x0) {
    if (DATA_PROCESSING_BUFFER_POINTERS != (undefined4 *)0x0) {
      uVar11 = DAT_2000ff3c;
      uVar10 = 0;
LAB_0005aeb8:
      for (; (uVar2 & 0xffff) != 0; uVar2 = (uVar2 & 0xffff) - 1) {
        uVar5 = *(ushort *)(puVar7 + 4);
        if (uVar5 == 0) {
          *(ushort *)(puVar7 + 4) = uVar11 + 1;
          uVar5 = uVar11 + 1;
        }
        else if (uVar5 <= uVar11) {
          local_40 = 0;
          ble_handle_mapping_utility(uVar5,uVar5,&LAB_000825ba_1,&local_40);
          uVar5 = uVar11;
          if (local_40 != 0) {
            uStack_50 = (uint)*(ushort *)(puVar7 + 4);
            local_54 = "Unable to register handle 0x%04x";
            local_58 = 3;
            ble_data_processing_wrapper(&DAT_00088128,0x1840,&local_58);
            finalize_ble_connection_with_magnetometer();
            return 0xffffffea;
          }
        }
        puVar7 = puVar7 + 5;
        uVar11 = uVar5;
      }
      goto LAB_0005ae66;
    }
  }
  else {
    if (BLE_DATA_VALIDATION_AND_PROCESSING_STATE == (undefined4 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x5af50);
      (*pcVar1)();
    }
    uVar11 = *(ushort *)
              (BLE_DATA_VALIDATION_AND_PROCESSING_STATE[-1] * 0x14 +
               BLE_DATA_VALIDATION_AND_PROCESSING_STATE[-2] + -4);
    uVar10 = uVar11;
    if (DATA_PROCESSING_BUFFER_POINTERS != (undefined4 *)0x0) goto LAB_0005aeb8;
LAB_0005ae66:
    if ((uVar10 != 0) && (*(ushort *)(DATA_PROCESSING_BUFFER_POINTERS + 4) <= uVar10)) {
      puVar7 = BLE_HANDLE_MAPPING_PROCESSING_STATE;
      if (BLE_HANDLE_MAPPING_PROCESSING_STATE != (undefined4 *)0x0) {
        piVar8 = (int *)0x0;
        puVar4 = BLE_HANDLE_MAPPING_PROCESSING_STATE;
        do {
          piVar9 = puVar4 + -2;
          if (*(ushort *)(DATA_PROCESSING_BUFFER_POINTERS + 4) < *(ushort *)(*piVar9 + 0x10)) {
            if (piVar8 == (int *)0x0) {
              BLE_HANDLE_MAPPING_PROCESSING_STATE = &DATA_PROCESSING_BUFFER_METADATA;
              DATA_PROCESSING_BUFFER_METADATA = puVar7;
              if (BLE_DATA_VALIDATION_AND_PROCESSING_STATE == (undefined4 *)0x0) goto LAB_0005af16;
            }
            else {
              DATA_PROCESSING_BUFFER_METADATA = (undefined4 *)piVar8[2];
              if (DATA_PROCESSING_BUFFER_METADATA == (undefined4 *)0x0) goto LAB_0005ae30;
              piVar8[2] = (int)&DATA_PROCESSING_BUFFER_METADATA;
            }
            break;
          }
          puVar4 = (undefined4 *)*puVar4;
          piVar8 = piVar9;
        } while (puVar4 != (undefined4 *)0x0);
      }
      goto LAB_0005ae3a;
    }
  }
  DATA_PROCESSING_BUFFER_METADATA = (undefined4 *)0x0;
LAB_0005ae30:
  if (BLE_DATA_VALIDATION_AND_PROCESSING_STATE == (undefined4 *)0x0) {
    BLE_HANDLE_MAPPING_PROCESSING_STATE = &DATA_PROCESSING_BUFFER_METADATA;
    BLE_DATA_VALIDATION_AND_PROCESSING_STATE = &DATA_PROCESSING_BUFFER_METADATA;
  }
  else {
    *BLE_DATA_VALIDATION_AND_PROCESSING_STATE = &DATA_PROCESSING_BUFFER_METADATA;
LAB_0005af16:
    BLE_DATA_VALIDATION_AND_PROCESSING_STATE = &DATA_PROCESSING_BUFFER_METADATA;
  }
LAB_0005ae3a:
  iVar3 = get_ble_handle_value(&DAT_2000af04);
  if (iVar3 << 0x1f < 0) {
    update_ble_attribute_handle_range
              (*(undefined2 *)(DATA_PROCESSING_BUFFER_POINTERS + 4),
               *(undefined2 *)(DATA_PROCESSING_BUFFER_POINTERS + DAT_200028bc * 5 + -1));
    cleanup_and_validate_ble_connections();
  }
  finalize_ble_connection_with_magnetometer();
  return 0;
}


