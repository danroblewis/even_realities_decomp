/*
 * Function: setup_audio_buffers
 * Entry:    00086976
 * Prototype: undefined setup_audio_buffers()
 */


float setup_audio_buffers(float param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = setup_voltage_regulation();
  if ((iVar1 != 0) && (param_1 != 0.0)) {
    param_1 = (float)scale_float_number(param_1,param_2);
    iVar1 = setup_voltage_regulation();
    if ((iVar1 == 0) || (param_1 == 0.0)) {
      puVar2 = (undefined4 *)thunk_FUN_00071678();
      *puVar2 = 0x22;
    }
  }
  return param_1;
}


