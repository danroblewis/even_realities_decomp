/*
 * Function: initialize_hardware_state_and_memory_buffers
 * Entry:    00065940
 * Prototype: undefined initialize_hardware_state_and_memory_buffers()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 initialize_hardware_state_and_memory_buffers(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (HARDWARE_STATE_AND_MEMORY_BUFFER == '\0') {
    fill_memory_buffer(&CALLBACK_STATE_AND_BITMAP_UPDATE_FLAG,0,0x60);
    uVar3 = 0;
    do {
      iVar1 = validate_index_and_calculate_offset(uVar3 & 0xff);
      if (iVar1 - 0x100U >> 2 == 0x1f) {
        *(undefined4 *)(iVar1 + 0x5000d000) = 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != 8);
    _DAT_5000d17c = 0;
    process_data_with_parameter_validation_alt4(0xd);
    _DAT_5000d304 = 0x80000000;
    uVar2 = 0xbad0000;
    HARDWARE_STATE_AND_MEMORY_BUFFER = '\x01';
    DAT_20002c34 = 1;
  }
  else {
    uVar2 = 0xbad0005;
  }
  return uVar2;
}


