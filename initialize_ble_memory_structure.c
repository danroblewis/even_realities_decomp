/*
 * Function: initialize_ble_memory_structure
 * Entry:    0005ee6c
 * Prototype: undefined initialize_ble_memory_structure()
 */


void initialize_ble_memory_structure
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 9) == '\0') {
    if (*(int *)(param_1 + 4) == 0) {
      *(undefined2 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x14);
      return;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","buf->frags == ((void *)0)",
                 "WEST_TOPDIR/zephyr/subsys/net/buf.c",0x5b,param_4);
    uVar1 = 0x5b;
  }
  else {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","buf->flags == 0U",
                 "WEST_TOPDIR/zephyr/subsys/net/buf.c",0x5a,param_4);
    uVar1 = 0x5a;
  }
                    /* WARNING: Subroutine does not return */
  assertion_failure("WEST_TOPDIR/zephyr/subsys/net/buf.c",uVar1);
}


