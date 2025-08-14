/*
 * Function: FUN_00052038
 * Entry:    00052038
 * Prototype: undefined FUN_00052038()
 */


int FUN_00052038(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte local_45;
  short local_44;
  ushort local_42;
  int local_40 [2];
  ushort local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  iVar1 = FUN_00051a5c(param_1,&local_45);
  if (iVar1 != 0) {
    return 2;
  }
  iVar1 = FUN_000517d8(param_1,0,local_40,0x20);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (param_2 == (undefined4 *)0x0) {
    if (local_40[0] != -0x690c47c3) {
LAB_000520f6:
      if (local_40[0] == (uint)local_45 * 0x1010101) {
        return 3;
      }
      return 0x17;
    }
  }
  else {
    fill_memory_buffer(param_2,(uint)local_45,8);
    if (local_40[0] != -0x690c47c3) goto LAB_000520f6;
    *param_2 = local_2c;
    param_2[1] = uStack_28;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_30;
  }
  iVar3 = (uint)local_38 + local_34;
  iVar1 = FUN_000517d8(param_1,iVar3,&local_44);
  if ((iVar1 == 0) && (local_44 == 0x6908)) {
    iVar3 = iVar3 + (uint)local_42;
  }
  iVar1 = FUN_000517d8(param_1,iVar3,&local_44);
  if ((iVar1 == 0) && (local_44 == 0x6907)) {
    uVar5 = (uint)local_42 + iVar3 + 4U;
    uVar7 = 0;
    uVar4 = iVar3 + 4U;
    while (uVar6 = uVar4 + 4, uVar6 <= uVar5) {
      iVar1 = FUN_000517d8(param_1,uVar4,&local_44);
      if (iVar1 != 0) {
        return iVar1;
      }
      uVar2 = (uint)local_42;
      if (local_44 == 0xff) {
        if (uVar2 == 0xffff) {
          return 5;
        }
LAB_00052142:
        uVar4 = uVar2 + 4 + uVar4;
      }
      else {
        if ((local_44 != 0x10) || (uVar2 != 0x20)) goto LAB_00052142;
        if (uVar7 != 0) {
          return 6;
        }
        if (param_3 != 0) {
          if (uVar5 < uVar4 + 0x24) {
            return 7;
          }
          iVar1 = FUN_000517d8(param_1,uVar6,param_3);
          if (iVar1 != 0) {
            return iVar1;
          }
        }
        uVar7 = 1;
        uVar4 = uVar6;
      }
    }
    iVar1 = (uVar7 ^ 1) << 3;
  }
  else {
    iVar1 = 4;
  }
  return iVar1;
}


