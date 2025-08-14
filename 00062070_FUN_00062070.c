/*
 * Function: FUN_00062070
 * Entry:    00062070
 * Prototype: undefined FUN_00062070()
 */


undefined4 FUN_00062070(int param_1,char *param_2,undefined2 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined2 uVar3;
  
  if (((int)param_2 < 1000000) || (3300000 < param_1)) {
LAB_000620b4:
    uVar1 = 0xffffffea;
  }
  else {
    if (param_1 < 1000000) {
      uVar3 = 0;
    }
    else {
      if ((int)param_2 < 0x325aa1) {
        uVar2 = (param_1 - 0xdbba1U) / 100000;
        *param_3 = (short)uVar2;
        if ("Too small LE conn req packet size" + uVar2 * 100000 + 0x1d <= param_2) {
          return 0;
        }
        goto LAB_000620b4;
      }
      uVar3 = 0x17;
    }
    uVar1 = 0xffffffde;
    *param_3 = uVar3;
  }
  return uVar1;
}


