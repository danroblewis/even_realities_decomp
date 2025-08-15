/*
 * Function: reset_sha256_context_with_parameter_handling
 * Entry:    00079ed4
 * Prototype: undefined reset_sha256_context_with_parameter_handling()
 */


int reset_sha256_context_with_parameter_handling
              (int *param_1,undefined1 param_2,undefined1 *param_3,uint param_4)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 auStack_40 [36];
  
  if (param_4 < 0x21) {
    local_43 = (undefined1)param_4;
    puVar3 = param_3;
  }
  else {
    puVar3 = auStack_40;
    iVar1 = calculate_sha256_hash_with_integrated_context_management(param_3,param_4,puVar3,0);
    if (iVar1 != 0) goto LAB_00079f16;
    local_43 = 0x20;
    param_4 = 0x20;
  }
  piVar2 = param_1 + 1;
  local_44 = param_2;
  if ((*param_1 != 0) || (iVar1 = set_sha256_context_parameter_with_validation(piVar2), iVar1 == 0))
  {
    *param_1 = 1;
    iVar1 = update_sha256_data_with_buffer_management(piVar2,&local_44,2);
    if (iVar1 == 0) {
      iVar1 = update_sha256_data_with_buffer_management(piVar2,puVar3,param_4);
    }
  }
LAB_00079f16:
  FUN_00079808(auStack_40,0x20);
  return iVar1;
}


