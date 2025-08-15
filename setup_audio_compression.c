/*
 * Function: setup_audio_compression
 * Entry:    00086902
 * Prototype: undefined setup_audio_compression()
 */


float setup_audio_compression(float param_1,float param_2)

{
  int iVar1;
  
  iVar1 = FUN_00075980();
  if ((iVar1 == 0) || ((iVar1 = FUN_00075980(param_2), iVar1 != 0 && (param_1 <= param_2)))) {
    param_1 = param_2;
  }
  return param_1;
}


