/*
 * Function: FUN_0005c3c4
 * Entry:    0005c3c4
 * Prototype: undefined FUN_0005c3c4()
 */


int FUN_0005c3c4(int param_1,int *param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  if (param_1 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","conn",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/gatt.c",0x147d);
    DEBUG_PRINT2("\tinvalid parameters\n\n");
    uVar4 = 0x147d;
LAB_0005c3e4:
                    /* WARNING: Subroutine does not return */
    assertion_failure("WEST_TOPDIR/zephyr/subsys/bluetooth/host/gatt.c",uVar4);
  }
  if ((param_2 == (int *)0x0) || (*param_2 == 0)) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","params && params->notify",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/gatt.c",0x147e);
    DEBUG_PRINT2("\tinvalid parameters\n\n");
    uVar4 = 0x147e;
    goto LAB_0005c3e4;
  }
  if ((short)param_2[4] == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","params->value",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/gatt.c",0x147f);
    DEBUG_PRINT2("\tinvalid parameters\n\n");
    uVar4 = 0x147f;
    goto LAB_0005c3e4;
  }
  if (*(short *)((int)param_2 + 0xe) == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","params->ccc_handle",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/gatt.c",0x1485);
    DEBUG_PRINT2("\tinvalid parameters\n\n");
    uVar4 = 0x1485;
    goto LAB_0005c3e4;
  }
  if (*(char *)(param_1 + 0xd) != '\a') {
    return -0x80;
  }
  puVar2 = (undefined1 *)FUN_00059c70();
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = (undefined1 *)FUN_00059c70();
    if (puVar2 == (undefined1 *)0x0) {
      return -0xc;
    }
    FUN_000828da(puVar2 + 1,param_1 + 0x90);
    *puVar2 = *(undefined1 *)(param_1 + 8);
  }
  piVar5 = *(int **)(puVar2 + 8);
  if (piVar5 != (int *)0x0) {
    bVar1 = false;
    do {
      if (param_2 == piVar5 + -6) {
        return -0x78;
      }
      if (((short)piVar5[-3] == (short)param_2[3]) &&
         (*(ushort *)(param_2 + 4) <= *(ushort *)(piVar5 + -2))) {
        bVar1 = true;
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)0x0);
    if (bVar1) goto LAB_0005c4ae;
  }
  iVar3 = FUN_0005a540(param_1,param_2);
  if (iVar3 != 0) {
    if (*(int *)(puVar2 + 8) != 0) {
      return iVar3;
    }
    FUN_00059e78(puVar2);
    return iVar3;
  }
LAB_0005c4ae:
  param_2[6] = *(int *)(puVar2 + 8);
  *(int **)(puVar2 + 8) = param_2 + 6;
  if (*(int *)(puVar2 + 0xc) == 0) {
    *(int **)(puVar2 + 0xc) = param_2 + 6;
  }
  return 0;
}


