/*
 * Function: process_audio_data_with_mutex_protection
 * Entry:    0007118c
 * Prototype: undefined process_audio_data_with_mutex_protection()
 */


void process_audio_data_with_mutex_protection(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  ushort local_26;
  undefined4 local_24;
  int *local_20;
  undefined4 uStack_1c;
  
  iVar4 = *(int *)(*param_1 + 0x24);
  iVar5 = iVar4 + 0x58;
  manage_ble_connection_state_wrapper_alt(iVar5);
  if (*(int *)(*(int *)(iVar4 + 0xa0) + 0x18) != 0) {
    z_spin_lock_valid(iVar5);
    return;
  }
  piVar1 = (int *)consume_audio_buffer_descriptor(*(undefined4 *)(iVar4 + 0xa4),&local_24,&local_26)
  ;
  z_spin_lock_valid(iVar5);
  if (piVar1 == (int *)0x0) {
    return;
  }
  do {
    piVar1[2] = (uint)local_26;
    manage_ble_connection_state_wrapper_alt(iVar5);
    iVar2 = find_audio_buffer_descriptor(iVar4,0,piVar1[1],0xffffffff);
    z_spin_lock_valid(iVar5);
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 0x28) + 1;
      bVar6 = iVar3 == 0;
      if (bVar6) {
        iVar3 = *piVar1;
      }
      if (bVar6) {
        *(int *)(iVar2 + 0x28) = iVar3;
      }
      iVar2 = (**(code **)(iVar2 + 0x2c))
                        (iVar2,piVar1 + 4,(short)piVar1[3],*piVar1,*(undefined4 *)(iVar2 + 0x3c));
      if (iVar2 < 0) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","status >= 0",
                     "WEST_TOPDIR/modules/lib/open-amp/open-amp/lib/rpmsg/rpmsg_virtio.c",0x245);
                    /* WARNING: Subroutine does not return */
        trigger_system_service_call
                  ("WEST_TOPDIR/modules/lib/open-amp/open-amp/lib/rpmsg/rpmsg_virtio.c",0x245);
      }
    }
    manage_ble_connection_state_wrapper_alt(iVar5);
    if (-1 < piVar1[2]) {
      if (*(int *)(*(int *)(iVar4 + 0xa0) + 0x18) != 0) {
LAB_00071244:
        check_buffer_underrun_and_callback(*(undefined4 *)(iVar4 + 0xa4));
        z_spin_lock_valid(iVar5);
        return;
      }
      uStack_1c = local_24;
      local_20 = piVar1;
      process_audio_buffer_descriptors(*(undefined4 *)(iVar4 + 0xa4),&local_20,0,1,piVar1);
    }
    if ((*(int *)(*(int *)(iVar4 + 0xa0) + 0x18) != 0) ||
       (piVar1 = (int *)consume_audio_buffer_descriptor
                                  (*(undefined4 *)(iVar4 + 0xa4),&local_24,&local_26),
       piVar1 == (int *)0x0)) goto LAB_00071244;
    z_spin_lock_valid(iVar5);
  } while( true );
}


