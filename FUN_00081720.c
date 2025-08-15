/*
 * Function: FUN_00081720
 * Entry:    00081720
 * Prototype: undefined FUN_00081720()
 */


void FUN_00081720(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_000816a2(param_1 + 0x2c,param_1);
  iVar1 = (int)((ulonglong)uVar2 >> 0x20);
  if (((int)uVar2 != 0) && ((*(int *)(iVar1 + 0x30) != 0 || (*(int *)(iVar1 + 0x4c) != 0)))) {
    FUN_0007350c(iVar1 + 0x50,iVar1,0,0);
    return;
  }
  return;
}


