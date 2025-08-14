/*
 * Function: FUN_000671d8
 * Entry:    000671d8
 * Prototype: undefined FUN_000671d8()
 */


int FUN_000671d8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","p_config",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_spim.c",0x1ff,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_0007e2ec("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_spim.c",0x1ff);
  }
  uVar2 = (uint)*(byte *)(param_1 + 4);
  iVar3 = uVar2 * 0x24;
  if ((&DAT_2000b3a0)[iVar3] == '\0') {
    (&DAT_2000b384)[uVar2 * 9] = param_3;
    (&DAT_2000b388)[uVar2 * 9] = param_4;
    iVar1 = FUN_00066d78();
    if (iVar1 == 0xbad0000) {
      FUN_00066ec0(param_1);
      (&DAT_2000b3a1)[iVar3] = 0;
      (&DAT_2000b3a0)[iVar3] = 1;
    }
  }
  else {
    iVar1 = 0xbad0005;
  }
  return iVar1;
}


