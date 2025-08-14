/*
 * Function: FUN_00054d18
 * Entry:    00054d18
 * Prototype: undefined FUN_00054d18()
 */


int FUN_00054d18(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  
  iStack_18 = param_1;
  iStack_14 = param_2;
  uStack_10 = param_3;
  if ((param_2 == 0) || (iVar1 = FUN_00080fa4(param_2,&DAT_000f2b3a), iVar1 != 0)) {
    do {
      iVar1 = FUN_00080dda(&iStack_18);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = FUN_00054ce8(&iStack_18);
    } while (-1 < iVar1);
    iVar2 = FUN_00080fc4((int)&DAT_20002000 + param_1 * 7,&iStack_18);
    iVar1 = param_2;
    if (param_2 == 0) goto LAB_00054d38;
  }
  else {
    iVar1 = (int)&DAT_20002000 + param_1 * 7;
    iVar2 = param_2;
  }
  FUN_00080fc4(iVar1,iVar2);
LAB_00054d38:
  iVar1 = FUN_00080fb4(&DAT_200020d4);
  if (iVar1 << 0x1d < 0) {
    FUN_000530b4();
    FUN_00080d3a();
  }
  return 0;
}


