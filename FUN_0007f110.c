/*
 * Function: FUN_0007f110
 * Entry:    0007f110
 * Prototype: undefined FUN_0007f110()
 */


int FUN_0007f110(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 extraout_r2;
  int iVar2;
  
  iVar2 = param_4;
  iVar1 = FUN_0007f088(param_1 + 0x204);
  if (param_4 != 0) {
    iVar1 = FUN_000836d8(*(undefined4 *)(*(int *)(param_1 + 0x200) + 8));
    iVar1 = setup_device_buffer_with_flags
                      (param_1 + 0x204,*(int *)(*(int *)(param_1 + 0x200) + 4) + iVar1,extraout_r2,
                       *(int *)(param_1 + 0x200),iVar2);
    if (iVar1 == 0) {
      FUN_0007ef7e(*(undefined4 *)(param_1 + 0x200));
      *(undefined4 *)(param_1 + 0x200) = 0;
    }
  }
  return iVar1;
}


