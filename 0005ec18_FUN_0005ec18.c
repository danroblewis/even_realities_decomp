/*
 * Function: FUN_0005ec18
 * Entry:    0005ec18
 * Prototype: undefined FUN_0005ec18()
 */


int FUN_0005ec18(undefined1 *param_1)

{
  int iVar1;
  undefined4 local_20;
  char *local_1c;
  int iStack_18;
  
  if (param_1 == (undefined1 *)0x0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","keys != ((void *)0)",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/keys.c",0x146);
                    /* WARNING: Subroutine does not return */
    FUN_0007e2ec("WEST_TOPDIR/zephyr/subsys/bluetooth/host/keys.c",0x146);
  }
  iVar1 = FUN_00053168(*param_1,param_1 + 1,param_1 + 0xc,0x50);
  if (iVar1 != 0) {
    local_1c = "Failed to save keys (err %d)";
    local_20 = 3;
    iStack_18 = iVar1;
    FUN_0004d944(&DAT_00088158,0x1840,&local_20,0);
  }
  return iVar1;
}


