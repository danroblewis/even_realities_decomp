/*
 * Function: FUN_0005a9f4
 * Entry:    0005a9f4
 * Prototype: undefined FUN_0005a9f4()
 */


uint FUN_0005a9f4(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = param_1;
  if ((param_1 != 0) && (uVar1 = (uint)*(ushort *)(param_1 + 0x10), uVar1 == 0)) {
    puVar2 = &DAT_00088058;
    uVar4 = 1;
    while( true ) {
      if (&DAT_00088070 < puVar2) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                     "static_svc <= _bt_gatt_service_static_list_end",
                     "WEST_TOPDIR/zephyr/subsys/bluetooth/host/gatt.c",0x713);
        DEBUG_PRINT2("\tunexpected list end location\n");
                    /* WARNING: Subroutine does not return */
        assertion_failure("WEST_TOPDIR/zephyr/subsys/bluetooth/host/gatt.c",0x713);
      }
      if (&UNK_0008806f < puVar2) break;
      uVar7 = *puVar2;
      uVar6 = puVar2[1];
      if ((param_1 < uVar7) || ((uVar6 * 0x14 + uVar7) - 0x14 < param_1)) {
        uVar3 = uVar4 + uVar6 & 0xffff;
      }
      else {
        for (uVar5 = 0; uVar3 = uVar4 + uVar5 & 0xffff, uVar5 != uVar6; uVar5 = uVar5 + 1) {
          if (param_1 == uVar5 * 0x14 + uVar7) {
            return uVar3;
          }
        }
      }
      puVar2 = puVar2 + 2;
      uVar4 = uVar3;
    }
  }
  return uVar1;
}


