/*
 * Function: FUN_00063b7c
 * Entry:    00063b7c
 * Prototype: undefined FUN_00063b7c()
 */


void FUN_00063b7c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_r5;
  int unaff_r7;
  undefined8 uVar4;
  
  FUN_0004d678();
  FUN_0004d944(&DAT_000881a8,0x1040,&stack0xfffffff0,0,param_1,param_2,param_3,param_4);
  uVar4 = FUN_00050af8(0);
LAB_00063ba0:
  do {
    iVar1 = (int)((ulonglong)uVar4 >> 0x20);
    *(int *)(unaff_r7 + 0x6c) = iVar1;
    *(short *)(unaff_r5 + 0xc) = (short)uVar4;
    iVar3 = -1;
    do {
      iVar2 = iVar3 + 1;
      unaff_r7 = iVar1;
      if ((&DAT_2000b308)[iVar2] != 0) {
        uVar4 = 0x2000b30800000000;
        goto LAB_00063ba0;
      }
      iVar3 = 0;
    } while (iVar2 < iVar1);
    uVar4 = 0x2000b30800000001;
  } while( true );
}


