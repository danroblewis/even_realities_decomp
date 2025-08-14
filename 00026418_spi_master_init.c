/*
 * Function: spi_master_init
 * Entry:    00026418
 * Prototype: undefined spi_master_init()
 */


undefined4 spi_master_init(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  local_58 = 0x5000c000;
  puVar5 = &local_50;
  local_50 = 0x5000a000;
  uStack_4c = 1;
  local_54 = 0;
  fill_memory_buffer(&local_48,0,0x28);
  iVar1 = LOG_LEVEL;
  local_38 = 0xff0700;
  local_2c = 0xffffffff;
  uStack_28 = 0x20002;
  if (*(int *)(param_1 + 0x14) == 1) {
    return 0;
  }
  local_34 = (uint)*(byte *)(param_1 + 0x1d) * 1000000;
  uVar3 = (uint)*(byte *)(param_1 + 0x18);
  local_44 = (uint)*(byte *)(param_1 + 0x1a);
  local_40 = (uint)*(byte *)(param_1 + 0x1b);
  local_3c = (uint)*(byte *)(param_1 + 0x1c);
  local_48 = (uint)*(byte *)(param_1 + 0x19);
  if (uVar3 == 3) {
    puVar5 = &local_58;
  }
  else if (uVar3 != 4) {
    if (LOG_LEVEL < 1) {
      return 0;
    }
    if (IS_DEBUG != 0) {
      handle_heartbeat();
      return 0;
    }
    DEBUG_PRINT("%s():  SPIM BUS ERR!\n","spi_master_init");
    return 0;
  }
  uVar2 = puVar5[1];
  *(undefined4 *)(param_1 + 0xc) = *puVar5;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  if (2 < iVar1) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): *SPIM(%d)speed=%dM, sck=%d, mosi=%d, miso=%d, ss=%d\n","spi_master_init",
                  uVar3,(uint)*(byte *)(param_1 + 0x1d),(uint)*(byte *)(param_1 + 0x19),local_44,
                  local_40,local_3c);
    }
    else {
      handle_heartbeat("%s(): *SPIM(%d)speed=%dM, sck=%d, mosi=%d, miso=%d, ss=%d\n",
                       "spi_master_init");
    }
  }
  if (*(char *)(param_1 + 0x18) == '\x03') {
    puVar4 = &UNK_0007ca77;
  }
  else {
    puVar4 = (undefined *)0x0;
  }
  iVar1 = FUN_000671d8(param_1 + 0xc,&local_48,puVar4);
  if (iVar1 != 0xbad0000) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","status == NRFX_SUCCESS","../src/spim_spis/spim.c",
                 0x68);
                    /* WARNING: Subroutine does not return */
    FUN_0007e2ec("../src/spim_spis/spim.c",0x68);
  }
  if (*(char *)(param_1 + 0x18) == '\x03') {
    if (DAT_20018c6c != '\0') goto LAB_00026524;
    uVar2 = 0xc;
    DAT_20018c6c = '\x01';
  }
  else {
    if (DAT_20018c6d != '\0') goto LAB_00026524;
    uVar2 = 10;
    DAT_20018c6d = '\x01';
  }
  FUN_0005010c(uVar2,6);
LAB_00026524:
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): spim(bus=%d): init finish\n","spi_master_init",
                  (uint)*(byte *)(param_1 + 0x18));
    }
    else {
      handle_heartbeat();
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 1;
  return 0;
}


