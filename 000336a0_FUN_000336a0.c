/*
 * Function: FUN_000336a0
 * Entry:    000336a0
 * Prototype: undefined FUN_000336a0()
 */


undefined4 FUN_000336a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_14;
  undefined4 uStack_10;
  
  if (param_1 != 0) {
    local_14 = param_2;
    uStack_10 = param_3;
    iVar1 = FUN_00071c20(&DAT_200037b8,&local_14,0,0,param_1);
    if (iVar1 == 0) {
      if (((code *)**(undefined4 **)(param_1 + 8) != (code *)0x0) &&
         (iVar1 = (*(code *)**(undefined4 **)(param_1 + 8))(param_1,0x33385,param_1), iVar1 == 0)) {
        iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))(param_1,local_14,0x100,10000);
        if (iVar1 == 0) {
          return 0;
        }
        DEBUG_PRINT("Failed to enable RX\n");
        return 0xfffffffd;
      }
      DEBUG_PRINT("Failed to set callback\n");
      return 0xfffffffe;
    }
    DEBUG_PRINT("Failed to alloc slab\n");
  }
  return 0xffffffff;
}


