/*
 * Function: FUN_00036820
 * Entry:    00036820
 * Prototype: undefined FUN_00036820()
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00036820(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int extraout_r2;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  code *pcVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined2 local_54;
  undefined4 local_50 [2];
  undefined1 auStack_48 [6];
  short local_42;
  
  puVar1 = (undefined4 *)malloc_maybe(0x50);
  if (puVar1 == (undefined4 *)0x0) {
    DEBUG_PRINT("[%s-%d]malloc error \n","get_demo_image_source",0xd3);
    return;
  }
  fill_memory_buffer(puVar1,0,0x50);
  if (4 < param_1) {
    DEBUG_PRINT("error imgIdx is %d,reset as zero !\n",param_1);
    param_1 = 0;
  }
  iVar2 = get_work_mode();
  pcVar12 = *(code **)(iVar2 + 0x1030);
  uVar3 = get_work_mode();
  iVar10 = param_1 * 0x3ebe + 0x180000;
  iVar2 = (*pcVar12)(uVar3,iVar10,puVar1,0x50);
  if (iVar2 == 0) {
    local_60 = *puVar1;
    uStack_5c = puVar1[1];
    uStack_58 = puVar1[2];
    local_54 = (undefined2)puVar1[3];
    iVar2 = compare_string_offsets(&local_60,&DAT_000a8da5,2);
    if (iVar2 == 0) {
      puVar7 = (undefined4 *)((int)puVar1 + 0xe);
      puVar13 = local_50;
      do {
        uVar3 = *puVar7;
        uVar6 = puVar7[1];
        puVar7 = puVar7 + 2;
        *puVar13 = uVar3;
        puVar13[1] = uVar6;
        puVar13 = puVar13 + 2;
      } while (puVar7 != (undefined4 *)((int)puVar1 + 0x36));
      uVar14 = FUN_0007d1c8((int)&uStack_58 + 2);
      iVar2 = FUN_0007d1c8(local_50 + 1,(int)((ulonglong)uVar14 >> 0x20),(int)uVar14);
      iVar4 = FUN_0007d1c8(auStack_48);
      if (local_42 == 1) {
        iVar8 = iVar2 + 7;
        DAT_20009fc4 = 0;
        if (iVar8 < 0) {
          iVar8 = iVar2 + 0xe;
        }
        DAT_20009fc8 = 0;
        iVar9 = iVar2 + 0x1f;
        if (iVar9 < 0) {
          iVar9 = iVar2 + 0x3e;
        }
        iVar11 = iVar10 + extraout_r2 + (iVar4 + -1) * (iVar9 >> 5) * 4;
        for (iVar10 = 0; iVar10 < iVar4; iVar10 = iVar10 + 1) {
          DAT_20009fc4 = 0;
          fill_memory_buffer(puVar1,0,0x50);
          iVar5 = get_work_mode();
          pcVar12 = *(code **)(iVar5 + 0x1030);
          uVar3 = get_work_mode();
          iVar5 = (*pcVar12)(uVar3,iVar11,puVar1,iVar8 >> 3);
          if (iVar5 != 0) {
            uVar3 = 0x103;
            goto LAB_0003687c;
          }
          for (iVar5 = 0; iVar5 < iVar8 >> 3; iVar5 = iVar5 + 1) {
            FUN_0003678c(~*(byte *)((int)puVar1 + iVar5),iVar2);
          }
          if (DAT_20009fcc != 0) {
            DAT_20009fc8 = 0;
            iVar5 = get_work_mode();
            memcpy(*(undefined4 *)(iVar5 + iVar10 * 4 + 0xb90),DAT_20009fcc,0x140);
          }
          iVar11 = iVar11 + (iVar9 >> 5) * -4;
        }
      }
      else {
        FUN_000777f0("Unsupported bit depth - %d\r\n");
      }
    }
    else {
      DEBUG_PRINT("File is not BMP format \n");
    }
  }
  else {
    uVar3 = 0xdf;
LAB_0003687c:
    DEBUG_PRINT("[%s-%d] read pic from flash failed !\n","get_demo_image_source",uVar3);
  }
  FUN_00076d7c(puVar1);
  return;
}


