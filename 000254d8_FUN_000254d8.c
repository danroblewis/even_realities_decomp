/*
 * Function: FUN_000254d8
 * Entry:    000254d8
 * Prototype: undefined FUN_000254d8()
 */


void FUN_000254d8(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  FUN_0007c830(param_1 + 8);
  DAT_20007a24 = *(undefined4 *)(param_1 + 8);
  iVar2 = get_work_mode();
  param_2[0x15] = (char)(*(byte *)(iVar2 + 0xfc4) + 200 >> 8);
  iVar2 = get_work_mode();
  param_2[0x13] = *(char *)(iVar2 + 0xfc0);
  iVar2 = get_work_mode();
  param_2[0x34] = *(char *)(iVar2 + 0xfc0);
  get_work_mode();
  param_2[2] = '\0';
  *(undefined1 *)(param_1 + 2) = 3;
  FUN_0007c842();
  cVar1 = *(char *)(param_1 + 2);
  if (cVar1 == '\x02') {
    uVar3 = thunk_FUN_00074f68();
    if ((int)(uint)((uint)uVar3 - DAT_20007a00 < 0xbb9) <=
        (int)((int)((ulonglong)uVar3 >> 0x20) - (uint)((uint)uVar3 < DAT_20007a00))) {
      if (param_2[5] == '\n') {
        if (*param_2 == '\0') {
          param_2[0xc] = '\x06';
        }
        param_2[1] = '\x01';
      }
      param_2[3] = '\x01';
      DAT_20007a00 = thunk_FUN_00074f68();
    }
  }
  else {
    if (cVar1 == '\x04') {
      if (param_2[5] == '\n') {
        if (*param_2 == '\0') {
          param_2[0xc] = '\x06';
        }
        param_2[1] = '\x01';
      }
      if (param_2[2] == '\0') {
        param_2[2] = '\x01';
      }
    }
    else if (cVar1 == '\x01') {
      param_2[0xc] = '\t';
      param_2[3] = '\0';
      if (*(uint *)(param_1 + 8) < 500) {
        if (DAT_20018c65 != '\0') {
          return;
        }
        DAT_20018c65 = 1;
        return;
      }
      DAT_20018c65 = '\0';
    }
    DAT_20007a00 = thunk_FUN_00074f68();
  }
  return;
}


