/*
 * Function: release_resource_mutex_if_valid
 * Entry:    0007c8c4
 * Prototype: undefined release_resource_mutex_if_valid()
 */


void release_resource_mutex_if_valid(int param_1)

{
  if (param_1 != 0) {
    mutex_unlock(*(undefined4 *)(param_1 + 0x10));
  }
  return;
}


