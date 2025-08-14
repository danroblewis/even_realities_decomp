/*
 * Function: FUN_00050e64
 * Entry:    00050e64
 * Prototype: undefined FUN_00050e64()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00050e64(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  piVar3 = &DAT_2000a7f4;
  iVar4 = 0;
  piVar6 = param_1;
  do {
    if (param_2 <= iVar4) {
      return;
    }
    iVar5 = param_1[1];
    if (iVar5 != 0) {
      iVar2 = *param_1;
      iVar1 = FUN_00080786(iVar2);
      iVar5 = FUN_00080786(iVar5 + iVar2 + -1);
      if (iVar1 != iVar5) {
        (&DAT_2000a7f4)[iVar4 * 5] = 0xffffffea;
LAB_00050eb8:
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","0",
                     "WEST_TOPDIR/zephyr/arch/arm/core/aarch32/mpu/arm_mpu.c",299,piVar6,iVar2,
                     param_3);
        DEBUG_PRINT2("\tMarking %u areas for dynamic regions failed\n\n",param_2);
                    /* WARNING: Subroutine does not return */
        FUN_0007e2ec("WEST_TOPDIR/zephyr/arch/arm/core/aarch32/mpu/arm_mpu.c",299);
      }
      *piVar3 = iVar1;
      if ((iVar1 == -0x16) || ((int)(uint)DAT_2001d450 <= iVar1)) goto LAB_00050eb8;
      iVar5 = iVar4 * 0x14;
      _DAT_e000ed98 = iVar1;
      (&DAT_2000a800)[iVar5] = (&DAT_2000a800)[iVar5] & 0xe0 | (byte)_DAT_e000ed9c & 0x1f;
      (&DAT_2000a800)[iVar5] = (&DAT_2000a800)[iVar5] & 0x1f | (byte)((_DAT_e000eda0 >> 1 & 7) << 5)
      ;
      piVar3[1] = _DAT_e000ed9c & 0xffffffe0;
      piVar3[4] = _DAT_e000eda0 & 0xffffffe0;
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 5;
    param_1 = param_1 + 3;
  } while( true );
}


