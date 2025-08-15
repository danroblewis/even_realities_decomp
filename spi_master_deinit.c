/*
 * Function: spi_master_deinit
 * Entry:    00026338
 * Prototype: undefined spi_master_deinit()
 */


undefined4 spi_master_deinit(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  
  iVar1 = LOG_LEVEL;
  local_30 = 0x5000c000;
  local_2c = 0;
  local_28 = 0x5000a000;
  local_24 = 1;
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar3 = (uint)*(byte *)(param_1 + 0x18);
    if (uVar3 == 3) {
      puVar4 = &local_30;
    }
    else {
      if (uVar3 != 4) {
        if (LOG_LEVEL < 1) {
          return 0;
        }
        if (IS_DEBUG != 0) {
          handle_heartbeat();
          return 0;
        }
        DEBUG_PRINT("%s():  SPIM BUS ERR!\n","spi_master_deinit");
        return 0;
      }
      puVar4 = &local_28;
    }
    uVar2 = puVar4[1];
    *(undefined4 *)(param_1 + 0xc) = *puVar4;
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    if (2 < iVar1) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): *SPIM(%d)speed=%dM, sck=%d, mosi=%d, miso=%d, ss=%d\n",
                    "spi_master_deinit",uVar3,(uint)*(byte *)(param_1 + 0x1d),
                    (uint)*(byte *)(param_1 + 0x19),(uint)*(byte *)(param_1 + 0x1a),
                    (uint)*(byte *)(param_1 + 0x1b),(uint)*(byte *)(param_1 + 0x1c));
      }
      else {
        handle_heartbeat("%s(): *SPIM(%d)speed=%dM, sck=%d, mosi=%d, miso=%d, ss=%d\n",
                         "spi_master_deinit");
      }
    }
    enable_interrupt_sources_and_cleanup_config(param_1 + 0xc);
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): spim(bus=%d): uninit finish\n","spi_master_deinit",
                    (uint)*(byte *)(param_1 + 0x18));
      }
      else {
        handle_heartbeat();
      }
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return 0;
}


