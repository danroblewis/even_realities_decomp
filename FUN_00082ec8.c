/*
 * Function: FUN_00082ec8
 * Entry:    00082ec8
 * Prototype: undefined FUN_00082ec8()
 */


undefined4 FUN_00082ec8(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = find_ble_attribute_by_handle();
  if ((iVar1 != 0) && ((int)((uint)*(byte *)(iVar1 + 8) << 0x1f) < 0)) {
    iVar4 = iVar1 + 0xc;
    uVar2 = get_ble_handle_value(iVar4);
    if ((uVar2 & 1) == 0) {
      if (param_2 == 0) {
        return 0;
      }
      uVar2 = FUN_000826f6(iVar4,0xfffffffd);
      if ((uVar2 & 2) == 0) {
        iVar3 = FUN_0008256e(param_1);
        if (iVar3 == 0) {
          return 0;
        }
        iVar3 = FUN_00082594(param_1);
        if (iVar3 == 0) {
          return 0;
        }
        FUN_000826f6(iVar4,0xfffffffd);
      }
      FUN_00082572(param_1);
      FUN_00082bb8(iVar1,1);
    }
  }
  return 1;
}


