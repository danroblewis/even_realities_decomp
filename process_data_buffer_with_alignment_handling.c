/*
 * Function: process_data_buffer_with_alignment_handling
 * Entry:    0004c4e4
 * Prototype: undefined __stdcall process_data_buffer_with_alignment_handling(undefined4 buffer_context, undefined4 buffer_size_ptr, undefined4 processing_flags)
 */


int process_data_buffer_with_alignment_handling
              (uint buffer_context,uint *buffer_size_ptr,undefined4 processing_flags)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uStack_28;
  uint *local_24;
  undefined4 uStack_20;
  
  uStack_28 = buffer_context;
  local_24 = buffer_size_ptr;
  uStack_20 = processing_flags;
  iVar1 = calculate_aligned_address(*(undefined4 *)(buffer_context + 0x2c),8);
  uVar3 = *buffer_size_ptr - iVar1;
  *buffer_size_ptr = uVar3;
  uVar4 = uVar3 & 0xffff0000;
  while( true ) {
    if (uVar3 <= uVar4) {
      return 0;
    }
    iVar2 = execute_function_pointer_from_structure_offset(buffer_context,uVar3,&uStack_28,8);
    if (iVar2 != 0) break;
    iVar2 = validate_data_structure_with_checksum_and_alignment(buffer_context,&uStack_28);
    if (iVar2 != 0) {
      uVar4 = (uVar4 & 0xffff0000) + (uStack_28 >> 0x10) + ((uint)local_24 & 0xffff);
      *buffer_size_ptr = uVar3;
    }
    uVar3 = uVar3 - iVar1;
  }
  return iVar2;
}


