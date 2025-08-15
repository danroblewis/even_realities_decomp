/*
 * Function: process_data_with_callback_and_parameter_and_compression_alt
 * Entry:    00053580
 * Prototype: undefined process_data_with_callback_and_parameter_and_compression_alt()
 */


void process_data_with_callback_and_parameter_and_compression_alt(undefined4 param_1,int param_2)

{
  ushort uVar1;
  undefined4 local_28;
  char *local_24;
  undefined4 uStack_20;
  uint local_1c;
  undefined4 uStack_18;
  undefined2 local_14;
  
  uVar1 = *(ushort *)(param_2 + 0x10);
  uStack_18 = process_data_with_validation_and_callback_alt6
                        (*(undefined4 *)(param_2 + 0xc),(uint)uVar1);
  local_24 = "Unhandled event 0x%02x len %u: %s";
  local_14 = 0x402;
  local_28 = 0x1000005;
  uStack_20 = param_1;
  local_1c = (uint)uVar1;
  call_system_cleanup_alt(&DAT_00088138,0x2c80,&local_28);
  return;
}


