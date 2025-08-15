/*
 * Function: FUN_0007a9fc
 * Entry:    0007a9fc
 * Prototype: undefined FUN_0007a9fc()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0007a9fc(undefined4 param_1,int param_2,uint param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_20;
  uint local_1c [2];
  
  if (((param_2 == 0) || (param_4 == (uint *)0x0)) || (param_3 == 0)) {
    return 0xffffffff;
  }
  iVar1 = FUN_0007a404(HARDWARE_DEVICE_HANDLE,0xffffffff);
  if (iVar1 != 0) {
    FUN_000795b4("Fail to acquire mutex\n");
  }
  if ((_DAT_50846e34 & 1) == 0) {
    iVar1 = FUN_0007a464();
    if (iVar1 != 0) {
      FUN_000795b4("Fail to increase PM counter\n");
    }
    iVar1 = FUN_0007af78(&DAT_2000d3b4);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_0007a9c8(&DAT_2000d3b0,&DAT_2000d3b4,0,0,&local_20,local_1c,&DAT_2000d3dc,0),
       iVar1 == 0)) {
      if (local_1c[0] <= param_3) {
        param_3 = local_1c[0];
      }
      *param_4 = param_3;
      copy_memory_safe(param_2,local_20 + 8);
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffff;
    }
    iVar1 = FUN_0007a464(1);
    if (iVar1 != 0) {
      FUN_000795b4("Fail to decrease PM counter\n");
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  FUN_000797f4(&DAT_2000d3dc,0x220);
  FUN_000797f4(&DAT_2000d3b0,4);
  FUN_000797f4(&DAT_2000d3b4,0x28);
  iVar1 = FUN_0007a414(HARDWARE_DEVICE_HANDLE);
  if (iVar1 == 0) {
    return uVar2;
  }
  FUN_000795b4("Fail to unlock mutex\n");
  return uVar2;
}


