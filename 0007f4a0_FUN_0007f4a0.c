/*
 * Function: FUN_0007f4a0
 * Entry:    0007f4a0
 * Prototype: undefined FUN_0007f4a0()
 */


int FUN_0007f4a0(int *param_1,ushort param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  ushort local_14;
  undefined2 local_12;
  undefined4 uStack_10;
  
  iVar2 = 0;
  _local_14 = CONCAT22(0x2803,param_2 & 0xff00);
  uStack_10 = param_3;
  iVar1 = FUN_00080d3e(&local_14,*param_1,param_3,0x2803,param_1);
  if (iVar1 == 0) {
    iVar2 = *param_1 + -8;
  }
  return iVar2;
}


