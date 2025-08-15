/*
 * Function: spi_master_transaction_debug
 * Entry:    00019b54
 * Prototype: undefined __stdcall spi_master_transaction_debug(undefined4 spi_context, undefined4 rx_buffer, undefined4 rx_length)
 */


undefined4 spi_master_transaction_debug(int spi_context,byte *rx_buffer,undefined4 rx_length)

{
  undefined4 uVar1;
  byte *pbVar2;
  
  if (LOG_LEVEL == 5) {
    pbVar2 = *(byte **)(spi_context + 0x10);
    DEBUG_PRINT("spim tx(len=%d): %02x,%02x,%02x,%02x, %02x,%02x,%02x,%02x\n",
                *(undefined4 *)(spi_context + 0x14),(uint)*pbVar2,(uint)pbVar2[1],(uint)pbVar2[2],
                (uint)pbVar2[3],(uint)*pbVar2,(uint)pbVar2[1],(uint)pbVar2[2],(uint)pbVar2[3]);
  }
  uVar1 = master_process_get_req
                    (spi_context + -0x77c,*(undefined4 *)(spi_context + 0x10),rx_buffer,rx_length);
  if (LOG_LEVEL == 5) {
    DEBUG_PRINT("spim ret(len=%d): %02x,%02x,%02x,%02x, %02x,%02x,%02x,%02x\n",rx_length,
                (uint)*rx_buffer,(uint)rx_buffer[1],(uint)rx_buffer[2],(uint)rx_buffer[3],
                (uint)*rx_buffer,(uint)rx_buffer[1],(uint)rx_buffer[2],(uint)rx_buffer[3]);
  }
  return uVar1;
}


