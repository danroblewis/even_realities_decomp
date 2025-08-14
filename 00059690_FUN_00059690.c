/*
 * Function: FUN_00059690
 * Entry:    00059690
 * Prototype: undefined FUN_00059690()
 */


void FUN_00059690(void)

{
  undefined4 extraout_r1;
  undefined4 unaff_r4;
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 unaff_lr;
  undefined8 uVar4;
  
  FUN_000864e8(&DAT_20003a28);
  iVar1 = 0;
  puVar3 = &DAT_2000add4;
  do {
    iVar1 = iVar1 + 1;
    FUN_00086502(&DAT_20003a28,puVar3);
    puVar3 = puVar3 + 0x14;
  } while (iVar1 != 10);
  uVar4 = FUN_000826e0(&DAT_2000af04,1);
  uVar2 = (uint)uVar4 & (uint)((ulonglong)uVar4 >> 0x20);
  if (uVar2 == 0) {
    FUN_00059cb4();
    DAT_2000af10 = uVar2;
    DAT_2000af14 = uVar2;
    FUN_000732d4(&DAT_200063a0,&LAB_00082cb2_1);
    FUN_000531cc(&DAT_200063a0,extraout_r1,0x148,0,unaff_r4,unaff_lr);
    FUN_000732d4(&DAT_20006418,&LAB_0005b4bc_1);
    FUN_000826e0(&DAT_20006448,2);
    FUN_000732d4(&DAT_20006350,0x82fa7);
    FUN_00057330(&DAT_200029f8);
    DAT_200029f4 = DAT_2000ad1c;
    DAT_2000ad1c = &DAT_200029d4;
    return;
  }
  return;
}


