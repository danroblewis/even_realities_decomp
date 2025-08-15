/*
 * Function: handle_hardware_interrupt_with_validation_alt
 * Entry:    00085206
 * Prototype: undefined handle_hardware_interrupt_with_validation_alt()
 */


/* WARNING: Removing unreachable block (ram,0x0006657a) */
/* WARNING: Removing unreachable block (ram,0x00066582) */
/* WARNING: Removing unreachable block (ram,0x0006658c) */
/* WARNING: Removing unreachable block (ram,0x0006659c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int handle_hardware_interrupt_with_validation_alt
              (uint param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (HARDWARE_CONFIGURATION_AND_INTERRUPT_MANAGER == '\0') {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","m_cb.state != NRFX_QSPI_STATE_UNINITIALIZED",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_qspi.c",0x7a);
    uVar4 = 0x7a;
  }
  else {
    if (param_1 != 0) {
      if (((param_1 & 0xe0000000) == 0x20000000) && ((param_1 & 3) == 0)) {
        if ((HARDWARE_CONFIGURATION_AND_INTERRUPT_MANAGER == '\x01') ||
           ((HARDWARE_CONFIGURATION_AND_INTERRUPT_MANAGER == '\x03' &&
            (HARDWARE_INTERRUPT_TRIGGER_REGISTER != '\0')))) {
          HARDWARE_INTERRUPT_FLAG_REGISTER = 0;
          _DAT_5002b504 = param_3;
          _DAT_5002b508 = param_1;
          _DAT_5002b50c = param_2;
          if (HARDWARE_CONFIGURATION_AND_INTERRUPT_HANDLING_MANAGER == 0) {
            if ((HARDWARE_INTERRUPT_TRIGGER_REGISTER != '\0') ||
               (iVar3 = trigger_hardware_interrupt_operation(1), iVar3 != 0xbad0007)) {
              _DAT_5002b100 = 0;
              _DAT_5002b004 = 1;
              iVar3 = wait_for_hardware_interrupt_flag_with_timeout();
              return iVar3;
            }
          }
          else {
            uVar1 = param_1;
            uVar4 = param_2;
            uVar2 = param_3;
            if (HARDWARE_INTERRUPT_CONFIG_REGISTER == 0) {
              HARDWARE_CONFIGURATION_AND_INTERRUPT_MANAGER = '\x03';
              _DAT_5002b100 = HARDWARE_INTERRUPT_CONFIG_REGISTER;
              _DAT_5002b304 = 1;
              HARDWARE_INTERRUPT_CONFIG_REGISTER = param_1;
              DAT_2000b358 = param_2;
              DAT_2000b360 = param_3;
              if (HARDWARE_INTERRUPT_TRIGGER_REGISTER == '\0') {
                trigger_hardware_interrupt_operation(0);
                uVar1 = HARDWARE_INTERRUPT_STATUS_REGISTER;
                uVar4 = HARDWARE_INTERRUPT_CONFIGURATION;
                uVar2 = INTERRUPT_CONFIGURATION_COPY_BUFFER;
              }
              else {
                _DAT_5002b004 = 1;
                uVar1 = HARDWARE_INTERRUPT_STATUS_REGISTER;
                uVar4 = HARDWARE_INTERRUPT_CONFIGURATION;
                uVar2 = INTERRUPT_CONFIGURATION_COPY_BUFFER;
              }
            }
            INTERRUPT_CONFIGURATION_COPY_BUFFER = uVar2;
            HARDWARE_INTERRUPT_CONFIGURATION = uVar4;
            HARDWARE_INTERRUPT_STATUS_REGISTER = uVar1;
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


