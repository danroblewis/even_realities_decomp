/*
 * Function: allocate_and_initialize_att_connection_context
 * Entry:    00058930
 * Prototype: undefined allocate_and_initialize_att_connection_context()
 */


undefined4 allocate_and_initialize_att_connection_context(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_30;
  char *local_2c;
  undefined4 uStack_28;
  undefined4 *local_20;
  undefined4 *local_1c;
  
  local_1c = (undefined4 *)process_ble_connection_data(&DAT_20003738,&local_20,0,0);
  if (local_1c == (undefined4 *)0x0) {
    DAT_2000ae9c = process_ble_data_with_callback_validation();
    puVar1 = local_20;
    fill_memory_buffer(local_20 + 1,0,0x34);
    *puVar1 = param_1;
    local_20[1] = 0;
    local_20[2] = 0;
    local_20[0xc] = 0;
    local_20[0xd] = 0;
    iVar2 = process_ble_connection_data(&DAT_20003758,&local_1c,0,0);
    if (iVar2 == 0) {
      iVar2 = fill_memory_buffer(local_1c,0,0x198);
      *(undefined **)(iVar2 + 0xc) = &DAT_200029ac;
      setup_error_handling(iVar2 + 0x128);
      puVar1 = local_1c;
      uVar3 = local_1c[0x48];
      local_1c[0x48] = 0;
      *local_1c = local_20;
      if (local_20[0xc] == 0) {
        setup_error_handling(local_20 + 3,0,uVar3);
        local_20[10] = 0;
        local_20[0xb] = 0;
      }
      puVar4 = puVar1 + 100;
      puVar1[100] = local_20[0xc];
      local_20[0xc] = puVar4;
      if (local_20[0xd] == 0) {
        local_20[0xd] = puVar4;
      }
      *(undefined2 *)((int)local_1c + 0x2e) = 0x17;
      *(undefined2 *)((int)local_1c + 0x1e) = 0x17;
      *param_2 = local_1c + 2;
      return 0;
    }
    uStack_28 = *local_20;
    local_2c = "No available ATT channel for conn %p";
    local_30 = 3;
    FUN_00081ddc(&DAT_00088100,0x1880,&local_30);
  }
  else {
    local_2c = "No available ATT context for conn %p";
    local_30 = 3;
    uStack_28 = param_1;
    FUN_00081ddc(&DAT_00088100,0x1840,&local_30);
  }
  return 0xfffffff4;
}


