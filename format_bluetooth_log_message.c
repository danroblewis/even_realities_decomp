/*
 * Function: format_bluetooth_log_message
 * Entry:    00052f18
 * Prototype: undefined format_bluetooth_log_message(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


undefined4
format_bluetooth_log_message
          (undefined4 param_1,undefined1 *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [36];
  
  if (param_3 == 0) {
    iVar2 = FUN_0007ddbe(auStack_34,0x24,"bt/%s",param_1);
    if (iVar2 < 0) {
      return 0xffffffea;
    }
  }
  else {
    if (param_2 != (undefined1 *)0x0) {
      FUN_0007dc4a(auStack_38,4,param_2);
      param_2 = auStack_38;
    }
    process_data_with_callback_and_parameter_alt6(auStack_34,0x24,param_1,param_3,param_2);
  }
  uVar1 = initialize_buffer_structure_with_parameters(auStack_34,param_4,param_5);
  return uVar1;
}


