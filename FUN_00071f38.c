/*
 * Function: FUN_00071f38
 * Entry:    00071f38
 * Prototype: undefined FUN_00071f38()
 */


void FUN_00071f38(void)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined8 uVar7;
  
  piVar5 = &DAT_00087fc8;
  do {
    if (&DAT_00087fc8 < piVar5) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","thread_data <= __static_thread_data_list_end",
                   "WEST_TOPDIR/zephyr/kernel/thread.c",0x2f3);
      DEBUG_PRINT2("\tunexpected list end location\n");
      uVar2 = 0x2f3;
LAB_00071f60:
                    /* WARNING: Subroutine does not return */
      assertion_failure("WEST_TOPDIR/zephyr/kernel/thread.c",uVar2);
    }
    if (&UNK_00087fc7 < piVar5) {
      FUN_00073b1c();
      for (piVar5 = &DAT_00087fc8; piVar5 < (int *)((int)&DAT_00087fc8 + 1); piVar5 = piVar5 + 0xb)
      {
        if (&UNK_00087fc7 < piVar5) {
          FUN_00073bf4();
          return;
        }
        uVar4 = piVar5[9];
        if (uVar4 != 0xffffffff) {
          uVar4 = uVar4 & ~((int)uVar4 >> 0x1f);
          lVar1 = (longlong)(int)uVar4 * 0x8000 + 999;
          iVar3 = (int)((ulonglong)lVar1 >> 0x20);
          iVar6 = *piVar5;
          if (iVar3 == 0 && (uVar4 & 0x1ffff) == 0) {
            FUN_00073a78(iVar6);
          }
          else {
            uVar7 = handle_unsigned_division((int)lVar1,iVar3,1000,0);
            FUN_00074bf4(iVar6 + 0x18,&LAB_00086660_1,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
          }
        }
      }
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","thread_data <= __static_thread_data_list_end",
                   "WEST_TOPDIR/zephyr/kernel/thread.c",0x312);
      DEBUG_PRINT2("\tunexpected list end location\n");
      uVar2 = 0x312;
      goto LAB_00071f60;
    }
    FUN_00071df8(*piVar5,piVar5[1],piVar5[2],piVar5[3],piVar5[4],piVar5[5],piVar5[6],piVar5[7],
                 piVar5[8],piVar5[10]);
    *(int **)(*piVar5 + 0x54) = piVar5;
    piVar5 = piVar5 + 0xb;
  } while( true );
}


