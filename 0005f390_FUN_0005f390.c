/*
 * Function: FUN_0005f390
 * Entry:    0005f390
 * Prototype: undefined FUN_0005f390()
 */


int FUN_0005f390(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","frag","WEST_TOPDIR/zephyr/subsys/net/buf.c",0x24d)
    ;
                    /* WARNING: Subroutine does not return */
    FUN_0007e2ec("WEST_TOPDIR/zephyr/subsys/net/buf.c",0x24d);
  }
  if (param_1 == 0) {
    iVar1 = FUN_0005f2d4(param_2,param_2,param_3,param_4);
    return iVar1;
  }
  uVar2 = FUN_0005f304();
  FUN_0005f338(uVar2,param_2);
  return param_1;
}


