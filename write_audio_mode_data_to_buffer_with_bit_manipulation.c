/*
 * Function: write_audio_mode_data_to_buffer_with_bit_manipulation
 * Entry:    0006f91c
 * Prototype: undefined write_audio_mode_data_to_buffer_with_bit_manipulation()
 */


void write_audio_mode_data_to_buffer_with_bit_manipulation
               (int param_1,int param_2,int param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar3 = (param_3 * (param_2 + 3) + param_2 + 3) * 5;
  iVar4 = (0x10 < iVar3) + 5;
  if (0x20 < iVar3) {
    iVar4 = (0x10 < iVar3) + 6;
  }
  iVar2 = param_4[1] >> 1;
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  if (0x40 < iVar3) {
    iVar4 = iVar4 + 1;
  }
  uVar5 = *(uint *)(param_1 + 0x20);
  uVar6 = uVar5 + iVar4;
  if ((int)uVar6 < 0x21) {
    *(uint *)(param_1 + 0x20) = uVar6;
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | iVar2 + -1 << (uVar5 & 0xff);
    bVar1 = *(byte *)(param_4 + 2);
  }
  else {
    write_data_to_buffer_with_bit_manipulation();
    uVar6 = *(uint *)(param_1 + 0x20);
    bVar1 = *(byte *)(param_4 + 2);
  }
  uVar5 = uVar6 + 1;
  if ((int)uVar5 < 0x21) {
    *(uint *)(param_1 + 0x20) = uVar5;
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | (uint)bVar1 << (uVar6 & 0xff);
    iVar3 = *param_4;
  }
  else {
    write_data_to_buffer_with_bit_manipulation(param_1,(uint)bVar1,1);
    uVar5 = *(uint *)(param_1 + 0x20);
    iVar3 = *param_4;
  }
  if ((int)(uVar5 + 8) < 0x21) {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | iVar3 << (uVar5 & 0xff);
    *(uint *)(param_1 + 0x20) = uVar5 + 8;
    return;
  }
  write_data_to_buffer_with_bit_manipulation(param_1,iVar3,8);
  return;
}


