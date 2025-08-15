/*
 * Function: cleanup_audio_data_structure
 * Entry:    00085846
 * Prototype: undefined cleanup_audio_data_structure()
 */


void cleanup_audio_data_structure(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x20);
  iVar4 = iVar3 + 0x58;
  manage_ble_connection_state_wrapper(iVar4);
  uVar2 = *(int *)(param_1 + 0x24) - 0x400;
  if (uVar2 < 0x80) {
    iVar3 = iVar3 + 0x48;
    *(uint *)(iVar3 + (uVar2 >> 5) * 4) =
         *(uint *)(iVar3 + (uVar2 >> 5) * 4) & ~(1 << (uVar2 & 0x1f));
  }
  puVar1 = *(undefined4 **)(param_1 + 0x38);
  *(undefined4 **)(*(int *)(param_1 + 0x34) + 4) = puVar1;
  *puVar1 = *(undefined4 *)(param_1 + 0x34);
  *(int *)(param_1 + 0x34) = param_1 + 0x34;
  *(int *)(param_1 + 0x38) = param_1 + 0x34;
  *(undefined4 *)(param_1 + 0x20) = 0;
  z_spin_lock_valid(iVar4);
  return;
}


