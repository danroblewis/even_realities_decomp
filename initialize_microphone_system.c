/*
 * Function: initialize_microphone_system
 * Entry:    00068280
 * Prototype: undefined initialize_microphone_system()
 */


void initialize_microphone_system(void)

{
  undefined4 in_r3;
  
  remove_data_structure_from_list();
  fill_memory_buffer(&DAT_2000b424,0,0x20,in_r3);
  return;
}


