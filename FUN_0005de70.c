/*
 * Function: FUN_0005de70
 * Entry:    0005de70
 * Prototype: undefined FUN_0005de70()
 */


undefined4 FUN_0005de70(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 local_48;
  char *local_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  int local_38;
  char *pcStack_34;
  undefined4 local_28;
  char *local_24;
  
  pcVar6 = *(char **)(param_2 + 0xc);
  *(byte *)(param_1 + 0xe9) = *(byte *)(param_1 + 0xe9) & 0xfd;
  iVar5 = *(int *)(param_1 + 0xf0);
  iVar7 = iVar5 + 0x90;
  if ((*pcVar6 != '\0') && ((pcVar6[6] & 0xc0U) != 0xc0)) {
    uStack_40 = process_data_with_callback_validation_alt6(pcVar6);
    local_44 = "Invalid identity %s";
    local_3c = 0x200;
    local_48 = 0x1000003;
    FUN_00083074(&DAT_00088180,0x1c40,&local_48);
    uStack_40 = process_data_with_callback_validation_alt6(iVar7);
    local_44 = " for %s";
    local_3c = 0x200;
    local_48 = 0x1000003;
    FUN_00083074(&DAT_00088180,0x1c40,&local_48);
    return 10;
  }
  iVar1 = memcmp_byte_arrays(iVar7,pcVar6,7);
  if ((iVar1 == 0) || (iVar1 = FUN_0005e938(*(undefined1 *)(iVar5 + 8),pcVar6), iVar1 == 0)) {
LAB_0005df2c:
    iVar1 = FUN_00082ff6(param_1 + 4,0xd);
    if (iVar1 != 0) {
      iVar1 = FUN_0005e9d0(2,*(undefined1 *)(iVar5 + 8),iVar7);
      if (iVar1 == 0) {
        uStack_40 = process_data_with_callback_validation_alt6(iVar7);
        local_44 = "Unable to get keys for %s";
        local_3c = 0x200;
        local_48 = 0x1000003;
        FUN_00083074(&DAT_00088180,0x1c40,&local_48);
        goto LAB_0005df70;
      }
      if (*(char *)(iVar5 + 3) == '\0') {
        pcVar4 = (char *)(iVar5 + 0x9e);
      }
      else {
        pcVar4 = (char *)(iVar5 + 0x97);
      }
      if ((*pcVar4 == '\x01') && ((pcVar4[6] & 0xc0U) == 0x40)) {
        *(undefined4 *)(iVar1 + 0x3a) = *(undefined4 *)(pcVar4 + 1);
        *(undefined2 *)(iVar1 + 0x3e) = *(undefined2 *)(pcVar4 + 5);
        if ((*(char *)(iVar5 + 0x90) != '\0') && ((*(byte *)(iVar5 + 0x96) & 0xc0) != 0xc0)) {
          local_38 = iVar7;
          pcStack_34 = pcVar6;
          bt_connection_state_transition_with_callback(1,0x831e3,&local_38);
          FUN_00083062(iVar1 + 1,pcVar6);
          bt_connection_disconnect_with_state_management(iVar5);
        }
      }
      if ((int)((uint)*(byte *)(param_1 + 0xe9) << 0x1e) < 0) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","!(smp->remote_dist & 0x02)",
                     "WEST_TOPDIR/zephyr/subsys/bluetooth/host/smp.c",0xec9);
        uVar3 = 0xec9;
LAB_0005dfe0:
                    /* WARNING: Subroutine does not return */
        assertion_failure("WEST_TOPDIR/zephyr/subsys/bluetooth/host/smp.c",uVar3);
      }
      iVar5 = bluetooth_hci_command_processing_with_validation_and_callback_and_parameter(iVar1);
      if (iVar5 != 0) {
        local_24 = "Refusing new pairing. The old bond must be unpaired first.";
        local_28 = 2;
        FUN_00083074(&DAT_00088180,0x1080,&local_28);
        return 3;
      }
      iVar5 = bluetooth_hci_command_processing_with_validation_and_callback_and_parameter(iVar1);
      if (iVar5 != 0) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","!bt_id_find_conflict(new_bond)",
                     "WEST_TOPDIR/zephyr/subsys/bluetooth/host/smp.c",0xee5);
        uVar3 = 0xee5;
        goto LAB_0005dfe0;
      }
      handle_bluetooth_privacy_mode_management(iVar1);
    }
    if ((int)((uint)*(byte *)(param_1 + 0xe9) << 0x1d) < 0) {
      FUN_00083090(param_1,10);
    }
    if (*(short *)(param_1 + 0xe8) == 0) {
      FUN_0005daf0(param_1);
    }
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_00083002(param_1,iVar1);
    if (iVar2 != 0) {
      FUN_0005ea18(iVar1);
      goto LAB_0005df2c;
    }
LAB_0005df70:
    uVar3 = 8;
  }
  return uVar3;
}


