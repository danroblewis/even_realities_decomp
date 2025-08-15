/*
 * Function: validate_sha256_context_with_error_handling
 * Entry:    00079f50
 * Prototype: undefined validate_sha256_context_with_error_handling()
 */


int validate_sha256_context_with_error_handling(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_ac;
  undefined1 auStack_a8 [144];
  
  if (0 < *(int *)(param_1 + 0xf8)) {
    iVar3 = *(int *)(param_1 + 0x10c);
    local_ac = 0;
    iVar1 = (**(code **)(param_1 + 0xfc))
                      (*(undefined4 *)(param_1 + 0x100),auStack_a8,0x90,&local_ac);
    if (iVar1 != 0) goto LAB_00079f98;
    if (local_ac != 0) {
      iVar2 = reset_sha256_context_with_parameter_handling(param_1,0,auStack_a8);
      if (iVar2 != 0) {
        return iVar2;
      }
      *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + local_ac;
    }
    if (iVar3 == 1) goto LAB_00079f98;
  }
  iVar1 = -0x3d;
LAB_00079f98:
  clear_memory_buffer_with_zero_fill(auStack_a8,0x90);
  return iVar1;
}


