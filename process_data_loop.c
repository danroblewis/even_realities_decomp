/*
 * Function: process_data_loop
 * Entry:    00080ab4
 * Prototype: undefined __stdcall process_data_loop(undefined4 data_ctx, undefined4 data_ptr)
 */


void process_data_loop(int data_ctx,undefined4 data_ptr)

{
  int iVar1;
  undefined4 extraout_r1;
  int local_b8;
  undefined1 *puStack_b4;
  undefined1 *local_b0;
  undefined1 auStack_ac [56];
  undefined1 auStack_74 [100];
  
  while (iVar1 = thunk_FUN_000727ac(data_ctx + 0x10,data_ptr,0,0), iVar1 != 0) {
    local_b0 = auStack_ac;
    local_b8 = data_ctx;
    puStack_b4 = auStack_74;
    process_data_with_parameter_validation_alt2(&local_b8,iVar1);
    data_ptr = extraout_r1;
  }
  return;
}


