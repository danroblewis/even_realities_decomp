/*
 * Function: handle_operation_with_error_check
 * Entry:    000234e8
 * Prototype: undefined handle_operation_with_error_check()
 */


int handle_operation_with_error_check(void)

{
  int iVar1;
  char *format_string;
  
  iVar1 = setup_memory_pools(&DAT_200079a0,0xc9,0x1e);
  if (iVar1 == 0) {
    format_string = "file init success\r\n";
  }
  else {
    format_string = "file init failed\r\n";
  }
  DEBUG_PRINT(format_string);
  return iVar1;
}


