/*
 * Function: process_data_with_callback_execution_alt6
 * Entry:    00052bf8
 * Prototype: undefined process_data_with_callback_execution_alt6()
 */


/* WARNING: Removing unreachable block (ram,0x0006091c) */
/* WARNING: Removing unreachable block (ram,0x00052c06) */

undefined4 process_data_with_callback_execution_alt6(uint param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uStack_1c;
  uint uStack_18;
  
  puVar5 = &DAT_00087b90;
  uStack_1c = param_1;
  uStack_18 = param_2;
  if (param_1 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","buffer != ((void *)0)",
                 "WEST_TOPDIR/nrf/drivers/entropy/entropy_cc3xx.c",0x19);
                    /* WARNING: Subroutine does not return */
    assertion_failure("WEST_TOPDIR/nrf/drivers/entropy/entropy_cc3xx.c",0x19);
  }
  uVar4 = 0x400;
  uVar3 = 0;
  while( true ) {
    if (param_2 <= uVar3) {
      if (param_2 == uVar3) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0x16;
      }
      return uVar2;
    }
    if (param_2 - uVar3 < 0x400) {
      uVar4 = param_2 - uVar3;
    }
    iVar1 = check_system_status_with_parameter_validation(0,param_1 + uVar3,uVar4,&uStack_1c,puVar5)
    ;
    if ((iVar1 != 0) || (uStack_1c != uVar4)) break;
    uVar3 = uVar3 + uVar4;
  }
  return 0xffffffea;
}


