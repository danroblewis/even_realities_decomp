/*
 * Function: decrement_reference_count_and_cleanup_memory
 * Entry:    00080ae2
 * Prototype: undefined decrement_reference_count_and_cleanup_memory()
 */


void decrement_reference_count_and_cleanup_memory(int param_1)

{
  char cVar1;
  int iVar2;
  
  if (param_1 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","buf","WEST_TOPDIR/zephyr/subsys/net/buf.c",0x1d3);
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("WEST_TOPDIR/zephyr/subsys/net/buf.c",0x1d3);
  }
  do {
    iVar2 = *(int *)(param_1 + 4);
    cVar1 = *(char *)(param_1 + 8) + -1;
    *(char *)(param_1 + 8) = cVar1;
    if (cVar1 != '\0') {
      return;
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      if (-1 < (int)((uint)*(byte *)(param_1 + 9) << 0x1f)) {
        (**(code **)(**(int **)(&DAT_20003aa8 + (uint)*(byte *)(param_1 + 10) * 0x34) + 8))(param_1)
        ;
      }
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    if (*(code **)(&DAT_20003aa4 + (uint)*(byte *)(param_1 + 10) * 0x34) == (code *)0x0) {
      setup_logging_system(&DAT_20003a7c + (uint)*(byte *)(param_1 + 10) * 0x34,param_1);
    }
    else {
      (**(code **)(&DAT_20003aa4 + (uint)*(byte *)(param_1 + 10) * 0x34))(param_1);
    }
    param_1 = iVar2;
  } while (iVar2 != 0);
  return;
}


