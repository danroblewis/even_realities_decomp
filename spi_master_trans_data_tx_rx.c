/*
 * Function: spi_master_trans_data_tx_rx
 * Entry:    000262ac
 * Prototype: undefined spi_master_trans_data_tx_rx(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


undefined4
spi_master_trans_data_tx_rx
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = param_5;
  local_18 = param_2;
  uStack_14 = param_3;
  local_10 = param_4;
  if (*(int *)(param_1 + 0x14) == 0) {
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): wait init_done.\n","spi_master_trans_data_tx_rx");
      }
      else {
        handle_heartbeat();
      }
    }
  }
  else {
    iVar1 = validate_and_setup_interrupt_configuration(param_1 + 0xc,&local_18,0);
    if (iVar1 == 0xbad0000) {
      return 0;
    }
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): sipm(bus=%d)-sync fail: status: %d -- %d\n","spi_master_trans_data_tx_rx"
                    ,(uint)*(byte *)(param_1 + 0x18),iVar1,0xbad0000);
      }
      else {
        handle_heartbeat("%s(): sipm(bus=%d)-sync fail: status: %d -- %d\n");
      }
    }
  }
  return 0xffffffff;
}


