/*
 * Function: FUN_0007d8f4
 * Entry:    0007d8f4
 * Prototype: undefined FUN_0007d8f4()
 */


void FUN_0007d8f4(uint *param_1,int param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar2 = *param_1;
  uVar1 = (uVar2 << 0x17) >> 0x1a;
  bVar4 = CARRY4(uVar2,param_3 * 8);
  uVar2 = uVar2 + param_3 * 8;
  *param_1 = uVar2;
  if (bVar4) {
    uVar2 = param_1[1];
  }
  uVar3 = 0x40 - uVar1;
  if (bVar4) {
    uVar2 = uVar2 + 1;
  }
  if (bVar4) {
    param_1[1] = uVar2;
  }
  param_1[1] = param_1[1] + (param_3 >> 0x1d);
  if (param_3 < uVar3) {
    uVar3 = 0;
  }
  else {
    memcpy(uVar1 + 0x18 + (int)param_1,param_2,uVar3);
    calculate_md5_hash(param_1 + 2,param_1 + 6);
    while( true ) {
      if (param_3 < uVar3 + 0x40) break;
      calculate_md5_hash(param_1 + 2,param_2 + uVar3);
      uVar3 = uVar3 + 0x40;
    }
    uVar1 = 0;
  }
  memcpy(uVar1 + 0x18 + (int)param_1,param_2 + uVar3,param_3 - uVar3,param_4);
  return;
}


