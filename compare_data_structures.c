/*
 * Function: compare_data_structures
 * Entry:    00080d3e
 * Prototype: undefined __stdcall compare_data_structures(undefined4 struct1, undefined4 struct2)
 */


int compare_data_structures(char *struct1,char *struct2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uStack_30;
  undefined1 auStack_2f [19];
  undefined1 uStack_1c;
  undefined1 auStack_1b [19];
  
  cVar1 = *struct2;
  if (cVar1 == *struct1) {
    if (cVar1 == '\x01') {
      uVar3 = *(uint *)(struct1 + 4);
      uVar4 = *(uint *)(struct2 + 4);
    }
    else {
      if (cVar1 == '\x02') {
        iVar2 = memcmp_byte_arrays(struct1 + 1,struct2 + 1,0x10);
        return iVar2;
      }
      if (cVar1 != '\0') {
        return -0x16;
      }
      uVar3 = (uint)*(ushort *)(struct1 + 2);
      uVar4 = (uint)*(ushort *)(struct2 + 2);
    }
    iVar2 = uVar3 - uVar4;
  }
  else {
    process_data_with_callback_execution_and_compression_alt(struct1,&uStack_30);
    process_data_with_callback_execution_and_compression_alt(struct2,&uStack_1c);
    iVar2 = memcmp_byte_arrays(auStack_2f,auStack_1b,0x10);
  }
  return iVar2;
}


