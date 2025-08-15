/*
 * Function: write_mode_data_to_buffer
 * Entry:    00068b2c
 * Prototype: undefined write_mode_data_to_buffer()
 */


void write_mode_data_to_buffer(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)(1 < param_2);
  if (param_2 != 0) {
    uVar1 = uVar1 + 1;
  }
  if (3 < param_2) {
    uVar1 = uVar1 + 1;
  }
  if (uVar1 != 0) {
    iVar2 = uVar1 + *(uint *)(param_1 + 0x20);
    if (0x20 < iVar2) {
      write_data_to_buffer_with_bit_manipulation();
      return;
    }
    *(uint *)(param_1 + 0x1c) =
         *(uint *)(param_1 + 0x1c) | param_3 << (*(uint *)(param_1 + 0x20) & 0xff);
    *(int *)(param_1 + 0x20) = iVar2;
    return;
  }
  return;
}


