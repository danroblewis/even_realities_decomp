/*
 * Function: process_data_with_parameter_validation_alt4
 * Entry:    00051d8c
 * Prototype: undefined process_data_with_parameter_validation_alt4()
 */


int process_data_with_parameter_validation_alt4(uint param_1,int param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined4 local_40;
  char *local_3c;
  int iStack_38;
  uint local_34;
  uint uStack_30;
  int local_2c;
  char local_25;
  undefined4 local_24;
  
  uVar2 = param_1;
  if (3 < param_1) {
    uVar2 = process_data_with_validation_and_callback_alt3();
  }
  iVar5 = (int)uVar2 >> 1;
  uVar2 = shift_left_by_one(iVar5);
  local_25 = '\0';
  uVar3 = process_state_machine(iVar5,&local_25);
  if (param_2 == 0) {
    if (uVar2 == param_1) {
      return 0x21;
    }
    if (local_25 == '\x01') {
      if (uVar3 == param_1) {
        return 0;
      }
      return 0x1c;
    }
    if (local_25 == '\0') {
      bVar6 = uVar3 == param_1;
    }
    else {
      bVar6 = local_25 == '\x02';
    }
LAB_00051e08:
    if (bVar6) {
      return 0x1c;
    }
    goto LAB_00051de4;
  }
  iVar4 = return_zero();
  if (iVar4 == iVar5) {
    if (local_25 == '\x01') {
      return 0x1c;
    }
    if (local_25 == '\0') {
      if (uVar3 == param_1) {
        return 0;
      }
      bVar6 = uVar2 == param_1;
      goto LAB_00051e08;
    }
LAB_00051de0:
    if (local_25 != '\x02') goto LAB_00051de4;
  }
  else {
    if (uVar2 == param_1) {
      return 0x20;
    }
    if (local_25 == '\x01') {
      return 0x1c;
    }
    if (local_25 != '\0') goto LAB_00051de0;
  }
  if (uVar3 == param_1) {
    return 0;
  }
LAB_00051de4:
  uVar1 = process_data_with_state_management_alt3(param_1);
  iVar5 = setup_device_buffer_with_validation(uVar1,&local_24);
  if (iVar5 == 0) {
    iVar5 = FUN_000641e4(local_24,uVar2 == param_1,param_2);
    if (iVar5 != 0) {
      local_3c = "Faled boot_set_next with code %d, for slot %d, with active slot %d and confirm %d"
      ;
      local_40 = 6;
      iStack_38 = iVar5;
      local_34 = param_1;
      uStack_30 = uVar2;
      local_2c = param_2;
      process_and_compress_data_with_validation(&DAT_00088208,0x3040,&local_40,0);
      if (iVar5 == 1) {
        iVar5 = 0xc;
      }
      else if (iVar5 == 4) {
        iVar5 = 0x1d;
      }
      else if (iVar5 == 3) {
        iVar5 = 0x17;
      }
      else {
        iVar5 = 1;
      }
    }
    FUN_0007ef7e(local_24);
    return iVar5;
  }
  return 10;
}


