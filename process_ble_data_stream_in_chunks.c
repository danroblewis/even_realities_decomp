/*
 * Function: process_ble_data_stream_in_chunks
 * Entry:    0005f450
 * Prototype: undefined process_ble_data_stream_in_chunks(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined param_6, undefined4 param_7, undefined4 param_8)
 */


int process_ble_data_stream_in_chunks
              (int param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5,
              undefined4 param_6,code *param_7,undefined4 param_8)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = find_last_element_in_linked_list();
  iVar4 = 0;
  while( true ) {
    iVar2 = iVar2 + 0xc;
    uVar3 = calculate_ble_buffer_available_space(iVar2);
    if (param_2 < uVar3) {
      uVar1 = (ushort)param_2;
    }
    else {
      uVar1 = calculate_ble_buffer_available_space(iVar2);
    }
    uVar3 = (uint)uVar1;
    ble_memory_copy_utility(iVar2,param_3,uVar3);
    param_2 = param_2 - uVar3;
    iVar4 = iVar4 + uVar3;
    param_3 = param_3 + uVar3;
    if (param_2 == 0) {
      return iVar4;
    }
    if (param_7 == (code *)0x0) {
      iVar2 = process_ble_connection_data_with_framebuffer
                        (&DAT_20003a7c + (uint)*(byte *)(param_1 + 10) * 0x34,param_2,param_5,
                         param_6);
    }
    else {
      iVar2 = (*param_7)(param_5,param_6,param_8);
    }
    if (iVar2 == 0) break;
    append_linked_list_to_another(param_1,iVar2);
  }
  return iVar4;
}


