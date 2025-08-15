/*
 * Function: handle_configuration_setting_with_context
 * Entry:    0004e8e8
 * Prototype: undefined handle_configuration_setting_with_context()
 */


int handle_configuration_setting_with_context
              (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  uVar4 = param_1 + 3U & 0xfffffffc;
  if (0x74 < uVar4) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                 "len <= (128 - sizeof(struct k_mem_block_id) - sizeof(struct data_chunk_item *))",
                 "WEST_TOPDIR/nrf/subsys/bluetooth/gatt_dm.c",0x5b);
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("WEST_TOPDIR/nrf/subsys/bluetooth/gatt_dm.c",0x5b);
  }
  puVar3 = DAT_2000a2a4;
  if ((DAT_2000a2a4 == (undefined4 *)0x0) ||
     (puVar3 = (undefined4 *)(CONFIGURATION_SETTING_CONTEXT_AND_STATE_MANAGEMENT + uVar4),
     &DAT_00000074 < puVar3)) {
    puVar3 = (undefined4 *)initialize_speaker(1,0x78,param_3,puVar3,param_4);
    if (puVar3 == (undefined4 *)0x0) {
      return 0;
    }
    *puVar3 = 0;
    puVar1 = puVar3;
    if (DAT_2000a2a8 != (undefined4 *)0x0) {
      *DAT_2000a2a8 = puVar3;
      puVar1 = DAT_2000a2a4;
    }
    DAT_2000a2a4 = puVar1;
    CONFIGURATION_SETTING_CONTEXT_AND_STATE_MANAGEMENT = 0;
    DAT_2000a2a8 = puVar3;
  }
  iVar2 = CONFIGURATION_SETTING_CONTEXT_AND_STATE_MANAGEMENT + 4;
  CONFIGURATION_SETTING_CONTEXT_AND_STATE_MANAGEMENT =
       uVar4 + CONFIGURATION_SETTING_CONTEXT_AND_STATE_MANAGEMENT;
  return (int)DAT_2000a2a8 + iVar2;
}


