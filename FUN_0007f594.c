/*
 * Function: FUN_0007f594
 * Entry:    0007f594
 * Prototype: undefined FUN_0007f594()
 */


undefined4 FUN_0007f594(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0007f3f0(param_1 + 0x138,0xfffffffd,param_3,param_4,param_4);
  if (iVar1 << 0x1e < 0) {
    FUN_0007f3c2(param_1);
    FUN_0007f3f0(param_1 + 0x138,0xfffffffe);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffff88;
  }
  return uVar2;
}


