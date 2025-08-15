/*
 * Function: manage_data_buffer
 * Entry:    00080b42
 * Prototype: undefined __stdcall manage_data_buffer(undefined4 buffer_ctx, undefined4 data_ptr, undefined4 data_size)
 */


uint manage_data_buffer(int buffer_ctx,int data_ptr,uint data_size)

{
  int iVar1;
  ushort uVar2;
  
  if (*(int *)(buffer_ctx + 0x40) == 0) {
    if (data_size < 8) {
      return 0xffffffc3;
    }
    uVar2 = (*(ushort *)(data_ptr + 2) << 8 | *(ushort *)(data_ptr + 2) >> 8) + 8;
    if ((0x9ab < data_size) || (0x9ab < uVar2)) {
      return 0xffffffc1;
    }
    if (uVar2 < data_size) {
      return 0xffffff75;
    }
    iVar1 = process_data_with_validation_and_parameter_alt5();
    *(int *)(buffer_ctx + 0x40) = iVar1;
    if (iVar1 == 0) {
      return 0xfffffff4;
    }
    *(ushort *)(buffer_ctx + 0x44) = uVar2;
  }
  else if (*(ushort *)(buffer_ctx + 0x44) < data_size) {
    return 0xffffff75;
  }
  ble_memory_copy_utility(*(int *)(buffer_ctx + 0x40) + 0xc,data_ptr,data_size);
  data_size = *(ushort *)(buffer_ctx + 0x44) - data_size;
  *(short *)(buffer_ctx + 0x44) = (short)data_size;
  return data_size & 0xffff;
}


