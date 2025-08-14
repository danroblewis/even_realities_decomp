/*
 * Function: FUN_00061624
 * Entry:    00061624
 * Prototype: undefined FUN_00061624()
 */


undefined4 FUN_00061624(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar9 = *(int *)(param_1 + 4);
  uVar8 = param_2 & 0x1f | (uint)*(byte *)(iVar9 + 0xc) << 5;
  uStack_24 = param_2;
  local_20 = param_3;
  uStack_1c = param_4;
  iVar2 = FUN_000658e8(uVar8,(int)&uStack_24 + 3,param_3,(uint)*(byte *)(iVar9 + 0xc),param_1);
  if ((param_3 & 0x30000) == 0) {
    FUN_00065b18(uVar8);
    if (iVar2 == 0xbad0000) {
      iVar2 = FUN_000659cc(uStack_24._3_1_);
      if (iVar2 != 0xbad0000) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","err == NRFX_SUCCESS",
                     "WEST_TOPDIR/zephyr/drivers/gpio/gpio_nrfx.c",0x6c);
        uVar4 = 0x6c;
LAB_00061674:
                    /* WARNING: Subroutine does not return */
        FUN_0007e2ec("WEST_TOPDIR/zephyr/drivers/gpio/gpio_nrfx.c",uVar4);
      }
    }
LAB_00061734:
    uVar4 = 0;
  }
  else {
    local_20 = 0;
    uStack_1c = 0;
    iVar3 = FUN_0006567c(uVar8,0,&local_20);
    if (iVar3 != 0xbad0000) goto LAB_000616ce;
    if (iVar2 == 0xbad0000) {
      iVar2 = FUN_000659cc(uStack_24._3_1_);
      if (iVar2 != 0xbad0000) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","err == NRFX_SUCCESS",
                     "WEST_TOPDIR/zephyr/drivers/gpio/gpio_nrfx.c",0x7f);
        uVar4 = 0x7f;
        goto LAB_00061674;
      }
    }
    uVar1 = local_20;
    if ((int)(param_3 << 0xe) < 0) {
      uVar5 = param_3 & 0x306;
      if (uVar5 == 0x106) {
        uVar5 = 7;
LAB_000616f8:
        if ((int)(param_3 << 0x1b) < 0) {
          uVar6 = 3;
        }
        else {
          uVar6 = (param_3 << 0x1a) >> 0x1f;
        }
        local_20._3_1_ = SUB41(uVar1,3);
        local_20._0_3_ =
             CONCAT12((char)uVar6,CONCAT11((byte)(((param_3 ^ 0x10000) << 0xf) >> 0x1f),(char)uVar5)
                     );
        if ((int)(param_3 << 0xc) < 0) {
          *(int *)(*(int *)(iVar9 + 4) + 8) = 1 << (param_2 & 0xff);
        }
        else {
          iVar2 = param_3 << 0xd;
          bVar10 = iVar2 < 0;
          if (bVar10) {
            iVar2 = *(int *)(iVar9 + 4);
            uVar6 = 1 << (param_2 & 0xff);
          }
          if (bVar10) {
            *(uint *)(iVar2 + 0xc) = uVar6;
          }
        }
        iVar2 = FUN_000657e4(uVar8,&local_20,0);
        goto LAB_0006172e;
      }
      if (0x106 < uVar5) {
        if (uVar5 == 0x202) {
          uVar5 = 5;
        }
        else if (uVar5 == 0x300) {
          uVar5 = 3;
        }
        else {
          if (uVar5 != 0x200) goto LAB_000616ce;
          uVar5 = 2;
        }
        goto LAB_000616f8;
      }
      if (uVar5 == 6) goto LAB_000616f8;
      if (uVar5 < 7) {
        if (uVar5 != 0) {
          if (uVar5 != 2) goto LAB_000616ce;
          uVar5 = 4;
        }
        goto LAB_000616f8;
      }
      if (uVar5 == 0x100) {
        uVar5 = 1;
        goto LAB_000616f8;
      }
    }
    else {
      if ((int)(param_3 << 0x1b) < 0) {
        bVar7 = 3;
      }
      else {
        bVar7 = (byte)((param_3 << 0x1a) >> 0x1f);
      }
      local_20 = CONCAT31(local_20._1_3_,bVar7);
      iVar2 = FUN_0006567c(uVar8,&local_20,0);
LAB_0006172e:
      if (iVar2 == 0xbad0000) goto LAB_00061734;
    }
LAB_000616ce:
    uVar4 = 0xffffffea;
  }
  return uVar4;
}


