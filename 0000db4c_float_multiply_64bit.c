/*
 * Function: float_multiply_64bit
 * Entry:    0000db4c
 * Prototype: undefined __stdcall float_multiply_64bit(undefined4 operand1_mantissa, undefined4 operand1_full, undefined4 operand2_mantissa, undefined4 operand2_full)
 */


ulonglong float_multiply_64bit
                    (undefined4 operand1_mantissa,uint operand1_full,uint operand2_mantissa,
                    uint operand2_full)

{
  uint extraout_r2;
  uint uVar1;
  uint uVar2;
  uint extraout_r3;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint unaff_r5;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint extraout_r12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  undefined8 uVar16;
  
  uVar16 = CONCAT44(operand1_full,operand1_mantissa);
  uVar12 = 0x7ff;
  uVar6 = operand1_full >> 0x14 & 0x7ff;
  bVar13 = uVar6 == 0;
  if (!bVar13) {
    unaff_r5 = operand2_full >> 0x14 & 0x7ff;
    bVar13 = unaff_r5 == 0;
  }
  if (!bVar13) {
    bVar13 = uVar6 == 0x7ff;
  }
  if (!bVar13) {
    bVar13 = unaff_r5 == 0x7ff;
  }
  if (bVar13) {
    uVar16 = FUN_0000dcba();
    operand2_mantissa = extraout_r2;
    operand2_full = extraout_r3;
    uVar12 = extraout_r12;
  }
  uVar8 = (uint)((ulonglong)uVar16 >> 0x20);
  uVar10 = (uint)uVar16;
  iVar7 = uVar6 - unaff_r5;
  if (operand2_mantissa == 0 && (operand2_full & 0xfffff) == 0) {
    uVar6 = (uVar8 ^ operand2_full) & 0x80000000 | uVar8 & 0xfffff;
    bVar15 = SCARRY4(iVar7,uVar12 >> 1);
    uVar8 = iVar7 + (uVar12 >> 1);
    bVar13 = (int)uVar8 < 0;
    bVar14 = uVar8 == 0;
    if (!bVar14 && bVar13 == bVar15) {
      bVar15 = SBORROW4(uVar12,uVar8);
      bVar13 = (int)(uVar12 - uVar8) < 0;
      bVar14 = uVar12 == uVar8;
    }
    if (!bVar14 && bVar13 == bVar15) {
      return CONCAT44(uVar6 | uVar8 * 0x100000,uVar10);
    }
    uVar6 = uVar6 | 0x100000;
    uVar12 = 0;
    bVar14 = SBORROW4(uVar8,1);
    uVar8 = uVar8 - 1;
    bVar13 = uVar8 == 0;
    uVar3 = uVar8;
  }
  else {
    uVar3 = (operand2_full << 0xc) >> 4 | 0x10000000 | operand2_mantissa >> 0x18;
    uVar12 = operand2_mantissa << 8;
    uVar9 = (uVar8 << 0xc) >> 4 | 0x10000000 | uVar10 >> 0x18;
    uVar10 = uVar10 * 0x100;
    uVar6 = (uVar8 ^ operand2_full) & 0x80000000;
    bVar13 = uVar3 <= uVar9;
    if (uVar9 == uVar3) {
      bVar13 = uVar12 <= uVar10;
    }
    iVar7 = iVar7 + (uint)bVar13;
    uVar8 = iVar7 + 0x3fd;
    if (bVar13 == false) {
      uVar3 = uVar3 >> 1;
      uVar12 = (uint)((operand2_mantissa >> 0x18 & 1) != 0) << 0x1f | uVar12 >> 1;
    }
    uVar11 = uVar10 - uVar12;
    uVar9 = (uVar9 - uVar3) - (uint)(uVar10 < uVar12);
    uVar4 = uVar3 >> 1;
    uVar1 = (uint)((uVar3 & 1) != 0) << 0x1f | uVar12 >> 1;
    uVar10 = 0x100000;
    uVar3 = 0x80000;
    while( true ) {
      bVar13 = uVar1 <= uVar11;
      if (uVar4 < uVar9 || uVar9 - uVar4 < (uint)bVar13) {
        uVar11 = uVar11 - uVar1;
        uVar10 = uVar10 | uVar3;
        uVar9 = (uVar9 - uVar4) - (uint)!bVar13;
      }
      uVar5 = uVar4 >> 1;
      uVar1 = (uint)((uVar4 & 1) != 0) << 0x1f | uVar1 >> 1;
      bVar14 = uVar1 <= uVar11;
      bVar13 = uVar9 - uVar5 < (uint)bVar14;
      uVar12 = uVar9;
      if (uVar5 < uVar9 || bVar13) {
        uVar11 = uVar11 - uVar1;
        uVar12 = (uVar9 - uVar5) - (uint)!bVar14;
      }
      if (uVar5 < uVar9 || bVar13) {
        uVar10 = uVar10 | uVar3 >> 1;
      }
      uVar9 = uVar4 >> 2;
      uVar2 = (uint)((uVar5 & 1) != 0) << 0x1f | uVar1 >> 1;
      bVar14 = uVar2 <= uVar11;
      bVar13 = uVar12 - uVar9 < (uint)bVar14;
      uVar5 = uVar12;
      if (uVar9 < uVar12 || bVar13) {
        uVar11 = uVar11 - uVar2;
        uVar5 = (uVar12 - uVar9) - (uint)!bVar14;
      }
      if (uVar9 < uVar12 || bVar13) {
        uVar10 = uVar10 | uVar3 >> 2;
      }
      uVar4 = uVar4 >> 3;
      uVar1 = (uint)((uVar9 & 1) != 0) << 0x1f | uVar2 >> 1;
      bVar14 = uVar1 <= uVar11;
      bVar13 = uVar5 - uVar4 < (uint)bVar14;
      uVar9 = uVar5;
      if (uVar4 < uVar5 || bVar13) {
        uVar11 = uVar11 - uVar1;
        uVar9 = (uVar5 - uVar4) - (uint)!bVar14;
      }
      if (uVar4 < uVar5 || bVar13) {
        uVar10 = uVar10 | uVar3 >> 3;
      }
      uVar12 = uVar9 | uVar11;
      if (uVar12 == 0) break;
      uVar9 = uVar9 << 4 | uVar11 >> 0x1c;
      uVar11 = uVar11 << 4;
      uVar4 = uVar4 << 3 | uVar1 >> 0x1d;
      uVar1 = (uVar2 >> 1) << 3;
      uVar3 = uVar3 >> 4;
      if (uVar3 == 0) {
        if ((uVar6 & 0x100000) != 0) goto LAB_0000dc6a;
        uVar6 = uVar6 | uVar10;
        uVar10 = 0;
        uVar3 = 0x80000000;
      }
    }
    if ((uVar6 & 0x100000) == 0) {
      uVar6 = uVar6 | uVar10;
      uVar10 = 0;
    }
LAB_0000dc6a:
    bVar15 = 0xfc < uVar8;
    bVar14 = SBORROW4(uVar8,0xfd);
    uVar5 = iVar7 + 0x300;
    bVar13 = uVar5 == 0;
    uVar3 = uVar5;
    if (bVar15 && !bVar13) {
      bVar15 = 0x6ff < uVar5;
      bVar14 = SBORROW4(uVar5,0x700);
      uVar3 = iVar7 - 0x400;
      bVar13 = uVar5 == 0x700;
    }
    if (!bVar15 || bVar13) {
      bVar13 = uVar4 <= uVar9;
      if (uVar9 == uVar4) {
        bVar13 = uVar1 <= uVar11;
      }
      if (uVar9 == uVar4 && uVar11 == uVar1) {
        bVar13 = (uVar10 & 1) != 0;
      }
      return CONCAT44(uVar6 + uVar8 * 0x100000 + (uint)CARRY4(uVar10,(uint)bVar13),uVar10 + bVar13);
    }
  }
  if (!bVar13 && (int)uVar3 < 0 == bVar14) {
    return (ulonglong)(uVar6 & 0x80000000 | 0x7ff00000) << 0x20;
  }
  if (uVar8 == 0xffffffca || (int)(uVar8 + 0x36) < 0 != SCARRY4(uVar8,0x36)) {
    return (ulonglong)(uVar6 & 0x80000000) << 0x20;
  }
  uVar3 = -uVar8;
  uVar9 = uVar3 - 0x20;
  if (0x1f < (int)uVar3) {
    uVar3 = uVar10 >> (uVar9 & 0xff) | uVar6 << (0x20 - uVar9 & 0xff);
    uVar8 = (uVar6 >> (uVar9 & 0xff) & ~((uVar6 & 0x80000000) >> (uVar9 & 0xff))) -
            ((int)uVar3 >> 0x1f);
    if ((uVar12 == 0 && uVar10 << (0x20 - uVar9 & 0xff) == 0) && (uVar3 & 0x7fffffff) == 0) {
      uVar8 = uVar8 & ~(uVar3 >> 0x1f);
    }
    return CONCAT44(uVar6,uVar8) & 0x80000000ffffffff;
  }
  iVar7 = uVar3 - 0x14;
  if (iVar7 != 0 && iVar7 < 0 == SCARRY4(uVar9,0xc)) {
    uVar8 = 0xc - iVar7;
    uVar3 = uVar10 << (uVar8 & 0xff);
    uVar10 = uVar10 >> (0x20 - uVar8 & 0xff) | uVar6 << (uVar8 & 0xff);
    uVar8 = uVar10 + -((int)uVar3 >> 0x1f);
    if (uVar12 == 0 && (uVar3 & 0x7fffffff) == 0) {
      uVar8 = uVar8 & ~(uVar3 >> 0x1f);
    }
    return CONCAT44((uVar6 & 0x80000000) + (uint)CARRY4(uVar10,-((int)uVar3 >> 0x1f)),uVar8);
  }
  uVar9 = uVar10 << (uVar8 + 0x20 & 0xff);
  uVar10 = uVar10 >> (uVar3 & 0xff) | uVar6 << (uVar8 + 0x20 & 0xff);
  uVar8 = uVar10 + -((int)uVar9 >> 0x1f);
  if (uVar12 == 0 && (uVar9 & 0x7fffffff) == 0) {
    uVar8 = uVar8 & ~(uVar9 >> 0x1f);
  }
  return CONCAT44((uVar6 & 0x80000000) +
                  ((uVar6 & 0x7fffffff) >> (uVar3 & 0xff)) +
                  (uint)CARRY4(uVar10,-((int)uVar9 >> 0x1f)),uVar8);
}


