/*
 * Function: set_callback_pointer_and_flags
 * Entry:    0007c61e
 * Prototype: undefined set_callback_pointer_and_flags()
 */


undefined4 set_callback_pointer_and_flags(byte *param_1,byte *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) || (0x15 < *param_2 - 1)) ||
     (((*(int *)(param_2 + 4) == 0 || (*(int *)(param_2 + 8) == 0)) ||
      (*(int *)(param_2 + 0xc) == 0)))) {
    uVar2 = 7;
  }
  else {
    *(byte **)(param_1 + 0x14) = param_2;
    uVar1 = dispatch_function_pointer_with_complex_pointer_chain();
    uVar2 = 0;
    *param_1 = *param_1 & 0xef | (uVar1 < 0x100) << 4;
  }
  return uVar2;
}


