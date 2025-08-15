/*
 * Function: FUN_00064640
 * Entry:    00064640
 * Prototype: undefined FUN_00064640()
 */


int FUN_00064640(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar1 = calculate_string_length();
    iVar2 = (*JSON_ALLOC_TPL)(iVar1 + 1);
    if (iVar2 != 0) {
      memcpy(iVar2,param_1,iVar1 + 1);
      return iVar2;
    }
  }
  return 0;
}


