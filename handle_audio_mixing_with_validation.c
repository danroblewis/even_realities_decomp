/*
 * Function: handle_audio_mixing_with_validation
 * Entry:    00075c2c
 * Prototype: undefined handle_audio_mixing_with_validation()
 */


undefined1 * handle_audio_mixing_with_validation(float param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  float extraout_s0;
  
  puVar1 = (undefined1 *)calculate_mathematical_function_with_audio_power_integration();
  if ((VOLTAGE_REGULATION_AND_AUDIO_MIXING_PARAMETERS != -1) && (!NAN(param_1))) {
    puVar1 = (undefined1 *)setup_audio_mixing(param_1);
    if (1.0 < extraout_s0) {
      puVar2 = (undefined4 *)calculate_data_structure_offset();
      *puVar2 = 0x21;
      return &LAB_000a8ea0;
    }
  }
  return puVar1;
}


