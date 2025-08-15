/*
 * Function: process_data_with_state_management
 * Entry:    0004ea78
 * Prototype: undefined process_data_with_state_management()
 */


undefined4 process_data_with_state_management(int param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 local_50;
  char *local_4c;
  uint uStack_48;
  undefined1 local_3c [2];
  undefined2 local_3a;
  undefined1 local_38 [2];
  undefined2 local_36;
  undefined4 local_28;
  char *local_24;
  
  if (TASK_CALLBACK_PARAMETER_1 != param_1) {
    local_24 = "Unexpected conn object. Aborting.";
    local_28 = 2;
    FUN_0007f406(&DAT_00088130,0x1040,&local_28);
    uVar7 = 0xfffffff2;
    goto LAB_0004eaa6;
  }
  bVar1 = *(byte *)(param_3 + 0x10);
  if (bVar1 == 3) {
    if (param_2 == (undefined4 *)0x0) {
LAB_0004ebe6:
      handle_configuration_setting_with_memory();
      return 0;
    }
    local_38[0] = 0;
    local_36 = 0x2803;
    iVar2 = compare_data_structures(*param_2,local_38);
    if (iVar2 != 0) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                   "bt_uuid_cmp(attr->uuid, ((struct bt_uuid *) ((struct bt_uuid_16[]) {{ .uuid = { BT_UUID_TYPE_16 }, .val = (0x2803), }}))) == 0"
                   ,"WEST_TOPDIR/nrf/subsys/bluetooth/gatt_dm.c",0x19c);
      uVar8 = 0x19c;
      goto LAB_0004eb7e;
    }
    iVar2 = FUN_0007f386(&TASK_CALLBACK_PARAMETER_1,*(undefined2 *)(param_2 + 4));
    if (iVar2 == 0) {
      uVar7 = 0xfffffffd;
      goto LAB_0004eaa6;
    }
    piVar4 = (int *)param_2[3];
    piVar9 = (int *)FUN_0007f4a0();
    if (piVar9 == (int *)0x0) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","cur_gatt_chrc != ((void *)0)",
                   "WEST_TOPDIR/nrf/subsys/bluetooth/gatt_dm.c",0x1a8);
      uVar8 = 0x1a8;
      goto LAB_0004eb7e;
    }
    *piVar9 = *piVar4;
    piVar9[1] = piVar4[1];
    iVar2 = copy_data_with_error_handling(*piVar9);
    *piVar9 = iVar2;
    if (iVar2 != 0) {
      return 1;
    }
LAB_0004ec80:
    uVar7 = 0xfffffff4;
LAB_0004eaa6:
    FUN_0007f40c(&TASK_CALLBACK_PARAMETER_1,uVar7);
    return 0;
  }
  if (bVar1 < 4) {
    if (bVar1 != 2) {
      if (param_2 == (undefined4 *)0x0) {
        FUN_0007f438(&TASK_CALLBACK_PARAMETER_1);
        return 0;
      }
      piVar9 = (int *)param_2[3];
      iVar2 = handle_configuration_setting_with_validation_and_callback(param_2,8);
      local_3c[0] = 0;
      local_3a = 0x2800;
      iVar3 = compare_data_structures(*param_2,local_3c);
      if (iVar3 != 0) {
        local_38[0] = 0;
        local_36 = 0x2801;
        iVar3 = compare_data_structures(*param_2,local_38);
        if (iVar3 != 0) {
          DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                       "bt_uuid_cmp(attr->uuid, ((struct bt_uuid *) ((struct bt_uuid_16[]) {{ .uuid = { BT_UUID_TYPE_16 }, .val = (0x2800), }}))) == 0 || bt_uuid_cmp(attr->uuid, ((struct bt_uuid *) ((struct bt_uuid_16[]) {{ .uuid = { BT_UUID_TYPE_16 }, .val = (0x2801), }}))) == 0"
                       ,"WEST_TOPDIR/nrf/subsys/bluetooth/gatt_dm.c",0x127);
          uVar8 = 0x127;
          goto LAB_0004eb7e;
        }
      }
      if (iVar2 == 0) {
        local_24 = "Not enough memory for service attribute.";
LAB_0004eb88:
        local_28 = 2;
        FUN_0007f406(&DAT_00088130,0x1040,&local_28);
      }
      else {
        piVar4 = (int *)FUN_0007f460(iVar2);
        if (piVar4 == (int *)0x0) {
          DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","cur_service_val != ((void *)0)",
                       "WEST_TOPDIR/nrf/subsys/bluetooth/gatt_dm.c",0x13b);
          uVar8 = 0x13b;
          goto LAB_0004eb7e;
        }
        *piVar4 = *piVar9;
        piVar4[1] = piVar9[1];
        iVar3 = copy_data_with_error_handling(*piVar4);
        *piVar4 = iVar3;
        if (iVar3 == 0) {
          local_24 = "Not enough memory for service attribute data.";
          goto LAB_0004eb88;
        }
        DAT_2000a16a = (short)piVar4[1];
        if (*(short *)(iVar2 + 4) == DAT_2000a16a) goto LAB_0004ebe6;
        DAT_2000a15c = 0;
        DAT_2000a16c = 5;
        DAT_2000a164 = *(short *)(iVar2 + 4) + 1;
        uStack_48 = FUN_0005b9cc(TASK_CALLBACK_PARAMETER_1,&DAT_2000a15c);
        if (uStack_48 == 0) {
          return 0;
        }
        local_4c = "Descriptor discover failed, error: %d.";
        local_50 = 3;
        FUN_0007f406(&DAT_00088130,0x1840,&local_50);
      }
      uVar7 = 0xfffffff4;
      goto LAB_0004eaa6;
    }
  }
  else if (bVar1 == 5) {
    if (param_2 == (undefined4 *)0x0) {
      if (DAT_2000a288 < 2) goto LAB_0004ebe6;
      DAT_2000a164 = DAT_2000a174 + 1;
      DAT_2000a16c = 3;
      uVar7 = FUN_0005b9cc(param_1,&DAT_2000a15c);
      if (uVar7 == 0) {
        return 0;
      }
      local_4c = "Characteristic discover failed, error: %d.";
      local_50 = 3;
      uStack_48 = uVar7;
      FUN_0007f406(&DAT_00088130,0x1840,&local_50);
      goto LAB_0004eaa6;
    }
    local_38[0] = 0;
    local_36 = 0x2803;
    iVar2 = compare_data_structures(*param_2,local_38);
    if (iVar2 == 0) {
      puVar5 = (undefined4 *)handle_configuration_setting_with_validation_and_callback(param_2,8);
      puVar6 = (undefined4 *)FUN_0007f4a0();
      *puVar6 = *puVar5;
      return 1;
    }
    iVar2 = handle_configuration_setting_with_validation_and_callback(param_2,0);
    if (iVar2 != 0) {
      return 1;
    }
    uStack_48 = (uint)*(ushort *)(param_2 + 4);
    local_4c = "Not enough memory for next attribute descriptor at handle %u.";
    local_50 = 3;
    FUN_0007f406(&DAT_00088130,0x1840,&local_50);
    goto LAB_0004ec80;
  }
  DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","0","WEST_TOPDIR/nrf/subsys/bluetooth/gatt_dm.c",
               0x1d2);
  DEBUG_PRINT2("\tUnknown param type.\n");
  uVar8 = 0x1d2;
LAB_0004eb7e:
                    /* WARNING: Subroutine does not return */
  assertion_failure("WEST_TOPDIR/nrf/subsys/bluetooth/gatt_dm.c",uVar8);
}


