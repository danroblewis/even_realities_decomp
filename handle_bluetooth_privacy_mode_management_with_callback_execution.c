/*
 * Function: handle_bluetooth_privacy_mode_management_with_callback_execution
 * Entry:    00055350
 * Prototype: undefined handle_bluetooth_privacy_mode_management_with_callback_execution()
 */


uint handle_bluetooth_privacy_mode_management_with_callback_execution(int param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_34 [5];
  undefined4 local_20;
  char *local_1c;
  undefined4 *puVar3;
  
  if ((int)((uint)DAT_200020c2 << 0x1f) < 0) {
    iVar1 = process_data_with_initialization_and_validation(0xfc09,0,local_34);
    if (iVar1 == 0) {
      uVar5 = (uint)*(byte *)(*(int *)(local_34[0] + 0xc) + 1);
      puVar4 = (undefined4 *)(*(int *)(local_34[0] + 0xc) + 2);
      iVar1 = 0;
      if (param_2 <= uVar5) {
        uVar5 = param_2;
      }
      for (; iVar1 < (int)uVar5; iVar1 = iVar1 + 1) {
        puVar2 = puVar4;
        puVar6 = (undefined4 *)(iVar1 * 0x16 + param_1);
        do {
          puVar3 = puVar2 + 1;
          puVar7 = puVar6 + 1;
          *puVar6 = *puVar2;
          puVar2 = puVar3;
          puVar6 = puVar7;
        } while (puVar3 != puVar4 + 5);
        *(undefined2 *)puVar7 = *(undefined2 *)puVar3;
        puVar4 = (undefined4 *)((int)puVar4 + 0x16);
      }
      FUN_0005f24c();
      if (uVar5 != 0) {
        return uVar5;
      }
      local_1c = "No static addresses stored in controller";
      local_20 = 2;
      FUN_0008104a(&DAT_00088150,0x1080,&local_20);
      return 0;
    }
    local_1c = "Failed to read static addresses";
  }
  else {
    local_1c = "Read Static Addresses command not available";
  }
  local_20 = 2;
  FUN_0008104a(&DAT_00088150,0x1080,&local_20);
  return 0;
}


