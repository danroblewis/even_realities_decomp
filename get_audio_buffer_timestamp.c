/*
 * Function: get_audio_buffer_timestamp
 * Entry:    000857a8
 * Prototype: undefined get_audio_buffer_timestamp()
 */


undefined4 get_audio_buffer_timestamp(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x18) + param_2 * 0x10 + 8);
}


