/*
 * Function: get_system_byte_1
 * Entry:    00016940
 * Prototype: undefined get_system_byte_1()
 */


undefined1 get_system_byte_1(void)

{
  return *(undefined1 *)(WORK_MODE + 1);
}


