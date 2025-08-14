/*
 * Function: FUN_0003629c
 * Entry:    0003629c
 * Prototype: undefined FUN_0003629c()
 */


void FUN_0003629c(undefined4 param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  longlong lVar5;
  
  cVar3 = *(char *)((int)param_2 + 6);
  bVar4 = cVar3 == '\x01';
  if (bVar4) {
    cVar3 = '\0';
    DAT_20009fc0 = 0;
  }
  if (bVar4) {
    *(char *)((int)param_2 + 6) = cVar3;
  }
  lVar5 = thunk_FUN_00074f68();
  uVar2 = (uint)(lVar5 * 1000) >> 0xf | (int)((ulonglong)(lVar5 * 1000) >> 0x20) * 0x20000;
  uVar1 = uVar2;
  if ((DAT_20009fc0 != 0) && (uVar1 = DAT_20009fc0, 999 < uVar2 - DAT_20009fc0)) {
    *param_2 = *param_2 - (uVar2 - DAT_20009fc0) / 1000;
    uVar1 = uVar2;
  }
  DAT_20009fc0 = uVar1;
  return;
}


