/*
 * Function: flush_data_buffer
 * Entry:    00080bb2
 * Prototype: undefined __stdcall flush_data_buffer(undefined4 buffer_ctx, undefined4 force_flush)
 */


uint flush_data_buffer(int buffer_ctx,int force_flush)

{
  uint uVar1;
  
  if (*(int *)(buffer_ctx + 0x40) == 0) {
    uVar1 = 0xffffffea;
  }
  else {
    uVar1 = (uint)*(ushort *)(buffer_ctx + 0x44);
    if ((uVar1 == 0) || (force_flush != 0)) {
      process_data_with_state_management_alt6(buffer_ctx);
      *(undefined2 *)(buffer_ctx + 0x44) = 0;
      *(undefined4 *)(buffer_ctx + 0x40) = 0;
    }
    else {
      uVar1 = 0xffffffc3;
    }
  }
  return uVar1;
}


