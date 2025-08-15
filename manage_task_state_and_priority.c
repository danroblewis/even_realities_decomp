/*
 * Function: manage_task_state_and_priority
 * Entry:    0004b4fc
 * Prototype: void manage_task_state_and_priority(int * task_context, int operation_type, int priority, undefined4 additional_param)
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void manage_task_state_and_priority(int *task_context, int operation_type, int
   priority, undefined4 additional_param) */

void manage_task_state_and_priority
               (int *task_context,int operation_type,int priority,undefined4 additional_param)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  ushort uVar7;
  ushort extraout_r2;
  ushort extraout_r2_00;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  code *pcVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int *piVar15;
  undefined8 uVar16;
  
  uVar8 = (uint)*(ushort *)(task_context + 7);
  iVar9 = priority;
  if ((int)(uVar8 << 0x1c) < 0) {
    if (operation_type == 1) {
      uVar7 = 0x10;
    }
    else {
      uVar7 = 0x20;
    }
    *(ushort *)(task_context + 7) = *(ushort *)(task_context + 7) | uVar7;
LAB_0004b540:
    iVar3 = validate_and_clear_connection_state(task_context + 5);
    if (iVar3 != 0) {
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(iVar9);
      }
      InstructionSynchronizationBarrier(0xf);
      return;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0);
LAB_0004b6c0:
    DEBUG_PRINT2("\tNot my spinlock %p\n",task_context + 5);
    uVar6 = 0xf0;
LAB_0004b828:
    pcVar4 = "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h";
LAB_0004b626:
                    /* WARNING: Subroutine does not return */
    assertion_failure(pcVar4,uVar6);
  }
  uVar5 = uVar8 & 7;
  if (operation_type != 2) goto switchD_0004b524_caseD_1;
LAB_0004b514:
  uVar16 = FUN_0007e18e(task_context,uVar5,priority,uVar8,additional_param);
  uVar5 = (uint)((ulonglong)uVar16 >> 0x20);
  if ((int)uVar16 != 0) {
    switch((int)uVar16) {
    case 1:
switchD_0004b524_caseD_1:
      do {
        puVar14 = (undefined4 *)task_context[6];
        uVar7 = *(ushort *)(task_context + 7);
        if ((int)puVar14 < 0) {
          puVar12 = (undefined4 *)*task_context;
          *task_context = 0;
          task_context[1] = 0;
          *(ushort *)(task_context + 7) = uVar7 & 0xfff8 | 1;
LAB_0004b5fc:
          uVar7 = *(ushort *)(task_context + 7);
          uVar8 = uVar7 & 7;
          if (uVar8 != uVar5) goto LAB_0004b7a2;
          if (puVar12 != (undefined4 *)0x0) {
            pcVar11 = (code *)0x0;
            bVar2 = false;
            goto LAB_0004b69c;
          }
        }
        else {
          uVar8 = uVar7 & 7;
          if (uVar8 - 5 < 2) {
            puVar12 = (undefined4 *)*task_context;
            *task_context = 0;
            task_context[1] = 0;
            puVar13 = puVar12;
            if (uVar8 == 6) {
              for (; puVar13 != (undefined4 *)0x0; puVar13 = (undefined4 *)*puVar13) {
                *(short *)((int)task_context + 0x1e) = *(short *)((int)task_context + 0x1e) + 1;
              }
              uVar7 = uVar7 & 0xfff8 | 2;
            }
            else {
              uVar7 = uVar7 & 0xfff8;
            }
            *(ushort *)(task_context + 7) = uVar7;
            uVar16 = FUN_0007e18e(task_context);
            uVar5 = (uint)((ulonglong)uVar16 >> 0x20);
            if ((int)uVar16 != 0) {
              *(ushort *)(task_context + 7) = extraout_r2 | 0x20;
            }
            goto LAB_0004b5fc;
          }
          if (uVar8 != 4) {
            DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","0","WEST_TOPDIR/zephyr/lib/os/onoff.c",
                         0x11b);
            uVar6 = 0x11b;
            break;
          }
          *(ushort *)(task_context + 7) = uVar7 & 0xfff8;
          uVar16 = FUN_0007e18e(task_context);
          if ((int)uVar16 != 0) {
            *(ushort *)(task_context + 7) = extraout_r2_00 | 0x20;
          }
          uVar7 = *(ushort *)(task_context + 7);
          uVar8 = uVar7 & 7;
          if (uVar8 == (uint)((ulonglong)uVar16 >> 0x20)) goto LAB_0004b5cc;
          puVar12 = (undefined4 *)0x0;
LAB_0004b7a2:
          pcVar11 = (code *)0x0;
LAB_0004b688:
          if (task_context[2] == 0) {
            if (puVar12 == (undefined4 *)0x0) {
              if (pcVar11 == (code *)0x0) goto LAB_0004b5cc;
              bVar2 = false;
            }
            else {
              bVar2 = false;
            }
          }
          else {
            bVar2 = true;
          }
LAB_0004b69c:
          piVar15 = task_context + 5;
          *(ushort *)(task_context + 7) = uVar7 | 8;
          iVar3 = validate_and_clear_connection_state(piVar15);
          if (iVar3 == 0) {
            DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                         "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0);
            goto LAB_0004b6c0;
          }
          bVar1 = (bool)isCurrentModePrivileged();
          if (bVar1) {
            setBasePriority(iVar9);
          }
          InstructionSynchronizationBarrier(0xf);
          if ((bVar2) && (puVar13 = (undefined4 *)task_context[2], puVar13 != (undefined4 *)0x0)) {
            puVar10 = (undefined4 *)*puVar13;
            while (puVar13 != (undefined4 *)0x0) {
              (*(code *)puVar13[1])(task_context,puVar13,uVar8,puVar14);
              puVar13 = puVar10;
              if (puVar10 != (undefined4 *)0x0) {
                puVar10 = (undefined4 *)*puVar10;
              }
            }
          }
          while (puVar12 != (undefined4 *)0x0) {
            puVar13 = (undefined4 *)*puVar12;
            FUN_0007e1e6(task_context,puVar12,uVar8,puVar14);
            puVar12 = puVar13;
          }
          if (pcVar11 != (code *)0x0) {
            (*pcVar11)(task_context,&LAB_0004b8a4_1);
          }
          iVar9 = 0;
          bVar2 = (bool)isCurrentModePrivileged();
          if (bVar2) {
            iVar9 = getBasePriority();
          }
          bVar2 = (bool)isCurrentModePrivileged();
          if ((bVar2) && (uVar8 = getBasePriority(), uVar8 == 0 || 0x20 < uVar8)) {
            setBasePriority(0x20);
          }
          InstructionSynchronizationBarrier(0xf);
          iVar3 = check_connection_state_validity(piVar15);
          if (iVar3 == 0) {
            DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                         "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72);
            DEBUG_PRINT2("\tInvalid spinlock %p\n",piVar15);
            uVar6 = 0x72;
            goto LAB_0004b828;
          }
          update_connection_state_flags(piVar15);
          *(ushort *)(task_context + 7) = *(ushort *)(task_context + 7) & 0xfff7;
        }
LAB_0004b5cc:
        uVar5 = (uint)*(ushort *)(task_context + 7);
        priority = uVar5 << 0x1b;
        if (-1 < priority) goto LAB_0004b872;
        *(ushort *)(task_context + 7) = *(ushort *)(task_context + 7) & 0xffef;
        uVar5 = uVar5 & 7;
      } while( true );
    default:
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","0","WEST_TOPDIR/zephyr/lib/os/onoff.c",0x16b);
      uVar6 = 0x16b;
      break;
    case 3:
      if (uVar5 == 0) {
        if (*task_context == 0) {
          DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","!sys_slist_is_empty(&mgr->clients)",
                       "WEST_TOPDIR/zephyr/lib/os/onoff.c",0x157);
          uVar6 = 0x157;
        }
        else {
          pcVar11 = *(code **)task_context[4];
          if (pcVar11 != (code *)0x0) {
            uVar8 = 6;
            uVar7 = *(ushort *)(task_context + 7) & 0xfff8 | 6;
            *(ushort *)(task_context + 7) = uVar7;
            puVar12 = (undefined4 *)0x0;
            puVar14 = (undefined4 *)0x0;
            goto LAB_0004b688;
          }
          DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","transit != ((void *)0)",
                       "WEST_TOPDIR/zephyr/lib/os/onoff.c",0x15a);
          uVar6 = 0x15a;
        }
      }
      else {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","state == 0U",
                     "WEST_TOPDIR/zephyr/lib/os/onoff.c",0x156);
        uVar6 = 0x156;
      }
      break;
    case 4:
      if (uVar5 == 2) {
        if (*(short *)((int)task_context + 0x1e) == 0) {
          pcVar11 = *(code **)(task_context[4] + 4);
          if (pcVar11 != (code *)0x0) {
            uVar7 = *(ushort *)(task_context + 7) & 0xfff8 | 4;
            uVar8 = 4;
            *(ushort *)(task_context + 7) = uVar7;
            puVar12 = (undefined4 *)0x0;
            puVar14 = (undefined4 *)0x0;
            goto LAB_0004b688;
          }
          DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","transit != ((void *)0)",
                       "WEST_TOPDIR/zephyr/lib/os/onoff.c",0x161);
          uVar6 = 0x161;
        }
        else {
          DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","mgr->refs == 0",
                       "WEST_TOPDIR/zephyr/lib/os/onoff.c",0x15e);
          uVar6 = 0x15e;
        }
      }
      else {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","state == (1UL << (1))",
                     "WEST_TOPDIR/zephyr/lib/os/onoff.c",0x15d);
        uVar6 = 0x15d;
      }
      break;
    case 5:
      if (uVar5 == 1) {
        if (*task_context == 0) {
          DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","!sys_slist_is_empty(&mgr->clients)",
                       "WEST_TOPDIR/zephyr/lib/os/onoff.c",0x165);
          uVar6 = 0x165;
        }
        else {
          pcVar11 = *(code **)(task_context[4] + 8);
          if (pcVar11 != (code *)0x0) {
            puVar12 = (undefined4 *)0x0;
            uVar7 = *(ushort *)(task_context + 7) & 0xfff8 | 5;
            uVar8 = 5;
            *(ushort *)(task_context + 7) = uVar7;
            puVar14 = puVar12;
            goto LAB_0004b688;
          }
          DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","transit != ((void *)0)",
                       "WEST_TOPDIR/zephyr/lib/os/onoff.c",0x168);
          uVar6 = 0x168;
        }
      }
      else {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","state == (1UL << (0))",
                     "WEST_TOPDIR/zephyr/lib/os/onoff.c",0x164);
        uVar6 = 0x164;
      }
    }
    pcVar4 = "WEST_TOPDIR/zephyr/lib/os/onoff.c";
    goto LAB_0004b626;
  }
  goto LAB_0004b540;
LAB_0004b872:
  if (-1 < (int)(uVar5 << 0x1a)) goto LAB_0004b540;
  uVar8 = uVar5 & 0xffffffdf;
  *(short *)(task_context + 7) = (short)uVar8;
  uVar5 = uVar5 & 7;
  goto LAB_0004b514;
}


