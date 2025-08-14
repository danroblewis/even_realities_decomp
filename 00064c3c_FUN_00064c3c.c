/*
 * Function: FUN_00064c3c
 * Entry:    00064c3c
 * Prototype: undefined FUN_00064c3c()
 */


void FUN_00064c3c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = json_alloc(JSON_ALLOC_TPL);
  if (iVar1 != 0) {
    if (param_1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 2;
    }
    *(undefined4 *)(iVar1 + 0xc) = uVar2;
  }
  return;
}


