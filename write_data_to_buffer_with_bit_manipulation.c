/*
 * Function: write_data_to_buffer_with_bit_manipulation
 * Entry:    00068908
 * Prototype: undefined write_data_to_buffer_with_bit_manipulation()
 */


void write_data_to_buffer_with_bit_manipulation(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar3 = 0x20 - uVar1;
  if ((int)param_3 <= (int)(0x20 - uVar1)) {
    uVar3 = param_3;
  }
  if (uVar3 == 0) {
    uVar5 = (int)uVar1 >> 3;
  }
  else {
    uVar4 = uVar1 & 0xff;
    uVar5 = 4;
    uVar1 = 0x20;
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | param_2 << uVar4;
  }
  iVar2 = *(int *)(param_1 + 0x34);
  uVar4 = iVar2 - *(int *)(param_1 + 0x30);
  uVar4 = uVar4 & ~((int)uVar4 >> 0x1f);
  if ((int)uVar5 <= (int)uVar4) {
    uVar4 = uVar5;
  }
  *(uint *)(param_1 + 0x20) = uVar1 + uVar4 * -8;
  if (uVar4 != 0) {
    *(int *)(param_1 + 0x34) = iVar2 + -1;
    *(char *)(iVar2 + -1) = (char)*(undefined4 *)(param_1 + 0x1c);
    while( true ) {
      uVar1 = *(uint *)(param_1 + 0x1c);
      uVar4 = uVar4 - 1;
      *(uint *)(param_1 + 0x1c) = uVar1 >> 8;
      if (uVar4 == 0) break;
      iVar2 = *(int *)(param_1 + 0x34);
      *(int *)(param_1 + 0x34) = iVar2 + -1;
      *(char *)(iVar2 + -1) = (char)(uVar1 >> 8);
    }
  }
  *(uint *)(param_1 + 0x1c) = param_2 >> (uVar3 & 0xff);
  *(uint *)(param_1 + 0x20) = param_3 - uVar3;
  return;
}


