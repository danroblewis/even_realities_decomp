/*
 * Function: pad_and_process_data_with_length
 * Entry:    0004a16c
 * Prototype: undefined pad_and_process_data_with_length()
 */


void pad_and_process_data_with_length(int *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  uVar1 = (uint)(*param_1 << 0x17) >> 0x1a;
  if (uVar1 < 0x38) {
    iVar2 = 0x38 - uVar1;
  }
  else {
    iVar2 = 0x78 - uVar1;
  }
  piStack_18 = param_1;
  uStack_14 = param_2;
  copy_data_with_byte_reordering_and_padding(&piStack_18,param_1,8);
  process_bit_stream_with_md5_calculation(param_1,&DAT_200034f7,iVar2);
  process_bit_stream_with_md5_calculation(param_1,&piStack_18,8);
  copy_data_with_byte_reordering_and_padding(param_2,param_1 + 2,0x10);
  return;
}


