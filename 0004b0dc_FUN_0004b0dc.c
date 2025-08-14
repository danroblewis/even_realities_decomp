/*
 * Function: FUN_0004b0dc
 * Entry:    0004b0dc
 * Prototype: undefined FUN_0004b0dc()
 */


undefined4 FUN_0004b0dc(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0004b01c();
  if ((int)uVar2 < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    param_1 = param_1 * 0x28;
    resource_mutex_acquire
              (param_1 + 0x20002554,(int)((ulonglong)uVar2 >> 0x20),0xffffffff,0xffffffff);
    uVar1 = (**(code **)(*(int *)(&DAT_2000254c + param_1) + 4))
                      (*(undefined4 *)(&DAT_20002548 + param_1),param_2,param_3);
    mutex_unlock(param_1 + 0x20002554);
  }
  return uVar1;
}


