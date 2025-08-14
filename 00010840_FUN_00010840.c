/*
 * Function: FUN_00010840
 * Entry:    00010840
 * Prototype: undefined FUN_00010840()
 */


byte FUN_00010840(void)

{
  int iVar1;
  int iVar2;
  float fVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_20018da1 == '\0') || (iVar1 = FUN_0002e648(0), iVar1 + 1U < 2)) {
    bVar4 = 0xff;
  }
  else {
    iVar2 = get_work_mode();
    if (((*(int *)(iVar2 + 0xfb0) == 0) || (iVar2 = get_work_mode(), *(int *)(iVar2 + 0xfb0) == -1))
       || (iVar2 = get_work_mode(), *(int *)(iVar2 + 0xfb0) < 0xea61)) {
      if (iVar1 < 0x32) {
        bVar4 = (byte)(iVar1 / 5);
      }
      else if (iVar1 < 200) {
        bVar4 = (char)((iVar1 - 0x32U) / 10) + 10;
      }
      else if (iVar1 < 1000) {
        bVar4 = (char)((iVar1 - 200U) / 0x32) + 0x19;
      }
      else if (iVar1 < 10000) {
        bVar4 = (char)((iVar1 - 1000U) / 1000) + 0x29;
      }
      else {
        if (79999 < iVar1) {
          return 0x2a;
        }
        bVar4 = (char)((iVar1 - 10000U) / 5000) + 0x32;
      }
      if (0x29 < bVar4) {
        bVar4 = 0x2a;
      }
    }
    else {
      uVar5 = FUN_0000d824(iVar1);
      iVar1 = get_work_mode();
      uVar6 = FUN_0000d824(*(undefined4 *)(iVar1 + 0xfb0));
      uVar6 = float_multiply_64bit((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0,0x412e8480);
      FUN_0000d8f8((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)uVar5,
                   (int)((ulonglong)uVar5 >> 0x20));
      fVar3 = (float)FUN_0000dee8();
      bVar4 = DAT_20018da0;
      if (DAT_20018da0 == 0xc) {
        if (120.0 < fVar3) {
          DAT_20018da0 = 0x13;
          bVar4 = 0x13;
        }
        else {
          DAT_20018da0 = bVar4;
          if ((int)((uint)(fVar3 < 8.0) << 0x1f) < 0) {
            DAT_20018da0 = 6;
            bVar4 = 6;
          }
        }
      }
      else if (DAT_20018da0 < 0xd) {
        if (DAT_20018da0 == 3) {
          if (6.0 < fVar3) {
            DAT_20018da0 = 6;
            bVar4 = 6;
          }
          else {
            uVar5 = FUN_0000d848();
            iVar1 = FUN_0000dddc((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0x9999999a,0x3ff99999);
            DAT_20018da0 = bVar4;
            if (iVar1 != 0) {
              DAT_20018da0 = 0;
              bVar4 = 0;
            }
          }
        }
        else if (DAT_20018da0 == 6) {
          if (12.0 < fVar3) {
            DAT_20018da0 = 0xc;
            bVar4 = 0xc;
          }
          else {
            DAT_20018da0 = bVar4;
            if ((int)((uint)(fVar3 < 4.0) << 0x1f) < 0) {
              DAT_20018da0 = 3;
              bVar4 = 3;
            }
          }
        }
        else {
          DAT_20018da0 = bVar4;
          if (DAT_20018da0 == 0) {
            uVar5 = FUN_0000d848();
            iVar1 = FUN_0000de18((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0x33333333,0x40033333);
            DAT_20018da0 = bVar4;
            if (iVar1 != 0) {
              DAT_20018da0 = 3;
              bVar4 = DAT_20018da0;
            }
          }
        }
      }
      else if (DAT_20018da0 == 0x1a) {
        if (1440.0 < fVar3) {
          DAT_20018da0 = 0x2a;
          bVar4 = 0x2a;
        }
        else {
          DAT_20018da0 = bVar4;
          if ((int)((uint)(fVar3 < 372.0) << 0x1f) < 0) {
            DAT_20018da0 = 0x13;
            bVar4 = 0x13;
          }
        }
      }
      else if (DAT_20018da0 == 0x2a) {
        DAT_20018da0 = bVar4;
        if ((int)((uint)(fVar3 < 960.0) << 0x1f) < 0) {
          DAT_20018da0 = 0x1a;
          bVar4 = 0x1a;
        }
      }
      else {
        DAT_20018da0 = bVar4;
        if (DAT_20018da0 == 0x13) {
          if (496.0 < fVar3) {
            DAT_20018da0 = 0x1a;
            bVar4 = 0x1a;
          }
          else if ((int)((uint)(fVar3 < 75.0) << 0x1f) < 0) {
            DAT_20018da0 = 0xc;
            bVar4 = 0xc;
          }
        }
      }
    }
  }
  return bVar4;
}


