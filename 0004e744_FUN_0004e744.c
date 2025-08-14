/*
 * Function: FUN_0004e744
 * Entry:    0004e744
 * Prototype: undefined FUN_0004e744()
 */


int FUN_0004e744(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  resource_mutex_acquire(&DAT_20003868,param_2,0xffffffff,0xffffffff,param_4);
  if (DAT_2001d44f == '\0') {
    FUN_0004e484();
    iVar1 = FUN_0004e83c();
    if (iVar1 != 0) goto LAB_0004e76c;
    DAT_2001d44f = '\x01';
  }
  iVar1 = 0;
LAB_0004e76c:
  mutex_unlock(&DAT_20003868);
  return iVar1;
}


