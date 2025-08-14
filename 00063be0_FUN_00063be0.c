/*
 * Function: FUN_00063be0
 * Entry:    00063be0
 * Prototype: undefined FUN_00063be0()
 */


void FUN_00063be0(void)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = (uint)DAT_2001d563;
  if ((uVar1 == 0) && (uVar2 = FUN_00063ba8(0), (int)uVar2 != 0)) {
    DAT_2000b310 = uVar1;
    FUN_0007350c(&DAT_200066f0,(int)((ulonglong)uVar2 >> 0x20),0x8000,0);
    return;
  }
  return;
}


