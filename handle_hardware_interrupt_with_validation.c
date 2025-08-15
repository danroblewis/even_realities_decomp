/*
 * Function: handle_hardware_interrupt_with_validation
 * Entry:    00085200
 * Prototype: undefined handle_hardware_interrupt_with_validation()
 */


/* WARNING: Removing unreachable block (ram,0x00066590) */
/* WARNING: Removing unreachable block (ram,0x00066586) */
/* WARNING: Removing unreachable block (ram,0x0006657e) */
/* WARNING: Removing unreachable block (ram,0x0006659e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int handle_hardware_interrupt_with_validation(uint param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (DAT_2000b378 == '\0') {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","m_cb.state != NRFX_QSPI_STATE_UNINITIALIZED",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_qspi.c",0x7a);
    uVar4 = 0x7a;
  }
  else {
    if (param_1 != 0) {
      if (((param_1 & 0xe0000000) == 0x20000000) && ((param_1 & 3) == 0)) {
        if ((DAT_2000b378 == '\x01') || ((DAT_2000b378 == '\x02' && (DAT_2000b380 != '\0')))) {
          DAT_2000b381 = 0;
          _DAT_5002b510 = param_3;
          _DAT_5002b514 = param_1;
          _DAT_5002b518 = param_2;
          if (DAT_2000b348 == 0) {
            if ((DAT_2000b380 != '\0') ||
               (iVar3 = trigger_hardware_interrupt_operation(1), iVar3 != 0xbad0007)) {
              _DAT_5002b100 = 0;
              _DAT_5002b008 = 1;
              iVar3 = wait_for_hardware_interrupt_flag_with_timeout();
              return iVar3;
            }
          }
          else {
            uVar1 = param_1;
            uVar4 = param_2;
            uVar2 = param_3;
            if (DAT_2000b350 == 0) {
              DAT_2000b378 = '\x02';
              _DAT_5002b100 = DAT_2000b350;
              _DAT_5002b304 = 1;
              DAT_2000b350 = param_1;
              DAT_2000b358 = param_2;
              DAT_2000b360 = param_3;
              if (DAT_2000b380 == '\0') {
                trigger_hardware_interrupt_operation(0);
                uVar1 = DAT_2000b354;
                uVar4 = DAT_2000b35c;
                uVar2 = DAT_2000b364;
              }
              else {
                _DAT_5002b008 = 1;
                uVar1 = DAT_2000b354;
                uVar4 = DAT_2000b35c;
                uVar2 = DAT_2000b364;
              }
            }
            DAT_2000b364 = uVar2;
            DAT_2000b35c = uVar4;
            DAT_2000b354 = uVar1;
            iVar3 = 0xbad0000;
          }
        }
        else {
          iVar3 = 0xbad000b;
        }
      }
      else {
        iVar3 = 0xbad000a;
      }
      return iVar3;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","p_buffer != ((void *)0)",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_qspi.c",0x7b);
    uVar4 = 0x7b;
  }
                    /* WARNING: Subroutine does not return */
  trigger_system_service_call("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_qspi.c",uVar4);
}


