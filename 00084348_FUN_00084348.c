/*
 * Function: FUN_00084348
 * Entry:    00084348
 * Prototype: undefined FUN_00084348()
 */


undefined4 FUN_00084348(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  switch(*(undefined1 *)(iVar1 + 0x20)) {
  case 0:
    uVar2 = 0;
    break;
  case 1:
    uVar2 = 1;
    break;
  case 2:
    uVar2 = 0;
    goto LAB_00084374;
  case 3:
    uVar2 = 1;
LAB_00084374:
    uVar2 = FUN_000842cc(iVar1,uVar2,param_2,param_3);
    return uVar2;
  default:
    return 0xffffffed;
  }
  uVar2 = FUN_00084300(iVar1,uVar2,param_2);
  return uVar2;
}


