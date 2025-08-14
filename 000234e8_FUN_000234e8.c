/*
 * Function: FUN_000234e8
 * Entry:    000234e8
 * Prototype: undefined FUN_000234e8()
 */


int FUN_000234e8(void)

{
  int iVar1;
  char *format_string;
  
  iVar1 = FUN_00086448(&DAT_200079a0,0xc9,0x1e);
  if (iVar1 == 0) {
    format_string = "file init success\r\n";
  }
  else {
    format_string = "file init failed\r\n";
  }
  DEBUG_PRINT(format_string);
  return iVar1;
}


