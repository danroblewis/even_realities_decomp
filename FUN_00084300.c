/*
 * Function: FUN_00084300
 * Entry:    00084300
 * Prototype: undefined FUN_00084300()
 */


void FUN_00084300(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined1 local_12 [6];
  
  iVar1 = FUN_00062070(param_3,param_4,local_12);
  if ((iVar1 != -0x16) &&
     (iVar1 = FUN_00083dc8(*(undefined4 *)(param_1 + 0x1c),4,(param_2 + 4) * 2 & 0xfe,local_12[0]),
     -1 < iVar1)) {
    uVar2 = 1 << (param_2 & 0xff) & 0xff;
    FUN_00083e0e(*(undefined4 *)(param_1 + 0x1c),4,0xf,uVar2,uVar2);
  }
  return;
}


