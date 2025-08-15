/*
 * Function: execute_callback_with_context_validation
 * Entry:    0004cbec
 * Prototype: undefined __stdcall execute_callback_with_context_validation(undefined4 callback_context, undefined4 output_buffer, undefined4 validation_flag)
 */


undefined4
execute_callback_with_context_validation
          (int callback_context,int *output_buffer,int validation_flag)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_18;
  char *local_14;
  
  if (((callback_context == 0) || (output_buffer == (int *)0x0)) || (validation_flag == 0)) {
    local_14 = "Invalid instance, endpoint or configuration";
    local_18 = 2;
    process_and_compress_data_with_validation_wrapper(&DAT_000881d8,0x1040,&local_18);
    uVar1 = 0xffffffea;
  }
  else {
    iVar2 = *(int *)(callback_context + 8);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0xc) != 0)) {
      *output_buffer = callback_context;
                    /* WARNING: Could not recover jumptable at 0x0004cc40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(iVar2 + 0xc))(callback_context,output_buffer + 1);
      return uVar1;
    }
    local_14 = "Invalid backend configuration";
    local_18 = 2;
    process_and_compress_data_with_validation_wrapper(&DAT_000881d8,0x1040,&local_18);
    uVar1 = 0xfffffffb;
  }
  return uVar1;
}


