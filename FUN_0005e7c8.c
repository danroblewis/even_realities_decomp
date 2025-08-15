/*
 * Function: FUN_0005e7c8
 * Entry:    0005e7c8
 * Prototype: undefined FUN_0005e7c8()
 */


undefined1 * FUN_0005e7c8(ushort param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_3 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","addr != ((void *)0)",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/keys.c",0xc0);
                    /* WARNING: Subroutine does not return */
    assertion_failure("WEST_TOPDIR/zephyr/subsys/bluetooth/host/keys.c",0xc0);
  }
  if ((((DAT_2000af5a & param_1) == 0) || (DAT_2000af4c != param_2)) ||
     (iVar1 = memcmp_byte_arrays(&DAT_2000af4d,param_3,7,(uint)DAT_2000af4c,param_4), iVar1 != 0)) {
    if ((DAT_2000afb6 & param_1) == 0) {
      return (undefined1 *)0x0;
    }
    if ((DAT_2000afa8 != param_2) ||
       (iVar1 = memcmp_byte_arrays(&DAT_2000afa9,param_3,7,(uint)DAT_2000afa8,param_4), iVar1 != 0))
    {
      return (undefined1 *)0x0;
    }
    iVar1 = 0x5c;
  }
  return &DAT_2000af4c + iVar1;
}


