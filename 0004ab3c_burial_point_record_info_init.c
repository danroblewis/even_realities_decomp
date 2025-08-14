/*
 * Function: burial_point_record_info_init
 * Entry:    0004ab3c
 * Prototype: undefined burial_point_record_info_init()
 */


void burial_point_record_info_init(void)

{
  int iVar1;
  undefined4 in_r3;
  
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): burial_point_record_info_init\n","burial_point_record_info_init");
    }
    else {
      handle_heartbeat();
    }
  }
  iVar1 = get_work_mode();
  fill_memory_buffer(iVar1 + 0x1092,0,0x1a);
  iVar1 = get_work_mode();
  fill_memory_buffer(iVar1 + 0x10ac,0,0x1a,in_r3);
  return;
}


