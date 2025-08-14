/*
 * Function: float_divide_64bit
 * Entry:    0000d89c
 * Prototype: undefined __stdcall float_divide_64bit(undefined4 a, undefined4 b)
 */


ulonglong float_divide_64bit(uint a,uint b)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  
  if (a == 0 && b == 0) {
    return CONCAT44(b,a);
  }
  uVar8 = b & 0x80000000;
  uVar3 = b;
  if ((int)uVar8 < 0) {
    bVar11 = a != 0;
    a = -a;
    uVar3 = -b - (uint)bVar11;
  }
  iVar7 = 0x432;
  uVar9 = uVar3 >> 0x16;
  if (uVar9 != 0) {
    iVar7 = 3;
    if (uVar3 >> 0x19 != 0) {
      iVar7 = 6;
    }
    if (uVar3 >> 0x1c != 0) {
      iVar7 = iVar7 + 3;
    }
    uVar4 = iVar7 - ((int)uVar3 >> 0x1f);
    uVar9 = a << (0x20 - uVar4 & 0xff);
    a = a >> (uVar4 & 0xff) | uVar3 << (0x20 - uVar4 & 0xff);
    uVar3 = uVar3 >> (uVar4 & 0xff);
    iVar7 = uVar4 + 0x432;
  }
  if (0xfffff < uVar3) {
    if (0x1fffff < uVar3) {
      uVar4 = uVar3 & 1;
      uVar3 = uVar3 >> 1;
      bVar1 = (byte)a;
      a = (uint)(uVar4 != 0) << 0x1f | a >> 1;
      uVar9 = (uint)(bVar1 & 1) << 0x1f | uVar9 >> 1;
      iVar7 = iVar7 + 1;
      if (0xffbfffff < (uint)(iVar7 * 0x200000)) {
        return (ulonglong)(uVar8 | 0x7ff00000) << 0x20;
      }
    }
LAB_0000d698:
    bVar11 = 0x7fffffff < uVar9;
    if (uVar9 == 0x80000000) {
      bVar11 = (a & 1) != 0;
    }
    return CONCAT44(uVar3 + iVar7 * 0x100000 + (uint)CARRY4(a,(uint)bVar11) | uVar8,a + bVar11);
  }
  bVar10 = (uVar9 & 0x80000000) != 0;
  uVar9 = uVar9 << 1;
  uVar4 = a * 2;
  bVar11 = CARRY4(a,a);
  a = a * 2 + (uint)bVar10;
  uVar3 = uVar3 * 2 + (uint)(bVar11 || CARRY4(uVar4,(uint)bVar10));
  bVar11 = iVar7 != 0;
  iVar7 = iVar7 + -1;
  if (bVar11 && 0xfffff < uVar3) goto LAB_0000d698;
  uVar2 = a;
  uVar4 = uVar3;
  if (uVar3 == 0) {
    uVar2 = 0;
    uVar4 = a;
  }
  iVar5 = LZCOUNT(uVar4);
  if (uVar3 == 0) {
    iVar5 = iVar5 + 0x20;
  }
  uVar6 = iVar5 - 0xb;
  bVar12 = SBORROW4(uVar6,0x20);
  uVar3 = iVar5 - 0x2b;
  bVar11 = (int)uVar3 < 0;
  bVar10 = uVar3 == 0;
  if ((int)uVar6 < 0x20) {
    bVar12 = SCARRY4(uVar3,0xc);
    iVar5 = iVar5 + -0x1f;
    bVar11 = iVar5 < 0;
    bVar10 = iVar5 == 0;
    uVar3 = uVar6;
    if (!bVar10 && bVar11 == bVar12) {
      uVar2 = uVar4 << (uVar6 & 0xff);
      uVar4 = uVar4 >> (0xcU - iVar5 & 0xff);
      goto LAB_0000d710;
    }
  }
  if (bVar10 || bVar11 != bVar12) {
    uVar9 = 0x20 - uVar3;
  }
  uVar4 = uVar4 << (uVar3 & 0xff);
  if (bVar10 || bVar11 != bVar12) {
    uVar4 = uVar4 | uVar2 >> (uVar9 & 0xff);
    uVar2 = uVar2 << (uVar3 & 0xff);
  }
LAB_0000d710:
  if ((int)uVar6 <= iVar7) {
    return CONCAT44(uVar4 + (iVar7 - uVar6) * 0x100000 | uVar8,uVar2);
  }
  uVar3 = ~(iVar7 - uVar6);
  if ((int)uVar3 < 0x1f) {
    iVar7 = uVar3 - 0x13;
    if (iVar7 != 0 && iVar7 < 0 == SCARRY4(uVar3 - 0x1f,0xc)) {
      return CONCAT44(b,uVar2 >> (0x20 - (0xcU - iVar7) & 0xff) | uVar4 << (0xcU - iVar7 & 0xff)) &
             0x80000000ffffffff;
    }
    uVar3 = uVar3 + 1;
    return CONCAT44(uVar8 | uVar4 >> (uVar3 & 0xff),
                    uVar2 >> (uVar3 & 0xff) | uVar4 << (0x20 - uVar3 & 0xff));
  }
  return CONCAT44(b,uVar4 >> (uVar3 - 0x1f & 0xff)) & 0x80000000ffffffff;
}


