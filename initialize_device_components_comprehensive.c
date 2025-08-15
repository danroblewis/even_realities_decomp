/*
 * Function: initialize_device_components_comprehensive
 * Entry:    00062d9c
 * Prototype: undefined initialize_device_components_comprehensive()
 */


int initialize_device_components_comprehensive(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  bool bVar8;
  undefined4 local_28;
  char *local_24;
  
  process_data_with_callback_execution_alt4(8,1,0);
  process_data_with_parameter_validation_alt4(8);
  puVar7 = *(undefined4 **)(param_1 + 4);
  piVar5 = *(int **)(param_1 + 0x10);
  puVar4 = (undefined4 *)*puVar7;
  puVar4[0x140] = 0;
  *piVar5 = param_1;
  iVar1 = FUN_00084b14(puVar7[3]);
  if ((-1 < iVar1) && (iVar1 = configure_device_memory_parameters(param_1,piVar5 + 1), iVar1 == 0))
  {
    if ((int)(puVar7[1] << 0x1e) < 0) {
      iVar2 = FUN_0006540c(piVar5 + 7);
      if (iVar2 != 0xbad0000) {
        local_24 = "Failed to allocate PPI Channel";
        local_28 = 2;
        process_and_compress_data_with_validation(&DAT_00088290,0x1040,&local_28,0);
        return -5;
      }
      FUN_000850dc((char)piVar5[7],puVar4 + 0x48,puVar4 + 3);
      FUN_00064f30(1 << (uint)*(byte *)(piVar5 + 7));
    }
    if (piVar5[3] == 0) {
      puVar4[0x140] = 8;
      if (*(char *)(puVar7 + 2) == '\0') {
        puVar4[0x44] = 0;
        puVar4[0x14d] = piVar5[6];
        puVar4[0x14e] = 1;
        *puVar4 = 1;
      }
    }
    else {
      iVar6 = *(int *)(param_1 + 0x10);
      iVar2 = **(int **)(param_1 + 4);
      *(undefined4 *)(iVar2 + 0x304) = 4;
      uVar3 = 1;
      *(undefined4 *)(*(int *)(iVar6 + 0xc) + 0xc0) = 1;
      *(char **)(iVar2 + 0x304) = "(): EVENT_PUT_IN_GLASS_BOX_OPEN\n";
      *(undefined4 *)(iVar2 + 0x500) = 8;
      if (*(int *)(iVar2 + 0x14c) != 0) {
        *(undefined4 *)(iVar2 + 4) = 1;
        do {
          if (*(int *)(iVar2 + 0x144) != 0) break;
        } while (*(int *)(iVar2 + 0x124) == 0);
        *(undefined4 *)(iVar2 + 0x14c) = 0;
        *(undefined4 *)(iVar2 + 0x110) = 0;
        *(undefined4 *)(iVar2 + 0x144) = 0;
        uVar3 = *(undefined4 *)(iVar2 + 0x144);
      }
      initialize_graphics_engine(*(int *)(iVar6 + 0xc) + 0x80,0x84b87,0,uVar3);
      *(int *)(*(int *)(iVar6 + 0xc) + 0xb4) = iVar6;
      initialize_graphics_engine(*(int *)(iVar6 + 0xc) + 0x20,&LAB_00084c56_1,0);
      *(int *)(*(int *)(iVar6 + 0xc) + 0x54) = iVar6;
    }
    iVar2 = puVar7[1];
    bVar8 = -1 < iVar2 << 0x1e;
    if (bVar8) {
      iVar2 = 0x100;
    }
    if (bVar8) {
      puVar4[0xc1] = iVar2;
    }
    iVar2 = puVar7[1] << 0x1b;
    bVar8 = iVar2 < 0;
    if (bVar8) {
      iVar2 = 0x400000;
    }
    if (bVar8) {
      puVar4[0xc1] = iVar2;
    }
    puVar4[0x151] = piVar5[5];
    puVar4[0x152] = 0;
    puVar4[2] = 1;
    puVar4[3] = 1;
  }
  return iVar1;
}


