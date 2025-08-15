/*
 * Function: initialize_system_service
 * Entry:    0002201c
 * Prototype: undefined initialize_system_service()
 */


undefined4 initialize_system_service(undefined4 param_1)

{
  init_mutex(&WORK_MODE_CONTEXT);
  initialize_graphics_engine(&DASHBOARD_LOCK_CONTEXT,&LAB_00019ff0_1,0);
  initialize_ble_connection_with_timeout
            (&DAT_20003d60,&DAT_2001e968,0x3000,0x21da9,param_1,0,0,0xfffffff1,0);
  return 0;
}


