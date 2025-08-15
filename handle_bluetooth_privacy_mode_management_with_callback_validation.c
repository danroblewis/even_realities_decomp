/*
 * Function: handle_bluetooth_privacy_mode_management_with_callback_validation
 * Entry:    00055454
 * Prototype: undefined handle_bluetooth_privacy_mode_management_with_callback_validation()
 */


int handle_bluetooth_privacy_mode_management_with_callback_validation
              (byte *param_1,int param_2,int param_3,byte *param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined4 local_20;
  char *local_1c;
  
  if ((param_1 == (byte *)0x0) || (param_4 == (byte *)0x0)) {
    return -0x16;
  }
  uVar3 = (uint)*param_1;
  if (param_2 << 0xc < 0) {
    if (param_2 << 0x1d < 0) {
      local_1c = "Can\'t set both IDENTITY & NRPA";
      local_20 = 2;
      FUN_0008104a(&DAT_00088150,0x1040,&local_20);
      return -0x16;
    }
    iVar1 = FUN_00081102();
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  else {
    if (param_2 << 0x1f < 0) {
      if (param_3 == 0) {
        bVar2 = *(byte *)((int)&DAT_20002000 + uVar3 * 7);
        if (bVar2 != 1) goto LAB_000554d8;
LAB_000554dc:
        iVar1 = FUN_000810f2(param_1,uVar3 * 7 + 0x20002001);
        if (iVar1 != 0) {
          return iVar1;
        }
        bVar2 = *(byte *)((int)&DAT_20002000 + uVar3 * 7);
        *param_4 = bVar2;
        if (param_3 == 0) {
          return 0;
        }
      }
      else {
        if ((param_2 << 0x1a < 0) && (-1 < (int)((uint)(byte)DAT_200020d8 << 0x19))) {
          return -0x86;
        }
        bVar2 = *(byte *)((int)&DAT_20002000 + uVar3 * 7);
        if (bVar2 == 1) goto LAB_000554dc;
        *param_4 = bVar2;
      }
      if (-1 < param_2 << 0x1a) {
        return 0;
      }
      bVar2 = bVar2 | 2;
LAB_000554d8:
      *param_4 = bVar2;
      return 0;
    }
    if (param_2 << 0x1d < 0) {
      bVar2 = *(byte *)((int)&DAT_20002000 + uVar3 * 7);
      if (bVar2 != 1) goto LAB_000554d8;
      iVar1 = FUN_000810f2(param_1,(short)(ushort)*param_1 * 7 + 0x20002001);
      bVar2 = *(byte *)((int)&DAT_20002000 + uVar3 * 7);
      goto LAB_0005551e;
    }
    iVar1 = FUN_00081102();
  }
  bVar2 = 1;
LAB_0005551e:
  *param_4 = bVar2;
  return iVar1;
}


