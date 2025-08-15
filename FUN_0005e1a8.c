/*
 * Function: FUN_0005e1a8
 * Entry:    0005e1a8
 * Prototype: undefined FUN_0005e1a8()
 */


void FUN_0005e1a8(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined1 uVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 local_70;
  char *local_6c;
  undefined4 uStack_68;
  undefined2 local_64;
  undefined4 local_50;
  char *local_4c;
  undefined4 local_44 [4];
  undefined4 local_34;
  undefined4 uStack_30;
  undefined2 local_2c;
  
  piVar10 = param_1 + -0x3b;
  piVar9 = param_1 + -0x3c;
  iVar11 = *param_1;
  iVar1 = FUN_000831be(piVar10,1);
  if (iVar1 == 0) {
    return;
  }
  if (param_2 != 0) {
    iVar1 = FUN_00082ff6(piVar10,3);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = process_data_with_initialization_and_parameter_validation(param_2);
    uVar2 = iVar1 - 1U & 0xff;
    if (uVar2 < 9) {
      uVar8 = (&UNK_000f5217)[uVar2];
    }
    else {
      uVar8 = 0;
    }
    FUN_00083090(piVar10,2);
    goto LAB_0005e1fa;
  }
  if (*(char *)(iVar11 + 0xb) == '\0') {
    return;
  }
  iVar1 = FUN_00082ff6(piVar10,3);
  if (iVar1 == 0) {
    FUN_00083204(piVar9);
    return;
  }
  iVar1 = FUN_00082ff6(piVar10,5);
  if (iVar1 != 0) {
    if (((int)((uint)*(byte *)(param_1 + -2) << 0x1c) < 0) &&
       ((int)((uint)*(byte *)((int)param_1 + -7) << 0x1c) < 0)) {
      FUN_00083090(piVar10,0x11);
    }
    *(byte *)(param_1 + -2) = *(byte *)(param_1 + -2) & 0xf7;
    *(byte *)((int)param_1 + -7) = *(byte *)((int)param_1 + -7) & 0xf7;
  }
  uVar2 = (uint)*(byte *)((int)param_1 + -7);
  if ((int)(uVar2 << 0x1f) < 0) {
    uVar5 = 6;
LAB_0005e264:
    FUN_00083090(piVar9,uVar5);
  }
  else {
    if ((int)(uVar2 << 0x1e) < 0) {
      uVar5 = 8;
      goto LAB_0005e264;
    }
    if ((int)(uVar2 << 0x1d) < 0) {
      uVar5 = 10;
      goto LAB_0005e264;
    }
  }
  uVar5 = FUN_00083090(piVar10,2);
  if (*(int *)(*param_1 + 0xc0) == 0) {
    uStack_68 = process_data_with_callback_validation_alt6(*param_1 + 0x90);
    local_6c = "No keys space for %s";
    local_64 = 0x200;
    local_70 = 0x1000003;
    FUN_00083074(&DAT_00088180,0x1c40,&local_70);
    return;
  }
  iVar1 = FUN_00082ff6(uVar5,5);
  if ((iVar1 == 0) && ((int)((uint)*(byte *)(param_1 + -2) << 0x1f) < 0)) {
    iVar11 = *(int *)(*param_1 + 0xc0);
    iVar1 = validate_and_process_ble_characteristics_with_callback_execution(local_44,0x1a);
    if (iVar1 == 0) {
      iVar1 = FUN_000830b0(piVar9,6);
      if (iVar1 == 0) {
        local_4c = "Unable to allocate Encrypt Info buffer";
      }
      else {
        iVar3 = FUN_0005f5d0(iVar1 + 0xc,0x10);
        memcpy(iVar3,local_44,*(undefined1 *)(iVar11 + 0xc));
        uVar2 = (uint)*(byte *)(iVar11 + 0xc);
        if (uVar2 < 0x10) {
          fill_memory_buffer(uVar2 + iVar3,0,0x10 - uVar2);
        }
        FUN_0005cb38(piVar9,iVar1,0);
        iVar1 = FUN_000830b0(piVar9,7);
        if (iVar1 != 0) {
          puVar4 = (undefined2 *)FUN_0005f5d0(iVar1 + 0xc,10);
          *(undefined4 *)(puVar4 + 1) = local_34;
          *(undefined4 *)(puVar4 + 3) = uStack_30;
          *puVar4 = local_2c;
          FUN_0005cb38(piVar9,iVar1,&LAB_0005e41c_1);
          iVar1 = FUN_00082ff6(piVar10,0xd);
          if (iVar1 != 0) {
            FUN_0005e9a0(iVar11,1);
            puVar7 = local_44;
            puVar12 = (undefined4 *)(iVar11 + 0x4a);
            do {
              uVar5 = *puVar7;
              uVar6 = puVar7[1];
              puVar7 = puVar7 + 2;
              *puVar12 = uVar5;
              puVar12[1] = uVar6;
              puVar12 = puVar12 + 2;
            } while (puVar7 != &local_34);
            *(undefined4 *)(iVar11 + 0x40) = local_34;
            *(undefined4 *)(iVar11 + 0x44) = uStack_30;
            *(undefined2 *)(iVar11 + 0x48) = local_2c;
          }
          goto LAB_0005e2f2;
        }
        local_4c = "Unable to allocate Central Ident buffer";
      }
    }
    else {
      local_4c = "Unable to get random bytes";
    }
    local_50 = 2;
    FUN_00083074(&DAT_00088180,0x1040,&local_50);
  }
LAB_0005e2f2:
  if ((short)param_1[-2] != 0) {
    return;
  }
  uVar8 = 0;
LAB_0005e1fa:
  FUN_0005daf0(piVar9,uVar8);
  return;
}


