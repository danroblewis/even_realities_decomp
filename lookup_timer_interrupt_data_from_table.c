/*
 * Function: lookup_timer_interrupt_data_from_table
 * Entry:    000836d4
 * Prototype: undefined lookup_timer_interrupt_data_from_table()
 */


uint lookup_timer_interrupt_data_from_table
               (uint param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int extraout_r2;
  int extraout_r2_00;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  iVar1 = set_buffer_bytes_when_condition_met(param_1,&uStack_20);
  if (iVar1 == 1) {
    iVar1 = setup_device_buffer_with_timer_validation
                      (*(undefined4 *)(&DAT_0008bb90 + param_1 * 8),&uStack_20);
  }
  if (iVar1 == 0) {
    iVar1 = setup_device_buffer_with_timer_validation
                      (*(undefined4 *)(&DAT_0008bb94 + param_1 * 8),&uStack_18);
    if (iVar1 == 1) {
      uStack_18 = CONCAT31(uStack_18._1_3_,3);
      uStack_18 = CONCAT13(3,(undefined3)uStack_18);
    }
    else if (iVar1 != 0) goto LAB_000641c0;
    iVar1 = 0;
    uVar5 = uStack_20 & 0xff;
    uVar6 = uStack_18 & 0xff;
    puVar3 = &DAT_000f694f;
    do {
      iVar2 = validate_parameter_conditions(*puVar3,uVar5);
      iVar4 = extraout_r2;
      if (((((iVar2 != 0) &&
            (iVar2 = validate_parameter_conditions(*(undefined1 *)(extraout_r2 + 1),uVar6),
            iVar4 = extraout_r2_00, iVar2 != 0)) &&
           ((*(char *)(extraout_r2_00 + 2) == '\x04' ||
            (uStack_20._3_1_ == *(char *)(extraout_r2_00 + 2))))) &&
          ((*(char *)(extraout_r2_00 + 3) == '\x04' ||
           (uStack_18._3_1_ == *(char *)(extraout_r2_00 + 3))))) &&
         ((*(char *)(extraout_r2_00 + 4) == '\x04' ||
          (uStack_20._2_1_ == *(char *)(extraout_r2_00 + 4))))) {
        if (*(byte *)(extraout_r2_00 + 5) - 2 < 3) {
          return (uint)*(byte *)(extraout_r2_00 + 5);
        }
        goto LAB_000641c0;
      }
      iVar1 = iVar1 + 1;
      puVar3 = (undefined1 *)(iVar4 + 6);
    } while (iVar1 != 3);
    uVar5 = 1;
  }
  else {
LAB_000641c0:
    uVar5 = 0xff;
  }
  return uVar5;
}


