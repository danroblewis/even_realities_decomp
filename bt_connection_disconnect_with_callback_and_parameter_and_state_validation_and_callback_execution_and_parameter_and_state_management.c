/*
 * Function: bt_connection_disconnect_with_callback_and_parameter_and_state_validation_and_callback_execution_and_parameter_and_state_management
 * Entry:    000585f0
 * Prototype: undefined bt_connection_disconnect_with_callback_and_parameter_and_state_validation_and_callback_execution_and_parameter_and_state_management()
 */


int bt_connection_disconnect_with_callback_and_parameter_and_state_validation_and_callback_execution_and_parameter_and_state_management
              (uint param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 local_48;
  char *local_44;
  uint uStack_40;
  uint local_3c;
  undefined4 local_28;
  char *local_24;
  
  uStack_40 = (uint)*(ushort *)(param_1 + 0x2e);
  if ((uint)*(ushort *)(param_1 + 0x1e) <= (uint)*(ushort *)(param_1 + 0x2e)) {
    uStack_40 = (uint)*(ushort *)(param_1 + 0x1e);
  }
  if (uStack_40 < param_3 + 1U) {
    local_44 = "ATT MTU exceeded, max %u, wanted %zu";
    uVar4 = 0x2080;
    local_48 = 4;
    local_3c = param_3 + 1U;
    goto LAB_00058624;
  }
  iVar1 = bt_connection_disconnect_with_validation_and_state_management_and_callback_execution_and_parameter_and_state_validation_and_callback
                    (param_2);
  if (iVar1 == 2) {
    if ((param_2 == 0xf) || (param_2 == 0x21)) goto LAB_000586e2;
    if (*(int *)(param_1 + 0x148) == 0) {
      puVar3 = (uint *)(param_1 + 0x148);
      if (*(int *)(param_1 + 0x144) == 0) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","chan->rsp_buf",
                     "WEST_TOPDIR/zephyr/subsys/bluetooth/host/att.c",0x2cd);
                    /* WARNING: Subroutine does not return */
        assertion_failure("WEST_TOPDIR/zephyr/subsys/bluetooth/host/att.c",0x2cd);
      }
      iVar1 = FUN_0005f2d4();
      FUN_0005ee6c();
      FUN_0005f4d4(iVar1 + 0xc,9);
      goto LAB_000586ce;
    }
    local_44 = "already processing a REQ/RSP on chan %p";
    uStack_40 = param_1;
  }
  else {
    if (iVar1 == 4) {
LAB_000586e2:
      uVar5 = 0xf0000;
      uVar4 = 0;
    }
    else {
      uVar5 = 0xffffffff;
      uVar4 = 0xffffffff;
    }
    iVar1 = FUN_0008181a(0,0,uVar5,uVar4);
    if (iVar1 != 0) {
      uVar6 = FUN_000748ac();
      if ((undefined *)uVar6 == &DAT_200068d0) {
        uVar5 = 0;
        uVar4 = 0;
      }
      puVar3 = (uint *)FUN_000727ac(&DAT_20003a28,(int)((ulonglong)uVar6 >> 0x20),uVar5,uVar4);
      if (puVar3 == (uint *)0x0) {
        local_24 = "Unable to allocate ATT TX meta";
        local_28 = 2;
        FUN_00081ddc(&DAT_00088100,0x1080,&local_28);
        FUN_0005f24c(iVar1);
        return 0;
      }
LAB_000586ce:
      *puVar3 = param_1;
      *(uint **)(iVar1 + 0x18) = puVar3;
      puVar2 = (undefined1 *)FUN_0005f5d0(iVar1 + 0xc,1);
      *puVar2 = (char)param_2;
      return iVar1;
    }
    local_44 = "Unable to allocate buffer for op 0x%02x";
    uStack_40 = param_2;
  }
  uVar4 = 0x1840;
  local_48 = 3;
LAB_00058624:
  FUN_00081ddc(&DAT_00088100,uVar4,&local_48);
  return 0;
}


