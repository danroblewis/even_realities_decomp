/*
 * Function: FUN_00083370
 * Entry:    00083370
 * Prototype: undefined FUN_00083370(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined2 param_5, undefined4 param_6)
 */


undefined4
FUN_00083370(int param_1,undefined4 param_2,int param_3,int param_4,short param_5,int param_6)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int local_28;
  int iStack_24;
  int iStack_20;
  
  iVar5 = param_6;
  local_28 = param_3;
  iStack_24 = param_4;
  iStack_20 = param_3;
  iVar2 = FUN_0008307a();
  sVar1 = param_5;
  if (iVar2 == 0) {
LAB_00083492:
    uVar4 = 0;
  }
  else {
    iVar8 = iVar2 + 4;
    if ((param_5 == 0) && (local_28 == 0 && iStack_24 == 0)) {
      iVar3 = FUN_00082ff6(iVar8,3);
      if ((iVar3 == 0) || (iVar3 = FUN_00082ff6(iVar8,1), iVar3 == 0)) {
        if (*(int *)(param_1 + 0xc0) == 0) goto LAB_000833f0;
LAB_00083462:
        iVar3 = *(int *)(param_1 + 0xc0);
        if ((iVar3 == 0) || (-1 < (int)((uint)*(ushort *)(iVar3 + 0xe) << 0x1a))) goto LAB_00083420;
        iVar6 = iVar3 + 0x1a;
        uVar7 = (uint)*(byte *)(iVar3 + 0xc);
      }
      else {
        iVar6 = iVar2 + 0x47;
        uVar7 = (uint)*(byte *)(iVar2 + 0x14);
        if ((uint)*(byte *)(iVar2 + 0xd) <= (uint)*(byte *)(iVar2 + 0x14)) {
          uVar7 = (uint)*(byte *)(iVar2 + 0xd);
        }
      }
    }
    else {
      if (*(int *)(param_1 + 0xc0) == 0) {
LAB_000833f0:
        iVar3 = find_ble_attribute_by_properties(0x20,*(undefined1 *)(param_1 + 8),param_1 + 0x90);
        *(int *)(param_1 + 0xc0) = iVar3;
        if (iVar3 == 0) {
          uVar4 = find_ble_attribute_by_properties(1,*(undefined1 *)(param_1 + 8),param_1 + 0x90);
          *(undefined4 *)(param_1 + 0xc0) = uVar4;
        }
        if ((sVar1 == 0) && (local_28 == 0 && iStack_24 == 0)) goto LAB_00083462;
      }
LAB_00083420:
      iVar3 = *(int *)(param_1 + 0xc0);
      if ((((iVar3 == 0) || (-1 < (int)((uint)*(ushort *)(iVar3 + 0xe) << 0x1f))) ||
          (iVar6 = memcmp_byte_arrays(iVar3 + 0x40,&local_28,8), iVar6 != 0)) ||
         (iVar6 = memcmp_byte_arrays(iVar3 + 0x48,&param_5,2), iVar6 != 0)) {
        iVar5 = FUN_00082ff6(iVar8,0xf);
        if (iVar5 != 0) {
          bt_connection_disconnect_with_parameter_validation(param_1,6,2);
        }
        FUN_00083204(iVar2);
        goto LAB_00083492;
      }
      iVar6 = iVar3 + 0x4a;
      uVar7 = (uint)*(byte *)(iVar3 + 0xc);
    }
    memcpy(iVar5,iVar6,uVar7);
    if (uVar7 < 0x10) {
      fill_memory_buffer(iVar5 + uVar7,0,0x10 - uVar7);
    }
    FUN_00083090(iVar8,1);
    uVar4 = 1;
  }
  return uVar4;
}


