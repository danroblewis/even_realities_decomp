/*
 * Function: handle_audio_data_processing_with_validation
 * Entry:    00071294
 * Prototype: undefined handle_audio_data_processing_with_validation(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined4 param_6)
 */


undefined4
handle_audio_data_processing_with_validation
          (int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
          undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int local_24;
  
  local_24 = param_4;
  iVar1 = wait_for_and_consume_audio_buffer
                    (param_1,&local_24,param_6,param_4,param_1,param_2,param_3);
  if (iVar1 == 0) {
    uVar4 = 0xfffff82e;
  }
  else {
    piVar2 = *(int **)(param_1 + 0xac);
    if (local_24 <= param_5) {
      param_5 = local_24;
    }
    uVar5 = iVar1 - *piVar2;
    if ((uint)piVar2[2] <= uVar5) {
      uVar5 = 0xffffffff;
    }
    iVar3 = write_data_to_circular_buffer(piVar2,uVar5,param_4,param_5);
    if (param_5 != iVar3) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","status == len",
                   "WEST_TOPDIR/modules/lib/open-amp/open-amp/lib/rpmsg/rpmsg_virtio.c",0x207);
                    /* WARNING: Subroutine does not return */
      trigger_system_service_call
                ("WEST_TOPDIR/modules/lib/open-amp/open-amp/lib/rpmsg/rpmsg_virtio.c",0x207);
    }
    uVar4 = handle_audio_data_processing_with_validation(param_1,param_2,param_3,iVar1,param_5);
  }
  return uVar4;
}


