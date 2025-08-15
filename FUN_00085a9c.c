/*
 * Function: FUN_00085a9c
 * Entry:    00085a9c
 * Prototype: undefined FUN_00085a9c()
 */


void FUN_00085a9c(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int local_20;
  undefined4 uStack_1c;
  
  uVar2 = *(uint *)(param_2 + -8);
  FUN_000859b6(param_1 + 0x58);
  uVar1 = FUN_000857a8(*(undefined4 *)(param_1 + 0xa4),uVar2 & 0xffff);
  if (*(int *)(*(int *)(param_1 + 0xa0) + 0x18) == 0) {
    local_20 = param_2 + -0x10;
    uStack_1c = uVar1;
    FUN_0008567c(*(undefined4 *)(param_1 + 0xa4),&local_20,0,1,local_20);
  }
  FUN_000857e0(*(undefined4 *)(param_1 + 0xa4));
  z_spin_lock_valid(param_1 + 0x58);
  return;
}


