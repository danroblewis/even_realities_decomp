/*
 * Function: FUN_0007ace0
 * Entry:    0007ace0
 * Prototype: undefined FUN_0007ace0()
 */


undefined4 FUN_0007ace0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [132];
  
  uVar2 = *(uint *)(param_1 + 0x60);
  if (uVar2 != 0) {
    if (0x7f < uVar2) {
      uVar2 = 0x80;
    }
    thunk_FUN_00086c44(auStack_98,param_1 + 100,uVar2);
    uVar2 = *(uint *)(param_1 + 0x60);
  }
  *(undefined4 *)(param_1 + 4) = 1;
  iVar1 = FUN_0007b130(auStack_98,uVar2,auStack_a0,0,0,0);
  if (((iVar1 == 0) && (iVar1 = FUN_0007b1e4(param_1,auStack_a0,uVar2), iVar1 == 0)) &&
     (iVar1 = FUN_0007b3f4(param_1), iVar1 == 0)) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    return 0;
  }
  return 1;
}


