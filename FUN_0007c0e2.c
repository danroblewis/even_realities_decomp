/*
 * Function: FUN_0007c0e2
 * Entry:    0007c0e2
 * Prototype: undefined FUN_0007c0e2()
 */


void FUN_0007c0e2(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  
  local_18 = param_1;
  local_14 = param_2;
  uStack_10 = param_3;
  iVar1 = get_bluetooth_manager();
  local_14 = CONCAT31(local_14._1_3_,2);
  local_18 = param_1;
  iVar2 = enqueue_uid_drop_package_(&local_18);
  if (iVar2 == 0) {
    z_spin_lock_valid(iVar1 + 0x200);
  }
  return;
}


