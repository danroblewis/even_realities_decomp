/*
 * Function: post_notification_cmd_process
 * Entry:    000338ec
 * Prototype: undefined post_notification_cmd_process()
 */


void post_notification_cmd_process(int param_1,undefined1 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 local_b4;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [132];
  
  if (((param_1 == 0) || (param_2 == (undefined1 *)0x0)) || (param_3 == 0)) {
    if (1 < LOG_LEVEL) {
      if (IS_DEBUG != 0) {
        handle_heartbeat();
        return;
      }
      DEBUG_PRINT("%s(): input param invalid !\n","post_notification_cmd_process");
      return;
    }
  }
  else {
    puVar3 = *(undefined1 **)(param_1 + 0x10);
    local_b4 = 0;
    fill_memory_buffer(auStack_b0,0,0x10);
    local_b4 = CONCAT31(local_b4._1_3_,*param_2);
    *puVar3 = *param_2;
    puVar3[1] = param_2[1];
    *(uint *)(param_1 + 0x14) = *(ushort *)(puVar3 + 2) + 4;
    uVar4 = (uint)(byte)puVar3[1];
    if ((uVar4 == 2) || (uVar4 == 4)) {
      *(undefined2 *)(puVar3 + 2) = 0x1b4;
      memcpy(puVar3 + 4,param_3);
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT(&DAT_000a7c4a,"post_notification_cmd_process",uVar4);
        }
        else {
          handle_heartbeat();
        }
      }
      spi_master_transaction_debug(param_1,auStack_a0,8);
    }
    else {
      if (DAT_20007da8 == 0) {
        DAT_20007da8 = malloc_maybe(0x800);
        if (DAT_20007da8 == 0) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("[%s-%d] malloc failed !!\n","post_notification_cmd_process",0x19f);
          }
          else {
            handle_heartbeat();
          }
        }
        else {
          fill_memory_buffer(DAT_20007da8,0,0x800);
        }
      }
      if (DAT_20007da8 != 0) {
        iVar2 = handle_complex_data_processing(DAT_20007da8,param_3,puVar3[2]);
        uVar1 = local_b4;
        local_b4._0_2_ = CONCAT11((char)iVar2,(undefined1)local_b4);
        local_b4._3_1_ = SUB41(uVar1,3);
        local_b4._0_3_ = CONCAT12(*(undefined1 *)(param_3 + 1),(undefined2)local_b4);
        if (iVar2 == 0xc9) {
          parse_ncs_notification(DAT_20007da8,puVar3 + 4);
          if (2 < LOG_LEVEL) {
            if (IS_DEBUG == 0) {
              DEBUG_PRINT("%s(): ncs data receive okay !\n\n","post_notification_cmd_process");
            }
            else {
              handle_heartbeat();
            }
          }
          *(undefined2 *)(puVar3 + 2) = 0x1b4;
          spi_master_transaction_debug(param_1,auStack_a0,8);
          local_b4._0_2_ = CONCAT11(0xc9,(undefined1)local_b4);
          call_data_verification_handler_with_memory_cleanup(DAT_20007da8);
          DAT_20007da8 = 0;
        }
      }
      (**(code **)(param_1 + 0xc))(&local_b4,0x14);
    }
  }
  return;
}


