/*
 * Function: validate_sha256_context_with_state_checking
 * Entry:    0007af78
 * Prototype: undefined validate_sha256_context_with_state_checking()
 */


int validate_sha256_context_with_state_checking(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_14;
  
  local_14 = 0x1c;
  iVar1 = initialize_sha256_constants_with_fallback_values(param_1,&local_14);
  if (iVar1 == 0) {
    if (local_14 == 0x1c) {
      iVar1 = param_1[1];
      iVar2 = param_1[2];
      if (iVar2 != 0) {
        iVar2 = 1;
      }
      if (iVar1 != 0) {
        iVar1 = 1;
      }
      uVar3 = iVar2 << 2 | iVar1 << 1;
      if (*param_1 != 0) {
        uVar3 = uVar3 | 1;
      }
      param_1[7] = 1;
      if (param_1[3] != 0) {
        param_1[8] = uVar3 | 8;
        param_1[9] = 0;
        return 0;
      }
      param_1[8] = uVar3;
      param_1[9] = 0;
      if (uVar3 != 0) {
        return 0;
      }
      iVar1 = 0xf00c0e;
    }
    else {
      iVar1 = 0xf00c37;
    }
    fill_memory_buffer_with_zeros_wrapper(param_1,0x1c);
  }
  return iVar1;
}


