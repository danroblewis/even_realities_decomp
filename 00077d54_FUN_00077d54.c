/*
 * Function: FUN_00077d54
 * Entry:    00077d54
 * Prototype: undefined FUN_00077d54()
 */


undefined4 FUN_00077d54(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = DAT_20002d20;
  if ((DAT_20002d20 != 0) && (*(int *)(DAT_20002d20 + 0x18) == 0)) {
    FUN_00076bcc(DAT_20002d20);
  }
  if (param_2 == (undefined4 *)&DAT_0009871c) {
    param_2 = *(undefined4 **)(iVar3 + 4);
  }
  else if (param_2 == (undefined4 *)&DAT_000986fc) {
    param_2 = *(undefined4 **)(iVar3 + 8);
  }
  else if (param_2 == (undefined4 *)&DAT_000986dc) {
    param_2 = *(undefined4 **)(iVar3 + 0xc);
  }
  uVar2 = *(ushort *)(param_2 + 3);
  iVar3 = (int)(short)uVar2;
  if (-1 < iVar3 << 0x1c) {
    if (-1 < iVar3 << 0x1b) {
      *param_1 = 9;
      goto LAB_00077d82;
    }
    if (iVar3 << 0x1d < 0) {
      if ((undefined4 *)param_2[0xd] != (undefined4 *)0x0) {
        if ((undefined4 *)param_2[0xd] != param_2 + 0x11) {
          FUN_00076d8c(param_1);
        }
        param_2[0xd] = 0;
      }
      *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xffdb;
      param_2[1] = 0;
      *param_2 = param_2[4];
    }
    *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 8;
  }
  if ((param_2[4] == 0) && ((*(ushort *)(param_2 + 3) & 0x280) != 0x200)) {
    FUN_00076cec(param_1,param_2);
  }
  uVar2 = *(ushort *)(param_2 + 3);
  uVar4 = (uint)(short)uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
    if (-1 < (int)(uVar4 << 0x1e)) {
      uVar1 = param_2[5];
    }
    param_2[2] = uVar1;
  }
  else {
    param_2[2] = 0;
    param_2[6] = -param_2[5];
  }
  if (param_2[4] != 0) {
    return 0;
  }
  if ((uVar4 & 0x80) == 0) {
    return 0;
  }
LAB_00077d82:
  *(ushort *)(param_2 + 3) = uVar2 | 0x40;
  return 0xffffffff;
}


