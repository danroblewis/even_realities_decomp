/*
 * Function: FUN_0004e540
 * Entry:    0004e540
 * Prototype: undefined FUN_0004e540()
 */


undefined ** FUN_0004e540(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *extraout_r3;
  undefined4 *extraout_r3_00;
  undefined **ppuVar3;
  int *piVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *local_24;
  undefined4 uStack_20;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  ppuVar5 = (undefined **)0x0;
  ppuVar3 = (undefined **)&DAT_000882b0;
  uVar8 = param_1;
  local_24 = param_2;
  uStack_20 = param_3;
  while( true ) {
    if (&PTR_LAB_00051fd8_1_00088328 < ppuVar3) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","ch <= _settings_handler_static_list_end",
                   "WEST_TOPDIR/zephyr/subsys/settings/src/settings.c",0x94);
      DEBUG_PRINT2("\tunexpected list end location\n");
                    /* WARNING: Subroutine does not return */
      FUN_0007e2ec("WEST_TOPDIR/zephyr/subsys/settings/src/settings.c",0x94);
    }
    if (&UNK_00088327 < ppuVar3) break;
    puVar6 = *ppuVar3;
    iVar1 = FUN_0007f1a0(param_1,puVar6,&local_24);
    if (((iVar1 != 0) &&
        ((ppuVar5 == (undefined **)0x0 || (iVar1 = FUN_0007f1a0(puVar6,*ppuVar5,0), iVar1 != 0))))
       && (ppuVar5 = ppuVar3, param_2 != (undefined4 *)0x0)) {
      *param_2 = local_24;
    }
    ppuVar3 = ppuVar3 + 5;
  }
  puVar2 = &DAT_2000a10c;
  for (piVar4 = (int *)DAT_2000a10c; piVar4 != (int *)0x0; piVar4 = (int *)*piVar4) {
    uVar7 = piVar4[-5];
    iVar1 = FUN_0007f1a0(param_1,uVar7,&local_24,puVar2,uVar8);
    puVar2 = extraout_r3;
    if ((iVar1 != 0) &&
       (((puVar2 = extraout_r3, ppuVar5 == (undefined **)0x0 ||
         (iVar1 = FUN_0007f1a0(uVar7,*ppuVar5,0), puVar2 = extraout_r3_00, iVar1 != 0)) &&
        (ppuVar5 = (undefined **)(piVar4 + -5), param_2 != (undefined4 *)0x0)))) {
      *param_2 = local_24;
      puVar2 = local_24;
    }
  }
  return ppuVar5;
}


