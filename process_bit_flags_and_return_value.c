/*
 * Function: process_bit_flags_and_return_value
 * Entry:    00064eb8
 * Prototype: undefined process_bit_flags_and_return_value()
 */


undefined4 process_bit_flags_and_return_value(uint *param_1,undefined1 *param_2)

{
  uint uVar1;
  
  do {
    uVar1 = *param_1;
    if (uVar1 == 0) {
      return 0xbad0002;
    }
  } while (*param_1 != uVar1);
  *param_1 = uVar1 & ~(1 << (0x1fU - LZCOUNT(uVar1) & 0xff));
  *param_2 = (char)(0x1fU - LZCOUNT(uVar1));
  return 0xbad0000;
}


