/*
 * Function: update_buffer_position_and_size
 * Entry:    0005f558
 * Prototype: undefined update_buffer_position_and_size()
 */


void update_buffer_position_and_size
               (int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(ushort *)(param_1 + 1) < param_2) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","buf->len >= len",
                 "WEST_TOPDIR/zephyr/subsys/net/buf_simple.c",0x18d,param_4);
                    /* WARNING: Subroutine does not return */
    assertion_failure("WEST_TOPDIR/zephyr/subsys/net/buf_simple.c",0x18d);
  }
  *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) - (short)param_2;
  *param_1 = *param_1 + param_2;
  return;
}


