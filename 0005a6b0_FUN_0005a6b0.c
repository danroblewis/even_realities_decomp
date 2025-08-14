/*
 * Function: FUN_0005a6b0
 * Entry:    0005a6b0
 * Prototype: undefined FUN_0005a6b0()
 */


void FUN_0005a6b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined1 *puVar2;
  int iVar3;
  
  FUN_000826f6(&DAT_20006448,0xfffffff7,param_3,param_4,param_4);
  FUN_000531d8(&DAT_200063a0,extraout_r1,0x148,0);
  iVar3 = 0;
  puVar2 = &DAT_2000aed4;
  do {
    iVar1 = FUN_000826b2(puVar2 + 1,&DAT_000f2b3a);
    if ((iVar1 == 0) && ((int)((uint)(byte)puVar2[8] << 0x1f) < 0)) {
      iVar1 = FUN_00056e74(0,puVar2 + 1);
      if (iVar1 != 0) {
        FUN_00082572();
        FUN_000566a4(iVar1);
      }
      FUN_000826f6(puVar2 + 0xc,0xfffffffd);
      FUN_00082bb8(puVar2,0);
    }
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 0x10;
  } while (iVar3 != 3);
  return;
}


