/*
 * Function: get_interrupt_configuration_data
 * Entry:    000658e8
 * Prototype: undefined get_interrupt_configuration_data()
 */


undefined4 get_interrupt_configuration_data(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","p_channel",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_gpiote.c",0x265);
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call
              ("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_gpiote.c",0x265);
  }
  iVar1 = get_shifted_bit_status_from_offset();
  if (iVar1 == 0) {
    uVar2 = 0xbad0004;
  }
  else {
    uVar3 = calculate_bit_offset_with_lookup(param_1);
    uVar2 = 0xbad0000;
    *(byte *)((ulonglong)uVar3 >> 0x20) =
         (byte)((ushort)*(undefined2 *)((int)&DAT_20002bc0 + ((int)uVar3 + 8) * 2) >> 0xd);
  }
  return uVar2;
}


