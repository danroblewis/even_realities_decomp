/*
 * Function: validate_and_initialize_ble_connection_state
 * Entry:    00072cd4
 * Prototype: undefined validate_and_initialize_ble_connection_state()
 */


uint validate_and_initialize_ble_connection_state
               (undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = param_1[3];
  uVar4 = (uint)(iVar2 << 0x1e) >> 0x1f;
  if (iVar2 << 0x1e < 0) {
LAB_00072d58:
    uVar4 = 0xfffffff0;
  }
  else {
    if (iVar2 << 0x1d < 0) goto LAB_00072d34;
    if (*param_2 == 0) {
      *param_2 = param_1[2];
    }
    if ((int)(param_1[3] << 0x1f) < 0) {
      if (param_1[2] == 0) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","work->queue != ((void *)0)",
                     "WEST_TOPDIR/zephyr/kernel/work.c",0x14e,param_4);
                    /* WARNING: Subroutine does not return */
        trigger_system_service_call("WEST_TOPDIR/zephyr/kernel/work.c",0x14e);
      }
      uVar4 = 2;
      *param_2 = param_1[2];
    }
    else {
      uVar4 = 1;
    }
    iVar2 = *param_2;
    if (iVar2 == 0) {
      uVar4 = 0xffffffea;
      goto LAB_00072d34;
    }
    if (DMIC_BUFFER_SIZE == iVar2) {
      iVar1 = check_privilege_level();
      iVar3 = *(int *)(iVar2 + 0xf0);
      if (iVar1 != 0) goto LAB_00072d28;
      if (iVar3 << 0x1f < 0) {
        if ((-1 < iVar3 << 0x1c) || (iVar3 << 0x1d < 0)) goto LAB_00072d6a;
        goto LAB_00072d58;
      }
    }
    else {
      iVar3 = *(int *)(iVar2 + 0xf0);
LAB_00072d28:
      if (iVar3 << 0x1f < 0) {
        if ((-1 < iVar3 << 0x1d) && (-1 < iVar3 << 0x1c)) {
LAB_00072d6a:
          *param_1 = 0;
          if (*(undefined4 **)(iVar2 + 0xdc) == (undefined4 *)0x0) {
            *(undefined4 **)(iVar2 + 0xd8) = param_1;
            *(undefined4 **)(iVar2 + 0xdc) = param_1;
          }
          else {
            **(undefined4 **)(iVar2 + 0xdc) = param_1;
            *(undefined4 **)(iVar2 + 0xdc) = param_1;
          }
          initialize_serial_ports(iVar2);
          param_1[3] = param_1[3] | 4;
          param_1[2] = *param_2;
          return uVar4;
        }
        goto LAB_00072d58;
      }
    }
    uVar4 = 0xffffffed;
  }
LAB_00072d34:
  *param_2 = 0;
  return uVar4;
}


