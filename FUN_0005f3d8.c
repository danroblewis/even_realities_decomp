/*
 * Function: FUN_0005f3d8
 * Entry:    0005f3d8
 * Prototype: undefined FUN_0005f3d8()
 */


undefined4 FUN_0005f3d8(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","frag","WEST_TOPDIR/zephyr/subsys/net/buf.c",0x262)
    ;
    uVar1 = 0x262;
  }
  else {
    if (param_1 == 0) {
LAB_0005f42e:
      uVar1 = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(param_2 + 4) = 0;
      FUN_0005f24c();
      return uVar1;
    }
    if (*(int *)(param_1 + 4) == 0) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","parent->frags",
                   "WEST_TOPDIR/zephyr/subsys/net/buf.c",0x265);
      uVar1 = 0x265;
    }
    else {
      if (*(int *)(param_1 + 4) == param_2) {
        *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
        goto LAB_0005f42e;
      }
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","parent->frags == frag",
                   "WEST_TOPDIR/zephyr/subsys/net/buf.c",0x266);
      uVar1 = 0x266;
    }
  }
                    /* WARNING: Subroutine does not return */
  assertion_failure("WEST_TOPDIR/zephyr/subsys/net/buf.c",uVar1);
}


