/*
 * Function: setup_device_buffer_with_size
 * Entry:    0004e1ac
 * Prototype: undefined setup_device_buffer_with_size()
 */


int setup_device_buffer_with_size
              (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_28;
  char *local_24;
  int iStack_20;
  int local_1c;
  undefined4 uStack_18;
  
  if (param_1[2] == 0) {
    return 0;
  }
  iVar5 = param_1[5] + param_1[4];
  uStack_18 = param_4;
  iVar1 = setup_device_buffer_with_flags(param_1,param_1[2] + -1 + iVar5);
  if (iVar1 < 0) {
    local_24 = "stream_flash_erase_page err %d offset=0x%08zx";
  }
  else {
    uVar2 = FUN_0007f064(param_1[3]);
    iVar1 = param_1[2] - uVar2 * ((uint)param_1[2] / uVar2);
    if (iVar1 != 0) {
      iVar1 = uVar2 - iVar1;
      iVar3 = (**(code **)(*(int *)(param_1[3] + 8) + 0xc))();
      fill_memory_buffer(*param_1 + param_1[2],*(undefined1 *)(iVar3 + 4),iVar1);
    }
    iVar1 = (**(code **)(*(int *)(param_1[3] + 8) + 4))
                      (param_1[3],iVar5,*param_1,param_1[2] + iVar1);
    if (iVar1 == 0) {
      uVar2 = 0;
      if (param_1[7] == 0) {
LAB_0004e23e:
        param_1[4] = param_1[4] + param_1[2];
        param_1[2] = 0;
        return 0;
      }
      for (; uVar2 < (uint)param_1[2]; uVar2 = uVar2 + 1) {
        *(byte *)(*param_1 + uVar2) = ~*(byte *)(*param_1 + uVar2);
      }
      iVar1 = (*(code *)**(undefined4 **)(param_1[3] + 8))(param_1[3],iVar5);
      if (iVar1 == 0) {
        iVar1 = (*(code *)param_1[7])(*param_1,param_1[2],iVar5);
        if (iVar1 == 0) goto LAB_0004e23e;
        local_24 = "callback failed: %d";
      }
      else {
        local_24 = "flash read failed: %d";
      }
      local_28 = 3;
      uVar4 = 0x1840;
      goto LAB_0004e1e4;
    }
    local_24 = "flash_write error %d offset=0x%08zx";
  }
  local_28 = 4;
  uVar4 = 0x2040;
  local_1c = iVar5;
LAB_0004e1e4:
  iStack_20 = iVar1;
  process_and_compress_data_with_validation(&DAT_000880d8,uVar4,&local_28,0);
  return iVar1;
}


