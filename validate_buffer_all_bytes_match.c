/*
 * Function: validate_buffer_all_bytes_match
 * Entry:    00084d8c
 * Prototype: undefined validate_buffer_all_bytes_match()
 */


undefined4 validate_buffer_all_bytes_match(undefined4 param_1,byte *param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if ((param_2 == (byte *)0x0) || (param_3 == 0)) {
LAB_00084dae:
    uVar2 = 0;
  }
  else {
    uVar1 = call_function_pointer_and_return_byte();
    pbVar4 = param_2;
    do {
      pbVar3 = pbVar4 + 1;
      if (*pbVar4 != uVar1) goto LAB_00084dae;
      pbVar4 = pbVar3;
    } while (pbVar3 != param_2 + param_3);
    uVar2 = 1;
  }
  return uVar2;
}


