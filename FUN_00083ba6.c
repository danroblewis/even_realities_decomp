/*
 * Function: FUN_00083ba6
 * Entry:    00083ba6
 * Prototype: undefined FUN_00083ba6()
 */


int FUN_00083ba6(int param_1,uint *param_2)

{
  int iVar1;
  undefined4 uStack_c;
  
  uStack_c = param_2;
  iVar1 = FUN_00083dba(*(undefined4 *)(*(int *)(param_1 + 4) + 4),6,0x1e,(int)&uStack_c + 3,param_1)
  ;
  if (-1 < iVar1) {
    iVar1 = 0;
    *param_2 = (uint)uStack_c >> 0x18;
  }
  return iVar1;
}


