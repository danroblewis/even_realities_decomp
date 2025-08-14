/*
 * Function: FUN_000812d2
 * Entry:    000812d2
 * Prototype: undefined FUN_000812d2()
 */


undefined4 FUN_000812d2(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_1c [12];
  
  iVar1 = FUN_00053cd4(0x200a,1);
  if (iVar1 == 0) {
    uVar2 = 0xffffff97;
  }
  else {
    FUN_00083758(iVar1 + 0xc,param_2 != 0);
    FUN_00053cb0(iVar1,auStack_1c,param_1 + 0x10,7,param_2);
    uVar2 = FUN_00053d70(0x200a,iVar1,0);
  }
  return uVar2;
}


