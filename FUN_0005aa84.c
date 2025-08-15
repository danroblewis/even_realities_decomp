/*
 * Function: FUN_0005aa84
 * Entry:    0005aa84
 * Prototype: undefined FUN_0005aa84(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined2 param_5, undefined4 param_6, undefined4 param_7)
 */


void FUN_0005aa84(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 short param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  short local_2a [3];
  
  if (param_5 == 0) {
    param_5 = -1;
  }
  if (param_1 <= DAT_2000ff3c) {
    piVar3 = &DAT_00088058;
    uVar6 = 1;
    while( true ) {
      if (&DAT_00088070 < piVar3) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                     "static_svc <= _bt_gatt_service_static_list_end",
                     "WEST_TOPDIR/zephyr/subsys/bluetooth/host/gatt.c",0x7d7);
        DEBUG_PRINT2("\tunexpected list end location\n");
                    /* WARNING: Subroutine does not return */
        assertion_failure("WEST_TOPDIR/zephyr/subsys/bluetooth/host/gatt.c",0x7d7);
      }
      if (&UNK_0008806f < piVar3) break;
      if (piVar3[1] + uVar6 < param_1) {
        uVar2 = piVar3[1] + uVar6 & 0xffff;
      }
      else {
        for (uVar5 = 0; uVar2 = uVar6 + uVar5 & 0xffff, uVar5 < (uint)piVar3[1]; uVar5 = uVar5 + 1)
        {
          iVar1 = FUN_00082712(uVar5 * 0x14 + *piVar3,uVar2,param_1,param_2,param_3,param_4,&param_5
                               ,param_6,param_7);
          if (iVar1 == 0) {
            return;
          }
        }
      }
      piVar3 = piVar3 + 2;
      uVar6 = uVar2;
    }
  }
  local_2a[0] = param_5;
  if (DAT_2000af08 != (uint *)0x0) {
    puVar4 = DAT_2000af08;
    do {
      uVar6 = *puVar4;
      if (uVar6 == 0) {
LAB_0005ab44:
        for (; uVar6 < puVar4[-1]; uVar6 = uVar6 + 1) {
          iVar1 = uVar6 * 0x14 + puVar4[-2];
          iVar1 = FUN_00082712(iVar1,*(undefined2 *)(iVar1 + 0x10),param_1,param_2,param_3,param_4,
                               local_2a,param_6,param_7);
          if (iVar1 == 0) {
            return;
          }
        }
      }
      else if (param_1 < *(ushort *)(*(int *)(uVar6 - 8) + 0x10)) {
        uVar6 = 0;
        goto LAB_0005ab44;
      }
      puVar4 = (uint *)*puVar4;
    } while (puVar4 != (uint *)0x0);
  }
  return;
}


