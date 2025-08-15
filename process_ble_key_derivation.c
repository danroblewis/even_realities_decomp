/*
 * Function: process_ble_key_derivation
 * Entry:    0005d0ac
 * Prototype: undefined process_ble_key_derivation()
 */


undefined4 process_ble_key_derivation(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int local_78;
  char *local_74;
  uint local_70;
  undefined4 *local_6c;
  undefined4 auStack_68 [4];
  undefined4 local_58 [4];
  undefined4 local_48 [8];
  undefined4 local_28;
  char *local_24;
  
  fill_memory_buffer(local_48,0,0x10);
  local_70 = (uint)*(byte *)(param_1 + 8);
  switch(local_70) {
  case 0:
  case 3:
    break;
  case 1:
  case 2:
    local_48[0] = *(undefined4 *)(param_1 + 0xd8);
    break;
  default:
    local_74 = "Unknown pairing method (%u)";
    local_78 = 3;
    FUN_00083074(&DAT_00088180,0x1840,&local_78);
    return 8;
  case 5:
    puVar5 = *(undefined4 **)(param_1 + 0xe4);
    if (puVar5 != (undefined4 *)0x0) {
      puVar9 = puVar5 + 4;
      puVar4 = local_48;
      do {
        uVar2 = *puVar5;
        uVar3 = puVar5[1];
        puVar5 = puVar5 + 2;
        *puVar4 = uVar2;
        puVar4[1] = uVar3;
        puVar4 = puVar4 + 2;
      } while (puVar5 != puVar9);
    }
  }
  local_70 = param_1 + 0x47;
  iVar6 = param_1 + 199;
  iVar7 = param_1 + 0x37;
  local_78 = *(int *)(param_1 + 0xf0) + 0x9e;
  iVar8 = param_1 + 0x27;
  local_74 = (char *)iVar6;
  iVar1 = derive_ble_pairing_keys(param_1 + 0x97,iVar7,iVar8,*(int *)(param_1 + 0xf0) + 0x97);
  if (iVar1 == 0) {
    puVar5 = local_58;
    local_70 = *(int *)(param_1 + 0xf0) + 0x97;
    local_74 = (char *)(*(int *)(param_1 + 0xf0) + 0x9e);
    local_78 = param_1 + 0x11;
    local_6c = puVar5;
    iVar1 = derive_ble_long_term_keys(iVar6,iVar8,iVar7,local_48);
    if (iVar1 == 0) {
      if (*(char *)(param_1 + 8) == '\x05') {
        puVar4 = *(undefined4 **)(param_1 + 0xe0);
        if (puVar4 == (undefined4 *)0x0) {
          fill_memory_buffer(local_48,0,0x10);
        }
        else {
          puVar10 = puVar4 + 4;
          puVar9 = local_48;
          do {
            uVar2 = *puVar4;
            uVar3 = puVar4[1];
            puVar4 = puVar4 + 2;
            *puVar9 = uVar2;
            puVar9[1] = uVar3;
            puVar9 = puVar9 + 2;
          } while (puVar4 != puVar10);
        }
      }
      local_70 = *(int *)(param_1 + 0xf0) + 0x9e;
      local_74 = (char *)(*(int *)(param_1 + 0xf0) + 0x97);
      local_78 = param_1 + 10;
      local_6c = auStack_68;
      iVar1 = derive_ble_long_term_keys(iVar6,iVar7,iVar8,local_48);
      if (iVar1 == 0) {
        iVar1 = memcmp_byte_arrays(param_1 + 0xb7,auStack_68,0x10);
        if (iVar1 != 0) {
          return 0xb;
        }
        iVar1 = FUN_000830b0(param_1,0xd);
        if (iVar1 == 0) {
          return 8;
        }
        puVar4 = (undefined4 *)ble_memory_allocation_utility(iVar1 + 0xc,0x10);
        do {
          uVar2 = *puVar5;
          uVar3 = puVar5[1];
          puVar5 = puVar5 + 2;
          *puVar4 = uVar2;
          puVar4[1] = uVar3;
          puVar4 = puVar4 + 2;
        } while (puVar5 != local_48);
        update_ble_connection_state_with_error_handling(param_1,iVar1,0);
        FUN_00083090(param_1 + 4,1);
        return 0;
      }
      local_24 = "Calculate remote DHKey check failed";
    }
    else {
      local_24 = "Calculate local DHKey check failed";
    }
  }
  else {
    local_24 = "Calculate LTK failed";
  }
  local_28 = 2;
  FUN_00083074(&DAT_00088180,0x1040,&local_28);
  return 8;
}


