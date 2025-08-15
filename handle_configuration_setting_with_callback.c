/*
 * Function: handle_configuration_setting_with_callback
 * Entry:    0004e744
 * Prototype: undefined handle_configuration_setting_with_callback()
 */


int handle_configuration_setting_with_callback
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  resource_mutex_acquire(&DAT_20003868,param_2,0xffffffff,0xffffffff,param_4);
  if (DAT_2001d44f == '\0') {
    initialize_buffer_structure_with_callback();
    iVar1 = handle_configuration_setting_with_flags();
    if (iVar1 != 0) goto LAB_0004e76c;
    DAT_2001d44f = '\x01';
  }
  iVar1 = 0;
LAB_0004e76c:
  mutex_unlock(&DAT_20003868);
  return iVar1;
}


