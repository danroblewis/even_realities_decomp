/*
 * Function: FUN_000259d4
 * Entry:    000259d4
 * Prototype: undefined FUN_000259d4()
 */


undefined * FUN_000259d4(void)

{
  int iVar1;
  char *format_string;
  undefined *puVar2;
  
  DAT_20007a50 = &PTR_FUN_00025788_1_00088a38;
  DAT_200023d0 = 0x53;
  DAT_200023d4 = 0x53;
  DAT_200023d8 = 0x1000;
  DAT_20007a58 = &DAT_20007a60;
  DAT_20007a4c = &DAT_200023cc;
  FUN_000864c2();
  iVar1 = FUN_0008638c(DAT_200023cc);
  if (iVar1 == 0) {
    format_string = "parent bus device not ready\r\n";
  }
  else {
    format_string = "eeprom_st25dv_init ready\r\n";
  }
  DEBUG_PRINT(format_string);
  iVar1 = FUN_0008638c(DAT_200023cc);
  if (iVar1 == 0) {
    DEBUG_PRINT("\nError: Device \"%s\" is not ready; check the driver initialization logs for errors.\n"
                ,*DAT_200023cc);
    puVar2 = (undefined *)0x0;
  }
  else {
    DEBUG_PRINT("update_eeprom_interface\r\n");
    puVar2 = &DAT_20007a48;
  }
  return puVar2;
}


