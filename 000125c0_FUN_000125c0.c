/*
 * Function: FUN_000125c0
 * Entry:    000125c0
 * Prototype: undefined FUN_000125c0()
 */


void FUN_000125c0(undefined4 *param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined8 uVar2;
  
  uVar2 = float_divide_64bit((int)((ulonglong)param_2 * (ulonglong)param_3),
                             param_3 * ((int)param_2 >> 0x1f) +
                             (int)((ulonglong)param_2 * (ulonglong)param_3 >> 0x20));
  FUN_0000d8f8((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0x63f11168,0x3f91df46);
  uVar2 = FUN_0000ec34();
  uVar1 = FUN_0000e1a4((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),"size",0);
  *param_1 = uVar1;
  param_1[1] = extraout_r2;
  return;
}


