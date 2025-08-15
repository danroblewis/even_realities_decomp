/*
 * Function: FUN_0007f192
 * Entry:    0007f192
 * Prototype: undefined FUN_0007f192()
 */


undefined4 FUN_0007f192(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = 0;
  uStack_14 = 0;
  local_1c = 0;
  resource_mutex_acquire(&DAT_20003868,param_2,0xffffffff,0xffffffff);
  for (piVar2 = (int *)DAT_2000a104; piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
    (**(code **)piVar2[1])(piVar2,&local_1c);
  }
  uVar1 = handle_configuration_setting_with_validation(0);
  mutex_unlock(&DAT_20003868);
  return uVar1;
}


