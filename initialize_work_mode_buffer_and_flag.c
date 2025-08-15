/*
 * Function: initialize_work_mode_buffer_and_flag
 * Entry:    000406e4
 * Prototype: undefined initialize_work_mode_buffer_and_flag()
 */


undefined4 initialize_work_mode_buffer_and_flag(void)

{
  int iVar1;
  
  iVar1 = get_work_mode();
  fill_memory_buffer(*(undefined4 *)(iVar1 + 0x1014),0,0x21);
  DAT_2001cdd3 = 1;
  return 0;
}


