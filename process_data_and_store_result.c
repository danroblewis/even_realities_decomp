/*
 * Function: process_data_and_store_result
 * Entry:    0007e5c8
 * Prototype: void process_data_and_store_result(void * data_structure)
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void process_data_and_store_result(void *data_structure) */

void process_data_and_store_result(void *data_structure)

{
  undefined1 uVar1;
  
  uVar1 = execute_empty_loop(0xff,data_structure,7);
  *(undefined1 *)((int)data_structure + 7) = uVar1;
  return;
}


