/*
 * Function: generate_cryptographic_key_with_validation
 * Entry:    0007a05c
 * Prototype: undefined generate_cryptographic_key_with_validation()
 */


int generate_cryptographic_key_with_validation(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_40 [32];
  
  if (param_3 < 0x21) {
    iVar1 = (*CRYPTOGRAPHIC_KEY_DERIVATION_COUNTER_2)(param_1 + 0x110);
    if (iVar1 == 0) {
      iVar3 = 0x101;
      iVar1 = *(int *)(param_1 + 0xf8);
      do {
        if (iVar1 == 0) {
          iVar1 = -0x40;
          goto LAB_0007a0a4;
        }
        while( true ) {
          iVar1 = validate_sha256_context_with_error_handling(param_1);
          if (iVar1 != 0) goto LAB_0007a0a4;
          iVar1 = *(int *)(param_1 + 0xf8);
          if (iVar1 < 1) break;
          if (((*(uint *)(param_1 + 0x108) <= *(uint *)(param_1 + 0x104)) &&
              (*(int *)(param_1 + 0x10c) == 1)) && (0x1f < *(uint *)(param_1 + 0x104))) {
            iVar3 = param_1 + 4;
            fill_memory_buffer(auStack_40,0,0x20);
            iVar1 = extract_sha256_hash_result_with_type_validation(iVar3,auStack_40);
            if (iVar1 == 0) {
              clear_memory_buffer_with_fixed_size(iVar3);
              reset_sha256_context_with_error_handling(iVar3);
              iVar1 = set_sha256_context_parameter_with_validation(iVar3,0);
              if (((iVar1 == 0) &&
                  (iVar1 = update_sha256_data_with_buffer_management(iVar3,auStack_40,0x20),
                  iVar1 == 0)) &&
                 (iVar1 = calculate_sha256_hash_with_integrated_context_management
                                    (auStack_40,0x20,auStack_40,0), iVar1 == 0)) {
                iVar2 = *(int *)(param_1 + 0xf8);
                iVar3 = iVar2;
                if (0 < iVar2) {
                  iVar3 = 0;
                }
                if (0 < iVar2) {
                  *(int *)(param_1 + 0x104) = iVar3;
                }
                memcpy(param_2,auStack_40,param_3);
              }
            }
            goto LAB_0007a0a4;
          }
          iVar3 = iVar3 + -1;
          if (iVar3 == 0) goto LAB_0007a09e;
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
LAB_0007a09e:
      iVar1 = -0x3c;
LAB_0007a0a4:
      clear_memory_buffer_with_zero_fill(auStack_40,0x20);
      iVar3 = (*CRYPTOGRAPHIC_KEY_DERIVATION_COUNTER)(param_1 + 0x110);
      if (iVar3 != 0) {
        iVar1 = -0x1e;
      }
    }
  }
  else {
    iVar1 = -0x3c;
  }
  return iVar1;
}


