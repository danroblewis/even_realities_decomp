/*
 * Function: FUN_0005fa94
 * Entry:    0005fa94
 * Prototype: undefined FUN_0005fa94(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


int FUN_0005fa94(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,uint param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_20;
  char *local_1c;
  
  iVar3 = *(int *)(param_1 + 0x10);
  if ((int)((uint)*(byte *)(iVar3 + 0x50) << 0x1e) < 0) {
    if (param_5 == 0xffffffff) {
      uVar4 = 0xffffffffffffffff;
    }
    else {
      lVar1 = (longlong)(int)(param_5 & ~((int)param_5 >> 0x1f)) * 0x8000 + 999;
      uVar4 = FUN_0000e244((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),1000,0);
    }
    iVar2 = FUN_00072240(iVar3 + 0x1c,param_3,(int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
    if (iVar2 == 0) {
      *param_4 = *(undefined4 *)(iVar3 + 0x18);
    }
    else {
      local_1c = "No audio data to be read";
      local_20 = 2;
      FUN_000837a2(&DAT_000881a0,0x1040,&local_20);
    }
  }
  else {
    iVar2 = -5;
    local_1c = "Device is not configured";
    local_20 = 2;
    FUN_000837a2(&DAT_000881a0,0x1040,&local_20);
  }
  return iVar2;
}


