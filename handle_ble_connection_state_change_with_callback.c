/*
 * Function: handle_ble_connection_state_change_with_callback
 * Entry:    00059730
 * Prototype: undefined handle_ble_connection_state_change_with_callback()
 */


undefined4
handle_ble_connection_state_change_with_callback
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 local_28;
  char *local_24;
  
  acquire_mutex_with_priority_control(param_1 + 0x58);
  puVar1 = (undefined *)param_1[0x49];
  if (puVar1 == (undefined *)0x0) {
    local_24 = "No pending ATT request";
    local_28 = 2;
    FUN_00081ddc(&DAT_00088100,0x1080,&local_28);
  }
  else {
    if (puVar1 != &DAT_2000aea0) {
      pcVar2 = *(code **)(puVar1 + 4);
      *(undefined4 *)(puVar1 + 4) = 0;
      uVar3 = *(undefined4 *)(param_1[0x49] + 0x18);
      cleanup_ble_connection_and_free_memory();
      param_1[0x49] = 0;
      FUN_000820ae(*param_1);
      if (pcVar2 == (code *)0x0) {
        return 0;
      }
      (*pcVar2)(*(undefined4 *)*param_1,param_4,param_2,param_3,uVar3);
      return 0;
    }
    param_1[0x49] = 0;
  }
  FUN_000820ae(*param_1);
  return 0;
}


