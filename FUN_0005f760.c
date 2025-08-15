/*
 * Function: FUN_0005f760
 * Entry:    0005f760
 * Prototype: undefined FUN_0005f760()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0005f760(undefined4 param_1,int *param_2)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined4 extraout_r1;
  undefined4 uVar5;
  undefined4 extraout_r1_00;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  undefined4 local_40;
  char *local_3c;
  undefined8 local_38;
  undefined4 local_20;
  char *local_1c;
  
  FUN_00072908(&DAT_200021d0,param_2,0xffffffff,0xffffffff);
  uVar9 = param_2[1];
  if (uVar9 - 1 < 0xff) {
    uVar4 = 0;
    uVar6 = 0;
    do {
      if ((uVar9 >> (uVar4 & 0xff) & 1) == 0) {
        *(undefined4 *)(&DAT_5000e000 + (uVar4 + 0x51) * 0x10) = 0;
      }
      else {
        bVar1 = (&DAT_20002230)[uVar4];
        if (bVar1 == 0) {
          local_3c = "Channel %u not configured";
          local_38._0_4_ = uVar4;
          goto LAB_0005f7c6;
        }
        bVar10 = *(byte *)((int)param_2 + 0x11);
        if (bVar10 != 0) {
          bVar10 = 1;
        }
        *(uint *)(uVar4 * 0x10 + 0x5000e518) =
             *(uint *)(uVar4 * 0x10 + 0x5000e518) & 0xfeffffff | (uint)bVar10 << 0x18;
        *(uint *)(&DAT_5000e000 + (uVar4 + 0x51) * 0x10) = (uint)bVar1;
        uVar6 = uVar6 + 1 & 0xff;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != 8);
    switch((uint)*(byte *)(param_2 + 4)) {
    case 8:
      _DAT_5000e5f0 = 0;
      break;
    default:
      local_3c = "ADC resolution value %d is not valid";
      local_38._0_4_ = (uint)*(byte *)(param_2 + 4);
      goto LAB_0005f7c6;
    case 10:
      _DAT_5000e5f0 = 1;
      break;
    case 0xc:
      _DAT_5000e5f0 = 2;
      break;
    case 0xe:
      _DAT_5000e5f0 = 3;
    }
    uVar9 = (uint)*(byte *)((int)param_2 + 0x11);
    if (1 < uVar6) {
      if (uVar9 != 0) {
        local_1c = "Oversampling is supported for single channel only";
        goto LAB_0005f782;
      }
LAB_0005f874:
      uVar4 = uVar6 * 2;
      if (*param_2 != 0) {
        uVar4 = *(ushort *)(*param_2 + 0xc) * uVar4 + uVar4;
      }
      _DAT_5000e5f4 = uVar9;
      if ((uint)param_2[3] < uVar4) {
        local_3c = "Provided buffer is too small (%u/%u)";
        local_40 = 4;
        local_38._0_4_ = param_2[3];
        local_38._4_4_ = uVar4;
        process_and_compress_data_with_validation(&DAT_000880e0,0x2040,&local_40,0);
        iVar8 = -0xc;
        goto LAB_0005f7d6;
      }
      _DAT_5000e62c = param_2[2];
      DAT_20002204 = (undefined4 *)*param_2;
      DAT_20002208 = param_2[1];
      DAT_2000220c = param_2[2];
      DAT_20002210 = param_2[3];
      DAT_20002214 = param_2[4];
      DAT_20002200 = 0;
      puVar7 = (uint *)*param_2;
      _DAT_5000e630 = uVar6;
      if (puVar7 == (uint *)0x0) {
LAB_0005f948:
        FUN_0005f638(&DAT_20002190);
        uVar5 = extraout_r1_00;
      }
      else {
        DAT_20002218 = *puVar7;
        DAT_2000221c = puVar7[1];
        DAT_20002220 = puVar7[2];
        DAT_20002224 = puVar7[3];
        DAT_20002204 = &DAT_20002218;
        DAT_20002228 = 0;
        if (DAT_20002218 == 0) goto LAB_0005f948;
        DAT_20002190 = 0;
        lVar2 = (ulonglong)DAT_20002218 * 0x8000 + 999999;
        local_38 = handle_unsigned_division((int)lVar2,(int)((ulonglong)lVar2 >> 0x20),"size",0);
        schedule_dashboard_lock_task(&DAT_20002198,(int)((ulonglong)local_38 >> 0x20),0,0);
        uVar5 = extraout_r1;
      }
      iVar3 = FUN_00072908(&DAT_200021e8,uVar5,0xffffffff,0xffffffff);
      iVar8 = DAT_20002200;
      if (iVar3 != 0) {
        iVar8 = iVar3;
        DAT_20002200 = iVar3;
      }
      goto LAB_0005f7d6;
    }
    if (uVar9 < 9) goto LAB_0005f874;
    local_3c = "Oversampling value %d is not valid";
    local_38._0_4_ = uVar9;
LAB_0005f7c6:
    local_40 = 3;
    process_and_compress_data_with_validation(&DAT_000880e0,0x1840,&local_40,0);
  }
  else {
    local_1c = "Invalid selection of channels";
LAB_0005f782:
    local_20 = 2;
    process_and_compress_data_with_validation(&DAT_000880e0,0x1040,&local_20,0);
  }
  iVar8 = -0x16;
LAB_0005f7d6:
  z_spin_lock_valid(&DAT_200021d0);
  return iVar8;
}


