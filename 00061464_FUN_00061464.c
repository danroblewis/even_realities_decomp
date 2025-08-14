/*
 * Function: FUN_00061464
 * Entry:    00061464
 * Prototype: undefined FUN_00061464()
 */


undefined4 FUN_00061464(int param_1,uint param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined1 uStack_19;
  uint local_18;
  undefined1 *local_14;
  
  uVar4 = param_2 & 0x1f;
  uVar6 = (uint)*(byte *)(*(int *)(param_1 + 4) + 0xc);
  uVar5 = uVar4 | uVar6 << 5;
  if (param_3 == 0x200000) {
    FUN_00065acc(uVar5);
  }
  else {
    local_14 = (undefined1 *)0x0;
    puVar1 = local_14;
    if (param_3 == 0x400000) {
      bVar7 = param_4 == 0x2000000;
      if (bVar7) {
        param_4 = 4;
      }
      bVar3 = (byte)param_4;
      if (!bVar7) {
        bVar3 = 5;
      }
      local_18 = (uint)bVar3;
    }
    else {
      if (param_4 == 0x6000000) {
        bVar3 = 3;
      }
      else {
        bVar7 = param_4 != 0x2000000;
        if (bVar7) {
          param_4 = 1;
        }
        bVar3 = (byte)param_4;
        if (!bVar7) {
          bVar3 = 2;
        }
      }
      local_18 = (uint)bVar3;
      if ((-1 < (int)((*(uint *)(*(int *)(param_1 + 4) + 8) >> (param_2 & 0xff)) << 0x1f)) &&
         (param_3 == 0x1400000)) {
        if (uVar6 == 0) {
          if (-1 < (int)((0xffffffffU >> uVar4) << 0x1f)) goto LAB_000614f4;
          iVar2 = 0x50842500;
        }
        else {
          if ((uVar6 != 1) || (-1 < (int)((0xffffU >> uVar4) << 0x1f))) {
LAB_000614f4:
            DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","nrf_gpio_pin_present_check(*p_pin)",
                         "WEST_TOPDIR/modules/hal/nordic/nrfx/hal/nrf_gpio.h",0x32f);
                    /* WARNING: Subroutine does not return */
            FUN_0007e2ec("WEST_TOPDIR/modules/hal/nordic/nrfx/hal/nrf_gpio.h",0x32f);
          }
          iVar2 = 0x50842800;
        }
        if (-1 < *(int *)(iVar2 + (uVar4 + 0x80) * 4) << 0x1f) {
          iVar2 = FUN_000658e8(uVar5,&uStack_19);
          puVar1 = &uStack_19;
          if ((iVar2 == 0xbad0004) && (iVar2 = FUN_000659d8(&uStack_19), iVar2 != 0xbad0000)) {
            return 0xfffffff4;
          }
        }
      }
    }
    local_14 = puVar1;
    iVar2 = FUN_0006567c(uVar5,0,&local_18);
    if (iVar2 != 0xbad0000) {
      return 0xffffffea;
    }
    FUN_000659e4(uVar5,1);
  }
  return 0;
}


