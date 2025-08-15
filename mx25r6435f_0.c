/*
 * Function: mx25r6435f_0
 * Entry:    00032628
 * Prototype: undefined mx25r6435f_0()
 */


undefined4 mx25r6435f_0(int param_1,undefined4 param_2,undefined4 *param_3,undefined1 *param_4)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  puVar4 = param_4;
  DEBUG_PRINT("join in get_flash_info\n");
  if ((param_3 == (undefined4 *)0x0) || (param_4 == (undefined1 *)0x0)) {
    DEBUG_PRINT("get_flash_info para is NULL\n");
    return 0xffffffff;
  }
  puVar3 = (undefined1 *)*param_3;
  *puVar3 = 0x1e;
  uVar2 = *(undefined1 *)(param_1 + 1);
  puVar3[2] = 3;
  puVar3[1] = uVar2;
  puVar3[3] = 4;
  iVar1 = check_driver_ready(&FLASH_DRIVER_INTERFACE);
  if (iVar1 == 0) {
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s():  [%s] device not ready.\n","get_flash_info","mx25r6435f@0");
      }
      else {
        handle_heartbeat();
      }
    }
    *puVar3 = 0x1e;
    puVar3[1] = *(undefined1 *)(param_1 + 1);
    puVar3[2] = 3;
    uVar2 = 1;
    puVar3[3] = 1;
LAB_00032696:
    puVar3[4] = uVar2;
    uVar2 = 5;
  }
  else {
    iVar1 = get_work_mode();
    if (*(int *)(iVar1 + 0x1030) != 0) {
      iVar1 = dispatch_function_pointer_from_structure_alt
                        (&FLASH_DRIVER_INTERFACE,0x2612d2,&DAT_20019daf,0x4e,puVar4);
      if (iVar1 != 0) {
        DEBUG_PRINT("Flash read failed! %d\n",iVar1);
        *puVar3 = 0x1e;
        uVar2 = *(undefined1 *)(param_1 + 1);
        puVar3[2] = 3;
        puVar3[1] = uVar2;
        puVar3[3] = 1;
        uVar2 = 2;
        goto LAB_00032696;
      }
      DEBUG_PRINT("flash read ok\n",0);
    }
    memcpy(puVar3 + 4,&DAT_20019daf,0x4e);
    uVar2 = 0x52;
  }
  *param_4 = uVar2;
  return 0;
}


