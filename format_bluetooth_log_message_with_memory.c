/*
 * Function: format_bluetooth_log_message_with_memory
 * Entry:    0005306c
 * Prototype: undefined format_bluetooth_log_message_with_memory()
 */


undefined4 format_bluetooth_log_message_with_memory(undefined1 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [40];
  
  if (param_2 == 0) {
    iVar2 = format_string_with_variable_arguments(auStack_34,0x24,"bt/%s","ccc");
    if (iVar2 < 0) {
      return 0xffffffea;
    }
  }
  else {
    if (param_1 != (undefined1 *)0x0) {
      FUN_0007dc4a(auStack_38,4,param_1);
      param_1 = auStack_38;
    }
    process_data_with_callback_and_parameter_alt6(auStack_34,0x24,"ccc",param_2,param_1);
  }
  uVar1 = FUN_0007f198(auStack_34);
  return uVar1;
}


