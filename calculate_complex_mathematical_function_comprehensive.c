/*
 * Function: calculate_complex_mathematical_function_comprehensive
 * Entry:    000133f8
 * Prototype: undefined calculate_complex_mathematical_function_comprehensive()
 */


/* WARNING: Type propagation algorithm not settling */

uint calculate_complex_mathematical_function_comprehensive(void)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined *puVar15;
  uint uVar16;
  int iVar17;
  bool bVar18;
  undefined4 uVar19;
  ulonglong in_d0;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  ulonglong in_d1;
  undefined4 uVar20;
  undefined4 uVar21;
  ulonglong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  longlong lVar27;
  ulonglong uVar28;
  undefined8 uVar29;
  uint local_68;
  uint uStack_64;
  int local_58;
  int local_44;
  
  local_68 = (uint)in_d1;
  uStack_64 = (uint)(in_d1 >> 0x20);
  uVar10 = (uint)(in_d0 >> 0x20);
  uVar11 = (uint)in_d0;
  uVar13 = uStack_64 & 0x7fffffff;
  if ((in_d1 & 0x7fffffff00000000) == 0 && local_68 == 0) {
    return 0;
  }
  uVar7 = uVar10 & 0x7fffffff;
  if (uVar7 < 0x7ff00001) {
    if (uVar7 == 0x7ff00000) {
      if ((uVar11 != 0) || (0x7ff00000 < uVar13)) goto LAB_00013468;
      if (uVar13 == 0x7ff00000) {
        if (local_68 == 0) goto LAB_00013432;
        goto LAB_00013468;
      }
LAB_00013474:
      uVar16 = local_68;
      if ((longlong)in_d0 < 0) {
        if (uVar13 < 0x43400000) {
          if (uVar13 < 0x3ff00000) {
LAB_0001349c:
            if (local_68 != 0) goto LAB_00013490;
          }
          else {
            iVar1 = ((int)uVar13 >> 0x14) + -0x3ff;
            if (iVar1 < 0x15) {
              if (local_68 == 0) {
                uVar2 = (int)uVar13 >> (0x14U - iVar1 & 0xff);
                if (uVar2 << (0x14U - iVar1 & 0xff) == uVar13) {
                  if (uVar13 != 0x3ff00000) {
                    if (uStack_64 == 0x40000000) goto LAB_00013586;
                    uVar16 = 2 - (uVar2 & 1);
                    goto LAB_000134d2;
                  }
                }
                else if (uVar13 != 0x3ff00000) goto joined_r0x0001357c;
LAB_00013590:
                if (-1 < (longlong)in_d1) {
                  return uVar11;
                }
                uVar23 = 0x3ff0000000000000;
                goto LAB_000135a0;
              }
              goto LAB_00013490;
            }
            uVar2 = local_68 >> (0x34U - iVar1 & 0xff);
            if (uVar2 << (0x34U - iVar1 & 0xff) != local_68) goto LAB_0001349c;
            uVar16 = 2 - (uVar2 & 1);
            if (local_68 != 0) goto LAB_000134d2;
          }
joined_r0x0001357c:
          if (uStack_64 == 0x40000000) goto LAB_00013586;
        }
        else {
          if ((local_68 == 0) && (uStack_64 == 0x40000000)) goto LAB_00013586;
          uVar16 = 2;
        }
      }
      else if (local_68 == 0) {
        if (uVar13 == 0x3ff00000) goto LAB_00013590;
        if (uStack_64 == 0x40000000) goto LAB_00013586;
        if (uStack_64 == 0x3fe00000) {
          uVar22 = ((ulonglong)uVar10 << 0x20) + (in_d0 & 0xffffffff);
          uVar10 = (uint)(uVar22 >> 0x20);
          uVar13 = (uint)uVar22;
          if ((~uVar10 & 0x7ff00000) == 0) {
            uVar23 = float_multiply_64bit_alt(uVar13,uVar10,uVar13);
            uVar10 = float_add_64bit_alt(uVar13,uVar10,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20))
            ;
            return uVar10;
          }
          if ((longlong)uVar22 < 0x100000000) {
            if ((uVar22 & 0x7fffffff00000000) == 0 && uVar13 == 0) {
              return uVar13;
            }
            if (uVar10 != 0) {
              uVar23 = float_add_64bit(uVar13,uVar10,uVar13);
              uVar19 = (undefined4)((ulonglong)uVar23 >> 0x20);
              uVar10 = float_multiply_64bit((int)uVar23,uVar19,(int)uVar23,uVar19);
              return uVar10;
            }
            uVar10 = 0;
            while( true ) {
              iVar1 = (int)(uVar22 >> 0x20);
              uVar13 = (uint)uVar22;
              uVar22 = CONCAT44(uVar10,uVar13);
              if (uVar10 != 0) break;
              uVar10 = uVar13 >> 0xb;
              uVar22 = CONCAT44(iVar1 + -0x15,uVar13 << 0x15);
            }
          }
          else {
            iVar1 = (int)uVar10 >> 0x14;
            if (iVar1 != 0) goto LAB_00075e96;
          }
          uVar10 = 0;
          for (uVar13 = (uint)(uVar22 >> 0x20); -1 < (int)(uVar13 << 0xb); uVar13 = uVar13 << 1) {
            uVar10 = uVar10 + 1;
          }
          iVar1 = iVar1 - (uVar10 - 1);
          uVar22 = CONCAT44(uVar13 | (uint)uVar22 >> (0x20 - uVar10 & 0xff),
                            (uint)uVar22 << (uVar10 & 0xff));
LAB_00075e96:
          iVar5 = (int)uVar22;
          bVar18 = -1 < iVar1 << 0x1f;
          iVar9 = 0;
          uVar10 = (uint)(uVar22 >> 0x20) & 0xfffff | 0x100000;
          iVar17 = 0x16;
          iVar1 = 0;
          if (bVar18) {
            uVar10 = uVar10 << 1;
          }
          uVar13 = 0x200000;
          if (bVar18) {
            uVar10 = uVar10 - (iVar5 >> 0x1f);
            iVar5 = iVar5 << 1;
          }
          uVar11 = iVar5 << 1;
          iVar5 = uVar10 * 2 - (iVar5 >> 0x1f);
          do {
            iVar4 = iVar1 + uVar13;
            if (iVar4 <= iVar5) {
              iVar5 = iVar5 - iVar4;
              iVar1 = uVar13 + iVar4;
              iVar9 = iVar9 + uVar13;
            }
            iVar17 = iVar17 + -1;
            uVar13 = uVar13 >> 1;
            iVar5 = iVar5 * 2 - ((int)uVar11 >> 0x1f);
            uVar11 = uVar11 << 1;
          } while (iVar17 != 0);
          iVar4 = 0x20;
          uVar13 = 0x80000000;
          uVar10 = 0;
          iVar17 = 0;
          do {
            uVar7 = uVar13 + iVar17;
            iVar8 = iVar1;
            if (iVar1 < iVar5) {
              if (((int)uVar7 < 0) && (-1 < (int)(uVar13 + uVar7))) {
LAB_00075f6e:
                iVar8 = iVar1 + 1;
              }
              iVar5 = iVar5 - iVar1;
              if (uVar11 < uVar7) {
                iVar5 = iVar5 + -1;
              }
LAB_00075f16:
              iVar17 = uVar13 + uVar7;
              uVar11 = uVar11 - uVar7;
              uVar10 = uVar10 + uVar13;
            }
            else if ((iVar1 == iVar5) && (uVar7 <= uVar11)) {
              if (((int)uVar7 < 0) && (-1 < (int)(uVar13 + uVar7))) goto LAB_00075f6e;
              iVar5 = 0;
              goto LAB_00075f16;
            }
            iVar4 = iVar4 + -1;
            uVar13 = uVar13 >> 1;
            iVar5 = iVar5 * 2 - ((int)uVar11 >> 0x1f);
            uVar11 = uVar11 << 1;
            iVar1 = iVar8;
            if (iVar4 == 0) {
              if (iVar5 != 0 || uVar11 != 0) {
                if (uVar10 == 0xffffffff) {
                  iVar9 = iVar9 + 1;
                  uVar10 = 0;
                }
                else {
                  uVar10 = uVar10 + 1 & 0xfffffffe;
                }
              }
              uVar10 = uVar10 >> 1;
              if (iVar9 << 0x1f < 0) {
                uVar10 = uVar10 | 0x80000000;
              }
              return uVar10;
            }
          } while( true );
        }
      }
      else {
LAB_00013490:
        uVar16 = 0;
      }
LAB_000134d2:
      uVar19 = identity_function(uVar11);
      uVar28 = CONCAT44(uVar10,uVar19) & 0x7fffffffffffffff;
      uVar22 = CONCAT44(extraout_s1,uVar19);
      if ((uVar11 == 0) &&
         (((uVar10 & 0x3fffffff) == 0x3ff00000 || ((in_d0 & 0x7fffffff00000000) == 0)))) {
        if ((longlong)in_d1 < 0) {
          uVar22 = float_multiply_64bit(0,0x3ff00000,uVar19,extraout_s1);
        }
        if (-1 < (longlong)in_d0) {
          return (uint)uVar22;
        }
        if (uVar7 != 0x3ff00000 || uVar16 != 0) {
          return (uint)uVar22;
        }
      }
      else {
        uVar22 = in_d0;
        if (uVar16 != 0 || -1 < (longlong)in_d0) {
          if (uVar13 < 0x41e00001) {
            local_44 = 0;
            if ((in_d0 & 0x7ff0000000000000) == 0) {
              uVar28 = float_multiply_64bit_alt();
              local_44 = -0x35;
            }
            uVar10 = (uint)(uVar28 >> 0x20);
            uVar19 = (undefined4)uVar28;
            local_44 = ((int)uVar10 >> 0x14) + -0x3ff + local_44;
            puVar15 = (undefined *)(uVar10 & 0xfffff);
            uVar10 = (uint)puVar15 | 0x3ff00000;
            if (puVar15 < (undefined *)0x3988f) {
LAB_0001383e:
              iVar1 = 0;
            }
            else {
              if (&UNK_000bb679 < puVar15) {
                uVar10 = uVar10 - 0x100000;
                local_44 = local_44 + 1;
                goto LAB_0001383e;
              }
              iVar1 = 1;
            }
            iVar5 = iVar1 * 8;
            uVar6 = (undefined4)
                    ((ulonglong)(&COMPLEX_MATHEMATICAL_FUNCTION_CALCULATION_COMPREHENSIVE)[iVar1] >>
                    0x20);
            uVar20 = (undefined4)(&COMPLEX_MATHEMATICAL_FUNCTION_CALCULATION_COMPREHENSIVE)[iVar1];
            uVar23 = float_add_64bit(uVar19,uVar10,uVar20,uVar6);
            uVar12 = (undefined4)((ulonglong)uVar23 >> 0x20);
            uVar24 = float_add_64bit_alt(uVar20,uVar6,uVar19,uVar10);
            uVar24 = float_multiply_64bit(0,0x3ff00000,(int)uVar24,(int)((ulonglong)uVar24 >> 0x20))
            ;
            uVar14 = (undefined4)((ulonglong)uVar24 >> 0x20);
            uVar25 = float_multiply_64bit_alt((int)uVar23,uVar12,(int)uVar24,uVar14);
            uVar3 = (undefined4)((ulonglong)uVar25 >> 0x20);
            uVar21 = (undefined4)uVar25;
            uVar25 = float_multiply_64bit_alt(0,uVar3);
            uVar23 = float_add_64bit((int)uVar23,uVar12,(int)uVar25,(int)((ulonglong)uVar25 >> 0x20)
                                    );
            uVar25 = float_add_64bit(0,((int)uVar10 >> 1 | 0x20000000U) + 0x80000 + iVar1 * 0x40000,
                                     uVar20,uVar6);
            uVar25 = float_add_64bit(uVar19,uVar10,(int)uVar25,(int)((ulonglong)uVar25 >> 0x20));
            uVar25 = float_multiply_64bit_alt((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),0,uVar3);
            uVar23 = float_add_64bit((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar25,
                                     (int)((ulonglong)uVar25 >> 0x20));
            uVar23 = float_multiply_64bit_alt
                               ((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar24,uVar14);
            uVar12 = (undefined4)((ulonglong)uVar23 >> 0x20);
            uVar24 = float_multiply_64bit_alt(uVar21,uVar3);
            uVar14 = (undefined4)((ulonglong)uVar24 >> 0x20);
            uVar19 = (undefined4)uVar24;
            uVar24 = float_multiply_64bit_alt(uVar19,uVar14,0x4a454eef,0x3fca7e28);
            uVar24 = float_add_64bit_alt((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),0x93c9db65,
                                         0x3fcd864a);
            uVar24 = float_multiply_64bit_alt
                               ((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),uVar19,uVar14);
            uVar24 = float_add_64bit_alt((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),0xa91d4101,
                                         0x3fd17460);
            uVar24 = float_multiply_64bit_alt
                               ((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),uVar19,uVar14);
            uVar24 = float_add_64bit_alt((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),0x518f264d,
                                         0x3fd55555);
            uVar24 = float_multiply_64bit_alt
                               ((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),uVar19,uVar14);
            uVar24 = float_add_64bit_alt((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),0xdb6fabff,
                                         0x3fdb6db6);
            uVar24 = float_multiply_64bit_alt
                               ((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),uVar19,uVar14);
            uVar24 = float_add_64bit_alt((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),0x33333303,
                                         0x3fe33333);
            uVar25 = float_multiply_64bit_alt(uVar19,uVar14,uVar19,uVar14);
            uVar24 = float_multiply_64bit_alt
                               ((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),(int)uVar25,
                                (int)((ulonglong)uVar25 >> 0x20));
            uVar25 = float_add_64bit_alt(uVar21,uVar3,0,uVar3);
            uVar25 = float_multiply_64bit_alt
                               ((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),(int)uVar23,uVar12);
            uVar24 = float_add_64bit_alt((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),(int)uVar24,
                                         (int)((ulonglong)uVar24 >> 0x20));
            uVar19 = (undefined4)((ulonglong)uVar24 >> 0x20);
            uVar25 = float_multiply_64bit_alt(0,uVar3,0,uVar3);
            uVar14 = (undefined4)((ulonglong)uVar25 >> 0x20);
            uVar26 = float_add_64bit_alt((int)uVar25,uVar14,0,0x40080000);
            float_add_64bit_alt((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar24,uVar19);
            uVar26 = float_multiply_64bit_alt(0,uVar3,0,extraout_r1_00);
            uVar6 = (undefined4)((ulonglong)uVar26 >> 0x20);
            uVar29 = float_add_64bit(0,extraout_r1_00,0,0x40080000);
            uVar25 = float_add_64bit((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),(int)uVar25,uVar14
                                    );
            uVar24 = float_add_64bit((int)uVar24,uVar19,(int)uVar25,(int)((ulonglong)uVar25 >> 0x20)
                                    );
            uVar24 = float_multiply_64bit_alt
                               ((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),uVar21,uVar3);
            uVar23 = float_multiply_64bit_alt((int)uVar23,uVar12,0,extraout_r1_00);
            uVar23 = float_add_64bit_alt((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),(int)uVar23,
                                         (int)((ulonglong)uVar23 >> 0x20));
            uVar19 = (undefined4)((ulonglong)uVar23 >> 0x20);
            float_add_64bit_alt((int)uVar26,uVar6,(int)uVar23,uVar19);
            uVar24 = float_multiply_64bit_alt(0,extraout_r1_01,0xe0000000,0x3feec709);
            uVar21 = (undefined4)((ulonglong)uVar24 >> 0x20);
            uVar25 = float_add_64bit(0,extraout_r1_01,(int)uVar26,uVar6);
            uVar23 = float_add_64bit((int)uVar23,uVar19,(int)uVar25,(int)((ulonglong)uVar25 >> 0x20)
                                    );
            uVar23 = float_multiply_64bit_alt
                               ((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),0xdc3a03fd,0x3feec709);
            uVar25 = float_multiply_64bit_alt(0,extraout_r1_01,0x145b01f5,0xbe3e2fe0);
            uVar23 = float_add_64bit_alt((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar25,
                                         (int)((ulonglong)uVar25 >> 0x20));
            uVar23 = float_add_64bit_alt((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),
                                         *(undefined4 *)(&DAT_00088878 + iVar5),
                                         *(undefined4 *)(&DAT_0008887c + iVar5));
            uVar25 = int_to_float_64bit_signed(local_44);
            uVar19 = (undefined4)((ulonglong)uVar25 >> 0x20);
            uVar12 = *(undefined4 *)(&DAT_00088888 + iVar5);
            uVar14 = *(undefined4 *)(&DAT_0008888c + iVar5);
            uVar26 = float_add_64bit_alt((int)uVar24,uVar21,(int)uVar23,
                                         (int)((ulonglong)uVar23 >> 0x20));
            uVar26 = float_add_64bit_alt((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),uVar12,uVar14)
            ;
            float_add_64bit_alt((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),(int)uVar25,uVar19);
            uVar25 = float_add_64bit(0,extraout_r1_02,(int)uVar25,uVar19);
            uVar25 = float_add_64bit((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),uVar12,uVar14);
            uVar24 = float_add_64bit((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),(int)uVar24,uVar21
                                    );
            uVar19 = extraout_r1_02;
          }
          else {
            if (0x43f00000 < uVar13) {
              if (uVar7 < 0x3ff00000) goto LAB_0001360a;
LAB_00013624:
              if ((int)uStack_64 < 1) {
                return 0;
              }
LAB_00013612:
              in_d0 = 0x7e37e43c8800759c;
              goto LAB_00013586;
            }
            if (uVar7 < 0x3fefffff) {
LAB_0001360a:
              if (-1 < (longlong)in_d1) {
                return 0;
              }
              goto LAB_00013612;
            }
            if (0x3ff00000 < uVar7) goto LAB_00013624;
            uVar23 = float_add_64bit(uVar19,extraout_s1,0,0x3ff00000);
            uVar21 = (undefined4)((ulonglong)uVar23 >> 0x20);
            uVar19 = (undefined4)uVar23;
            uVar24 = float_multiply_64bit_alt(uVar19,uVar21,0x60000000,0x3ff71547);
            uVar12 = (undefined4)((ulonglong)uVar24 >> 0x20);
            uVar23 = float_multiply_64bit_alt(uVar19,uVar21,0xf85ddf44,0x3e54ae0b);
            uVar25 = float_multiply_64bit_alt(uVar19,uVar21,0,0x3fd00000);
            uVar25 = float_add_64bit(0x55555555,0x3fd55555,(int)uVar25,
                                     (int)((ulonglong)uVar25 >> 0x20));
            uVar25 = float_multiply_64bit_alt
                               ((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),uVar19,uVar21);
            uVar25 = float_add_64bit(0,0x3fe00000,(int)uVar25,(int)((ulonglong)uVar25 >> 0x20));
            uVar26 = float_multiply_64bit_alt(uVar19,uVar21,uVar19,uVar21);
            uVar25 = float_multiply_64bit_alt
                               ((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),(int)uVar26,
                                (int)((ulonglong)uVar26 >> 0x20));
            uVar25 = float_multiply_64bit_alt
                               ((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),0x652b82fe,0x3ff71547);
            uVar23 = float_add_64bit((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar25,
                                     (int)((ulonglong)uVar25 >> 0x20));
            float_add_64bit_alt((int)uVar24,uVar12,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20));
            uVar24 = float_add_64bit(0,extraout_r1,(int)uVar24,uVar12);
            uVar19 = extraout_r1;
          }
          uVar23 = float_add_64bit((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar24,
                                   (int)((ulonglong)uVar24 >> 0x20));
          if (uVar16 == 1 && (longlong)in_d0 < 0) {
            uVar21 = 0xbff00000;
          }
          else {
            uVar21 = 0x3ff00000;
          }
          local_58 = 0;
          uVar24 = float_add_64bit(local_68,uStack_64,0,uStack_64);
          uVar24 = float_multiply_64bit_alt((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),0,uVar19);
          uVar23 = float_multiply_64bit_alt
                             ((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),local_68,uStack_64);
          uVar23 = float_add_64bit_alt((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),(int)uVar23,
                                       (int)((ulonglong)uVar23 >> 0x20));
          uVar14 = (undefined4)((ulonglong)uVar23 >> 0x20);
          uVar12 = (undefined4)uVar23;
          uVar23 = float_multiply_64bit_alt(0,uVar19,0,uStack_64);
          uVar3 = (undefined4)((ulonglong)uVar23 >> 0x20);
          uVar19 = (undefined4)uVar23;
          lVar27 = float_add_64bit_alt(uVar12,uVar14,uVar19,uVar3);
          uVar10 = (uint)((ulonglong)lVar27 >> 0x20);
          if (lVar27 < 0x4090000000000000) {
            uVar13 = uVar10 & 0x7fffffff;
            if (0x4090cbff < uVar13) {
              if (lVar27 == -0x3f6f340000000000) {
                uVar23 = float_add_64bit((int)lVar27,uVar10,uVar19,uVar3);
                iVar1 = float_compare_boolean_or_swapped
                                  ((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),uVar12,uVar14);
                if (iVar1 == 0) goto LAB_00013ba6;
              }
              in_d0 = float_multiply_64bit_alt(0,uVar21,0xc2f8f359,0x1a56e1f);
              goto LAB_00013586;
            }
            if (0x3fe00000 < uVar13) {
              iVar1 = (int)uVar13 >> 0x14;
              goto LAB_00013bf4;
            }
LAB_00013c3e:
            uVar19 = (undefined4)((ulonglong)uVar23 >> 0x20);
            float_add_64bit_alt((int)uVar23,uVar19,uVar12,uVar14);
            uVar24 = float_multiply_64bit_alt(0,extraout_r1_03,0,0x3fe62e43);
            uVar21 = (undefined4)((ulonglong)uVar24 >> 0x20);
            uVar23 = float_add_64bit(0,extraout_r1_03,(int)uVar23,uVar19);
            uVar23 = float_add_64bit(uVar12,uVar14,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20));
            uVar23 = float_multiply_64bit_alt
                               ((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),0xfefa39ef,0x3fe62e42);
            uVar25 = float_multiply_64bit_alt(0,extraout_r1_03,0xca86c39,0xbe205c61);
            uVar23 = float_add_64bit_alt((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar25,
                                         (int)((ulonglong)uVar25 >> 0x20));
            uVar12 = (undefined4)((ulonglong)uVar23 >> 0x20);
            uVar25 = float_add_64bit_alt((int)uVar24,uVar21,(int)uVar23,uVar12);
            uVar14 = (undefined4)((ulonglong)uVar25 >> 0x20);
            uVar19 = (undefined4)uVar25;
            uVar24 = float_add_64bit(uVar19,uVar14,(int)uVar24,uVar21);
            uVar23 = float_add_64bit((int)uVar23,uVar12,(int)uVar24,(int)((ulonglong)uVar24 >> 0x20)
                                    );
            uVar12 = (undefined4)((ulonglong)uVar23 >> 0x20);
            uVar24 = float_multiply_64bit_alt(uVar19,uVar14,uVar19,uVar14);
            uVar3 = (undefined4)((ulonglong)uVar24 >> 0x20);
            uVar21 = (undefined4)uVar24;
            uVar24 = float_multiply_64bit_alt(uVar21,uVar3,0x72bea4d0,0x3e663769);
            uVar24 = float_add_64bit((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),0xc5d26bf1,
                                     0x3ebbbd41);
            uVar24 = float_multiply_64bit_alt
                               ((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),uVar21,uVar3);
            uVar24 = float_add_64bit_alt((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),0xaf25de2c,
                                         0x3f11566a);
            uVar24 = float_multiply_64bit_alt
                               ((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),uVar21,uVar3);
            uVar24 = float_add_64bit((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),0x16bebd93,
                                     0x3f66c16c);
            uVar24 = float_multiply_64bit_alt
                               ((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),uVar21,uVar3);
            uVar24 = float_add_64bit_alt((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),0x5555553e,
                                         0x3fc55555);
            uVar24 = float_multiply_64bit_alt
                               ((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),uVar21,uVar3);
            uVar24 = float_add_64bit(uVar19,uVar14,(int)uVar24,(int)((ulonglong)uVar24 >> 0x20));
            uVar21 = (undefined4)((ulonglong)uVar24 >> 0x20);
            uVar25 = float_multiply_64bit_alt(uVar19,uVar14,(int)uVar24,uVar21);
            uVar24 = float_add_64bit((int)uVar24,uVar21,0,0x40000000);
            uVar24 = float_multiply_64bit
                               ((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),(int)uVar24,
                                (int)((ulonglong)uVar24 >> 0x20));
            uVar25 = float_multiply_64bit_alt(uVar19,uVar14,(int)uVar23,uVar12);
            uVar23 = float_add_64bit_alt((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),(int)uVar23,
                                         uVar12);
            uVar23 = float_add_64bit((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),(int)uVar23,
                                     (int)((ulonglong)uVar23 >> 0x20));
            uVar23 = float_add_64bit((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),uVar19,uVar14);
            uVar23 = float_add_64bit(0,0x3ff00000,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20));
            iVar1 = (int)((ulonglong)uVar23 >> 0x20) + local_58 * 0x100000;
            in_d0 = CONCAT44(iVar1,(int)uVar23);
            if (iVar1 < 0x100000) {
              uVar19 = calculate_complex_math_result(local_58);
              in_d0 = CONCAT44(extraout_s1_00,uVar19);
            }
          }
          else {
            if (lVar27 == 0x4090000000000000) {
              uVar23 = float_add_64bit_alt(uVar12,uVar14,0x652b82fe,0x3c971547);
              uVar24 = float_add_64bit((int)lVar27,uVar10,uVar19,uVar3);
              iVar1 = float_compare_boolean_inverted_swapped
                                ((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar24,
                                 (int)((ulonglong)uVar24 >> 0x20));
              if (iVar1 == 0) {
LAB_00013ba6:
                iVar1 = 0x409;
LAB_00013bf4:
                uVar10 = (0x100000 >> (iVar1 - 0x3feU & 0xff)) + uVar10;
                uVar13 = (uVar10 * 2 >> 0x15) - 0x3ff;
                local_58 = (int)(uVar10 & 0xfffff | 0x100000) >> (0x14 - uVar13 & 0xff);
                if (lVar27 < 0) {
                  local_58 = -local_58;
                }
                uVar23 = float_add_64bit(uVar19,uVar3,0,-0x100000 >> (uVar13 & 0xff) & uVar10);
                goto LAB_00013c3e;
              }
            }
            in_d0 = float_multiply_64bit_alt(0,uVar21,0x8800759c,0x7e37e43c);
          }
LAB_00013586:
          uVar10 = float_multiply_64bit_alt((int)in_d0,(int)(in_d0 >> 0x20));
          return uVar10;
        }
      }
      uVar23 = float_add_64bit((int)uVar22,(int)(uVar22 >> 0x20));
LAB_000135a0:
      uVar10 = float_multiply_64bit((int)uVar23,(int)((ulonglong)uVar23 >> 0x20));
      return uVar10;
    }
    if (uVar13 < 0x7ff00001) {
      if (uVar13 != 0x7ff00000) goto LAB_00013474;
      if (local_68 == 0) {
        if (uVar7 == 0x3ff00000 && uVar11 == 0) {
          return 0;
        }
LAB_00013432:
        if (uVar7 < 0x3ff00000) {
          if (-1 < (longlong)in_d1) {
            return 0;
          }
          return local_68;
        }
        if ((longlong)in_d1 < 0) {
          return 0;
        }
        return local_68;
      }
    }
  }
  if (uVar7 == 0x3ff00000 && uVar11 == 0) {
    return 0;
  }
LAB_00013468:
  uVar10 = get_system_parameter(&LAB_000a8ea0);
  return uVar10;
}


