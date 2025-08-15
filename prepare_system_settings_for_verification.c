/*
 * Function: prepare_system_settings_for_verification
 * Entry:    00022b00
 * Prototype: undefined prepare_system_settings_for_verification()
 */


undefined4 prepare_system_settings_for_verification(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_8c;
  undefined1 auStack_88 [4];
  undefined1 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined4 auStack_77 [8];
  undefined4 auStack_57 [8];
  undefined1 local_37;
  undefined1 local_36;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  fill_memory_buffer(auStack_88,0,0x78);
  local_8c = 1;
  local_84 = *(undefined1 *)(param_1 + 2);
  local_80 = *(undefined4 *)(param_1 + 0xf64);
  local_7c = *(undefined4 *)(param_1 + 0xf94);
  local_78 = *(undefined1 *)(param_1 + 0xed4);
  puVar1 = auStack_77;
  puVar3 = &SYSTEM_SETTINGS_LOADING_BUFFER;
  do {
    puVar2 = puVar3 + 1;
    *puVar1 = *puVar3;
    puVar1 = puVar1 + 1;
    puVar3 = puVar2;
  } while (puVar2 != (undefined4 *)0x20003013);
  puVar1 = auStack_57;
  puVar3 = &SYSTEM_SETTINGS_VERIFICATION_BUFFER;
  do {
    puVar2 = puVar3 + 1;
    *puVar1 = *puVar3;
    puVar1 = puVar1 + 1;
    puVar3 = puVar2;
  } while (puVar2 != (undefined4 *)0x20002ff3);
  local_37 = *(undefined1 *)(param_1 + 3);
  local_36 = *(undefined1 *)(param_1 + 4);
  local_2c = *(undefined2 *)(param_1 + 0x1072);
  local_2a = *(undefined2 *)(param_1 + 0x1074);
  local_24 = *(undefined4 *)(param_1 + 4000);
  local_28 = *(undefined4 *)(param_1 + 0xfa4);
  local_20 = *(undefined4 *)(param_1 + 0xfa8);
  local_1c = *(undefined4 *)(param_1 + 0xfac);
  local_10 = *(undefined4 *)(param_1 + 0xfb0);
  local_c = *(undefined4 *)(param_1 + 0xfb4);
  local_18 = *(undefined2 *)(param_1 + 0xeda);
  local_16 = *(undefined2 *)(param_1 + 0xedc);
  local_14 = *(undefined2 *)(param_1 + 0xede);
  handle_data_verification(0x130000,&local_8c,0x84);
  return 0;
}


