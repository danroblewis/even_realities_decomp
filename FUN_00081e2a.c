/*
 * Function: FUN_00081e2a
 * Entry:    00081e2a
 * Prototype: undefined FUN_00081e2a(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined4 param_6)
 */


uint FUN_00081e2a(int param_1,undefined4 param_2,int param_3,uint param_4,code *param_5,
                 undefined4 param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  
  uVar10 = FUN_00081bc0(param_3);
  iVar5 = (int)((ulonglong)uVar10 >> 0x20);
  uVar8 = (uint)*(ushort *)(param_1 + 0x1e);
  if ((uint)*(ushort *)(param_1 + 0x2e) <= (uint)*(ushort *)(param_1 + 0x1e)) {
    uVar8 = (uint)*(ushort *)(param_1 + 0x2e);
  }
  if ((uint)uVar10 < uVar8) {
    uVar6 = *(undefined4 *)(param_1 + 8);
    iVar1 = find_last_element_in_linked_list(param_3);
    uVar9 = 0;
    while( true ) {
      iVar2 = FUN_00081bc0(param_3);
      if ((uint)*(ushort *)(param_1 + 0x2e) < (uint)*(ushort *)(param_1 + 0x1e)) {
        uVar8 = (uint)*(ushort *)(param_1 + 0x2e) - iVar2;
      }
      else {
        uVar8 = (uint)*(ushort *)(param_1 + 0x1e) - iVar2;
      }
      uVar3 = calculate_ble_buffer_available_space(iVar1 + 0xc);
      if (uVar8 < uVar3) {
        iVar2 = FUN_00081bc0(param_3);
        if ((uint)*(ushort *)(param_1 + 0x2e) < (uint)*(ushort *)(param_1 + 0x1e)) {
          uVar3 = (uint)*(ushort *)(param_1 + 0x2e) - iVar2;
        }
        else {
          uVar3 = (uint)*(ushort *)(param_1 + 0x1e) - iVar2;
        }
      }
      else {
        uVar3 = calculate_ble_buffer_available_space(iVar1 + 0xc);
      }
      if (uVar3 == 0) {
        uVar10 = calculate_ble_memory_offset(*(undefined1 *)(param_3 + 10));
        iVar1 = FUN_000836de((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),0,0);
        if (iVar1 == 0) {
          return uVar9;
        }
        append_linked_list_to_another(param_3,iVar1);
        iVar2 = FUN_00081bc0(param_3);
        if ((uint)*(ushort *)(param_1 + 0x1e) < (uint)*(ushort *)(param_1 + 0x2e)) {
          uVar8 = (uint)*(ushort *)(param_1 + 0x1e) - iVar2;
        }
        else {
          uVar8 = (uint)*(ushort *)(param_1 + 0x2e) - iVar2;
        }
        uVar3 = calculate_ble_buffer_available_space(iVar1 + 0xc);
        if (uVar8 < uVar3) {
          iVar2 = FUN_00081bc0(param_3);
          if ((uint)*(ushort *)(param_1 + 0x1e) < (uint)*(ushort *)(param_1 + 0x2e)) {
            uVar3 = (uint)*(ushort *)(param_1 + 0x1e) - iVar2;
          }
          else {
            uVar3 = (uint)*(ushort *)(param_1 + 0x2e) - iVar2;
          }
        }
        else {
          uVar3 = calculate_ble_buffer_available_space(iVar1 + 0xc);
        }
      }
      uVar8 = (**(code **)(iVar5 + 4))
                        (uVar6,iVar5,(uint)*(ushort *)(iVar1 + 0x10) + *(int *)(iVar1 + 0xc),
                         uVar3 & 0xffff,param_4);
      if ((int)uVar8 < 0) break;
      if ((param_5 != (code *)0x0) && (iVar2 = (*param_5)(iVar1,uVar8,param_6), iVar2 == 0)) {
        return uVar9;
      }
      ble_memory_allocation_utility(iVar1 + 0xc,uVar8);
      uVar4 = FUN_00081bc0(param_3);
      uVar7 = (uint)*(ushort *)(param_1 + 0x2e);
      if ((uint)*(ushort *)(param_1 + 0x1e) <= (uint)*(ushort *)(param_1 + 0x2e)) {
        uVar7 = (uint)*(ushort *)(param_1 + 0x1e);
      }
      uVar9 = uVar9 + uVar8;
      param_4 = param_4 + uVar8 & 0xffff;
      if (uVar7 <= uVar4) {
        return uVar9;
      }
      if (uVar8 != uVar3) {
        return uVar9;
      }
    }
    if (uVar9 != 0) {
      uVar8 = uVar9;
    }
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}


