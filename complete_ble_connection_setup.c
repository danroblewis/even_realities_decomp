/*
 * Function: complete_ble_connection_setup
 * Entry:    0005e080
 * Prototype: undefined complete_ble_connection_setup()
 */


undefined4 complete_ble_connection_setup(int param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 local_28;
  char *local_24;
  undefined4 uStack_20;
  undefined2 local_1c;
  
  iVar6 = *(int *)(param_1 + 0xf0);
  iVar2 = FUN_00082ff6(param_1 + 4,0xd,param_3,param_2);
  if (iVar2 != 0) {
    iVar5 = iVar6 + 0x90;
    puVar4 = *(undefined2 **)(extraout_r3 + 0xc);
    iVar2 = create_ble_attribute_with_properties(4,*(undefined1 *)(iVar6 + 8),iVar5);
    if (iVar2 == 0) {
      uStack_20 = process_data_with_callback_validation_alt6(iVar5);
      local_24 = "Unable to get keys for %s";
      local_1c = 0x200;
      local_28 = 0x1000003;
      FUN_00083074(&DAT_00088180,0x1c40,&local_28);
      return 8;
    }
    *(undefined2 *)(iVar2 + 0x18) = *puVar4;
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(puVar4 + 1);
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(puVar4 + 3);
  }
  bVar1 = *(byte *)(param_1 + 0xe9);
  *(byte *)(param_1 + 0xe9) = bVar1 & 0xfe;
  if ((int)((uint)bVar1 << 0x1e) < 0) {
    uVar3 = 8;
  }
  else {
    if (-1 < (int)((uint)bVar1 << 0x1d)) goto LAB_0005e108;
    uVar3 = 10;
  }
  FUN_00083090(param_1,uVar3);
LAB_0005e108:
  if (*(short *)(param_1 + 0xe8) == 0) {
    handle_ble_connection_state_change(param_1);
  }
  return 0;
}


