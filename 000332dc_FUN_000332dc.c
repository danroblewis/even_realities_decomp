/*
 * Function: FUN_000332dc
 * Entry:    000332dc
 * Prototype: undefined FUN_000332dc()
 */


undefined4 FUN_000332dc(void)

{
  char cVar1;
  int iVar2;
  undefined4 in_r3;
  
  cVar1 = DAT_2001a127;
  if (DAT_2001a127 == '\0') {
    iVar2 = FUN_0008638c(&DAT_00087bc0);
    if (iVar2 == 0) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","device_is_ready(lpuart)",
                   "../src/production_test/serial_thread.c",0x2e,in_r3);
      DEBUG_PRINT2("\tLPUART device not ready\n");
                    /* WARNING: Subroutine does not return */
      FUN_0007e2ec("../src/production_test/serial_thread.c",0x2e);
    }
    iVar2 = FUN_000336a0(&DAT_00087bc0);
    if (iVar2 != 0) {
      DAT_2001a127 = cVar1;
      DEBUG_PRINT("init_serial_port is failed\n");
      return 0xffffffff;
    }
    DAT_2001a127 = '\x01';
  }
  return 0;
}


