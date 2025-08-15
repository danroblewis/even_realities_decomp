/*
 * Function: FUN_0007a6a0
 * Entry:    0007a6a0
 * Prototype: undefined FUN_0007a6a0()
 */


undefined4 FUN_0007a6a0(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 == 0) {
    return 0xf10c37;
  }
  if (((param_2 - 1U < 0x210) && (param_4 != 0)) && (param_3 != 0)) {
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    do {
      while ((uVar5 = *(uint *)(param_1 + (uVar1 >> 5) * 4) >> (uVar1 & 0x1f),
             (uVar1 & 0x1f) != 0x1f && (uVar5 = uVar5 & 1, uVar1 == 0))) {
        uVar1 = 1;
        uVar2 = uVar1;
        uVar3 = uVar1;
        uVar4 = uVar5;
      }
      if (param_4 == uVar2) {
        uVar3 = 1;
        uVar2 = uVar3;
        uVar4 = uVar5;
      }
      else {
        if (uVar5 == uVar4) {
          uVar3 = uVar3 + 1;
        }
        if (param_4 - 1 == uVar2) {
          uVar2 = param_4;
          if (param_3 < uVar3) {
            return 0xf10c37;
          }
        }
        else {
          uVar2 = uVar2 + 1;
        }
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 != param_2 * 8);
    return 0;
  }
  return 0xf10c37;
}


