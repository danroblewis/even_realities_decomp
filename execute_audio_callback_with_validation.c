/*
 * Function: execute_audio_callback_with_validation
 * Entry:    00085898
 * Prototype: undefined execute_audio_callback_with_validation()
 */


uint execute_audio_callback_with_validation(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 local_14;
  
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  local_18 = uVar2;
  local_14 = param_2;
  safe_string_copy_with_padding(auStack_38,param_1,0x20);
  uVar1 = execute_audio_callback_with_validation(param_1,uVar2,0x35,auStack_38,0x28,1);
  return uVar1 & (int)uVar1 >> 0x1f;
}


