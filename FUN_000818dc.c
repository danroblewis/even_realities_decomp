/*
 * Function: FUN_000818dc
 * Entry:    000818dc
 * Prototype: undefined FUN_000818dc()
 */


void FUN_000818dc(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int local_1c;
  undefined4 uStack_18;
  
  iVar3 = param_1;
  local_1c = param_2;
  uStack_18 = param_3;
  do {
    iVar1 = *(int *)(param_1 + -4);
    if (iVar1 == 0) {
      iVar1 = thunk_FUN_000727ac(param_1 + -0x20,param_2,0,0,iVar3);
      if (iVar1 == 0) {
        return;
      }
    }
    else {
      *(undefined4 *)(param_1 + -4) = 0;
    }
    local_1c = iVar1;
    uVar2 = FUN_00081852(param_1 + -0x50,&local_1c,**(undefined2 **)(iVar1 + 0x18));
    param_2 = (int)((ulonglong)uVar2 >> 0x20);
  } while (-1 < (int)uVar2);
  if ((int)uVar2 == -0xb) {
    *(int *)(param_1 + -4) = local_1c;
    FUN_00073418(param_1,param_2,0x8000,0);
    return;
  }
  decrement_reference_count_and_cleanup_memory();
  return;
}


