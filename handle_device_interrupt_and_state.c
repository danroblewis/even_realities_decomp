/*
 * Function: handle_device_interrupt_and_state
 * Entry:    00061464
 * Prototype: undefined handle_device_interrupt_and_state()
 */


undefined4 handle_device_interrupt_and_state(int param_1,uint param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint interrupt_source_id;
  uint uVar5;
  bool bVar6;
  undefined1 uStack_19;
  uint local_18;
  undefined1 *local_14;
  
  uVar4 = param_2 & 0x1f;
  uVar5 = (uint)*(byte *)(*(int *)(param_1 + 4) + 0xc);
  interrupt_source_id = uVar4 | uVar5 << 5;
  if (param_3 == 0x200000) {
    disable_interrupt_source(interrupt_source_id);
  }
  else {
    local_14 = (undefined1 *)0x0;
    puVar1 = local_14;
    if (param_3 == 0x400000) {
      bVar6 = param_4 == 0x2000000;
      if (bVar6) {
        param_4 = 4;
      }
      bVar3 = (byte)param_4;
      if (!bVar6) {
        bVar3 = 5;
      }
      local_18 = (uint)bVar3;
    }
    else {
      if (param_4 == 0x6000000) {
        bVar3 = 3;
      }
      else {
        bVar6 = param_4 != 0x2000000;
        if (bVar6) {
          param_4 = 1;
        }
        bVar3 = (byte)param_4;
        if (!bVar6) {
          bVar3 = 2;
        }
      }
      local_18 = (uint)bVar3;
      if ((-1 < (int)((*(uint *)(*(int *)(param_1 + 4) + 8) >> (param_2 & 0xff)) << 0x1f)) &&
         (param_3 == 0x1400000)) {
        if (uVar5 == 0) {
          if (-1 < (int)((0xffffffffU >> uVar4) << 0x1f)) goto LAB_000614f4;
          iVar2 = 0x50842500;
        }
        else {
          if ((uVar5 != 1) || (-1 < (int)((0xffffU >> uVar4) << 0x1f))) {
LAB_000614f4:
            DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","nrf_gpio_pin_present_check(*p_pin)",
                         "WEST_TOPDIR/modules/hal/nordic/nrfx/hal/nrf_gpio.h",0x32f);
                    /* WARNING: Subroutine does not return */
            trigger_system_service_call("WEST_TOPDIR/modules/hal/nordic/nrfx/hal/nrf_gpio.h",0x32f);
          }
          iVar2 = 0x50842800;
        }
        if (-1 < *(int *)(iVar2 + (uVar4 + 0x80) * 4) << 0x1f) {
          iVar2 = get_interrupt_configuration_data(interrupt_source_id,&uStack_19);
          puVar1 = &uStack_19;
          if ((iVar2 == 0xbad0004) &&
             (iVar2 = process_device_bit_flags(&uStack_19), iVar2 != 0xbad0000)) {
            return 0xfffffff4;
          }
        }
      }
    }
    local_14 = puVar1;
    iVar2 = configure_interrupt_with_priority_and_callback(interrupt_source_id,0,&local_18);
    if (iVar2 != 0xbad0000) {
      return 0xffffffea;
    }
    process_hardware_interrupt_and_set_priority(interrupt_source_id,1);
  }
  return 0;
}


