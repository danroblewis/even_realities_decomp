/*
 * Function: FUN_00086f5a
 * Entry:    00086f5a
 * Prototype: undefined FUN_00086f5a()
 */


void FUN_00086f5a(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_lr;
  
  if ((int)((uint)*(ushort *)(param_2 + 0xc) << 0x17) < 0) {
    FUN_00078598(param_1,(int)*(short *)(param_2 + 0xe),0,2);
  }
  *(ushort *)(param_2 + 0xc) = *(ushort *)(param_2 + 0xc) & 0xefff;
  DAT_2000cc24 = 0;
  iVar1 = FUN_0004b0dc((int)*(short *)(param_2 + 0xe),param_3,param_4,param_4,param_4,unaff_r4,
                       unaff_r5,unaff_lr);
  if ((iVar1 == -1) && (DAT_2000cc24 != 0)) {
    *param_1 = DAT_2000cc24;
  }
  return;
}


