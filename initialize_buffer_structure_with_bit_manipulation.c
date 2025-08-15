/*
 * Function: initialize_buffer_structure_with_bit_manipulation
 * Entry:    000684a8
 * Prototype: undefined __stdcall initialize_buffer_structure_with_bit_manipulation(undefined4 buffer_structure, undefined4 data_type, undefined4 data_buffer, undefined4 data_size)
 */


void initialize_buffer_structure_with_bit_manipulation
               (undefined1 *buffer_structure,int data_type,byte *data_buffer,int data_size)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (uint)(data_type == 0) * 0x20;
  fill_memory_buffer(buffer_structure,0,0x38);
  pbVar2 = data_buffer + data_size;
  *(undefined4 *)(buffer_structure + 8) = 0xffffff;
  *(undefined4 *)(buffer_structure + 0xc) = 0xffffffff;
  *buffer_structure = (char)data_type;
  *(int *)(buffer_structure + 0x20) = iVar5;
  *(byte **)(buffer_structure + 0x28) = data_buffer;
  *(byte **)(buffer_structure + 0x30) = data_buffer;
  *(byte **)(buffer_structure + 0x2c) = pbVar2;
  *(byte **)(buffer_structure + 0x34) = pbVar2;
  if (data_type == 0) {
    uVar4 = 0;
    if (data_buffer < pbVar2) {
      *(byte **)(buffer_structure + 0x30) = data_buffer + 1;
      uVar4 = (uint)*data_buffer << 0x10;
      *(uint *)(buffer_structure + 4) = uVar4;
      if (data_buffer + 1 < pbVar2) {
        *(byte **)(buffer_structure + 0x30) = data_buffer + 2;
        uVar4 = uVar4 | (uint)data_buffer[1] << 8;
        *(uint *)(buffer_structure + 4) = uVar4;
        if (data_buffer + 2 < pbVar2) {
          *(byte **)(buffer_structure + 0x30) = data_buffer + 3;
          uVar4 = uVar4 | data_buffer[2];
        }
      }
    }
    iVar3 = iVar5 >> 3;
    if (data_size <= iVar5 >> 3) {
      iVar3 = data_size;
    }
    uVar1 = iVar5 + iVar3 * -8;
    *(uint *)(buffer_structure + 4) = uVar4;
    *(uint *)(buffer_structure + 0x20) = uVar1;
    if (iVar3 != 0) {
      *(byte **)(buffer_structure + 0x34) = pbVar2 + -1;
      uVar4 = (uint)pbVar2[-1] << 0x18;
      if (iVar3 != 1) {
        *(uint *)(buffer_structure + 0x1c) = uVar4 >> 8;
        *(byte **)(buffer_structure + 0x34) = pbVar2 + -2;
        uVar4 = uVar4 >> 8 | (uint)pbVar2[-2] << 0x18;
        if (iVar3 != 2) {
          *(uint *)(buffer_structure + 0x1c) = uVar4 >> 8;
          *(byte **)(buffer_structure + 0x34) = pbVar2 + -3;
          uVar4 = uVar4 >> 8 | (uint)pbVar2[-3] << 0x18;
          if (iVar3 != 3) {
            *(uint *)(buffer_structure + 0x1c) = uVar4 >> 8;
            *(byte **)(buffer_structure + 0x34) = pbVar2 + -4;
            uVar4 = uVar4 >> 8 | (uint)pbVar2[-4] << 0x18;
          }
        }
      }
      *(uint *)(buffer_structure + 0x1c) = uVar4;
    }
    if (7 < (int)uVar1) {
      uVar4 = uVar1;
      if (0x1f < (int)uVar1) {
        uVar4 = 0x20;
      }
      *(undefined4 *)(buffer_structure + 0x20) = 0;
      *(uint *)(buffer_structure + 0x24) = uVar4;
      *(uint *)(buffer_structure + 0x1c) = *(uint *)(buffer_structure + 0x1c) >> (uVar1 & 0xff);
    }
  }
  return;
}


