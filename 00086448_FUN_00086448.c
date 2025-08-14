/*
 * Function: FUN_00086448
 * Entry:    00086448
 * Prototype: undefined FUN_00086448()
 */


undefined4 FUN_00086448(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((int)((ulonglong)param_2 * (ulonglong)param_3 >> 0x20) == 0) {
    iVar1 = FUN_00075944(0,(int)((ulonglong)param_2 * (ulonglong)param_3),param_3,param_4,param_4);
    if (iVar1 == 0) {
      uVar2 = 0xfffffff4;
    }
    else {
      FUN_00086420(param_1,iVar1,param_2,param_3);
      *(undefined1 *)(param_1 + 0x30) = 1;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffffea;
  }
  return uVar2;
}


