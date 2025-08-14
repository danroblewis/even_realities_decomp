/*
 * Function: FUN_0005a464
 * Entry:    0005a464
 * Prototype: undefined FUN_0005a464(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined2 param_5)
 */


int FUN_0005a464(int param_1,int param_2,ushort *param_3,int param_4,short param_5)

{
  ushort uVar1;
  undefined1 *puVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  undefined4 local_28;
  char *local_24;
  
  iVar5 = *(int *)(param_2 + 0xc);
  if (param_5 == 0) {
    if (param_4 - 1U < 2) {
      uVar4 = (ushort)(byte)*param_3;
      if (param_4 != 1) {
        uVar4 = *param_3;
      }
      puVar2 = (undefined1 *)FUN_00059c48(param_1,iVar5);
      if (puVar2 == (undefined1 *)0x0) {
        if (uVar4 == 0) {
          return param_4;
        }
        puVar2 = (undefined1 *)FUN_00059c48(0,iVar5);
        if (puVar2 == (undefined1 *)0x0) {
          local_24 = "No space to store CCC cfg";
          local_28 = 2;
          FUN_00082a42(&DAT_00088128,0x1080,&local_28);
          return -0x11;
        }
        FUN_000828da(puVar2 + 1,param_1 + 0x90);
        *puVar2 = *(undefined1 *)(param_1 + 8);
      }
      if (*(code **)(iVar5 + 0x10) != (code *)0x0) {
        iVar3 = (**(code **)(iVar5 + 0x10))(param_1,param_2,uVar4);
        if (iVar3 < 0) {
          return iVar3;
        }
        if (1 < iVar3 - 1U) {
          return -0xe;
        }
      }
      uVar1 = *(ushort *)(puVar2 + 8);
      *(ushort *)(puVar2 + 8) = uVar4;
      if (*(ushort *)(iVar5 + 10) != uVar4) {
        FUN_000825c0(param_2,iVar5);
      }
      if (uVar1 != uVar4) {
        FUN_00059d24(*(undefined1 *)(param_1 + 8),param_1 + 0x90,0);
      }
      if (uVar4 == 0) {
        FUN_000828da(puVar2 + 1,&DAT_000f2b3a);
        *puVar2 = 0;
        *(undefined2 *)(puVar2 + 8) = 0;
      }
    }
    else {
      param_4 = -0xd;
    }
  }
  else {
    param_4 = -7;
  }
  return param_4;
}


