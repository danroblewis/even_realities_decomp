/*
 * Function: FUN_0007ad3c
 * Entry:    0007ad3c
 * Prototype: undefined FUN_0007ad3c()
 */


undefined4 FUN_0007ad3c(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [132];
  
  if (param_1 == 0) {
    return 1;
  }
  if (param_3 != 0) {
    if (param_2 == 0) {
      return 1;
    }
    uVar1 = *(uint *)(param_1 + 0x60);
    if (0xffff < param_3) {
LAB_0007ad66:
      do {
        uVar4 = *(uint *)(param_1 + 0x5c);
        uVar3 = (uVar4 - uVar1) - uVar4 * ((uVar4 - uVar1) / uVar4);
        if (uVar3 == 0) {
          uVar3 = 0xffff;
          iVar5 = param_2;
          if (uVar4 == uVar1) {
LAB_0007ae66:
            if (0x7f < uVar4) {
              uVar4 = 0x80;
            }
            thunk_FUN_00086c44(auStack_a8,param_1 + 100,uVar4);
            iVar6 = FUN_0007b130(auStack_a8,*(undefined4 *)(param_1 + 0x5c),auStack_b0,0,0,0);
            if (iVar6 != 0) {
              return 1;
            }
            iVar6 = FUN_0007b1e4(param_1,auStack_b0,*(undefined4 *)(param_1 + 0x5c));
            if (iVar6 != 0) {
              return 1;
            }
            uVar4 = *(uint *)(param_1 + 0x5c);
            *(undefined4 *)(param_1 + 0x60) = 0;
            uVar1 = 0;
          }
        }
        else {
          if (0xfffe < uVar3) {
            uVar3 = 0xffff;
          }
          thunk_FUN_00086c44(uVar1 + param_1 + 100,param_2);
          uVar4 = *(uint *)(param_1 + 0x5c);
          uVar1 = *(int *)(param_1 + 0x60) + uVar3;
          iVar5 = param_2 + uVar3;
          *(uint *)(param_1 + 0x60) = uVar1;
          uVar3 = 0xffff - uVar3;
          if (uVar4 == uVar1) goto LAB_0007ae66;
        }
        iVar6 = uVar4 * (uVar3 / uVar4);
        if (iVar6 != 0) {
          iVar2 = FUN_0007b130(iVar5,iVar6,auStack_b0,0,0,0);
          if (iVar2 != 0) {
            return 1;
          }
          iVar2 = FUN_0007b1e4(param_1,auStack_b0,iVar6);
          if (iVar2 != 0) {
            return 1;
          }
          uVar3 = uVar3 - iVar6;
          uVar1 = *(uint *)(param_1 + 0x60);
          iVar5 = iVar5 + iVar6;
          if (uVar3 != 0) goto LAB_0007ae1e;
LAB_0007ad92:
          param_3 = param_3 - 0xffff;
          param_2 = param_2 + 0xffff;
          if (param_3 < 0x10000) break;
          goto LAB_0007ad66;
        }
        if (uVar3 == 0) goto LAB_0007ad92;
LAB_0007ae1e:
        thunk_FUN_00086c44(param_1 + (uVar1 + 0x19) * 4,iVar5,uVar3);
        param_3 = param_3 - 0xffff;
        uVar1 = *(int *)(param_1 + 0x60) + uVar3;
        param_2 = param_2 + 0xffff;
        *(uint *)(param_1 + 0x60) = uVar1;
      } while (0xffff < param_3);
    }
    uVar4 = *(uint *)(param_1 + 0x5c);
    uVar3 = (uVar4 - uVar1) - uVar4 * ((uVar4 - uVar1) / uVar4);
    if (param_3 <= uVar3) {
      uVar3 = param_3;
    }
    if (uVar3 != 0) {
      thunk_FUN_00086c44(uVar1 + param_1 + 100,param_2,uVar3);
      uVar4 = *(uint *)(param_1 + 0x5c);
      uVar1 = *(int *)(param_1 + 0x60) + uVar3;
      param_3 = param_3 - uVar3;
      param_2 = param_2 + uVar3;
      *(uint *)(param_1 + 0x60) = uVar1;
    }
    if (uVar4 == uVar1) {
      if (0x7f < uVar4) {
        uVar4 = 0x80;
      }
      thunk_FUN_00086c44(auStack_a8,param_1 + 100,uVar4);
      iVar5 = FUN_0007b130(auStack_a8,*(undefined4 *)(param_1 + 0x5c),auStack_b0,0,0,0);
      if (iVar5 != 0) {
        return 1;
      }
      iVar5 = FUN_0007b1e4(param_1,auStack_b0,*(undefined4 *)(param_1 + 0x5c));
      if (iVar5 != 0) {
        return 1;
      }
      uVar4 = *(uint *)(param_1 + 0x5c);
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    iVar5 = uVar4 * (param_3 / uVar4);
    if (iVar5 != 0) {
      iVar6 = FUN_0007b130(param_2,iVar5,auStack_b0,0,0,0);
      if (iVar6 != 0) {
        return 1;
      }
      iVar6 = FUN_0007b1e4(param_1,auStack_b0,iVar5);
      if (iVar6 != 0) {
        return 1;
      }
      param_2 = param_2 + iVar5;
      param_3 = param_3 - iVar5;
    }
    if (param_3 != 0) {
      thunk_FUN_00086c44(param_1 + (*(int *)(param_1 + 0x60) + 0x19) * 4,param_2,param_3);
      *(uint *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + param_3;
    }
  }
  return 0;
}


