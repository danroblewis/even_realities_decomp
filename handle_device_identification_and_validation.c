/*
 * Function: handle_device_identification_and_validation
 * Entry:    00062930
 * Prototype: undefined handle_device_identification_and_validation()
 */


undefined4 handle_device_identification_and_validation(int param_1)

{
  int iVar1;
  undefined4 local_40;
  char *local_3c;
  uint uStack_38;
  ushort local_30;
  ushort local_2e;
  undefined1 local_2c;
  byte local_2b;
  undefined1 local_2a;
  undefined1 *local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_18;
  char *local_14;
  
  iVar1 = check_driver_ready(**(undefined4 **)(param_1 + 4));
  if (iVar1 == 0) {
    local_14 = "Bus device is not ready";
LAB_0006294c:
    local_18 = 2;
    process_and_compress_data_with_validation(&DAT_00088250,0x1040,&local_18,0);
  }
  else {
    iVar1 = FUN_000847d8(*(undefined4 *)(param_1 + 4),0x7e,&local_30,iVar1);
    if (iVar1 != 0) {
      return 0xffffffea;
    }
    uStack_38 = (uint)local_30;
    if (uStack_38 == 0x5449) {
      iVar1 = FUN_000847d8(*(undefined4 *)(param_1 + 4),0x7f,&local_30,0);
      if (iVar1 != 0) {
        return 0xffffffea;
      }
      uStack_38 = (uint)local_30;
      if (uStack_38 == 0x3001) {
        iVar1 = FUN_000847d8(*(undefined4 *)(param_1 + 4),1,&local_2e,0);
        if (iVar1 == 0) {
          local_2b = (byte)((local_2e & 63999) >> 8) | 6;
          local_2a = (undefined1)(local_2e & 63999);
          iVar1 = **(int **)(param_1 + 4);
          local_28 = &local_2c;
          local_24 = 3;
          local_2c = 1;
          local_20 = 2;
          iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 8))
                            (iVar1,&local_28,1,(short)(*(int **)(param_1 + 4))[1]);
          if (iVar1 == 0) {
            return 0;
          }
        }
        local_14 = "Failed to set mode to continuous conversion";
        goto LAB_0006294c;
      }
      local_3c = "Bad device id 0x%x";
    }
    else {
      local_3c = "Bad manufacturer id 0x%x";
    }
    local_40 = 3;
    process_and_compress_data_with_validation(&DAT_00088250,0x1840,&local_40);
  }
  return 0xffffffea;
}


