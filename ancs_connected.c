/*
 * Function: ancs_connected
 * Entry:    0001861c
 * Prototype: undefined ancs_connected()
 */


void ancs_connected(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_38 [32];
  
  uVar3 = get_connection_data_pointer();
  format_status_message(uVar3,auStack_38);
  bVar1 = *(byte *)(param_1 + 2);
  bVar2 = *(byte *)(param_1 + 3);
  iVar4 = get_work_mode();
  uVar5 = (uint)*(byte *)(iVar4 + 0x1071);
  DEBUG_PRINT("%s -- type: 0x%x, role:0x%x force_bind %d",auStack_38,(uint)bVar1,(uint)bVar2,uVar5);
  if (param_2 == 0) {
    iVar4 = get_system_ready_state();
    if ((iVar4 == 0) && (iVar4 = get_work_mode(), *(char *)(iVar4 + 0x1071) == '\0')) {
      iVar4 = get_work_mode();
      iVar4 = memcmp_byte_arrays(iVar4 + 0x1069,uVar3,7);
      if (iVar4 != 0) {
        if (0 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): disconnect because invalid mac %s -- type: 0x%x, role:0x%x \n\n",
                        "ancs_connected",auStack_38,(uint)*(byte *)(param_1 + 2),
                        (uint)*(byte *)(param_1 + 3));
          }
          else {
            handle_heartbeat("%s(): disconnect because invalid mac %s -- type: 0x%x, role:0x%x \n\n"
                             ,"ancs_connected");
          }
        }
        bt_connection_disconnect(param_1,5);
        return;
      }
    }
    validate_and_update_ble_connection_parameters(param_1,&DAT_20002f60);
    iVar4 = get_work_mode();
    uVar3 = calculate_ble_connection_timing_with_scaling_alt();
    *(undefined4 *)(iVar4 + 0xae4) = uVar3;
    iVar4 = get_work_mode();
    uVar3 = calculate_ble_connection_timing_with_scaling_alt();
    *(undefined4 *)(iVar4 + 0xae8) = uVar3;
    iVar4 = ANCS_CONNECTION_HANDLE;
    *(undefined1 *)(ANCS_CONNECTION_HANDLE + 0x365) = 1;
    *(undefined1 *)(iVar4 + 0x367) = 1;
    ANCS_CONNECTION_HANDLE = param_1;
  }
  else if (0 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): failed (err 0x%02x)\n\n","ancs_connected",param_2,0,uVar5);
    }
    else {
      handle_heartbeat();
    }
  }
  return;
}


