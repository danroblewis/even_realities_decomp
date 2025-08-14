/*
 * Function: FUN_0005c22c
 * Entry:    0005c22c
 * Prototype: undefined FUN_0005c22c()
 */


undefined4 FUN_0005c22c(int param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  ushort uVar5;
  uint uVar6;
  undefined4 uVar7;
  
  if (param_1 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","conn",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/gatt.c",0x13de,0,param_2);
    DEBUG_PRINT2("\tinvalid parameters\n\n");
    uVar3 = 0x13de;
LAB_0005c24c:
                    /* WARNING: Subroutine does not return */
    FUN_0007e2ec("WEST_TOPDIR/zephyr/subsys/bluetooth/host/gatt.c",uVar3);
  }
  if ((param_2 == (int *)0x0) || (*param_2 == 0)) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","params && params->func",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/gatt.c",0x13df,param_1,param_2);
    DEBUG_PRINT2("\tinvalid parameters\n\n");
    uVar3 = 0x13df;
    goto LAB_0005c24c;
  }
  if ((short)param_2[1] == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","params->handle",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/gatt.c",0x13e0,param_1,param_2);
    DEBUG_PRINT2("\tinvalid parameters\n\n");
    uVar3 = 0x13e0;
    goto LAB_0005c24c;
  }
  if (*(char *)(param_1 + 0xd) != '\a') {
    return 0xffffff80;
  }
  uVar5 = *(ushort *)(param_2 + 3);
  if (*(short *)((int)param_2 + 6) == 0) {
    iVar2 = FUN_000823fa();
    uVar6 = uVar5 + 2;
    if (uVar6 <= iVar2 - 1U) {
      uVar7 = 0x12;
      puVar4 = &DAT_00082603;
      uVar3 = 0x8281b;
      goto LAB_0005c2be;
    }
  }
  sVar1 = FUN_000823fa(param_1);
  uVar5 = *(ushort *)(param_2 + 3);
  if ((ushort)(sVar1 - 5U) <= *(ushort *)(param_2 + 3)) {
    uVar5 = sVar1 - 5U;
  }
  uVar6 = (uint)(ushort)(uVar5 + 4);
  uVar7 = 0x16;
  puVar4 = (undefined *)0x82e05;
  uVar3 = 0x82857;
LAB_0005c2be:
  uVar3 = FUN_00082aee(param_1,puVar4,param_2,uVar3,uVar7,uVar6);
  return uVar3;
}


