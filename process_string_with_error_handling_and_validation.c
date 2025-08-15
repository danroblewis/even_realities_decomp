/*
 * Function: process_string_with_error_handling_and_validation
 * Entry:    00077914
 * Prototype: undefined process_string_with_error_handling_and_validation()
 */


int process_string_with_error_handling_and_validation
              (undefined1 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 *local_80 [2];
  int local_78;
  undefined2 local_74;
  undefined2 local_72;
  undefined1 *local_70;
  int local_6c;
  
  puVar1 = DAT_20002d20;
  if (param_2 < 0) {
    iVar2 = -1;
    *DAT_20002d20 = 0x8b;
  }
  else {
    local_74 = 0x208;
    if (param_2 == 0) {
      local_78 = 0;
    }
    else {
      local_78 = param_2 + -1;
    }
    local_72 = 0xffff;
    local_80[0] = param_1;
    local_70 = param_1;
    local_6c = local_78;
    iVar2 = process_printf_format_comprehensive(DAT_20002d20,local_80,param_3);
    if (iVar2 + 1 < 0 != SCARRY4(iVar2,1)) {
      *puVar1 = 0x8b;
    }
    if (param_2 != 0) {
      *local_80[0] = 0;
    }
  }
  return iVar2;
}


