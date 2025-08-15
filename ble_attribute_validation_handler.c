/*
 * Function: ble_attribute_validation_handler
 * Entry:    0005b0dc
 * Prototype: undefined ble_attribute_validation_handler()
 */


bool ble_attribute_validation_handler
               (int param_1,undefined4 *param_2,uint param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_28 = param_1;
  local_24 = param_2;
  local_20 = param_3;
  local_1c = param_4;
  if (param_1 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","conn",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/gatt.c",0xd19);
    DEBUG_PRINT2("\tinvalid parameter\n\n");
    uVar3 = 0xd19;
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      if (*(char *)(param_1 + 0xd) == '\a') {
        local_1c._0_2_ = (ushort)param_4 & 0xff00;
        local_1c = CONCAT22(0x2803,(ushort)local_1c);
        iVar2 = compare_data_structures(*param_2,&local_1c);
        if (iVar2 == 0) {
          if ((*(byte *)(param_2[3] + 6) & 0x30) == 0) {
            return false;
          }
          param_2 = (undefined4 *)ble_handle_mapping_processor(param_2);
          if (param_2 == (undefined4 *)0x0) {
            DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","attr",
                         "WEST_TOPDIR/zephyr/subsys/bluetooth/host/gatt.c",0xd2b);
            DEBUG_PRINT2("\tNo more attributes\n\n");
            uVar3 = 0xd2b;
            goto LAB_0005b100;
          }
        }
        local_1c._0_2_ = (ushort)local_1c & 0xff00;
        local_1c = CONCAT22(0x2902,(ushort)local_1c);
        iVar2 = compare_data_structures(*param_2,&local_1c);
        if ((iVar2 != 0) &&
           (param_2 = (undefined4 *)ble_handle_mapping_processor(param_2),
           param_2 == (undefined4 *)0x0)) {
          DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","attr",
                       "WEST_TOPDIR/zephyr/subsys/bluetooth/host/gatt.c",0xd31);
          DEBUG_PRINT2("\tNo more attributes\n\n");
          uVar3 = 0xd31;
          goto LAB_0005b100;
        }
        do {
          uVar1 = (ushort)local_28;
          local_28 = CONCAT22(0x2902,uVar1 & 0xff00);
          iVar2 = compare_data_structures(*param_2,&local_28);
          if (iVar2 == 0) {
LAB_0005b1ca:
            local_1c._0_2_ = (ushort)local_1c & 0xff00;
            local_1c = CONCAT22(0x2902,(ushort)local_1c);
            iVar2 = compare_data_structures(*param_2,&local_1c);
            if (iVar2 != 0) {
              return false;
            }
            puVar4 = (undefined1 *)param_2[3];
            iVar2 = ble_uuid_comparison_handler(param_1,*puVar4,puVar4 + 1);
            if (iVar2 == 0) {
              return false;
            }
            return (param_3 & *(ushort *)(puVar4 + 8)) != 0;
          }
          uVar1 = (ushort)local_24;
          local_24 = (undefined4 *)CONCAT22(0x2803,uVar1 & 0xff00);
          iVar2 = compare_data_structures(*param_2,&local_24);
          if (iVar2 == 0) goto LAB_0005b1ca;
          uVar1 = (ushort)local_20;
          local_20 = CONCAT22(0x2800,uVar1 & 0xff00);
          iVar2 = compare_data_structures(*param_2,&local_20);
          if (iVar2 == 0) goto LAB_0005b1ca;
          local_1c._0_2_ = (ushort)local_1c & 0xff00;
          local_1c = CONCAT22(0x2801,(ushort)local_1c);
          iVar2 = compare_data_structures(*param_2,&local_1c);
          if (iVar2 == 0) goto LAB_0005b1ca;
          param_2 = (undefined4 *)ble_handle_mapping_processor(param_2);
        } while (param_2 != (undefined4 *)0x0);
      }
      return false;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","attr",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/gatt.c",0xd1a);
    DEBUG_PRINT2("\tinvalid parameter\n\n");
    uVar3 = 0xd1a;
  }
LAB_0005b100:
                    /* WARNING: Subroutine does not return */
  trigger_system_service_call("WEST_TOPDIR/zephyr/subsys/bluetooth/host/gatt.c",uVar3);
}


