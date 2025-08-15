/*
 * Function: FUN_00062c54
 * Entry:    00062c54
 * Prototype: undefined FUN_00062c54()
 */


uint FUN_00062c54(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  puVar5 = *(undefined4 **)(param_1 + 4);
  puVar4 = (undefined4 *)*puVar5;
  iVar6 = *(int *)(param_1 + 0x10);
  if (param_2 == 0) {
    iVar6 = *(int *)(iVar6 + 0xc);
    if (iVar6 != 0) {
      if (*(char *)(iVar6 + 0xca) != '\0') {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","!data->async->rx_enabled",
                     "WEST_TOPDIR/zephyr/drivers/serial/uart_nrfx_uarte.c",0x768);
        uVar3 = 0x768;
LAB_00062cb8:
                    /* WARNING: Subroutine does not return */
        assertion_failure("WEST_TOPDIR/zephyr/drivers/serial/uart_nrfx_uarte.c",uVar3);
      }
      if (*(int *)(iVar6 + 0xc) != 0) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","!data->async->tx_size",
                     "WEST_TOPDIR/zephyr/drivers/serial/uart_nrfx_uarte.c",0x769);
        uVar3 = 0x769;
        goto LAB_00062cb8;
      }
    }
    if (puVar4[0x53] != 0) {
      puVar4[1] = 1;
      do {
        if (puVar4[0x51] != 0) break;
      } while (puVar4[0x49] == 0);
      puVar4[0x53] = 0;
      puVar4[0x51] = 0;
      puVar4[0x44] = 0;
    }
    iVar6 = **(int **)(param_1 + 4);
    uVar1 = (*(int **)(param_1 + 4))[1] & 2;
    if (uVar1 == 0) {
      iVar7 = 1000;
      *(undefined4 *)(iVar6 + 0x308) = 0x100;
      do {
        iVar2 = FUN_00084abe(*(undefined4 *)(param_1 + 4));
        if (iVar2 != 0) break;
        thunk_FUN_00086384(1);
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      if (*(int *)(iVar6 + 0x158) == 0) {
        *(undefined4 *)(iVar6 + 0x120) = 0;
        *(undefined4 *)(iVar6 + 0xc) = 1;
      }
    }
    iVar7 = 1000;
    do {
      if (*(int *)(iVar6 + 0x158) != 0) break;
      thunk_FUN_00086384(1);
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    if (uVar1 == 0) {
      *(undefined4 *)(iVar6 + 0x304) = 0x100;
    }
    *(undefined4 *)(**(int **)(param_1 + 4) + 0x500) = 0;
    if ((int)(puVar5[1] << 0x1f) < 0) {
      uVar1 = FUN_00084b14(puVar5[3],1);
      return uVar1 & (int)uVar1 >> 0x1f;
    }
  }
  else {
    if (param_2 != 1) {
      return 0xffffff7a;
    }
    if (((int)(puVar5[1] << 0x1f) < 0) && (uVar1 = FUN_00084b14(puVar5[3],0), (int)uVar1 < 0)) {
      return uVar1;
    }
    puVar4[0x140] = 8;
    if ((*(int *)(iVar6 + 0xc) == 0) && (*(char *)(puVar5 + 2) == '\0')) {
      puVar4[0x44] = 0;
      *puVar4 = 1;
    }
  }
  return 0;
}


