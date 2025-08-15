/*
 * Function: initialize_audio_system
 * Entry:    0008688e
 * Prototype: undefined initialize_audio_system()
 */


void initialize_audio_system(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  if (param_1 != piVar1) {
    iVar3 = *piVar1;
    piVar2 = (int *)piVar1[1];
    *piVar2 = iVar3;
    *(int **)(iVar3 + 4) = piVar2;
    *piVar1 = 0;
    piVar1[1] = 0;
    setup_image_processing();
    return;
  }
  return;
}


