/*
 * Function: FUN_00025474
 * Entry:    00025474
 * Prototype: undefined FUN_00025474()
 */


undefined4 FUN_00025474(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00025458();
  if (iVar1 == 0) {
    iVar1 = thunk_FUN_00074f68();
    if (iVar1 - DAT_20007a10 < 0) {
      thunk_FUN_00074f68();
    }
    uVar2 = 0;
  }
  else {
    DAT_20007a10 = thunk_FUN_00074f68();
    uVar2 = 1;
  }
  return uVar2;
}


