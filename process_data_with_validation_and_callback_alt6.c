/*
 * Function: process_data_with_validation_and_callback_alt6
 * Entry:    00052c98
 * Prototype: undefined process_data_with_validation_and_callback_alt6()
 */


undefined1 * process_data_with_validation_and_callback_alt6(byte *param_1,uint param_2)

{
  char *pcVar1;
  byte *pbVar2;
  
  if (0x3f < param_2) {
    param_2 = 0x40;
  }
  pbVar2 = param_1 + param_2;
  pcVar1 = &DATA_PROCESSING_VALIDATION_AND_CALLBACK_ALT6;
  for (; param_1 != pbVar2; param_1 = param_1 + 1) {
    *pcVar1 = "0123456789abcdef"[*param_1 >> 4];
    pcVar1[1] = "0123456789abcdef"[*param_1 & 0xf];
    pcVar1 = pcVar1 + 2;
  }
  (&DATA_PROCESSING_VALIDATION_AND_CALLBACK_ALT6)[param_2 * 2] = 0;
  return &DATA_PROCESSING_VALIDATION_AND_CALLBACK_ALT6;
}


