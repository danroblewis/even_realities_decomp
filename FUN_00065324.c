/*
 * Function: FUN_00065324
 * Entry:    00065324
 * Prototype: undefined FUN_00065324()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00065324(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 uStack_14;
  
  if (DAT_2000b320 == '\0') {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","m_clock_cb.module_initialized",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_clock.c",0x1ad);
                    /* WARNING: Subroutine does not return */
    assertion_failure("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_clock.c",0x1ad);
  }
  switch(param_1) {
  case 0:
    _DAT_50005308 = 2;
    _DAT_50005104 = 0;
    _DAT_5000500c = 1;
    break;
  case 1:
    _DAT_50005308 = 1;
    _DAT_50005100 = 0;
    pbVar4 = (byte *)((int)&uStack_14 + 3);
    _DAT_50005004 = 1;
    goto LAB_0006503e;
  case 2:
    _DAT_50005308 = 0x200;
    _DAT_50005124 = 0;
    _DAT_50005024 = 1;
    break;
  case 3:
    _DAT_50005308 = 0x100;
    _DAT_50005120 = 0;
    _DAT_5000501c = 1;
    break;
  default:
    uStack_14 = param_2;
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","0",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_clock.c",0xd8,param_1);
    uVar3 = 0xd8;
    pcVar2 = "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_clock.c";
    goto LAB_0006508c;
  }
  pbVar4 = (byte *)0x0;
LAB_0006503e:
  uStack_14 = CONCAT13(1,(int3)param_2);
  switch(param_1) {
  case 0:
    iVar5 = 10000;
    do {
      if (pbVar4 == (byte *)0x0) {
        if ((_DAT_50005418 & 0x10000) == 0) {
          return;
        }
        cVar1 = '\x01';
      }
      else {
        *pbVar4 = (byte)_DAT_50005418 & 3;
        if ((_DAT_50005418 & 0x10000) == 0) {
          return;
        }
        cVar1 = uStack_14._3_1_;
        if (uStack_14._3_1_ != '\x01') {
          return;
        }
      }
      thunk_FUN_00086384(cVar1);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    break;
  case 1:
    iVar5 = 10000;
    do {
      if (pbVar4 == (byte *)0x0) {
        if ((_DAT_5000540c & 0x10000) == 0) {
          return;
        }
        cVar1 = '\x01';
      }
      else {
        *pbVar4 = (byte)_DAT_5000540c & 1;
        if ((_DAT_5000540c & 0x10000) == 0) {
          return;
        }
        cVar1 = uStack_14._3_1_;
        if (uStack_14._3_1_ != '\x01') {
          return;
        }
      }
      thunk_FUN_00086384(cVar1);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    break;
  case 2:
    iVar5 = 10000;
    do {
      if (pbVar4 == (byte *)0x0) {
        if ((_DAT_5000545c & 0x10000) == 0) {
          return;
        }
        cVar1 = '\x01';
      }
      else {
        *pbVar4 = (byte)_DAT_5000545c & 1;
        if ((_DAT_5000545c & 0x10000) == 0) {
          return;
        }
        cVar1 = uStack_14._3_1_;
        if (uStack_14._3_1_ != '\x01') {
          return;
        }
      }
      thunk_FUN_00086384(cVar1);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    break;
  case 3:
    iVar5 = 10000;
    do {
      if (-1 < _DAT_50005454 << 0xf) {
        return;
      }
      if (pbVar4 == (byte *)0x0) {
        cVar1 = '\x01';
      }
      else {
        cVar1 = uStack_14._3_1_;
        if (uStack_14._3_1_ != '\x01') {
          return;
        }
      }
      thunk_FUN_00086384(cVar1);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    break;
  default:
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","0",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/hal/nrf_clock.h",0x3cb,param_1);
    uVar3 = 0x3cb;
    pcVar2 = "WEST_TOPDIR/modules/hal/nordic/nrfx/hal/nrf_clock.h";
LAB_0006508c:
                    /* WARNING: Subroutine does not return */
    assertion_failure(pcVar2,uVar3);
  }
  return;
}


