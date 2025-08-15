/*
 * Function: clear_work_mode_flags_and_buffers
 * Entry:    0007ce60
 * Prototype: undefined __stdcall clear_work_mode_flags_and_buffers(undefined4 clear_mode, undefined4 unused_param2, undefined4 unused_param3, undefined4 buffer_fill_value)
 */


void clear_work_mode_flags_and_buffers
               (int clear_mode,undefined4 param_2,undefined4 param_3,undefined4 buffer_fill_value)

{
  int iVar1;
  
  iVar1 = get_work_mode();
  *(undefined1 *)(iVar1 + 0xe9) = 0;
  iVar1 = get_work_mode();
  *(undefined1 *)(iVar1 + 0xea) = 0;
  iVar1 = get_work_mode();
  *(undefined1 *)(iVar1 + 0xcc) = 0;
  iVar1 = get_work_mode();
  *(undefined1 *)(iVar1 + 0xcd) = 0;
  iVar1 = get_work_mode();
  *(undefined1 *)(iVar1 + 0xce) = 0;
  iVar1 = get_work_mode();
  *(undefined1 *)(iVar1 + 0xcf) = 0;
  if (clear_mode == 0) {
    iVar1 = get_work_mode();
    *(undefined1 *)(*(int *)(iVar1 + 0x100c) + 7) = 0xd;
  }
  else {
    iVar1 = get_work_mode();
    *(undefined1 *)(*(int *)(iVar1 + 0x100c) + 7) = 0;
    iVar1 = get_work_mode();
    **(undefined1 **)(iVar1 + 0x100c) = 0;
  }
  iVar1 = get_work_mode();
  fill_memory_buffer(*(int *)(iVar1 + 0x100c) + 8,0,399,buffer_fill_value);
  return;
}


