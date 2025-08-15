/*
 * Function: allocate_ble_memory_and_process_data_stream
 * Entry:    0008281a
 * Prototype: undefined allocate_ble_memory_and_process_data_stream()
 */


undefined4 allocate_ble_memory_and_process_data_stream(int param_1,undefined4 param_2,int param_3)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined2 *)ble_memory_allocation_utility(param_1 + 0xc,2);
  *puVar1 = *(undefined2 *)(param_3 + 4);
  uVar2 = process_ble_data_stream_in_chunks
                    (param_1,*(undefined2 *)(param_3 + 0xc),*(undefined4 *)(param_3 + 8),0,0,0,0,0);
  if (*(ushort *)(param_3 + 0xc) == uVar2) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0xfffffff4;
  }
  return uVar3;
}


