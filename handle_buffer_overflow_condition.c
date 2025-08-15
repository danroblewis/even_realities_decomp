/*
 * Function: handle_buffer_overflow_condition
 * Entry:    00086f00
 * Prototype: undefined handle_buffer_overflow_condition()
 */


void handle_buffer_overflow_condition
               (undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  
  if ((int)param_3 < 0) {
    process_string_with_maximum_value_and_validation(param_1,param_4,&stack0x00000000);
  }
  else {
    uVar1 = printf_format_string_wrapper
                      (param_1,param_3,param_4,&stack0x00000000,param_1,&stack0x00000000,param_3);
    if ((-1 < (int)uVar1) && (param_3 <= uVar1)) {
      uVar5 = handle_buffer_overflow();
      iVar3 = (int)((ulonglong)uVar5 >> 0x20);
      iVar2 = execute_resource_function_with_mutex_protection
                        ((int)uVar5,(int)*(short *)(iVar3 + 0xe));
      bVar4 = -1 < iVar2;
      if (bVar4) {
        uVar1 = *(int *)(iVar3 + 0x54) + iVar2;
      }
      else {
        uVar1 = *(ushort *)(iVar3 + 0xc) & 0xffffefff;
      }
      if (bVar4) {
        *(uint *)(iVar3 + 0x54) = uVar1;
      }
      if (!bVar4) {
        *(short *)(iVar3 + 0xc) = (short)uVar1;
      }
                    /* WARNING: Could not recover jumptable at 0x00086f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)0x86f35)();
      return;
    }
  }
  return;
}


