/*
 * Function: FUN_00068170
 * Entry:    00068170
 * Prototype: undefined FUN_00068170()
 */


undefined4 FUN_00068170(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (((param_1 == (undefined4 *)0x0) || (pcVar3 = (char *)*param_1, pcVar3 == (char *)0x0)) ||
     (*pcVar3 == '\0')) {
    uVar5 = 0xffffffea;
  }
  else {
    iVar4 = FUN_00068134(pcVar3,0);
    if (iVar4 == 0) {
      uVar5 = 0xffffffef;
    }
    else {
      param_1[7] = param_1 + 7;
      param_1[8] = param_1 + 7;
      puVar1 = DAT_2000b430;
      puVar2 = param_1 + 9;
      param_1[10] = DAT_2000b430;
      DAT_2000b430 = puVar2;
      param_1[9] = &DAT_2000b42c;
      *puVar1 = param_1 + 9;
      if ((6 < DAT_2000b424) && (DAT_2000b428 != (code *)0x0)) {
        (*DAT_2000b428)(7,"registered %s bus\n",*param_1);
      }
      uVar5 = 0;
    }
  }
  return uVar5;
}


