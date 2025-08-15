/*
 * Function: FUN_00064c8c
 * Entry:    00064c8c
 * Prototype: undefined FUN_00064c8c()
 */


void FUN_00064c8c(void)

{
  int iVar1;
  
  iVar1 = json_alloc(JSON_ALLOC_TPL);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = 0x20;
  }
  return;
}


