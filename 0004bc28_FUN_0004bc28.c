/*
 * Function: FUN_0004bc28
 * Entry:    0004bc28
 * Prototype: undefined FUN_0004bc28()
 */


void FUN_0004bc28(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  fill_memory_buffer(param_1,0,0x20,param_4,param_4);
  *(undefined4 *)(param_1 + 0x1c) = param_2[3];
  *(undefined4 *)(param_1 + 0x18) = param_2[2];
  *(undefined4 *)(param_1 + 0x20) = *param_2;
  uVar3 = param_2[1];
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(uint *)(param_1 + 0x24) = uVar3;
  uVar2 = param_2[4];
  if ((uVar3 != 0) && ((uVar3 - 1 & uVar3) == 0)) {
    uVar2 = uVar2 | 1;
  }
  *(uint *)(param_1 + 0x10) = uVar2;
  iVar1 = FUN_00086534(param_1 + 0x2c,0,1);
  if (iVar1 != 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","err == 0","WEST_TOPDIR/zephyr/lib/os/mpsc_pbuf.c",
                 0x2e);
                    /* WARNING: Subroutine does not return */
    FUN_0007e2ec("WEST_TOPDIR/zephyr/lib/os/mpsc_pbuf.c",0x2e);
  }
  return;
}


