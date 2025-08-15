/*
 * Function: load_system_settings_and_initialize_work_mode
 * Entry:    0007c360
 * Prototype: undefined load_system_settings_and_initialize_work_mode()
 */


undefined4 load_system_settings_and_initialize_work_mode(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = load_sys_setting();
  if (((iVar1 == 0) && (iVar1 = load_usr_setting(param_1), iVar1 == 0)) &&
     (iVar1 = load_burial_point(param_1), iVar1 == 0)) {
    iVar1 = get_work_mode();
    initialize_work_mode_data_structure(*(undefined4 *)(iVar1 + 0xff0));
  }
  return 0;
}


