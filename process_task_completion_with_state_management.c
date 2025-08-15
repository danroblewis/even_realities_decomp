/*
 * Function: process_task_completion_with_state_management
 * Entry:    0004db04
 * Prototype: undefined process_task_completion_with_state_management(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined1 param_6, undefined4 param_7, undefined param_8, undefined4 param_9, undefined4 param_10)
 */


void process_task_completion_with_state_management
               (undefined4 param_1,uint param_2,int param_3,int param_4,undefined4 param_5,
               byte param_6,int param_7,undefined1 *param_8,uint param_9,uint param_10)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_3c;
  undefined1 *local_38;
  
  uVar9 = (uint)param_6;
  local_38 = param_8;
  local_3c = param_9;
  if (uVar9 == 0) {
    if (param_4 == 1) {
      if (param_7 != 0) {
        puVar5 = &LAB_0004daac_1;
LAB_0004dc98:
        iVar1 = 0;
        goto LAB_0004dc74;
      }
    }
    else if (param_7 != 0) {
      puVar5 = &UNK_0007eee9;
      goto LAB_0004dc98;
    }
    if (param_9 != 0) {
      iVar1 = 0;
LAB_0004dcaa:
      uVar3 = local_3c;
      if (0xf < local_3c) {
        uVar3 = 0x10;
      }
      process_task_completion_with_priority_based_callback(param_1,param_10);
      for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
        process_task_completion_with_callback_execution(param_1," ");
      }
      process_task_completion_with_callback_execution(param_1,"%02x ",*local_38);
      uVar10 = 1;
      do {
        if ((uVar10 & 7) == 0) {
          process_task_completion_with_callback_execution(param_1," ");
        }
        if (uVar10 < uVar3) {
          process_task_completion_with_callback_execution(param_1,"%02x ",local_38[uVar10]);
        }
        else {
          process_task_completion_with_callback_execution(param_1,"   ");
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != 0x10);
      uVar10 = 0;
      process_task_completion_with_callback_execution(param_1,"|");
      do {
        uVar8 = (uint)(byte)local_38[uVar10];
        if (((&DAT_000f8a6b)[uVar8] & 0x97) == 0) {
          uVar8 = 0x2e;
        }
        process_task_completion_with_callback_execution(param_1,"%c",uVar8);
        while( true ) {
          uVar10 = uVar10 + 1;
          if (uVar10 == 0x10) {
            local_38 = local_38 + uVar3;
            local_3c = local_3c - uVar3;
            if (local_3c != 0) goto LAB_0004dcaa;
            goto LAB_0004dd74;
          }
          if ((uVar10 & 7) == 0) {
            process_task_completion_with_callback_execution(param_1," ");
          }
          if (uVar10 < uVar3) break;
          process_task_completion_with_callback_execution(param_1," ");
        }
      } while( true );
    }
  }
  else {
    if (4 < uVar9) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","level <= 4U",
                   "WEST_TOPDIR/zephyr/subsys/logging/log_output.c",0x1bf);
      uVar6 = 0x1bf;
      goto LAB_0004db3e;
    }
    iVar1 = return_zero_stub();
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = process_task_completion_with_callback_execution(param_1,"%s ",iVar1);
    }
    if ((param_10 & 2) != 0) {
      if ((param_10 & 0x44) == 0) {
        uVar3 = process_task_completion_with_callback_execution(param_1,"[%08lu] ",param_2);
      }
      else {
        uVar3 = DAT_2000a0e4;
        if (DAT_2000a0e4 != 0) {
          uVar3 = (param_2 / DAT_2000a0e0) / DAT_2000a0e4;
          uVar10 = (param_2 / DAT_2000a0e0 - DAT_2000a0e4 * uVar3) * 1000;
          uVar8 = uVar10 / DAT_2000a0e4;
          uVar3 = process_task_completion_with_callback_execution
                            (param_1,"[%02u:%02u:%02u.%03u,%03u] ",uVar3 / 0xe10,
                             (uVar3 % 0xe10) / 0x3c,(uVar3 % 0xe10) % 0x3c,uVar8,
                             ((uVar10 - DAT_2000a0e4 * uVar8) * 1000) / DAT_2000a0e4);
        }
      }
      iVar2 = iVar2 + uVar3;
    }
    if ((param_10 & 1) != 0) {
      puVar7 = *(undefined **)(&DAT_0008acc4 + uVar9 * 4);
      if (puVar7 == (undefined *)0x0) {
        puVar7 = &DAT_000f0ed2;
      }
      process_task_completion_with_callback_execution(param_1,&DAT_000a8c37,puVar7);
    }
    if ((param_10 & 8) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = process_task_completion_with_callback_execution
                        (param_1,"<%s> ",*(undefined4 *)(&DAT_0008acd8 + uVar9 * 4));
    }
    if (param_3 != 0) {
      iVar4 = process_task_completion_with_callback_execution(param_1,&DAT_000f0f12,param_3);
      iVar1 = iVar1 + iVar4;
    }
    if (param_4 != 0) {
      iVar4 = process_task_completion_with_callback_execution(param_1,&DAT_000f0f16,param_4);
      iVar1 = iVar1 + iVar4;
    }
    iVar1 = iVar1 + iVar2;
    if (param_7 == 0) {
      if (param_9 != 0) goto LAB_0004dcaa;
    }
    else {
      puVar5 = &LAB_0004daac_1;
LAB_0004dc74:
      iVar2 = process_variable_length_data_structure(puVar5,0x7eec1,param_1,param_7);
      if (iVar2 < 0) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","err >= 0",
                     "WEST_TOPDIR/zephyr/subsys/logging/log_output.c",0x219);
        uVar6 = 0x219;
LAB_0004db3e:
                    /* WARNING: Subroutine does not return */
        trigger_system_service_call("WEST_TOPDIR/zephyr/subsys/logging/log_output.c",uVar6);
      }
      if (param_9 != 0) goto LAB_0004dcaa;
LAB_0004dd74:
      if (uVar9 == 0) goto LAB_0004dd7a;
    }
    if ((int)(param_10 << 0x1f) < 0) {
      process_task_completion_with_callback_execution(param_1,&DAT_000a8c37,&DAT_000f0ed2);
    }
    process_task_completion_with_priority_based_callback(param_1,param_10);
  }
LAB_0004dd7a:
  execute_callbacks_and_clear_reference(param_1);
  return;
}


