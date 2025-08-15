/*
 * Function: parse_and_copy_data_with_conditional_formatting
 * Entry:    0007c5ba
 * Prototype: undefined __stdcall parse_and_copy_data_with_conditional_formatting(undefined4 source_data, undefined4 destination_buffer)
 */


undefined4
parse_and_copy_data_with_conditional_formatting(byte *source_data,int *destination_buffer)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  byte extraout_r1;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (((source_data == (byte *)0x0) || (destination_buffer == (int *)0x0)) ||
     ((byte *)*destination_buffer == (byte *)0x0)) {
    uVar2 = 7;
  }
  else if ((uint)destination_buffer[1] < 7) {
    uVar2 = 1;
    destination_buffer[1] = 7;
  }
  else {
    *(byte *)*destination_buffer = *source_data;
    *(byte *)(*destination_buffer + 1) = source_data[1];
    uVar3 = dispatch_function_pointer_with_complex_pointer_chain();
    if (uVar3 < 0x100) {
      *(char *)(*destination_buffer + 2) = (char)uVar3;
      iVar5 = 3;
    }
    else {
      *(char *)(*destination_buffer + 2) = (char)(uVar3 >> 0x18);
      *(char *)(*destination_buffer + 3) = (char)(uVar3 >> 0x10);
      *(char *)(*destination_buffer + 4) = (char)(uVar3 >> 8);
      *(char *)(*destination_buffer + 5) = (char)uVar3;
      iVar5 = 6;
    }
    uVar2 = 0;
    iVar4 = (uint)*source_data << 0x1c;
    bVar6 = iVar4 < 0;
    bVar1 = extraout_r1;
    if (bVar6) {
      bVar1 = source_data[2];
      iVar4 = *destination_buffer;
    }
    if (bVar6) {
      *(byte *)(iVar4 + iVar5) = bVar1;
      iVar5 = iVar5 + 1;
    }
    destination_buffer[1] = iVar5;
  }
  return uVar2;
}


