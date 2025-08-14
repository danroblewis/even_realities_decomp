/*
 * Function: debug_init
 * Entry:    00019bd0
 * Prototype: undefined debug_init()
 */


int debug_init(void)

{
  int iVar1;
  char *format_string;
  
  iVar1 = FUN_00086448(&DAT_2000751c,200,0x14);
  if (iVar1 == 0) {
    format_string = "debug init success\r\n";
  }
  else {
    format_string = "debug init failed\r\n";
  }
  DEBUG_PRINT(format_string);
  return iVar1;
}


