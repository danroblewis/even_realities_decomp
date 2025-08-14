/*
 * Function: FUN_0007f344
 * Entry:    0007f344
 * Prototype: undefined FUN_0007f344()
 */


int FUN_0007f344(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_14;
  
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x3c);
  if (*(int *)(param_1 + 0x3c) == 0) {
    iVar1 = -0x13;
  }
  else {
    iVar2 = param_1;
    uStack_14 = param_2;
    iVar1 = FUN_0004c548(param_1 + 8);
    if (iVar1 == 0) {
      iVar2 = FUN_0007e9dc(param_1 + 8,0x8000,(int)&uStack_14 + 2,2,iVar2);
      if (iVar2 < 0) {
        uStack_14._2_2_ = 0x8000;
      }
      else {
      }
      *(undefined2 *)(param_1 + 0x38) = uStack_14._2_2_;
    }
  }
  return iVar1;
}


