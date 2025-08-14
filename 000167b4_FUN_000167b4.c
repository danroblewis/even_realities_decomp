/*
 * Function: FUN_000167b4
 * Entry:    000167b4
 * Prototype: undefined FUN_000167b4()
 */


undefined4 FUN_000167b4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0008638c(&DAT_00087bf0);
  if (iVar1 == 0) {
    DEBUG_PRINT(" [%s] device not ready.\n","mx25r6435f@0");
    uVar2 = 0xffffffff;
  }
  else {
    FUN_00060dd0(&DAT_00087bf0,0,0x130000);
    DEBUG_PRINT("erase_dfu_flash done.\n");
    uVar2 = 0;
  }
  return uVar2;
}


