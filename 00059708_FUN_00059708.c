/*
 * Function: FUN_00059708
 * Entry:    00059708
 * Prototype: undefined FUN_00059708()
 */


void FUN_00059708(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_0005833c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x18));
    FUN_0005f24c(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  FUN_00071cf4(&DAT_20003798,param_1);
  return;
}


