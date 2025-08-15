/*
 * Function: handle_bluetooth_privacy_mode_management_with_state_management_and_callback
 * Entry:    00055614
 * Prototype: undefined handle_bluetooth_privacy_mode_management_with_state_management_and_callback()
 */


undefined4
handle_bluetooth_privacy_mode_management_with_state_management_and_callback
          (byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 4);
  if ((-1 < (int)(uVar3 << 0x15)) &&
     ((iVar2 = *(int *)(param_1 + 0x10), iVar2 == 0 || ((uVar3 & 1) != 0)))) {
    if ((uint)BLUETOOTH_HCI_COMMAND_PROCESSOR_STATE <= (uint)*param_1) {
      return 0;
    }
    iVar1 = memcmp_byte_arrays((int)&BLUETOOTH_HCI_COMMAND_BUFFER + (uint)*param_1 * 7,&DAT_000f2b3a
                               ,7,(uint)BLUETOOTH_HCI_COMMAND_PROCESSOR_STATE,param_4);
    if (iVar1 == 0) {
      return 0;
    }
    if ((((uVar3 & 1) == 0) && (DAT_20002070 < 9)) && (*(uint *)(param_1 + 8) < 0xa0)) {
      return 0;
    }
    if ((uVar3 & 0x30) == 0) {
      if ((-1 < (int)(uVar3 << 0x1b)) && (iVar2 != 0)) goto LAB_00055662;
    }
    else {
      if (iVar2 == 0) {
        return 0;
      }
      if (-1 < (int)(uVar3 << 0x1b)) goto LAB_00055662;
    }
    if (((*(uint *)(param_1 + 8) <= *(uint *)(param_1 + 0xc)) && (0x1f < *(uint *)(param_1 + 8))) &&
       (*(uint *)(param_1 + 0xc) < 0x4001)) {
LAB_00055662:
      if ((uVar3 & 0x38000) != 0x38000) {
        return 1;
      }
      return 0;
    }
  }
  return 0;
}


