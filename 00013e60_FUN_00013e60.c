/*
 * Function: FUN_00013e60
 * Entry:    00013e60
 * Prototype: undefined FUN_00013e60()
 */


int FUN_00013e60(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  ulonglong in_d0;
  
  uVar2 = (uint)((int)(in_d0 >> 0x20) << 1) >> 0x15;
  if (uVar2 == 0) {
    if ((in_d0 & 0x7fffffff00000000) == 0 && (int)in_d0 == 0) {
      return (int)in_d0;
    }
    in_d0 = FUN_0000d8f8();
    if (-0xc351 < param_1) {
      uVar2 = ((uint)((int)(in_d0 >> 0x20) << 1) >> 0x15) - 0x36;
      goto LAB_00013eb6;
    }
  }
  else {
    if (uVar2 == 0x7ff) {
      iVar1 = FUN_0000d58c();
      return iVar1;
    }
LAB_00013eb6:
    param_1 = uVar2 + param_1;
    if (0x7fe < param_1) {
      uVar3 = 0x7e37e43c;
      if ((longlong)in_d0 < 0) {
        uVar3 = 0xfe37e43c;
      }
      in_d0 = CONCAT44(uVar3,0x8800759c);
      uVar3 = 0x8800759c;
      uVar4 = 0x7e37e43c;
      goto LAB_00013ed6;
    }
    if (0 < param_1) {
      return (int)in_d0;
    }
    if (param_1 + 0x35 < 0 == SCARRY4(param_1,0x35)) {
      in_d0 = CONCAT44((uint)(in_d0 >> 0x20) & 0x800fffff | (param_1 + 0x36) * 0x100000,(int)in_d0);
      uVar3 = 0;
      uVar4 = 0x3c900000;
      goto LAB_00013ed6;
    }
    bVar5 = (longlong)in_d0 < 0;
    in_d0 = 0x1a56e1fc2f8f359;
    if (bVar5) {
      in_d0 = 0x81a56e1fc2f8f359;
    }
  }
  uVar3 = 0xc2f8f359;
  uVar4 = 0x1a56e1f;
LAB_00013ed6:
  iVar1 = FUN_0000d8f8((int)in_d0,(int)(in_d0 >> 0x20),uVar3,uVar4);
  return iVar1;
}


