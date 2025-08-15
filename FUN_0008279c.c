/*
 * Function: FUN_0008279c
 * Entry:    0008279c
 * Prototype: undefined FUN_0008279c()
 */


undefined4 FUN_0008279c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)ble_memory_allocation_utility(param_1 + 0xc,1,param_3,param_4,param_4);
  *puVar1 = 1;
  return 0;
}


