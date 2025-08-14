/*
 * Function: FUN_00079cf0
 * Entry:    00079cf0
 * Prototype: undefined FUN_00079cf0(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


int FUN_00079cf0(char *param_1,int param_2,uint param_3,undefined4 param_4,uint param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [52];
  
  if (0x400 < param_3) {
    return -0x36;
  }
  if (0x100 < param_5) {
    return -0x38;
  }
  fill_memory_buffer(auStack_58,0,0x30);
  pcVar4 = param_1 + 0x9c;
  iVar2 = (*DAT_20002f58)(pcVar4);
  if (iVar2 != 0) {
    return iVar2;
  }
  if ((*(int *)(param_1 + 0x1c) < *(int *)(param_1 + 0x10)) || (*(int *)(param_1 + 0x14) != 0)) {
    iVar2 = FUN_00079b60(param_1,param_4,param_5,0);
    if ((iVar2 != 0) && (iVar2 = (*DAT_20002f54)(pcVar4), iVar2 != 0)) {
      return iVar2;
    }
  }
  else if ((param_5 != 0) &&
          ((iVar2 = FUN_0007981c(auStack_58,param_4,param_5), iVar2 != 0 ||
           (iVar2 = FUN_000799ec(param_1,auStack_58), iVar2 != 0)))) goto LAB_00079e32;
  if (param_3 != 0) {
    do {
      cVar1 = param_1[0xf];
      param_1[0xf] = cVar1 + '\x01';
      if ((((((char)(cVar1 + '\x01') == '\0') &&
            (cVar1 = param_1[0xe], param_1[0xe] = cVar1 + '\x01', (char)(cVar1 + '\x01') == '\0'))
           && (cVar1 = param_1[0xd], param_1[0xd] = cVar1 + '\x01', (char)(cVar1 + '\x01') == '\0'))
          && ((((cVar1 = param_1[0xc], param_1[0xc] = cVar1 + '\x01', (char)(cVar1 + '\x01') == '\0'
                && (cVar1 = param_1[0xb], param_1[0xb] = cVar1 + '\x01',
                   (char)(cVar1 + '\x01') == '\0')) &&
               ((cVar1 = param_1[10], param_1[10] = cVar1 + '\x01', (char)(cVar1 + '\x01') == '\0'
                && ((cVar1 = param_1[9], param_1[9] = cVar1 + '\x01', (char)(cVar1 + '\x01') == '\0'
                    && (cVar1 = param_1[8], param_1[8] = cVar1 + '\x01',
                       (char)(cVar1 + '\x01') == '\0')))))) &&
              (cVar1 = param_1[7], param_1[7] = cVar1 + '\x01', (char)(cVar1 + '\x01') == '\0'))))
         && (((((cVar1 = param_1[6], param_1[6] = cVar1 + '\x01', (char)(cVar1 + '\x01') == '\0' &&
                (cVar1 = param_1[5], param_1[5] = cVar1 + '\x01', (char)(cVar1 + '\x01') == '\0'))
               && (cVar1 = param_1[4], param_1[4] = cVar1 + '\x01', (char)(cVar1 + '\x01') == '\0'))
              && ((cVar1 = param_1[3], param_1[3] = cVar1 + '\x01', (char)(cVar1 + '\x01') == '\0'
                  && (cVar1 = param_1[2], param_1[2] = cVar1 + '\x01',
                     (char)(cVar1 + '\x01') == '\0')))) &&
             (cVar1 = param_1[1], param_1[1] = cVar1 + '\x01', (char)(cVar1 + '\x01') == '\0')))) {
        *param_1 = *param_1 + '\x01';
      }
      iVar2 = FUN_0007ab70(param_1 + 0x20,1,param_1,auStack_68);
      if (iVar2 != 0) goto LAB_00079e32;
      uVar5 = param_3;
      if (0xf < param_3) {
        uVar5 = 0x10;
      }
      memcpy(param_2,auStack_68,uVar5);
      param_3 = param_3 - uVar5;
      param_2 = param_2 + uVar5;
    } while (param_3 != 0);
  }
  iVar2 = FUN_000799ec(param_1,auStack_58);
  if (iVar2 == 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
LAB_00079e32:
  iVar3 = (*DAT_20002f54)(pcVar4);
  if (iVar3 != 0) {
    iVar2 = iVar3;
  }
  FUN_00079808(auStack_58,0x30);
  FUN_00079808(auStack_68,0x10);
  return iVar2;
}


