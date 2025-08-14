/*
 * Function: FUN_0007c3d0
 * Entry:    0007c3d0
 * Prototype: undefined FUN_0007c3d0()
 */


int FUN_0007c3d0(uint param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_1c;
  
  uVar4 = 0xfe000003;
  local_1c = param_1;
  iVar1 = FUN_00024d50();
  if (param_1 < 0xff) {
    iVar3 = 2;
  }
  else {
    iVar3 = 4;
  }
  if ((uint)(((iVar1 - DAT_20007a20) + -1) - iVar3) < param_1) {
    iVar1 = -2;
  }
  else {
    iVar3 = FUN_00024dac();
    iVar1 = DAT_20007a20;
    if (iVar3 == 0) {
      if (param_1 < 0xff) {
        iVar3 = 2;
        local_1c._0_2_ = CONCAT11((char)param_1,3);
      }
      else {
        iVar3 = 4;
        local_1c = CONCAT22((ushort)((param_1 & 0xff) << 8) | (ushort)(param_1 >> 8) & 0xff,0xff03);
      }
      iVar2 = FUN_000256dc(DAT_20007a44,DAT_20007a20,&local_1c,iVar3,uVar4);
      if (iVar2 == 0) {
        iVar2 = FUN_000256dc(DAT_20007a44,iVar3 + iVar1,param_2,param_1);
        if (iVar2 == 0) {
          iVar1 = FUN_000256dc(DAT_20007a44,param_1 + iVar3 + iVar1,&stack0xffffffe3,1);
          if (iVar1 != 0) {
            iVar1 = 1;
          }
          return -iVar1;
        }
      }
    }
    iVar1 = -1;
  }
  return iVar1;
}


