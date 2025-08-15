/*
 * Function: process_audio_buffer_with_timestamp
 * Entry:    00085a9c
 * Prototype: undefined process_audio_buffer_with_timestamp()
 */


void process_audio_buffer_with_timestamp(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int local_20;
  undefined4 uStack_1c;
  
  uVar2 = *(uint *)(param_2 + -8);
  manage_ble_connection_state_wrapper_alt(param_1 + 0x58);
  uVar1 = get_audio_buffer_timestamp(*(undefined4 *)(param_1 + 0xa4),uVar2 & 0xffff);
  if (*(int *)(*(int *)(param_1 + 0xa0) + 0x18) == 0) {
    local_20 = param_2 + -0x10;
    uStack_1c = uVar1;
    process_audio_buffer_descriptors(*(undefined4 *)(param_1 + 0xa4),&local_20,0,1,local_20);
  }
  check_buffer_underrun_and_callback(*(undefined4 *)(param_1 + 0xa4));
  z_spin_lock_valid(param_1 + 0x58);
  return;
}


