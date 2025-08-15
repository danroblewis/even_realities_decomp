/*
 * Function: handle_bluetooth_privacy_mode_management_with_validation_and_callback
 * Entry:    000553f8
 * Prototype: undefined handle_bluetooth_privacy_mode_management_with_validation_and_callback()
 */


int handle_bluetooth_privacy_mode_management_with_validation_and_callback(void)

{
  int iVar1;
  undefined4 extraout_r2;
  byte bVar2;
  undefined1 local_30;
  undefined1 auStack_2f [7];
  undefined1 auStack_28 [24];
  
  if (DAT_20002007 == 0) {
    iVar1 = handle_bluetooth_privacy_mode_management_with_callback_execution(auStack_28,1);
    DAT_20002007 = (byte)iVar1;
    if (iVar1 != 0) {
      bVar2 = 0;
      do {
        if ((uint)DAT_20002007 <= (uint)bVar2) {
          return 0;
        }
        FUN_00080fba(auStack_2f,auStack_28 + (uint)bVar2 * 0x16);
        local_30 = 1;
        iVar1 = bluetooth_hci_command_processing_with_state_management_and_parameter
                          (extraout_r2,&local_30);
        bVar2 = bVar2 + 1;
      } while (iVar1 == 0);
      return iVar1;
    }
  }
  iVar1 = handle_bluetooth_privacy_mode_management_with_callback(0);
  return iVar1;
}


