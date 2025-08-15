/*
 * Function: write_audio_data_to_buffer_with_bit_manipulation
 * Entry:    0006efdc
 * Prototype: undefined __stdcall write_audio_data_to_buffer_with_bit_manipulation(undefined4 buffer_structure, undefined4 audio_data, undefined4 param_3, undefined4 param_4)
 */


void write_audio_data_to_buffer_with_bit_manipulation
               (int buffer_structure,int *audio_data,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar5 = *(uint *)(buffer_structure + 0x20);
  uVar4 = uVar5 + 5;
  iVar2 = *audio_data;
  if ((int)uVar4 < 0x21) {
    *(uint *)(buffer_structure + 0x20) = uVar4;
    *(uint *)(buffer_structure + 0x1c) =
         *(uint *)(buffer_structure + 0x1c) | iVar2 << (uVar5 & 0xff);
    uVar5 = uVar5 + 10;
    iVar2 = audio_data[1];
    if ((int)uVar5 < 0x21) goto LAB_0006effe;
LAB_0006f0f2:
    write_data_to_buffer_with_bit_manipulation(buffer_structure,iVar2,5);
    uVar5 = *(uint *)(buffer_structure + 0x20);
    uVar4 = uVar5 + 1;
    iVar2 = audio_data[2] >> 1;
    if (0x20 < (int)uVar4) goto LAB_0006f108;
LAB_0006f014:
    *(uint *)(buffer_structure + 0x20) = uVar4;
    *(uint *)(buffer_structure + 0x1c) =
         *(uint *)(buffer_structure + 0x1c) | iVar2 << (uVar5 & 0xff);
  }
  else {
    write_data_to_buffer_with_bit_manipulation(buffer_structure,iVar2,5);
    uVar4 = *(uint *)(buffer_structure + 0x20);
    iVar2 = audio_data[1];
    uVar5 = uVar4 + 5;
    if (0x20 < (int)uVar5) goto LAB_0006f0f2;
LAB_0006effe:
    *(uint *)(buffer_structure + 0x20) = uVar5;
    *(uint *)(buffer_structure + 0x1c) =
         *(uint *)(buffer_structure + 0x1c) | iVar2 << (uVar4 & 0xff);
    uVar4 = uVar5 + 1;
    iVar2 = audio_data[2] >> 1;
    if ((int)uVar4 < 0x21) goto LAB_0006f014;
LAB_0006f108:
    write_data_to_buffer_with_bit_manipulation(buffer_structure,iVar2,1);
    uVar4 = *(uint *)(buffer_structure + 0x20);
  }
  iVar7 = audio_data[4];
  uVar6 = audio_data[3];
  uVar5 = audio_data[2] & 1;
  iVar3 = (int)uVar6 >> uVar5;
  if (iVar2 == 0) {
    if (uVar5 == 0) {
      uVar6 = (uint)*(byte *)((int)audio_data + 0x19) + (audio_data[5] + 1) * 2;
    }
    else {
      uVar6 = uVar6 & 1;
    }
    uVar5 = uVar4 + 1;
    iVar7 = uVar6 * 0x2477f4 + iVar7;
    if ((int)uVar5 < 0x21) {
      *(uint *)(buffer_structure + 0x20) = uVar5;
      *(uint *)(buffer_structure + 0x1c) =
           *(uint *)(buffer_structure + 0x1c) | iVar3 << (uVar4 & 0xff);
    }
    else {
      write_data_to_buffer_with_bit_manipulation(buffer_structure,iVar3,1);
      uVar5 = *(uint *)(buffer_structure + 0x20);
    }
    uVar6 = uVar5 + 1;
    bVar1 = *(byte *)(audio_data + 6);
    if ((int)uVar6 < 0x21) {
      *(uint *)(buffer_structure + 0x20) = uVar6;
      *(uint *)(buffer_structure + 0x1c) =
           *(uint *)(buffer_structure + 0x1c) | (uint)bVar1 << (uVar5 & 0xff);
    }
    else {
      write_data_to_buffer_with_bit_manipulation(buffer_structure,(uint)bVar1,1);
      uVar6 = *(uint *)(buffer_structure + 0x20);
    }
    iVar2 = uVar6 + 0x19;
    if (0x20 < iVar2) {
      write_data_to_buffer_with_bit_manipulation(buffer_structure,iVar7,0x19,param_4);
      return;
    }
    goto LAB_0006f0ac;
  }
  if (uVar5 == 0) {
    if ((int)(uVar4 + 2) < 0x21) goto LAB_0006f086;
LAB_0006f116:
    write_data_to_buffer_with_bit_manipulation(buffer_structure,iVar3,2);
    uVar5 = *(uint *)(buffer_structure + 0x20);
    bVar1 = *(byte *)(audio_data + 6);
    uVar6 = uVar5 + 1;
  }
  else {
    iVar7 = (uVar6 & 1) + (iVar7 + 0x73a600) * 2;
    if (0x20 < (int)(uVar4 + 2)) goto LAB_0006f116;
LAB_0006f086:
    uVar5 = uVar4 + 2;
    *(uint *)(buffer_structure + 0x20) = uVar5;
    uVar6 = uVar4 + 3;
    *(uint *)(buffer_structure + 0x1c) =
         *(uint *)(buffer_structure + 0x1c) | iVar3 << (uVar4 & 0xff);
    bVar1 = *(byte *)(audio_data + 6);
  }
  if ((int)uVar6 < 0x21) {
    *(uint *)(buffer_structure + 0x20) = uVar6;
    *(uint *)(buffer_structure + 0x1c) =
         *(uint *)(buffer_structure + 0x1c) | (uint)bVar1 << (uVar5 & 0xff);
  }
  else {
    write_data_to_buffer_with_bit_manipulation(buffer_structure,(uint)bVar1,1);
    uVar6 = *(uint *)(buffer_structure + 0x20);
  }
  iVar2 = uVar6 + 0x18;
  if (0x20 < iVar2) {
    write_data_to_buffer_with_bit_manipulation(buffer_structure,iVar7,0x18,param_4);
    return;
  }
LAB_0006f0ac:
  *(uint *)(buffer_structure + 0x1c) = *(uint *)(buffer_structure + 0x1c) | iVar7 << (uVar6 & 0xff);
  *(int *)(buffer_structure + 0x20) = iVar2;
  return;
}


