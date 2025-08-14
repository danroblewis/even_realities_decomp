/*
 * Function: copy_to_work_mode_buffer
 * Entry:    0007c1aa
 * Prototype: undefined __stdcall copy_to_work_mode_buffer(undefined4 src_data, undefined4 data_length, undefined1 terminator_byte, undefined4 buffer_select)
 */


undefined4
copy_to_work_mode_buffer
          (undefined4 src_data,undefined4 data_length,undefined1 terminator_byte,int buffer_select)

{
  int iVar1;
  undefined4 uVar2;
  
  if (buffer_select == 0) {
    iVar1 = get_work_mode();
    uVar2 = *(undefined4 *)(iVar1 + 0x1028);
  }
  else {
    iVar1 = get_work_mode();
    uVar2 = *(undefined4 *)(iVar1 + 0x1024);
  }
  iVar1 = memcpy(uVar2,src_data,data_length);
  *(undefined1 *)(iVar1 + 0x200) = terminator_byte;
  return 0;
}


