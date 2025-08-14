/*
 * Function: FUN_00080c46
 * Entry:    00080c46
 * Prototype: undefined FUN_00080c46()
 */


void FUN_00080c46(undefined4 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_000527dc();
  if (iVar1 == 0) {
    return;
  }
  uVar2 = FUN_0008157a(param_1);
  if (((int)uVar2 != 0) && ((int)uVar2 != -0x78)) {
    FUN_0007350c(iVar1 + 0x38,(int)((ulonglong)uVar2 >> 0x20),0x8000,0);
    return;
  }
  FUN_00073518(iVar1 + 0x38);
  return;
}


