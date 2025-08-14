/*
 * Function: FUN_00071df8
 * Entry:    00071df8
 * Prototype: undefined FUN_00071df8(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)
 */


int FUN_00071df8(int param_1,int param_2,int param_3,undefined *param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,int param_8,undefined1 param_9)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_8 == 0xf) {
    if (param_4 != &UNK_00072089) {
LAB_00071e6c:
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                   "((((prio)) == 15 && z_is_idle_thread_entry((entry))) || (((15 - 1) >= ((-16))) && ((prio)) >= ((-16)) && ((prio)) <= (15 - 1)))"
                   ,"WEST_TOPDIR/zephyr/kernel/thread.c",0x21a,param_1,param_2,param_3,param_4);
      DEBUG_PRINT2("\tinvalid priority (%d); allowed range: %d to %d\n",param_8,0xe,0xfffffff0);
                    /* WARNING: Subroutine does not return */
      FUN_0007e2ec("WEST_TOPDIR/zephyr/kernel/thread.c",0x21a);
    }
  }
  else if (0x1e < param_8 + 0x10U) goto LAB_00071e6c;
  *(int *)(param_1 + 0x58) = param_1 + 0x58;
  *(int *)(param_1 + 0x5c) = param_1 + 0x58;
  *(undefined1 *)(param_1 + 0xc) = param_9;
  uVar1 = param_3 + 7U & 0xfffffff8;
  *(int *)(param_1 + 0x7c) = param_2;
  *(uint *)(param_1 + 0x80) = uVar1;
  *(char *)(param_1 + 0xe) = (char)param_8;
  iVar3 = param_2 + uVar1;
  *(undefined1 *)(param_1 + 0xd) = 4;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  FUN_000502c4(param_1,param_2,iVar3,param_4,param_5,param_6,param_7);
  *(undefined4 *)(param_1 + 0x54) = 0;
  iVar2 = DAT_2000b450;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  if (iVar2 != 0) {
    iVar2 = *(int *)(iVar2 + 0x88);
  }
  *(int *)(param_1 + 0x88) = iVar2;
  return iVar3;
}


