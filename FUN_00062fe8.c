/*
 * Function: FUN_00062fe8
 * Entry:    00062fe8
 * Prototype: undefined FUN_00062fe8()
 */


undefined4 FUN_00062fe8(int param_1,int param_2,uint param_3,int param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar7 = *(undefined4 **)(param_1 + 4);
  iVar4 = *(int *)(param_1 + 0x10);
  puVar6 = (undefined4 *)*puVar7;
  if (*(char *)(puVar7 + 2) != '\0') {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","0",
                 "WEST_TOPDIR/zephyr/drivers/serial/uart_nrfx_uarte.c",0x342);
    DEBUG_PRINT2("\tTX only UARTE instance\n");
                    /* WARNING: Subroutine does not return */
    assertion_failure("WEST_TOPDIR/zephyr/drivers/serial/uart_nrfx_uarte.c",0x342);
  }
  iVar3 = *(int *)(iVar4 + 0xc);
  if ((*(char *)(iVar3 + 0xca) == '\0') && (*(char *)(iVar3 + 0xcb) == '\0')) {
    *(int *)(iVar3 + 0x74) = param_4;
    if (param_4 < 0x1d1) {
      param_4 = 0x5c;
    }
    else {
      param_4 = param_4 / 5;
    }
    *(int *)(*(int *)(iVar4 + 0xc) + 0x78) = param_4;
    *(int *)(*(int *)(iVar4 + 0xc) + 0x58) = param_2;
    *(uint *)(*(int *)(iVar4 + 0xc) + 0x5c) = param_3;
    *(undefined4 *)(*(int *)(iVar4 + 0xc) + 0x60) = 0;
    *(undefined4 *)(*(int *)(iVar4 + 0xc) + 100) = 0;
    *(undefined4 *)(*(int *)(iVar4 + 0xc) + 0x68) = 0;
    if ((int)(puVar7[1] << 0x1b) < 0) {
      uVar5 = (uint)*(byte *)(*(int *)(iVar4 + 0xc) + 0xc9);
      if (uVar5 != 0) {
        if (param_3 <= uVar5) {
          uVar5 = param_3;
        }
        memcpy(param_2,*(int *)(iVar4 + 0xc) + 0xc4,uVar5);
        param_3 = param_3 - uVar5;
        param_2 = param_2 + uVar5;
        if (param_3 == 0) {
          *(char *)(*(int *)(iVar4 + 0xc) + 0xc9) =
               *(char *)(*(int *)(iVar4 + 0xc) + 0xc9) - (char)uVar5;
          FUN_0008484e(param_1,uVar5);
          FUN_00084880(param_1,*(int *)(iVar4 + 0xc) + 0x58);
          FUN_000848b0(param_1);
          return 0;
        }
      }
    }
    puVar6[0x14d] = param_2;
    puVar6[0x14e] = param_3;
    puVar6[0x44] = 0;
    puVar6[0x53] = 0;
    *(undefined1 *)(*(int *)(iVar4 + 0xc) + 0xca) = 1;
    if ((int)(puVar7[1] << 0x1b) < 0) {
      uVar2 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        uVar2 = getBasePriority();
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if ((bVar1) && (uVar5 = getBasePriority(), uVar5 == 0 || 0x20 < uVar5)) {
        setBasePriority(0x20);
      }
      InstructionSynchronizationBarrier(0xf);
      iVar4 = *(int *)(*(int *)(param_1 + 0x10) + 0xc);
      if (iVar4 != 0) {
        *(uint *)(iVar4 + 0xc0) = *(uint *)(iVar4 + 0xc0) | 2;
      }
      *(undefined4 *)(**(int **)(param_1 + 4) + 0x500) = 8;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar2);
      }
      InstructionSynchronizationBarrier(0xf);
    }
    *puVar6 = 1;
    return 0;
  }
  return 0xfffffff0;
}


