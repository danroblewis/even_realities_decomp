/*
 * Function: FUN_00081050
 * Entry:    00081050
 * Prototype: undefined FUN_00081050()
 */


undefined4 FUN_00081050(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00053cd4(0x202d,1);
  if (iVar1 != 0) {
    FUN_00083758(iVar1 + 0xc,param_1);
    uVar2 = FUN_00053d70(0x202d,iVar1,0,param_4);
    return uVar2;
  }
  return 0xffffff97;
}


