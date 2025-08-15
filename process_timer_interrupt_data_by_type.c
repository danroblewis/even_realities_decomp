/*
 * Function: process_timer_interrupt_data_by_type
 * Entry:    000641e4
 * Prototype: undefined process_timer_interrupt_data_by_type()
 */


int process_timer_interrupt_data_by_type(char *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined4 local_20;
  int iStack_1c;
  int iStack_18;
  
  iVar3 = param_3;
  if (param_2 != 0) {
    iVar3 = param_2;
  }
  local_20 = param_1;
  iStack_1c = param_2;
  iStack_18 = param_3;
  iVar2 = validate_timer_interrupt_data_and_parameters(param_1,&local_20);
  if (iVar2 != 0) {
    return iVar2;
  }
  uVar4 = (uint)local_20 & 0xff;
  if (uVar4 == 2) {
    if (param_2 == 0) {
      FUN_0007efd4(param_1,0,*(undefined4 *)(param_1 + 8));
      return 3;
    }
  }
  else {
    if (uVar4 == 3) {
      if (param_2 != 0) {
        return 0;
      }
      iVar2 = process_timer_interrupt_data_with_validation(param_1);
      if (iVar2 != 0) {
        return iVar2;
      }
      if (iVar3 == 0) {
        uVar5 = 2;
      }
      else {
        iVar3 = FUN_00084e58(param_1);
        uVar5 = 3;
        if (iVar3 != 0) {
          return iVar3;
        }
      }
      cVar1 = *param_1;
      bVar6 = false;
      if ((cVar1 != '\x04') && (cVar1 != '\x02')) {
        if (cVar1 == '\x01') {
          bVar6 = true;
        }
        else {
          bVar6 = cVar1 == '\b';
        }
      }
      iVar3 = process_timer_interrupt_data_loop_with_validation(param_1,uVar5,bVar6);
      return iVar3;
    }
    if (uVar4 == 1) {
      if (param_2 == 0) {
        return 0;
      }
      if (local_20._3_1_ != '\x03') {
        return 0;
      }
      iVar3 = FUN_00084e58(param_1);
      return iVar3;
    }
    process_data_loop_with_validation_and_retry
              ("WEST_TOPDIR/bootloader/mcuboot/boot/bootutil/src/bootutil_public.c",0x22e,
               "boot_set_next","0");
  }
  return 4;
}


