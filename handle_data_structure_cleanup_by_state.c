/*
 * Function: handle_data_structure_cleanup_by_state
 * Entry:    0007ecf2
 * Prototype: undefined handle_data_structure_cleanup_by_state()
 */


undefined4 handle_data_structure_cleanup_by_state(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x3bc) == 2) {
    if (param_2 == 0) {
      uVar1 = 0xfffffffe;
    }
    else {
      handle_audio_structure_cleanup(param_2);
      fill_memory_buffer(param_2,0,0x70);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xfffffff0;
  }
  return uVar1;
}


