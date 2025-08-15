/*
 * Function: FUN_00067304
 * Entry:    00067304
 * Prototype: undefined FUN_00067304()
 */


undefined4 FUN_00067304(int *param_1,uint *param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  sbyte sVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  int *local_30;
  uint *puStack_2c;
  uint uStack_28;
  uint local_24;
  
  uVar8 = (uint)*(byte *)(param_1 + 1);
  local_30 = param_1;
  puStack_2c = param_2;
  uStack_28 = param_3;
  local_24 = param_4;
  if ((&DAT_2000b3a0)[uVar8 * 0x24] == '\0') {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","p_cb->state != NRFX_DRV_STATE_UNINITIALIZED",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_spim.c",0x314);
    uVar2 = 0x314;
    goto LAB_0006732e;
  }
  if ((*param_2 == 0) && (param_2[1] != 0)) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                 "p_xfer_desc->p_tx_buffer != ((void *)0) || p_xfer_desc->tx_length == 0",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_spim.c",0x315);
    uVar2 = 0x315;
    goto LAB_0006732e;
  }
  if (param_2[2] == 0) {
    if (param_2[3] != 0) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                   "p_xfer_desc->p_rx_buffer != ((void *)0) || p_xfer_desc->rx_length == 0",
                   "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_spim.c",0x316);
      uVar2 = 0x316;
      goto LAB_0006732e;
    }
    sVar5 = (&DAT_000f6fd9)[uVar8];
LAB_00067370:
    if (param_2[1] >> sVar5 == 0) {
      if (((param_3 & 8) == 0) || ((&DAT_2000b3a4)[uVar8 * 9] == -1)) {
        if ((&DAT_2000b3a1)[uVar8 * 0x24] != '\0') {
          return 0xbad000b;
        }
        iVar6 = (&DAT_2000b384)[uVar8 * 9];
        if (iVar6 != 0) {
          bVar9 = (param_3 & 0x14) == 0;
          if (bVar9) {
            iVar6 = 1;
          }
          if (bVar9) {
            (&DAT_2000b3a1)[uVar8 * 0x24] = (char)iVar6;
          }
        }
        uVar3 = param_2[1];
        uVar4 = param_2[2];
        uVar7 = param_2[3];
        iVar6 = uVar8 * 0x24;
        *(uint *)(&DAT_2000b390 + iVar6) = *param_2;
        *(uint *)(&DAT_2000b394 + iVar6) = uVar3;
        *(uint *)(&DAT_2000b398 + iVar6) = uVar4;
        *(uint *)(&DAT_2000b39c + iVar6) = uVar7;
        if ((&DAT_2000b3a4)[uVar8 * 9] != -1) {
          if ((&DAT_2000b3a3)[iVar6] == '\0') {
            FUN_000852fe();
          }
          else {
            FUN_000852e6();
          }
        }
        iVar6 = *param_1;
        if (((*param_2 != 0) && ((*param_2 & 0xe0000000) != 0x20000000)) ||
           ((param_2[2] != 0 && ((param_2[2] & 0xe0000000) != 0x20000000)))) {
          (&DAT_2000b3a1)[uVar8 * 0x24] = 0;
          return 0xbad000a;
        }
        uVar3 = param_3 & 1;
        if (uVar3 != 0) {
          uVar3 = 1;
        }
        *(uint *)(iVar6 + 0x550) = uVar3;
        uVar3 = param_3 & 2;
        if (uVar3 != 0) {
          uVar3 = 1;
        }
        *(uint *)(iVar6 + 0x540) = uVar3;
        local_30 = (int *)*param_2;
        puStack_2c = (uint *)param_2[1];
        uStack_28 = param_2[2];
        local_24 = param_2[3];
        *(int **)(iVar6 + 0x544) = local_30;
        *(uint **)(iVar6 + 0x548) = puStack_2c;
        *(uint *)(iVar6 + 0x534) = uStack_28;
        *(uint *)(iVar6 + 0x538) = local_24;
        *(undefined4 *)(iVar6 + 0x118) = 0;
        *(undefined4 *)(iVar6 + 0x500) = 7;
        if ((param_3 & 8) == 0) {
          iVar1 = (&DAT_2000b384)[uVar8 * 9];
          *(undefined4 *)(iVar6 + 0x10) = 1;
          if (iVar1 == 0) {
            do {
            } while (*(int *)(iVar6 + 0x118) == 0);
            FUN_0008523e(iVar6,0x40,&local_30);
          }
          if ((&DAT_2000b384)[uVar8 * 9] == 0) {
            if ((&DAT_2000b3a4)[uVar8 * 9] != -1) {
              if ((&DAT_2000b3a3)[uVar8 * 0x24] == '\0') {
                FUN_000852e6();
              }
              else {
                FUN_000852fe();
              }
            }
            FUN_000852ba(iVar6,&DAT_2000b384 + uVar8 * 9);
            return 0xbad0000;
          }
        }
        else if ((&DAT_2000b384)[uVar8 * 9] == 0) {
          if ((&DAT_2000b3a4)[uVar8 * 9] == -1) {
            return 0xbad0000;
          }
          if ((&DAT_2000b3a3)[uVar8 * 0x24] != '\0') {
            FUN_000852fe();
            return 0xbad0000;
          }
          FUN_000852e6();
          return 0xbad0000;
        }
        bVar9 = (param_3 & 4) != 0;
        if (bVar9) {
          *(undefined4 *)(iVar6 + 0x308) = 0x40;
        }
        if (!bVar9) {
          *(undefined4 *)(iVar6 + 0x304) = 0x40;
        }
        return 0xbad0000;
      }
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                   "!(flags & (1UL << 3)) || (p_cb->ss_pin == 0xFFFFFFFF)",
                   "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_spim.c",0x31a);
      uVar2 = 0x31a;
      goto LAB_0006732e;
    }
  }
  else {
    sVar5 = (&DAT_000f6fd9)[uVar8];
    if (param_2[3] >> sVar5 == 0) goto LAB_00067370;
  }
  DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
               "((p_xfer_desc->rx_length < (1UL << (easydma_support_bits[p_instance->drv_inst_idx]))) && (p_xfer_desc->tx_length < (1UL << (easydma_support_bits[p_instance->drv_inst_idx]))))"
               ,"WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_spim.c",0x317);
  uVar2 = 0x317;
LAB_0006732e:
                    /* WARNING: Subroutine does not return */
  assertion_failure("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_spim.c",uVar2);
}


