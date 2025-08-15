/*
 * Function: setup_audio_processing_with_buffer_initialization
 * Entry:    0007ed88
 * Prototype: undefined setup_audio_processing_with_buffer_initialization()
 */


int setup_audio_processing_with_buffer_initialization(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 * 8 + 0x34;
  iVar1 = setup_audio_processing(iVar2);
  if (iVar1 != 0) {
    fill_memory_buffer(iVar1,0,iVar2);
  }
  return iVar1;
}


