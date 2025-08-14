/*
 * Function: FUN_00030b3c
 * Entry:    00030b3c
 * Prototype: undefined FUN_00030b3c()
 */


int FUN_00030b3c(int *param_1)

{
  int iVar1;
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [8];
  
  if ((((param_1 != (int *)0x0) && (*param_1 != 0)) && (param_1[1] != 0)) &&
     ((param_1[2] != 0 && (param_1[3] != 0)))) {
    DAT_20007bc8 = 0;
    DAT_20007bc4 = 0;
    DAT_20019dad = 0;
    DAT_20003030 = 1;
    DAT_20007bc0 = param_1;
    iVar1 = FUN_000304f0();
    if ((iVar1 != -1) &&
       ((iVar1 = FUN_000301bc(), iVar1 == 0 && (iVar1 = FUN_0007cf70(), iVar1 != -1)))) {
      if (iVar1 == -2) {
        FUN_00030178(0xff20,0x3c00f091);
        FUN_000302f8(0x1c00,auStack_1c);
        FUN_000302f8(0x4744,auStack_14);
        FUN_000302f8(0x4444,auStack_18);
        FUN_00030178(0xff20,0x3c00f011);
      }
      iVar1 = FUN_00030754(iVar1 == -2);
      if ((iVar1 == 0) ||
         ((((iVar1 = FUN_00030710(), iVar1 == 0 && (iVar1 = FUN_000301bc(), iVar1 == 0)) &&
           (iVar1 = FUN_000304f0(), iVar1 == 0)) && (iVar1 = FUN_0007cf70(), iVar1 == 0)))) {
        iVar1 = FUN_00030224();
        if (iVar1 != 0) {
          iVar1 = 1;
        }
        return -iVar1;
      }
    }
  }
  return -1;
}


