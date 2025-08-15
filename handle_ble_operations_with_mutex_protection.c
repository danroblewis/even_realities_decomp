/*
 * Function: handle_ble_operations_with_mutex_protection
 * Entry:    00083e0e
 * Prototype: undefined handle_ble_operations_with_mutex_protection(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined1 param_5)
 */


int handle_ble_operations_with_mutex_protection(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  resource_mutex_acquire(uVar2,param_2,0xffffffff,0xffffffff,param_1,param_2);
  iVar1 = call_ble_callback_wrapper(param_1,param_2,param_3,&stack0xffffffdf);
  if (iVar1 == 0) {
    iVar1 = pack_parameters_and_call_callback(param_1,param_2,param_3);
  }
  mutex_unlock(uVar2);
  return iVar1;
}


