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
  undefined1 *puVar6;
  undefined1 *extraout_r1;
  undefined1 *extraout_r1_00;
  undefined1 *extraout_r1_01;
  undefined4 uVar7;
  ushort uVar8;
  ushort extraout_r2;
  ushort extraout_r2_00;
  uint uVar9;
  undefined4 *puVar10;
  code *pcVar11;
  undefined4 *callback_data;
  undefined4 *puVar12;
  undefined4 *callback_param;
  undefined1 *callback_func;
  int *piVar13;
  
  uVar9 = (uint)*(ushort *)(task_context + 7);
  uVar5 = uVar9 << 0x1c;
  if ((int)uVar5 < 0) {
    if (operation_type == 1) {
      uVar5 = uVar9 | 0x10;
    }
    uVar8 = (ushort)uVar5;
    if (operation_type != 1) {
      uVar8 = *(ushort *)(task_context + 7) | 0x20;
    }
    *(ushort *)(task_context + 7) = uVar8;
LAB_0004b540:
    iVar3 = validate_and_clear_connection_state(task_context + 5);
    if (iVar3 != 0) {
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(priority);
      }
      InstructionSynchronizationBarrier(0xf);
      return;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0,additional_param);
LAB_0004b6c0:
    DEBUG_PRINT2("\tNot my spinlock %p\n",task_context + 5);
    uVar7 = 0xf0;
LAB_0004b828:
    pcVar4 = "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h";
LAB_0004b626:
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call(pcVar4,uVar7);
  }
  puVar6 = (undefined1 *)(uVar9 & 7);
  if (operation_type != 2) goto switchD_0004b524_caseD_1;
LAB_0004b514:
  iVar3 = get_heap_chunk_size_by_type(task_context);
  if (iVar3 != 0) {
    puVar6 = extraout_r1;
    switch(iVar3) {
    case 1:
switchD_0004b524_caseD_1:
      do {
        callback_param = (undefined4 *)task_context[6];
        uVar8 = *(ushort *)(task_context + 7);
        if ((int)callback_param < 0) {
          callback_data = (undefined4 *)*task_context;
          *task_context = 0;
          task_context[1] = 0;
          *(ushort *)(task_context + 7) = uVar8 & 0xfff8 | 1;
LAB_0004b5fc:
          uVar8 = *(ushort *)(task_context + 7);
          callback_func = (undefined1 *)(uVar8 & 7);
          if (callback_func != puVar6) goto LAB_0004b7a2;
          if (callback_data != (undefined4 *)0x0) {
            pcVar11 = (code *)0x0;
            bVar2 = false;
            goto LAB_0004b69c;
          }
        }
        else {
          uVar5 = uVar8 & 7;
          if (uVar5 - 5 < 2) {
            callback_data = (undefined4 *)*task_context;
            *task_context = 0;
            task_context[1] = 0;
            puVar12 = callback_data;
            if (uVar5 == 6) {
              for (; puVar12 != (undefined4 *)0x0; puVar12 = (undefined4 *)*puVar12) {
                *(short *)((int)task_context + 0x1e) = *(short *)((int)task_context + 0x1e) + 1;
              }
              uVar8 = uVar8 & 0xfff8 | 2;
            }
            else {
              uVar8 = uVar8 & 0xfff8;
            }
            *(ushort *)(task_context + 7) = uVar8;
            iVar3 = get_heap_chunk_size_by_type(task_context);
            puVar6 = extraout_r1_00;
            if (iVar3 != 0) {
              *(ushort *)(task_context + 7) = extraout_r2 | 0x20;
            }
            goto LAB_0004b5fc;
          }
          if (uVar5 != 4) {
            DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","0","WEST_TOPDIR/zephyr/lib/os/onoff.c",
                         0x11b,additional_param);
            uVar7 = 0x11b;
            break;
          }
          *(ushort *)(task_context + 7) = uVar8 & 0xfff8;
          iVar3 = get_heap_chunk_size_by_type(task_context);
          if (iVar3 != 0) {
            *(ushort *)(task_context + 7) = extraout_r2_00 | 0x20;
          }
          uVar8 = *(ushort *)(task_context + 7);
          callback_func = (undefined1 *)(uVar8 & 7);
          if (callback_func == extraout_r1_01) goto LAB_0004b5cc;
          callback_data = (undefined4 *)0x0;
LAB_0004b7a2:
          pcVar11 = (code *)0x0;
LAB_0004b688:
          if (task_context[2] == 0) {
            if (callback_data == (undefined4 *)0x0) {
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
          piVar13 = task_context + 5;
          *(ushort *)(task_context + 7) = uVar8 | 8;
          iVar3 = validate_and_clear_connection_state(piVar13);
          if (iVar3 == 0) {
            DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                         "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0,additional_param);
            goto LAB_0004b6c0;
          }
          bVar1 = (bool)isCurrentModePrivileged();
          if (bVar1) {
            setBasePriority(priority);
          }
          InstructionSynchronizationBarrier(0xf);
          if ((bVar2) && (puVar12 = (undefined4 *)task_context[2], puVar12 != (undefined4 *)0x0)) {
            puVar10 = (undefined4 *)*puVar12;
            while (puVar12 != (undefined4 *)0x0) {
              (*(code *)puVar12[1])(task_context,puVar12,callback_func,callback_param);
              puVar12 = puVar10;
              if (puVar10 != (undefined4 *)0x0) {
                puVar10 = (undefined4 *)*puVar10;
              }
            }
          }
          while (callback_data != (undefined4 *)0x0) {
            puVar12 = (undefined4 *)*callback_data;
            allocate_memory_with_callback
                      (task_context,callback_data,callback_func,(int)callback_param);
            callback_data = puVar12;
          }
          if (pcVar11 != (code *)0x0) {
            (*pcVar11)(task_context,&LAB_0004b8a4_1);
          }
          priority = 0;
          bVar2 = (bool)isCurrentModePrivileged();
          if (bVar2) {
            priority = getBasePriority();
          }
          bVar2 = (bool)isCurrentModePrivileged();
          if ((bVar2) && (uVar5 = getBasePriority(), uVar5 == 0 || 0x20 < uVar5)) {
            setBasePriority(0x20);
          }
          InstructionSynchronizationBarrier(0xf);
          iVar3 = check_connection_state_validity(piVar13);
          if (iVar3 == 0) {
            DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                         "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72);
            DEBUG_PRINT2("\tInvalid spinlock %p\n",piVar13);
            uVar7 = 0x72;
            goto LAB_0004b828;
          }
          update_connection_state_flags(piVar13);
          *(ushort *)(task_context + 7) = *(ushort *)(task_context + 7) & 0xfff7;
        }
LAB_0004b5cc:
        uVar8 = *(ushort *)(task_context + 7);
        uVar5 = (uint)uVar8;
        if (-1 < (int)(uVar5 << 0x1b)) goto LAB_0004b872;
        *(ushort *)(task_context + 7) = uVar8 & 0xffef;
        puVar6 = (undefined1 *)(uVar5 & 7);
      } while( true );
    default:
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","0","WEST_TOPDIR/zephyr/lib/os/onoff.c",0x16b);
      uVar7 = 0x16b;
      break;
    case 3:
      if (extraout_r1 == (undefined1 *)0x0) {
        if (*task_context == 0) {
          DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","!sys_slist_is_empty(&mgr->clients)",
                       "WEST_TOPDIR/zephyr/lib/os/onoff.c",0x157);
          uVar7 = 0x157;
        }
        else {
          pcVar11 = *(code **)task_context[4];
          if (pcVar11 != (code *)0x0) {
            callback_func = (undefined1 *)0x6;
            uVar8 = *(ushort *)(task_context + 7) & 0xfff8 | 6;
            *(ushort *)(task_context + 7) = uVar8;
            callback_data = (undefined4 *)0x0;
            callback_param = (undefined4 *)0x0;
            goto LAB_0004b688;
          }
          DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","transit != ((void *)0)",
                       "WEST_TOPDIR/zephyr/lib/os/onoff.c",0x15a);
          uVar7 = 0x15a;
        }
      }
      else {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","state == 0U",
                     "WEST_TOPDIR/zephyr/lib/os/onoff.c",0x156);
        uVar7 = 0x156;
      }
      break;
    case 4:
      if (extraout_r1 == (undefined1 *)0x2) {
        if (*(short *)((int)task_context + 0x1e) == 0) {
          pcVar11 = *(code **)(task_context[4] + 4);
          if (pcVar11 != (code *)0x0) {
            uVar8 = *(ushort *)(task_context + 7) & 0xfff8 | 4;
            callback_func = &Reset;
            *(ushort *)(task_context + 7) = uVar8;
            callback_data = (undefined4 *)0x0;
            callback_param = (undefined4 *)0x0;
            goto LAB_0004b688;
          }
          DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","transit != ((void *)0)",
                       "WEST_TOPDIR/zephyr/lib/os/onoff.c",0x161);
          uVar7 = 0x161;
        }
        else {
          DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","mgr->refs == 0",
                       "WEST_TOPDIR/zephyr/lib/os/onoff.c",0x15e);
          uVar7 = 0x15e;
        }
      }
      else {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","state == (1UL << (1))",
                     "WEST_TOPDIR/zephyr/lib/os/onoff.c",0x15d);
        uVar7 = 0x15d;
      }
      break;
    case 5:
      if (extraout_r1 == (undefined1 *)0x1) {
        if (*task_context == 0) {
          DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","!sys_slist_is_empty(&mgr->clients)",
                       "WEST_TOPDIR/zephyr/lib/os/onoff.c",0x165);
          uVar7 = 0x165;
        }
        else {
          pcVar11 = *(code **)(task_context[4] + 8);
          if (pcVar11 != (code *)0x0) {
            callback_data = (undefined4 *)0x0;
            uVar8 = *(ushort *)(task_context + 7) & 0xfff8 | 5;
            callback_func = (undefined1 *)0x5;
            *(ushort *)(task_context + 7) = uVar8;
            callback_param = callback_data;
            goto LAB_0004b688;
          }
          DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","transit != ((void *)0)",
                       "WEST_TOPDIR/zephyr/lib/os/onoff.c",0x168);
          uVar7 = 0x168;
        }
      }
      else {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","state == (1UL << (0))",
                     "WEST_TOPDIR/zephyr/lib/os/onoff.c",0x164);
        uVar7 = 0x164;
      }
    }
    pcVar4 = "WEST_TOPDIR/zephyr/lib/os/onoff.c";
    goto LAB_0004b626;
  }
  goto LAB_0004b540;
LAB_0004b872:
  if (-1 < (int)(uVar5 << 0x1a)) goto LAB_0004b540;
  *(ushort *)(task_context + 7) = uVar8 & 0xffdf;
  goto LAB_0004b514;
}


