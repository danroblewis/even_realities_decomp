/*
 * Function: FUN_00059a90
 * Entry:    00059a90
 * Prototype: undefined FUN_00059a90()
 */


undefined4 FUN_00059a90(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","conn",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/att.c",0xf38);
    uVar2 = 0xf38;
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      iVar1 = FUN_0005858c();
      if (iVar1 == 0) {
        uVar2 = 0xffffff80;
      }
      else {
        *param_2 = 0;
        if (*(undefined4 **)(iVar1 + 8) == (undefined4 *)0x0) {
          *(undefined4 **)(iVar1 + 4) = param_2;
          *(undefined4 **)(iVar1 + 8) = param_2;
        }
        else {
          **(undefined4 **)(iVar1 + 8) = param_2;
          *(undefined4 **)(iVar1 + 8) = param_2;
        }
        FUN_000820ae();
        uVar2 = 0;
      }
      return uVar2;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","req",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/att.c",0xf39);
    uVar2 = 0xf39;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0007e2ec("WEST_TOPDIR/zephyr/subsys/bluetooth/host/att.c",uVar2);
}


