/*
 * Function: FUN_00055204
 * Entry:    00055204
 * Prototype: undefined FUN_00055204()
 */


uint FUN_00055204(char *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_18;
  char *local_14;
  
  if ((param_1 != (char *)0x0) && (iVar1 = FUN_00080fa4(param_1,&DAT_000f2b3a), iVar1 == 0)) {
    if ((*param_1 != '\x01') || ((param_1[6] & 0xc0U) != 0xc0)) {
      local_14 = "Only static random identity address supported";
      local_18 = 2;
      FUN_0008104a(&DAT_00088150,0x1040,&local_18);
      return 0xffffffea;
    }
    iVar1 = FUN_00054ce8(param_1);
    if (-1 < iVar1) {
      return 0xffffff88;
    }
  }
  if (param_2 == 0) {
    if (DAT_20002007 == 1) {
      return 0xfffffff4;
    }
    iVar1 = FUN_00080fb4(&DAT_200020d4);
    if ((iVar1 << 0x1f < 0) ||
       ((param_1 != (char *)0x0 && (iVar1 = FUN_00080fa4(param_1,&DAT_000f2b3a), iVar1 == 0)))) {
      uVar3 = (uint)DAT_20002007;
      DAT_20002007 = DAT_20002007 + 1;
      uVar2 = FUN_00054d18(uVar3,param_1);
      if (uVar2 != 0) {
        DAT_20002007 = DAT_20002007 + -1;
        return uVar2;
      }
      return uVar3;
    }
  }
  return 0xffffffea;
}


