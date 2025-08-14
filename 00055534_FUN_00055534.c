/*
 * Function: FUN_00055534
 * Entry:    00055534
 * Prototype: undefined FUN_00055534()
 */


undefined4 FUN_00055534(undefined4 param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  char cVar10;
  undefined4 local_30;
  char *local_2c;
  
  iVar1 = FUN_00053cd4(param_1,0x20);
  if (iVar1 == 0) {
    return 0xffffff97;
  }
  puVar2 = (undefined1 *)FUN_0005f5d0(iVar1 + 0xc,0x20);
  fill_memory_buffer(puVar2,0,0x20);
  uVar7 = 0;
  puVar9 = param_2 + param_3 * 2;
  do {
    pcVar8 = (char *)*param_2;
    for (uVar6 = 0; uVar6 < (uint)param_2[1]; uVar6 = uVar6 + 1) {
      uVar5 = (uint)(byte)pcVar8[1];
      uVar4 = uVar7 + 2;
      cVar10 = *pcVar8;
      if (0x1f < uVar5 + uVar4) {
        uVar5 = 0x1f - uVar4;
        if ((cVar10 != '\t') || ((int)uVar5 < 1)) {
          local_2c = "Too big advertising data";
          local_30 = 2;
          FUN_0004d944(&DAT_000880f8,0x1040,&local_30,0);
          FUN_0005f24c(iVar1);
          return 0xffffffea;
        }
        cVar10 = '\b';
      }
      puVar2[uVar7 + 1] = (char)uVar5 + '\x01';
      puVar2[(uVar7 + 1 & 0xff) + 1] = cVar10;
      memcpy(puVar2 + (uVar4 & 0xff) + 1,*(undefined4 *)(pcVar8 + 4));
      uVar7 = (uVar5 & 0xff) + 2 + uVar7 & 0xff;
      pcVar8 = pcVar8 + 8;
    }
    param_2 = param_2 + 2;
    if (puVar9 == param_2) {
      *puVar2 = (char)uVar7;
      uVar3 = FUN_00053d70(param_1,iVar1,0);
      return uVar3;
    }
  } while( true );
}


