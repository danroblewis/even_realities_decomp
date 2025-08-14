/*
 * Function: FUN_0005a128
 * Entry:    0005a128
 * Prototype: undefined FUN_0005a128()
 */


void FUN_0005a128(undefined1 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_20;
  char *local_1c;
  
  puVar1 = (undefined1 *)FUN_00059bcc();
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)FUN_00059bcc(0,&DAT_000f2b3a);
    if (puVar1 == (undefined1 *)0x0) {
      local_1c = "unable to save SC: no cfg left";
      local_20 = 2;
      FUN_00082a42(&DAT_00088128,0x1040,&local_20);
      return;
    }
    *puVar1 = param_1;
    FUN_000828da(puVar1 + 1,param_2);
  }
  uVar3 = (uint)*(ushort *)(puVar1 + 10);
  if (*(ushort *)(puVar1 + 8) == 0) {
    if (uVar3 == 0) {
      *(short *)(puVar1 + 8) = (short)param_3;
    }
    else {
LAB_0005a196:
      if (param_4 <= uVar3) {
        return;
      }
    }
  }
  else {
    if (*(ushort *)(puVar1 + 8) <= param_3) goto LAB_0005a196;
    *(short *)(puVar1 + 8) = (short)param_3;
    if (param_4 <= uVar3) goto LAB_0005a178;
  }
  *(short *)(puVar1 + 10) = (short)param_4;
LAB_0005a178:
  iVar2 = FUN_00080f92(*puVar1,puVar1 + 1);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = FUN_00053008(*puVar1,puVar1 + 1,puVar1 + 8,4);
  if (iVar2 != 0) {
    local_1c = "failed to store SC (err %d)";
    local_20 = 3;
    FUN_00082a42(&DAT_00088128,0x1840,&local_20);
  }
  return;
}


