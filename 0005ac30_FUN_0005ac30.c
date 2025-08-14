/*
 * Function: FUN_0005ac30
 * Entry:    0005ac30
 * Prototype: undefined FUN_0005ac30(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


void FUN_0005ac30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined2 param_5)

{
  int iVar1;
  int iVar2;
  
  FUN_000735cc(&DAT_200063a0);
  iVar1 = FUN_0008270c(&DAT_20006448);
  if (-1 < iVar1 << 0x1c) {
    FUN_0005aba8();
    FUN_0005a91c();
    FUN_0005a250();
  }
  iVar1 = FUN_00059c04(param_1);
  if (iVar1 != 0) {
    if ((int)((uint)*(byte *)(iVar1 + 8) << 0x1f) < 0) {
      iVar2 = FUN_0008270c(iVar1 + 0xc);
      if (-1 < iVar2 << 0x1f) {
        FUN_000826e0(iVar1 + 0xc,2);
      }
    }
  }
  FUN_00082932(param_3,param_4,param_5,&DAT_20006380);
  return;
}


