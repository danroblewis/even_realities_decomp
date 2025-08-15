/*
 * Function: FUN_00060f20
 * Entry:    00060f20
 * Prototype: undefined FUN_00060f20()
 */


int FUN_00060f20(int param_1,uint param_2,undefined1 *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_48;
  char *local_44;
  uint uStack_40;
  uint local_3c;
  undefined1 auStack_38 [20];
  
  if ((((param_3 == (undefined1 *)0x0) || (param_4 == 0)) || ((4 < param_4 && ((param_4 & 3) != 0)))
      ) || ((param_2 & 3) != 0)) {
    return -0x16;
  }
  if (((int)param_2 < 0) || (*(uint *)(*(int *)(param_1 + 4) + 0x2c) < param_2 + param_4)) {
    local_44 = "write error: address or size exceeds expected values.Addr: 0x%lx size %zu";
    local_48 = 4;
    uStack_40 = param_2;
    local_3c = param_4;
    FUN_000838d6(&DAT_00088270,0x2040,&local_48);
    return -0x16;
  }
  iVar1 = FUN_00060a10(param_1);
  if (iVar1 != 0) goto LAB_00061054;
  FUN_000838fa(*(undefined4 *)(param_1 + 0x10));
  iVar1 = FUN_00083954(param_1,0);
  FUN_00083906(param_1);
  if (iVar1 == 0) {
    if (param_4 < 4) {
      iVar1 = FUN_00085206(auStack_38,4,param_2);
      FUN_000609f4(*(undefined4 *)(param_1 + 0x10),iVar1);
      if (iVar1 == 0xbad0000) {
        memcpy(auStack_38,param_3,param_4);
        param_4 = 4;
        param_3 = auStack_38;
LAB_00060fd6:
        iVar1 = FUN_00085200(param_3,param_4,param_2);
        FUN_000609f4(*(undefined4 *)(param_1 + 0x10),iVar1);
      }
    }
    else {
      if ((((uint)param_3 & 0xe0000000) == 0x20000000) && (((uint)param_3 & 3) == 0))
      goto LAB_00060fd6;
      do {
        uVar3 = param_4;
        if (0xf < param_4) {
          uVar3 = 0x10;
        }
        memcpy(auStack_38,param_3,uVar3);
        iVar1 = FUN_00085200(auStack_38,uVar3,param_2);
        FUN_000609f4(*(undefined4 *)(param_1 + 0x10),iVar1);
        if (iVar1 != 0xbad0000) break;
        param_4 = param_4 - uVar3;
        param_3 = param_3 + uVar3;
        param_2 = param_2 + uVar3;
      } while (param_4 != 0);
    }
  }
  FUN_0008392e(param_1);
  iVar2 = FUN_00083954(param_1,1);
  z_spin_lock_valid(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    iVar1 = iVar2;
  }
  iVar1 = FUN_00060990(iVar1);
LAB_00061054:
  FUN_00060a5c(param_1);
  return iVar1;
}


