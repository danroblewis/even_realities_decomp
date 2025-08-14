/*
 * Function: opt3007_get_max_lux
 * Entry:    00010a68
 * Prototype: undefined __stdcall opt3007_get_max_lux(undefined4 luminance_curve_b0, undefined4 luminance_curve_b1, undefined4 luminance_curve_b2, undefined4 luminance_curve_b3)
 */


int opt3007_get_max_lux(undefined4 luminance_curve_b0,undefined4 luminance_curve_b1,
                       undefined4 luminance_curve_b2,undefined4 luminance_curve_b3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  if (DAT_20018da1 == '\0') {
    iVar2 = -1;
  }
  else {
    iVar2 = FUN_0002e648(0);
    if (1 < iVar2 + 1U) {
      iVar3 = get_work_mode();
      lVar1 = (longlong)iVar2 * (longlong)*(int *)(iVar3 + 0xfb0);
      uVar5 = float_divide_64bit((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
      uVar5 = float_multiply_64bit
                        ((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0,0x412e8480,luminance_curve_b0,
                         luminance_curve_b1,luminance_curve_b2,luminance_curve_b3);
      uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          iVar3 = get_work_mode();
          DEBUG_PRINT("%s(): opt3007_get_max_lux %d %f luminance_curve_a0 %d\n",
                      "opt3007_get_max_lux",iVar2,*(undefined4 *)(iVar3 + 0xfb0),(int)uVar5,uVar4,
                      *(undefined4 *)(iVar3 + 0xfb0));
        }
        else {
          iVar3 = get_work_mode();
          handle_heartbeat("%s(): opt3007_get_max_lux %d %f luminance_curve_a0 %d\n",
                           "opt3007_get_max_lux",iVar2,*(undefined4 *)(iVar3 + 0xfb0),uVar5,
                           *(undefined4 *)(iVar3 + 0xfb0));
        }
      }
      iVar2 = float_to_int((int)uVar5,uVar4);
    }
  }
  return iVar2;
}


