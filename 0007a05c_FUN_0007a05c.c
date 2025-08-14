/*
 * Function: FUN_0007a05c
 * Entry:    0007a05c
 * Prototype: undefined FUN_0007a05c()
 */


int FUN_0007a05c(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_40 [32];
  
  if (param_3 < 0x21) {
    iVar1 = (*DAT_20002f58)(param_1 + 0x110);
    if (iVar1 == 0) {
      iVar3 = 0x101;
      iVar1 = *(int *)(param_1 + 0xf8);
      do {
        if (iVar1 == 0) {
          iVar1 = -0x40;
          goto LAB_0007a0a4;
        }
        while( true ) {
          iVar1 = FUN_00079f50(param_1);
          if (iVar1 != 0) goto LAB_0007a0a4;
          iVar1 = *(int *)(param_1 + 0xf8);
          if (iVar1 < 1) break;
          if (((*(uint *)(param_1 + 0x108) <= *(uint *)(param_1 + 0x104)) &&
              (*(int *)(param_1 + 0x10c) == 1)) && (0x1f < *(uint *)(param_1 + 0x104))) {
            iVar3 = param_1 + 4;
            fill_memory_buffer(auStack_40,0,0x20);
            iVar1 = FUN_0007ac70(iVar3,auStack_40);
            if (iVar1 == 0) {
              FUN_0007abe8(iVar3);
              FUN_0007abc0(iVar3);
              iVar1 = FUN_0007abf4(iVar3,0);
              if (((iVar1 == 0) && (iVar1 = FUN_0007ac1c(iVar3,auStack_40,0x20), iVar1 == 0)) &&
                 (iVar1 = FUN_0007af28(auStack_40,0x20,auStack_40,0), iVar1 == 0)) {
                iVar2 = *(int *)(param_1 + 0xf8);
                iVar3 = iVar2;
                if (0 < iVar2) {
                  iVar3 = 0;
                }
                if (0 < iVar2) {
                  *(int *)(param_1 + 0x104) = iVar3;
                }
                memcpy(param_2,auStack_40,param_3);
              }
            }
            goto LAB_0007a0a4;
          }
          iVar3 = iVar3 + -1;
          if (iVar3 == 0) goto LAB_0007a09e;
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
LAB_0007a09e:
      iVar1 = -0x3c;
LAB_0007a0a4:
      FUN_00079808(auStack_40,0x20);
      iVar3 = (*DAT_20002f54)(param_1 + 0x110);
      if (iVar3 != 0) {
        iVar1 = -0x1e;
      }
    }
  }
  else {
    iVar1 = -0x3c;
  }
  return iVar1;
}


