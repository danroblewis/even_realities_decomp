/*
 * Function: FUN_0000dad4
 * Entry:    0000dad4
 * Prototype: undefined FUN_0000dad4()
 */


ulonglong FUN_0000dad4(uint param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  uint unaff_r4;
  uint uVar3;
  uint uVar4;
  uint in_r12;
  bool bVar5;
  bool bVar6;
  
  uVar3 = in_r12 & param_4 >> 0x14;
  if (unaff_r4 != in_r12 && uVar3 != in_r12) {
    bVar1 = (param_2 & 0x7fffffff) == 0;
    bVar5 = param_1 == 0 && bVar1;
    if (param_1 != 0 || !bVar1) {
      bVar5 = param_3 == 0 && (param_4 & 0x7fffffff) == 0;
    }
    if (bVar5) {
      return (ulonglong)((param_2 ^ param_4) & 0x80000000) << 0x20;
    }
    if (unaff_r4 == 0) {
      uVar4 = param_2 & 0x80000000;
      do {
        uVar2 = param_1 & 0x80000000;
        param_1 = param_1 << 1;
        param_2 = param_2 * 2 + (uint)(uVar2 != 0);
      } while ((param_2 & 0x100000) == 0);
      param_2 = param_2 | uVar4;
      if (uVar3 != 0) {
        return CONCAT44(param_2,param_1);
      }
    }
    do {
      uVar3 = param_3 & 0x80000000;
      param_3 = param_3 << 1;
      param_4 = param_4 * 2 + (uint)(uVar3 != 0);
    } while ((param_4 & 0x100000) == 0);
    return CONCAT44(param_2,param_1);
  }
  bVar1 = param_1 == 0;
  bVar5 = (param_2 & 0x7fffffff) == 0;
  bVar6 = bVar1 && bVar5;
  if (bVar1 && bVar5) {
    param_2 = param_4;
    param_1 = param_3;
  }
  if (!bVar1 || !bVar5) {
    bVar6 = param_3 == 0 && (param_4 & 0x7fffffff) == 0;
  }
  uVar4 = param_2;
  if (((!bVar6) && ((unaff_r4 != in_r12 || (param_1 == 0 && (param_2 & 0xfffff) == 0)))) &&
     ((uVar3 != in_r12 ||
      (param_1 = param_3, uVar4 = param_4, param_3 == 0 && (param_4 & 0xfffff) == 0)))) {
    return (ulonglong)((param_2 ^ param_4) & 0x80000000 | 0x7ff00000) << 0x20;
  }
  return CONCAT44(uVar4,param_1) | 0x7ff8000000000000;
}


