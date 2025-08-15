/*
 * Function: setup_comprehensive_interrupt_configuration
 * Entry:    00067938
 * Prototype: undefined setup_comprehensive_interrupt_configuration()
 */


undefined4
setup_comprehensive_interrupt_configuration
          (undefined4 *param_1,byte *param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  
  uVar7 = (uint)*(byte *)(param_1 + 1);
  if (((1 < uVar7) || (0xffff < *(uint *)(param_2 + 4))) || (0xffff < *(uint *)(param_2 + 8))) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                 "(0 || (((p_instance->drv_inst_idx) == NRFX_TWIM1_INST_IDX) && (((p_xfer_desc->primary_length) < (1U << 16)) && ((p_xfer_desc->secondary_length) < (1U << 16)))) || (((p_instance->drv_inst_idx) == NRFX_TWIM2_INST_IDX) && (((p_xfer_desc->primary_length) < (1U << 16)) && ((p_xfer_desc->secondary_length) < (1U << 16)))) || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 || 0 |..." /* TRUNCATED STRING LITERAL */
                 ,"WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_twim.c",0x251,param_4);
    uVar2 = 0x251;
    goto LAB_00067968;
  }
  if (*(int *)(&DAT_2000b3cc + uVar7 * 0x28) == 0) {
    if (*param_2 == 2) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                   "!((p_cb->handler == ((void *)0)) && (p_xfer_desc->type == NRFX_TWIM_XFER_TXRX))"
                   ,"WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_twim.c",0x259,param_4);
      uVar2 = 0x259;
      goto LAB_00067968;
    }
    if (*param_2 == 3) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                   "!((p_cb->handler == ((void *)0)) && (p_xfer_desc->type == NRFX_TWIM_XFER_TXTX))"
                   ,"WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_twim.c",0x25a,param_4);
      uVar2 = 0x25a;
      goto LAB_00067968;
    }
  }
  param_1 = (undefined4 *)*param_1;
  (&DAT_2000b3ef)[uVar7 * 0x28] = 0;
  if (((*(int *)(param_2 + 4) != 0) && ((*(uint *)(param_2 + 0xc) & 0xe0000000) != 0x20000000)) ||
     ((*param_2 - 2 < 2 && ((*(uint *)(param_2 + 0x10) & 0xe0000000) != 0x20000000)))) {
    return 0xbad000a;
  }
  param_1[0xc2] = 0x19c0202;
  iVar3 = uVar7 * 0x28;
  if ((&DAT_2000b3f0)[iVar3] != '\0') {
    param_1[0xc1] = *(undefined4 *)(&DAT_2000b3d4 + iVar3);
    return 0xbad000b;
  }
  (&DAT_2000b3f0)[iVar3] = (param_3 & 0x14) == 0;
  (&DAT_2000b3ec)[iVar3] = *param_2;
  iVar1 = uVar7 * 0x28;
  (&DAT_2000b3ed)[iVar3] = param_2[1];
  *(undefined4 *)(&DAT_2000b3d8 + iVar3) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(&DAT_2000b3dc + iVar3) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(&DAT_2000b3e0 + iVar3) = *(undefined4 *)(param_2 + 0x10);
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(uint *)(&DAT_2000b3e8 + iVar3) = param_3;
  *(undefined4 *)(&DAT_2000b3e4 + iVar3) = uVar2;
  (&DAT_2000b3f1)[iVar3] = (byte)((param_3 << 0x1b) >> 0x1f);
  param_1[0x162] = (uint)param_2[1];
  param_1[0x58] = 0;
  param_1[0x52] = 0;
  param_1[0x49] = 0;
  param_1[0x41] = 0;
  uVar5 = param_3 & 1;
  if (uVar5 != 0) {
    uVar5 = 1;
  }
  param_1[0x154] = uVar5;
  uVar5 = param_3 & 2;
  if (uVar5 != 0) {
    uVar5 = 1;
  }
  param_1[0x150] = uVar5;
  switch(*param_2) {
  case 0:
    bVar8 = (param_3 & 0x20) != 0;
    uVar2 = *(undefined4 *)(&DAT_2000b3dc + iVar1);
    param_1[0x151] = *(undefined4 *)(&DAT_2000b3d8 + iVar1);
    if (bVar8) {
      uVar4 = 0x100;
    }
    else {
      uVar4 = 0x200;
    }
    param_1[0x152] = uVar2;
    if (bVar8) {
      param_1[0x80] = uVar4;
    }
    if (bVar8) {
      uVar2 = 0x40000;
    }
    else {
      param_1[0x80] = uVar4;
      uVar2 = 2;
    }
    *(undefined4 *)(&DAT_2000b3d4 + uVar7 * 0x28) = uVar2;
    param_1[8] = 1;
    goto LAB_00067b26;
  case 1:
    uVar2 = *(undefined4 *)(&DAT_2000b3dc + iVar1);
    param_1[0x14d] = *(undefined4 *)(&DAT_2000b3d8 + iVar1);
    param_1[0x14e] = uVar2;
    uVar2 = 0x1000;
    break;
  case 2:
    uVar2 = *(undefined4 *)(&DAT_2000b3dc + iVar1);
    param_1[0x151] = *(undefined4 *)(&DAT_2000b3d8 + iVar1);
    param_1[0x152] = uVar2;
    uVar2 = *(undefined4 *)(&DAT_2000b3e4 + iVar1);
    param_1[0x14d] = *(undefined4 *)(&DAT_2000b3e0 + iVar1);
    param_1[0x14e] = uVar2;
    uVar2 = 0x1080;
    break;
  case 3:
    if ((param_3 & 0x10) != 0) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","!(flags & (1UL << 4))",
                   "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_twim.c",0x1d4,param_4);
      uVar2 = 0x1d4;
LAB_00067968:
                    /* WARNING: Subroutine does not return */
      trigger_system_service_call
                ("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_twim.c",uVar2);
    }
    if ((param_3 & 8) != 0) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","!(flags & (1UL << 3))",
                   "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_twim.c",0x1d5,param_4);
      uVar2 = 0x1d5;
      goto LAB_00067968;
    }
    if ((param_3 & 4) != 0) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","!(flags & (1UL << 2))",
                   "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_twim.c",0x1d6,param_4);
      uVar2 = 0x1d6;
      goto LAB_00067968;
    }
    param_1[0x80] = 0x100;
    uVar2 = *(undefined4 *)(&DAT_2000b3dc + iVar1);
    param_1[0x151] = *(undefined4 *)(&DAT_2000b3d8 + iVar1);
    param_1[0x152] = uVar2;
    param_1[2] = 1;
    do {
      iVar3 = clear_all_ble_connection_fields(param_1,0x100000);
    } while (iVar3 != 0);
    uVar2 = *(undefined4 *)(&DAT_2000b3e4 + iVar1);
    param_1[0x151] = *(undefined4 *)(&DAT_2000b3e0 + iVar1);
    param_1[0x152] = uVar2;
    uVar2 = 0x40000;
    goto LAB_00067b24;
  default:
    uVar2 = 0xbad0004;
    goto LAB_00067b2a;
  }
  param_1[0x80] = uVar2;
  param_1[8] = 1;
  uVar2 = 2;
LAB_00067b24:
  *(undefined4 *)(&DAT_2000b3d4 + uVar7 * 0x28) = uVar2;
LAB_00067b26:
  uVar2 = 0xbad0000;
LAB_00067b2a:
  iVar3 = uVar7 * 0x28;
  iVar6 = *(int *)(&DAT_2000b3cc + iVar3);
  if (((param_3 & 8) == 0) && (*param_2 != 3)) {
    if (*param_2 == 1) {
      *param_1 = 1;
      if (iVar6 == 0) {
        if (*(int *)(&DAT_2000b3dc + iVar3) == 0) {
          param_1[5] = 1;
        }
        do {
          uVar5 = clear_all_ble_connection_fields(param_1,0x40202);
          if ((uVar5 & 0x200) != 0) {
            param_1[5] = 1;
          }
        } while ((uVar5 & 0x40002) == 0);
      }
    }
    else {
      param_1[2] = 1;
      if (iVar6 == 0) {
        uVar5 = 0;
        if (*(int *)(&DAT_2000b3dc + iVar3) == 0) {
          param_1[5] = 1;
        }
LAB_00067c96:
        do {
          if ((uVar5 & 0x40002) != 0) break;
          uVar5 = clear_all_ble_connection_fields(param_1,0x40202);
          if ((uVar5 & 0x200) != 0) {
            iVar3 = clear_all_ble_connection_fields(param_1,0x1000000);
            if (iVar3 == 0) {
              param_1[8] = 1;
              param_1[5] = 1;
            }
            else {
              if ((param_1[0x80] & 0x200) == 0) {
                param_1[8] = 1;
                param_1[5] = 1;
                uVar5 = 0;
              }
              if (-1 < (int)(param_1[0x80] << 0x17)) goto LAB_00067c96;
              clear_all_ble_connection_fields(param_1,0x40000);
            }
            uVar5 = 0;
          }
        } while( true );
      }
    }
    if (*(int *)(param_2 + 4) == 0) {
      if (*(int *)(&DAT_2000b3cc + uVar7 * 0x28) == 0) goto LAB_00067cee;
      param_1[5] = 1;
    }
  }
  iVar3 = *(int *)(&DAT_2000b3cc + uVar7 * 0x28);
  if (iVar3 != 0) {
    bVar8 = (param_3 & 4) != 0;
    if (bVar8) {
      iVar3 = 0;
    }
    if (bVar8) {
      *(int *)(&DAT_2000b3d4 + uVar7 * 0x28) = iVar3;
    }
    if ((param_3 & 0x40) == 0) {
      *(uint *)(&DAT_2000b3d4 + uVar7 * 0x28) = *(uint *)(&DAT_2000b3d4 + uVar7 * 0x28) | 2;
    }
    iVar3 = uVar7 * 0x28;
    *(uint *)(&DAT_2000b3d4 + iVar3) = *(uint *)(&DAT_2000b3d4 + iVar3) | 0x200;
    param_1[0xc1] = *(undefined4 *)(&DAT_2000b3d4 + iVar3);
    return uVar2;
  }
LAB_00067cee:
  uVar5 = param_1[0x131];
  param_1[0x131] = uVar5;
  (&DAT_2000b3f0)[uVar7 * 0x28] = 0;
  if (uVar5 == 0) {
    if (((param_3 & 0x40) == 0) &&
       (iVar3 = validate_interrupt_configuration_parameters(param_1,&DAT_2000b3cc + iVar1),
       iVar3 == 0)) {
      uVar2 = 0xbad0001;
    }
  }
  else {
    if ((uVar5 & 1) == 0) {
      uVar2 = 0xbad0001;
    }
    else {
      uVar2 = 0xbae0000;
    }
    if ((uVar5 & 2) != 0) {
      uVar2 = 0xbae0001;
    }
    if ((uVar5 & 4) != 0) {
      uVar2 = 0xbae0002;
    }
  }
  return uVar2;
}


