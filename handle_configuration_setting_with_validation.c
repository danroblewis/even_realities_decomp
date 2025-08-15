/*
 * Function: handle_configuration_setting_with_validation
 * Entry:    0004e6a8
 * Prototype: undefined handle_configuration_setting_with_validation()
 */


int handle_configuration_setting_with_validation
              (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  code *extraout_r3;
  code *extraout_r3_00;
  undefined **ppuVar3;
  int *piVar4;
  int iVar5;
  
  ppuVar3 = (undefined **)&DAT_000882b0;
  iVar5 = 0;
  while( true ) {
    if (&PTR_LAB_00051fd8_1_00088328 < ppuVar3) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","ch <= _settings_handler_static_list_end",
                   "WEST_TOPDIR/zephyr/subsys/settings/src/settings.c",0xf4);
      DEBUG_PRINT2("\tunexpected list end location\n");
                    /* WARNING: Subroutine does not return */
      assertion_failure("WEST_TOPDIR/zephyr/subsys/settings/src/settings.c",0xf4);
    }
    if (&UNK_00088327 < ppuVar3) break;
    if (((param_1 != 0) && (iVar1 = FUN_0007f1a0(*ppuVar3,param_1,0), iVar1 == 0)) ||
       (((code *)ppuVar3[3] == (code *)0x0 || (iVar1 = (*(code *)ppuVar3[3])(), iVar5 != 0)))) {
      iVar1 = iVar5;
    }
    ppuVar3 = ppuVar3 + 5;
    iVar5 = iVar1;
  }
  pcVar2 = (code *)&DAT_2000a10c;
  for (piVar4 = (int *)DAT_2000a10c; piVar4 != (int *)0x0; piVar4 = (int *)*piVar4) {
    if ((((param_1 == 0) ||
         (iVar1 = FUN_0007f1a0(piVar4[-5],param_1,0,pcVar2,param_4), pcVar2 = extraout_r3,
         iVar1 != 0)) && (pcVar2 = (code *)piVar4[-2], pcVar2 != (code *)0x0)) &&
       (iVar1 = (*pcVar2)(), pcVar2 = extraout_r3_00, iVar5 == 0)) {
      iVar5 = iVar1;
    }
  }
  return iVar5;
}


