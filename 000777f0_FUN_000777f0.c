/*
 * Function: FUN_000777f0
 * Entry:    000777f0
 * Prototype: undefined FUN_000777f0()
 */


void FUN_000777f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = DAT_20002d20;
  uVar2 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  if ((DAT_20002d20 != 0) && (*(int *)(DAT_20002d20 + 0x18) == 0)) {
    FUN_00076bcc(DAT_20002d20);
  }
  FUN_00076ed4(iVar1,*(undefined4 *)(iVar1 + 8),param_1,&uStack_c,uVar2,&uStack_c);
  return;
}


