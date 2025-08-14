/*
 * Function: FUN_00064a88
 * Entry:    00064a88
 * Prototype: undefined FUN_00064a88()
 */


int FUN_00064a88(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int local_34;
  uint local_30;
  int local_2c;
  undefined4 local_20;
  code *pcStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  
  fill_memory_buffer(&local_34,0,0x24);
  local_34 = (*JSON_ALLOC_TPL)(0x100);
  local_30 = 0x100;
  pcStack_14 = DAT_20002bb4;
  pcStack_18 = DAT_20002bb0;
  pcStack_1c = JSON_ALLOC_TPL;
  local_20 = param_2;
  if ((local_34 != 0) && (iVar1 = FUN_000646c0(param_1,&local_34), iVar1 != 0)) {
    FUN_00084f16(&local_34);
    if (DAT_20002bb4 == (code *)0x0) {
      iVar1 = (*JSON_ALLOC_TPL)(local_2c + 1);
      if (iVar1 != 0) {
        uVar2 = local_2c + 1U;
        if (local_30 <= local_2c + 1U) {
          uVar2 = local_30;
        }
        memcpy(iVar1,local_34,uVar2);
        *(undefined1 *)(iVar1 + local_2c) = 0;
        (*DAT_20002bb0)(local_34);
        return iVar1;
      }
    }
    else {
      iVar1 = (*DAT_20002bb4)(local_34,local_2c + 1);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
  }
  if (local_34 != 0) {
    (*DAT_20002bb0)();
  }
  return 0;
}


