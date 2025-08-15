/*
 * Function: check_driver_ready_status
 * Entry:    00083cb4
 * Prototype: undefined check_driver_ready_status()
 */


undefined4 check_driver_ready_status(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = check_driver_ready(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  if (iVar1 == 0) {
    uVar2 = 0xffffffed;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


