/*
 * Function: FUN_0007f772
 * Entry:    0007f772
 * Prototype: undefined FUN_0007f772()
 */


undefined4 FUN_0007f772(int param_1,uint param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  if ((((param_1 == 0) || (param_3 == 0)) || (0xff < param_4 - 1U)) || (7 < param_2)) {
    uVar1 = 0xffffffea;
  }
  else {
    param_1 = param_1 + param_2 * 0x10;
    *(short *)(param_1 + 0x870) = (short)param_4;
    *(undefined1 *)(param_1 + 0x868) = 1;
    *(int *)(param_1 + 0x874) = param_3;
    uVar1 = 0;
  }
  return uVar1;
}


