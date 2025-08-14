/*
 * Function: FUN_000843ba
 * Entry:    000843ba
 * Prototype: undefined FUN_000843ba()
 */


undefined4 FUN_000843ba(int param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*param_2 == 0) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 4);
  switch(*(undefined1 *)(iVar2 + 0x20)) {
  case 0:
    uVar1 = (undefined1)param_2[1];
    uVar3 = 0;
    break;
  case 1:
    uVar1 = (undefined1)param_2[1];
    uVar3 = 1;
    break;
  case 2:
    if (param_3 != 0) {
      return 0xffffff7a;
    }
    uVar3 = 5;
    goto LAB_000843f6;
  case 3:
    if (param_3 != 0) {
      return 0xffffff7a;
    }
    uVar3 = 6;
LAB_000843f6:
    uVar3 = FUN_00083dc8(*(undefined4 *)(iVar2 + 0x1c),8,uVar3,param_3);
    return uVar3;
  default:
    return 0xffffffed;
  }
  uVar3 = FUN_000841fc(iVar2,uVar3,uVar1,*(ushort *)((int)param_2 + 6) & 1,param_3,param_2,param_3);
  return uVar3;
}


