/*
 * Function: bt_connection_state_transition_with_parameter_validation
 * Entry:    000569a0
 * Prototype: undefined bt_connection_state_transition_with_parameter_validation()
 */


uint bt_connection_state_transition_with_parameter_validation
               (undefined *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != &DAT_20006138) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                 "index >= 0 && index < ((size_t) (((int) sizeof(char[1 - 2 * !(!__builtin_types_compatible_p(__typeof__(acl_conns), __typeof__(&(acl_conns)[0])))]) - 1) + (sizeof(acl_conns) / sizeof((acl_conns)[0]))))"
                 ,"WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x543,param_4);
    DEBUG_PRINT2("\tInvalid bt_conn pointer\n");
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("WEST_TOPDIR/zephyr/subsys/bluetooth/host/conn.c",0x543);
  }
  return ((int)(param_1 + -0x20006138) >> 3) * 0x684bda13 & 0xff;
}


