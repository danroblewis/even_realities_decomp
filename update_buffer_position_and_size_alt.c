/*
 * Function: update_buffer_position_and_size_alt
 * Entry:    0005f594
 * Prototype: undefined update_buffer_position_and_size_alt()
 */


void update_buffer_position_and_size_alt
               (int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(ushort *)(param_1 + 1) < param_2) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","buf->len >= len",
                 "WEST_TOPDIR/zephyr/subsys/net/buf_simple.c",0x199,param_4);
                    /* WARNING: Subroutine does not return */
    assertion_failure("WEST_TOPDIR/zephyr/subsys/net/buf_simple.c",0x199);
  }
  *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) - (short)param_2;
  *param_1 = param_2 + *param_1;
  return;
}


