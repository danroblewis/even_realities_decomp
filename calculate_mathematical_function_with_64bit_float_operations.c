/*
 * Function: calculate_mathematical_function_with_64bit_float_operations
 * Entry:    000767c8
 * Prototype: undefined calculate_mathematical_function_with_64bit_float_operations()
 */


uint calculate_mathematical_function_with_64bit_float_operations
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong in_d0;
  undefined8 uVar8;
  
  uVar4 = (uint)(in_d0 >> 0x20);
  uVar3 = (uint)in_d0;
  uVar2 = (uVar4 << 1) >> 0x15;
  iVar1 = (int)uVar4 >> 0x1f;
  uVar5 = uVar2 - 0x3ff;
  if ((int)uVar5 < 0x14) {
    if ((int)uVar5 < 0) {
      if ((in_d0 & 0x7fffffff00000000) == 0 && uVar3 == 0) {
        return uVar3;
      }
      iVar1 = iVar1 * -8;
      uVar6 = *(undefined4 *)(&DAT_000888a8 + iVar1);
      uVar7 = *(undefined4 *)(&DAT_000888ac + iVar1);
      uVar8 = float_add_64bit_alt(uVar6,uVar7);
      uVar2 = float_add_64bit((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),uVar6,uVar7);
      return uVar2;
    }
    uVar2 = 0xfffff >> (uVar5 & 0xff);
    if ((uVar2 & uVar4) == 0 && uVar3 == 0) {
      return uVar3;
    }
    uVar3 = uVar3 | uVar4 & uVar2 >> 1;
    if (uVar3 != 0) {
      uVar4 = 0x40000 >> (uVar5 & 0xff) | uVar4 & ~(uVar2 >> 1);
      uVar3 = (uint)(uVar5 == 0x13) * -0x80000000;
    }
  }
  else {
    if (0x33 < (int)uVar5) {
      if (uVar5 != 0x400) {
        return uVar3;
      }
      uVar2 = float_add_64bit_alt();
      return uVar2;
    }
    uVar2 = uVar2 - 0x413;
    uVar5 = 0xffffffff >> (uVar2 & 0xff);
    if ((uVar3 & uVar5) == 0) {
      return uVar3;
    }
    if ((uVar3 & uVar5 >> 1) != 0) {
      uVar3 = 0x40000000 >> (uVar2 & 0xff) | uVar3 & ~(uVar5 >> 1);
    }
  }
  iVar1 = iVar1 * -8;
  uVar6 = *(undefined4 *)(&DAT_000888a8 + iVar1);
  uVar7 = *(undefined4 *)(&DAT_000888ac + iVar1);
  uVar8 = float_add_64bit_alt(uVar6,uVar7,uVar3,uVar4,param_1,param_2,param_3);
  uVar2 = float_add_64bit((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),uVar6,uVar7);
  return uVar2;
}


