/*
 * Function: FUN_00056f08
 * Entry:    00056f08
 * Prototype: undefined FUN_00056f08()
 */


int FUN_00056f08(uint param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00056654(&DAT_20006138);
  if (iVar1 != 0) {
    if (((*(char *)(iVar1 + 2) == '\x01') &&
        (((param_2 == 0 || (iVar2 = FUN_000814e6(iVar1,param_1,param_2,1,param_4), iVar2 != 0)) &&
         (*(byte *)(iVar1 + 0xd) == param_3)))) && (*(byte *)(iVar1 + 8) == param_1)) {
      return iVar1;
    }
    FUN_000566a4(iVar1);
  }
  return 0;
}


