/*
 * Function: setup_audio_codec
 * Entry:    000868aa
 * Prototype: undefined setup_audio_codec()
 */


void setup_audio_codec(int param_1)

{
  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_1;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


