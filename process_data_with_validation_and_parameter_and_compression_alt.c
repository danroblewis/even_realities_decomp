/*
 * Function: process_data_with_validation_and_parameter_and_compression_alt
 * Entry:    00053658
 * Prototype: undefined process_data_with_validation_and_parameter_and_compression_alt()
 */


void process_data_with_validation_and_parameter_and_compression_alt
               (uint param_1,int param_2,byte *param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined4 local_20;
  char *local_1c;
  uint uStack_18;
  uint local_14;
  
  pbVar1 = param_3;
  do {
    pbVar2 = pbVar1;
    if (param_3 + param_4 * 8 == pbVar2) {
      process_data_with_callback_and_parameter_and_compression_alt(param_1);
      return;
    }
    pbVar1 = pbVar2 + 8;
  } while (*pbVar2 != param_1);
  uStack_18 = (uint)*(ushort *)(param_2 + 0x10);
  if (uStack_18 < pbVar2[1]) {
    local_1c = "Too small (%u bytes) event 0x%02x";
    local_20 = 4;
    local_14 = param_1;
    call_system_cleanup_alt(&DAT_00088138,0x2040,&local_20);
  }
  else {
    (**(code **)(pbVar2 + 4))(param_2);
  }
  return;
}


