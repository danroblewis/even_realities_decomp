/*
 * Function: transfer_data_with_callback
 * Entry:    00080ae6
 * Prototype: undefined __stdcall transfer_data_with_callback(undefined4 source_data, undefined4 dest_ctx)
 */


int transfer_data_with_callback(int source_data,int dest_ctx)

{
  int iVar1;
  
  iVar1 = process_data_with_validation_and_parameter_alt5();
  if (iVar1 != 0) {
    if (*(code **)(dest_ctx + 0x34) == (code *)0x0) {
      memcpy(iVar1 + 0x18,source_data + 0x18,*(undefined1 *)(source_data + 0xb));
    }
    else {
      (**(code **)(dest_ctx + 0x34))(iVar1,source_data);
    }
  }
  return iVar1;
}


