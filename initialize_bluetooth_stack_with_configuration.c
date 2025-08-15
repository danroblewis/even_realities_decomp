/*
 * Function: initialize_bluetooth_stack_with_configuration
 * Entry:    0004bc28
 * Prototype: undefined __stdcall initialize_bluetooth_stack_with_configuration(undefined4 stack_context, undefined4 config_data, undefined4 config_flags, undefined4 init_data)
 */


void initialize_bluetooth_stack_with_configuration
               (int stack_context,undefined4 *config_data,undefined4 param_3,undefined4 init_data)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  fill_memory_buffer(stack_context,0,0x20,init_data,init_data);
  *(undefined4 *)(stack_context + 0x1c) = config_data[3];
  *(undefined4 *)(stack_context + 0x18) = config_data[2];
  *(undefined4 *)(stack_context + 0x20) = *config_data;
  uVar3 = config_data[1];
  *(undefined4 *)(stack_context + 0x28) = 0;
  *(uint *)(stack_context + 0x24) = uVar3;
  uVar2 = config_data[4];
  if ((uVar3 != 0) && ((uVar3 - 1 & uVar3) == 0)) {
    uVar2 = uVar2 | 1;
  }
  *(uint *)(stack_context + 0x10) = uVar2;
  iVar1 = setup_bluetooth_stack(stack_context + 0x2c,0,1);
  if (iVar1 != 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","err == 0","WEST_TOPDIR/zephyr/lib/os/mpsc_pbuf.c",
                 0x2e);
                    /* WARNING: Subroutine does not return */
    assertion_failure("WEST_TOPDIR/zephyr/lib/os/mpsc_pbuf.c",0x2e);
  }
  return;
}


