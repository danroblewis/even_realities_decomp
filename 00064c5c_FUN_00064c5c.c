/*
 * Function: FUN_00064c5c
 * Entry:    00064c5c
 * Prototype: undefined FUN_00064c5c()
 */


int FUN_00064c5c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = json_alloc(JSON_ALLOC_TPL);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = 0x10;
    iVar2 = FUN_00064640(param_1);
    *(int *)(iVar1 + 0x10) = iVar2;
    if (iVar2 != 0) {
      return iVar1;
    }
    FUN_00064b1c(iVar1);
  }
  return 0;
}


