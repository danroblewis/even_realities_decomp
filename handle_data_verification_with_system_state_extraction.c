/*
 * Function: handle_data_verification_with_system_state_extraction
 * Entry:    0007c28e
 * Prototype: undefined handle_data_verification_with_system_state_extraction()
 */


undefined4 handle_data_verification_with_system_state_extraction(int param_1)

{
  undefined1 uVar1;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined4 local_2c;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined4 local_24;
  undefined2 local_20;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined4 local_19;
  undefined4 local_15;
  undefined1 local_11;
  
  local_30 = *(undefined1 *)(param_1 + 0xfea);
  local_2e = *(undefined1 *)(param_1 + 0xef4);
  local_19 = 0;
  local_2f = *(undefined1 *)(param_1 + 0xed5);
  local_15 = 0;
  local_2d = *(undefined1 *)(param_1 + 0xf60);
  local_11 = 0;
  local_2c = *(undefined4 *)(param_1 + 0xf6c);
  local_28 = *(undefined1 *)(param_1 + 0xf98);
  local_27 = *(undefined1 *)(param_1 + 0x1070);
  local_20 = *(undefined2 *)(param_1 + 0x106d);
  local_26 = *(undefined1 *)(param_1 + 0x108d);
  local_25 = *(undefined1 *)(param_1 + 0xec0);
  local_24 = *(undefined4 *)(param_1 + 0x1069);
  local_1e = *(undefined1 *)(param_1 + 0x106f);
  local_1d = *(undefined1 *)(param_1 + 0xef5);
  local_1c = *(undefined1 *)(param_1 + 0x108f);
  local_1b = *(undefined1 *)(param_1 + 0x1090);
  local_1a = *(undefined1 *)(param_1 + 0x1091);
  uVar1 = get_system_ready_state();
  local_19._0_2_ = CONCAT11(*(undefined1 *)(param_1 + 0xec1),uVar1);
  local_15._1_3_ = (undefined3)*(undefined4 *)(param_1 + 0xf68);
  local_11 = (undefined1)((uint)*(undefined4 *)(param_1 + 0xf68) >> 0x18);
  handle_data_verification(0x134000,&local_30,0x20);
  return 0;
}


