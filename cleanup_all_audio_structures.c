/*
 * Function: cleanup_all_audio_structures
 * Entry:    00085bf6
 * Prototype: undefined cleanup_all_audio_structures()
 */


void cleanup_all_audio_structures(int *param_1)

{
  if (param_1 != (int *)0x0) {
    while (param_1 != (int *)*param_1) {
      handle_audio_structure_cleanup((int *)*param_1 + -0xd);
    }
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
  }
  return;
}


