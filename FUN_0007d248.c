/*
 * Function: FUN_0007d248
 * Entry:    0007d248
 * Prototype: undefined FUN_0007d248()
 */


undefined4 FUN_0007d248(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = get_work_mode();
  if (*(byte *)(iVar1 + 0xfc0) < 0x15) {
    uVar2 = 0;
  }
  else {
    iVar1 = get_work_mode();
    if (*(byte *)(iVar1 + 0xfc1) < 0x15) {
      iVar1 = get_work_mode();
      uVar2 = 0xffffffff;
      if (2 < *(byte *)(iVar1 + 0xfc1)) {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}


