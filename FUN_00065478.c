/*
 * Function: FUN_00065478
 * Entry:    00065478
 * Prototype: undefined FUN_00065478()
 */


ushort FUN_00065478(void)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  
  iVar3 = FUN_00065434();
  uVar1 = *(ushort *)((int)&DAT_20002bc0 + (iVar3 + 8) * 2);
  uVar2 = uVar1 & 0x1c;
  if ((uVar1 & 0x1c) != 0) {
    uVar2 = 1;
  }
  return uVar2;
}


