/*
 * Function: FUN_0007c360
 * Entry:    0007c360
 * Prototype: undefined FUN_0007c360()
 */


undefined4 FUN_0007c360(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = load_sys_setting();
  if (((iVar1 == 0) && (iVar1 = load_usr_setting(param_1), iVar1 == 0)) &&
     (iVar1 = load_burial_point(param_1), iVar1 == 0)) {
    iVar1 = get_work_mode();
    FUN_0007d1b8(*(undefined4 *)(iVar1 + 0xff0));
  }
  return 0;
}


