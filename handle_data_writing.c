/*
 * Function: handle_data_writing
 * Entry:    00023230
 * Prototype: undefined handle_data_writing()
 */


undefined4 handle_data_writing(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  (**(code **)(param_1 + 0x1040))
            ("dashboard_ts",*(undefined4 *)(param_1 + 0xfec),0x6a,*(code **)(param_1 + 0x1040),
             param_4);
  (**(code **)(param_1 + 0x1040))("countdown_ts",*(undefined4 *)(param_1 + 0xff0),7);
  (**(code **)(param_1 + 0x1040))("brightness_level",param_1 + 0xed5,1);
  (**(code **)(param_1 + 0x1040))("3dof_enable",param_1 + 0xf60,1);
  (**(code **)(param_1 + 0x1040))("display_mode",param_1 + 0xfea,1);
  (**(code **)(param_1 + 0x1040))("wakeup_angle",param_1 + 0xef4,1);
  (**(code **)(param_1 + 0x1040))("first_enter_flag",param_1 + 0x1050,4);
  return 0;
}


