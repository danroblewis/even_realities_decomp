/*
 * Function: FUN_00025290
 * Entry:    00025290
 * Prototype: undefined FUN_00025290()
 */


undefined4 FUN_00025290(void)

{
  byte local_12;
  byte local_11;
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  local_c = 0;
  local_12 = 0;
  DAT_20007a44 = FUN_000259d4();
  if ((((DAT_20007a44 != 0) && (*(int *)(DAT_20007a44 + 4) != 0)) &&
      (*(int *)(DAT_20007a44 + 0x10) != 0)) && (*(int *)(DAT_20007a44 + 8) != 0)) {
    get_schedule_timing(0x290,0);
    (**(code **)(*(int *)(DAT_20007a44 + 8) + 8))();
    FUN_0007c932(DAT_20007a44,&local_10);
    DEBUG_PRINT("UUID = %02X %02X %02X %02X %02X %02X %02X %02X.\n",local_10 & 0xff,
                local_10 >> 8 & 0xff,local_10 >> 0x10 & 0xff,local_10 >> 0x18,local_c & 0xff,
                local_c >> 8 & 0xff,local_c >> 0x10 & 0xff,local_c >> 0x18);
    if ((local_c >> 8 & 0xff) - 0x50 < 2) {
      DAT_20018c69 = 1;
    }
    FUN_0007c944(DAT_20007a44,&local_12);
    DEBUG_PRINT("REV_IC = %02X.\n",(uint)local_12);
    FUN_0007c956(DAT_20007a44,&local_11);
    DEBUG_PRINT("REF_IC = %02X.\n",(uint)local_11);
    adc_nfc_init();
    FUN_0002ebc8();
  }
  return 0;
}


