/*
 * Function: search_data_structure_with_count_and_retrieval
 * Entry:    0004cab4
 * Prototype: undefined __stdcall search_data_structure_with_count_and_retrieval(undefined4 data_context, undefined4 search_key, undefined4 output_buffer, undefined4 buffer_size, undefined2 count_limit)
 */


uint search_data_structure_with_count_and_retrieval
               (int data_context,uint search_key,undefined4 output_buffer,uint buffer_size,
               ushort count_limit)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  uint local_3c;
  ushort local_38;
  ushort local_36;
  ushort local_34;
  undefined4 local_28;
  char *local_24;
  
  if (*(char *)(data_context + 0x10) == '\0') {
    local_24 = "NVS not initialized";
    local_28 = 2;
    FUN_0007e658(&DAT_000881b8,0x1040,&local_28);
    uVar1 = 0xfffffff3;
  }
  else {
    iVar2 = FUN_0007e65e(*(undefined4 *)(data_context + 0x2c),8);
    if ((uint)*(ushort *)(data_context + 0xc) + iVar2 * -2 < buffer_size) {
      uVar1 = 0xffffffea;
    }
    else {
      uVar4 = 0;
      local_3c = *(uint *)(data_context + 4);
      uVar1 = local_3c;
      do {
        uVar3 = local_3c;
        if (count_limit < uVar4) {
          uVar3 = uVar1;
          if (*(uint *)(data_context + 4) != local_3c) goto LAB_0004cb52;
          break;
        }
        uVar1 = FUN_0007e6e2(data_context,&local_3c,&local_38);
        if (uVar1 != 0) {
          return uVar1;
        }
        if ((local_38 == search_key) && (iVar2 = FUN_0007e672(data_context,&local_38), iVar2 != 0))
        {
          uVar4 = uVar4 + 1;
        }
        uVar1 = uVar3;
      } while (*(uint *)(data_context + 4) != local_3c);
      if (local_38 == search_key) {
LAB_0004cb52:
        uVar1 = (uint)local_34;
        if ((uVar1 != 0) && (count_limit <= uVar4)) {
          if (buffer_size <= uVar1) {
            uVar1 = buffer_size;
          }
          uVar1 = FUN_0007e53e(data_context,(uVar3 & 0xffff0000) + (uint)local_36,output_buffer,
                               uVar1);
          if (uVar1 != 0) {
            return uVar1;
          }
          return (uint)local_34;
        }
      }
      uVar1 = 0xfffffffe;
    }
  }
  return uVar1;
}


