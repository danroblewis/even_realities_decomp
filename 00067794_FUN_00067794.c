/*
 * Function: FUN_00067794
 * Entry:    00067794
 * Prototype: undefined FUN_00067794()
 */


undefined4 FUN_00067794(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  
  if (param_2 == (int *)0x0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","p_config",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_twim.c",0x102);
    uVar4 = 0x102;
    goto LAB_000677b0;
  }
  bVar1 = *(byte *)(param_1 + 4);
  iVar3 = (uint)bVar1 * 0x28;
  if ((&DAT_2000b3ee)[iVar3] != '\0') {
    return 0xbad0005;
  }
  *(undefined4 *)(&DAT_2000b3d4 + iVar3) = 0;
  *(undefined4 *)(&DAT_2000b3cc + iVar3) = param_3;
  *(undefined4 *)(&DAT_2000b3d0 + iVar3) = param_4;
  (&DAT_2000b3f1)[iVar3] = 0;
  (&DAT_2000b3f0)[iVar3] = 0;
  cVar2 = *(char *)((int)param_2 + 0xe);
  (&DAT_2000b3f3)[iVar3] = cVar2;
  if ((uint)param_2[2] < 0xff00000) {
    uVar4 = 6;
LAB_000677f8:
    if (cVar2 == '\0') {
      if (*param_2 == param_2[1]) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","p_config->scl_pin != p_config->sda_pin",
                     "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_twim.c",0xf3);
        uVar4 = 0xf3;
LAB_000677b0:
                    /* WARNING: Subroutine does not return */
        FUN_0007e2ec("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_twim.c",uVar4);
      }
      FUN_00067548(*param_2,0,3,uVar4,param_4);
      FUN_00067548(param_2[1],0,3,uVar4);
    }
    iVar3 = (uint)bVar1 * 0x28;
    (&DAT_2000b3f2)[iVar3] = *(undefined1 *)((int)param_2 + 0xd);
    FUN_000675c0(param_1,param_2);
    uVar4 = 0xbad0000;
    (&DAT_2000b3ee)[iVar3] = 1;
  }
  else {
    if (*param_2 == 0x22) {
      bVar5 = param_2[1] == 0x23;
LAB_000677f4:
      if (bVar5) {
        uVar4 = 0xb;
        goto LAB_000677f8;
      }
    }
    else if (*param_2 == 0x23) {
      bVar5 = param_2[1] == 0x22;
      goto LAB_000677f4;
    }
    uVar4 = 0xbad0004;
  }
  return uVar4;
}


