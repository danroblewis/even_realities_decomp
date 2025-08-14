/*
 * Function: FUN_00086daa
 * Entry:    00086daa
 * Prototype: undefined FUN_00086daa()
 */


int FUN_00086daa(undefined1 *param_1,uint param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_18 = param_3;
  uStack_1c = param_2;
  *param_1 = (char)param_3;
  if ((int)param_2 < 0) {
    param_2 = -param_2;
    uVar4 = 0x2d;
  }
  else {
    uVar4 = 0x2b;
  }
  param_1[1] = uVar4;
  if ((int)param_2 < 10) {
    param_1[2] = 0x30;
    puVar3 = param_1 + 4;
    param_1[3] = (char)param_2 + '0';
  }
  else {
    puVar5 = (undefined1 *)((int)&uStack_1c + 3);
    puVar3 = puVar5;
    do {
      puVar6 = puVar3;
      cVar2 = (char)(param_2 / 10);
      puVar6[-1] = (char)param_2 + cVar2 * -10 + '0';
      bVar1 = 99 < (int)param_2;
      param_2 = param_2 / 10;
      puVar3 = puVar6 + -1;
    } while (bVar1);
    puVar6[-2] = cVar2 + '0';
    puVar3 = param_1 + 1;
    for (puVar8 = puVar6 + -2; puVar8 < puVar5; puVar8 = puVar8 + 1) {
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar8;
    }
    iVar7 = (int)&uStack_18 + (1 - (int)puVar6);
    if (puVar5 < puVar6 + -2) {
      iVar7 = 0;
    }
    puVar3 = param_1 + iVar7 + 2;
  }
  return (int)puVar3 - (int)param_1;
}


