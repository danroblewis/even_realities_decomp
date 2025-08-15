/*
 * Function: process_data_with_callback_execution_alt3
 * Entry:    00051ac0
 * Prototype: undefined process_data_with_callback_execution_alt3()
 */


uint process_data_with_callback_execution_alt3(undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint local_68;
  undefined1 *local_64;
  undefined4 local_60;
  undefined1 auStack_5c [8];
  char acStack_54 [24];
  undefined1 local_3c;
  undefined1 auStack_38 [36];
  
  local_60 = 0x20;
  local_64 = auStack_38;
  iVar1 = process_data_with_validation_and_callback_alt4(param_2,auStack_5c,local_64,&local_68);
  if (iVar1 == 0) {
    iVar1 = FUN_0008634c(param_1,0xf);
    uVar2 = 0;
    if (((((iVar1 != 0) && (iVar1 = call_with_parameters(param_1,"image",5), iVar1 != 0)) &&
         (iVar1 = FUN_00086320(param_1,param_2 >> 1), iVar1 != 0)) &&
        ((iVar1 = call_with_parameters(param_1,"slot",4), iVar1 != 0 &&
         (iVar1 = FUN_00086320(param_1,param_2 & 1), iVar1 != 0)))) &&
       (iVar1 = call_with_parameters(param_1,"version",7), iVar1 != 0)) {
      iVar1 = process_data_with_validation_and_parameter_alt4(auStack_5c,acStack_54);
      if (iVar1 < 0) {
        uVar4 = 5;
        pcVar3 = "<???>";
      }
      else {
        local_3c = 0;
        uVar4 = calculate_string_length(acStack_54);
        pcVar3 = acStack_54;
      }
      iVar1 = call_with_parameters(param_1,pcVar3,uVar4);
      if (((((iVar1 != 0) && (iVar1 = call_with_parameters(param_1,"hash",4), iVar1 != 0)) &&
           ((iVar1 = FUN_00086338(param_1,&local_64), iVar1 != 0 &&
            (((iVar1 = call_with_parameters(param_1,"bootable",8), iVar1 != 0 &&
              (iVar1 = FUN_00086378(param_1,((local_68 ^ 0x10) << 0x1b) >> 0x1f), iVar1 != 0)) &&
             (iVar1 = call_with_parameters(param_1,"pending",7), iVar1 != 0)))))) &&
          ((iVar1 = FUN_00086378(param_1,(param_3 << 0x1e) >> 0x1f), iVar1 != 0 &&
           (iVar1 = call_with_parameters(param_1,"confirmed",9), iVar1 != 0)))) &&
         ((iVar1 = FUN_00086378(param_1,(param_3 << 0x1d) >> 0x1f), iVar1 != 0 &&
          (((iVar1 = call_with_parameters(param_1,"active",6), iVar1 != 0 &&
            (iVar1 = FUN_00086378(param_1,param_3 & 1), iVar1 != 0)) &&
           ((iVar1 = call_with_parameters(param_1,"permanent",9), iVar1 != 0 &&
            (iVar1 = FUN_00086378(param_1,(param_3 << 0x1c) >> 0x1f), iVar1 != 0)))))))) {
        uVar2 = thunk_FUN_00086354(param_1,0xf);
      }
    }
    uVar2 = uVar2 & 1;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


