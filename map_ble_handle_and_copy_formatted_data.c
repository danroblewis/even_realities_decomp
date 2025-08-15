/*
 * Function: map_ble_handle_and_copy_formatted_data
 * Entry:    00082c48
 * Prototype: undefined map_ble_handle_and_copy_formatted_data(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined2 param_5)
 */


void map_ble_handle_and_copy_formatted_data
               (undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
               undefined2 param_5)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 *puVar4;
  char *pcVar5;
  undefined1 local_24;
  undefined2 local_23;
  undefined4 local_21 [4];
  char *pcVar3;
  
  puVar4 = *(undefined4 **)(param_2 + 0xc);
  local_24 = *(undefined1 *)((int)puVar4 + 6);
  local_23 = map_ble_handle_to_index_with_validation(param_2);
  pcVar5 = (char *)*puVar4;
  if (*pcVar5 == '\0') {
    local_21[0]._0_2_ = *(undefined2 *)(pcVar5 + 2);
    uVar1 = 5;
  }
  else {
    puVar4 = local_21;
    pcVar3 = pcVar5 + 1;
    do {
      pcVar2 = pcVar3 + 4;
      *puVar4 = *(undefined4 *)pcVar3;
      puVar4 = puVar4 + 1;
      pcVar3 = pcVar2;
    } while (pcVar2 != pcVar5 + 0x11);
    uVar1 = 0x13;
  }
  safe_memory_copy_with_bounds_check(param_3,param_4,param_5,&local_24,uVar1);
  return;
}


