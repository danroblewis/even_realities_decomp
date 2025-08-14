/*
 * Function: FUN_00055e74
 * Entry:    00055e74
 * Prototype: undefined FUN_00055e74()
 */


int FUN_00055e74(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar4;
  undefined4 local_28;
  char *local_24;
  int iStack_20;
  undefined4 uStack_18;
  undefined4 *puVar3;
  
  if (DAT_2000ac70 == param_2) {
    iVar4 = -0x78;
  }
  else if ((DAT_2000ac70 == 0) && (-1 < DAT_200020d4 << 0x1a)) {
    if (DAT_200020d4 << 0x1b < 0) {
      DAT_2000ac70 = param_2;
      uStack_18 = param_4;
      iVar4 = FUN_00053cd4(0x2026,0x40);
      if (iVar4 == 0) {
        iVar4 = -0x69;
      }
      else {
        puVar1 = (undefined4 *)FUN_0005f5d0(iVar4 + 0xc,0x40);
        puVar2 = param_1;
        do {
          puVar3 = puVar2 + 1;
          *puVar1 = *puVar2;
          puVar1 = puVar1 + 1;
          puVar2 = puVar3;
        } while (puVar3 != param_1 + 0x10);
        iVar4 = FUN_00053d70(0x2026,iVar4,0);
        if (iVar4 == 0) {
          return 0;
        }
      }
      DAT_2000ac70 = 0;
      local_24 = "Failed to generate DHKey (err %d)";
      local_28 = 3;
      iStack_20 = iVar4;
      FUN_0004d944(&DAT_00088120,0x1880,&local_28);
    }
    else {
      iVar4 = -0x7d;
    }
  }
  else {
    iVar4 = -0x10;
  }
  return iVar4;
}


