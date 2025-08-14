/*
 * Function: FUN_0005f338
 * Entry:    0005f338
 * Prototype: undefined FUN_0005f338()
 */


void FUN_0005f338(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","parent","WEST_TOPDIR/zephyr/subsys/net/buf.c",
                 0x241);
    uVar2 = 0x241;
  }
  else {
    if (param_2 != 0) {
      iVar3 = *(int *)(param_1 + 4);
      if (iVar3 != 0) {
        iVar1 = FUN_0005f304(param_2);
        *(int *)(iVar1 + 4) = iVar3;
      }
      *(int *)(param_1 + 4) = param_2;
      return;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","frag","WEST_TOPDIR/zephyr/subsys/net/buf.c",0x242)
    ;
    uVar2 = 0x242;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0007e2ec("WEST_TOPDIR/zephyr/subsys/net/buf.c",uVar2);
}


