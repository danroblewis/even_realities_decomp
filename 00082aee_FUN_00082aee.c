/*
 * Function: FUN_00082aee
 * Entry:    00082aee
 * Prototype: undefined FUN_00082aee(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined1 param_5, undefined4 param_6)
 */


int FUN_00082aee(undefined4 param_1,undefined4 param_2,undefined4 param_3,code *param_4,
                undefined1 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_000596c0(0xf0000,0);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 4) = param_2;
    *(undefined1 *)(iVar1 + 0x11) = param_5;
    *(undefined4 *)(iVar1 + 0x14) = param_6;
    *(code **)(iVar1 + 0xc) = param_4;
    *(undefined4 *)(iVar1 + 0x18) = param_3;
    iVar2 = FUN_00058eb0(param_1,param_5,param_6);
    if (iVar2 != 0) {
      FUN_000825ac(iVar2,0,0,1);
      *(int *)(iVar1 + 8) = iVar2;
      iVar2 = (*param_4)(iVar2,param_6,param_3);
      if ((iVar2 == 0) && (iVar2 = FUN_00059a90(param_1,iVar1), iVar2 == 0)) {
        return 0;
      }
      FUN_00059708(iVar1);
      return iVar2;
    }
    FUN_00059708(iVar1);
  }
  return -0xc;
}


