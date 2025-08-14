/*
 * Function: FUN_0004e83c
 * Entry:    0004e83c
 * Prototype: undefined FUN_0004e83c()
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_0004e83c(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int local_20 [3];
  uint local_14;
  
  local_20[1] = 1;
  local_20[0] = param_1;
  local_20[2] = param_3;
  local_14 = param_4;
  iVar1 = FUN_0004e048(9,local_20);
  if ((iVar1 == 0) &&
     ((iVar1 = FUN_0004e098(9,local_20 + 1,local_20 + 2), iVar1 == 0 || (iVar1 == -0xc)))) {
    if (local_14 < 0x10000) {
      uVar3 = 0;
      uVar2 = 0;
      do {
        uVar2 = uVar2 + local_14;
        if (*(uint *)(local_20[0] + 8) < uVar2) {
          uVar3 = uVar3 & 0xffff;
          break;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 != 8);
      DAT_2000a128 = (undefined2)local_14;
      DAT_2000a12a = (undefined2)uVar3;
      DAT_2000a11c = *(undefined4 *)(local_20[0] + 4);
      DAT_2000a150 = *(undefined4 *)(local_20[0] + 0xc);
      iVar1 = FUN_0007f344(&DAT_2000a114);
      if (iVar1 == 0) {
        DAT_2000a118 = &DAT_200027fc;
        FUN_0004e3c0(&DAT_2000a114);
        DAT_2000a118 = &DAT_200027fc;
        FUN_0004e3dc(&DAT_2000a114);
      }
    }
    else {
      iVar1 = -0x21;
    }
  }
  return iVar1;
}


