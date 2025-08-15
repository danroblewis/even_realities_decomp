/*
 * Function: FUN_0007ec0e
 * Entry:    0007ec0e
 * Prototype: undefined FUN_0007ec0e()
 */


int FUN_0007ec0e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  iVar4 = *(int *)(param_1 + 0x10);
  puVar7 = *(undefined4 **)(param_1 + 4);
  piVar6 = (int *)(iVar4 + 0x3bc);
  if (*piVar6 != 2) {
    return -0x78;
  }
  *piVar6 = 1;
  if ((*(char *)(iVar4 + 100) != '\0') || (*(char *)(iVar4 + 0xd4) != '\0')) {
    return -0x10;
  }
  iVar1 = FUN_0007ed2a(iVar4,*(undefined4 *)(iVar4 + 0x3b8),0,0,param_4);
  if (iVar1 == 0) {
    iVar5 = *(int *)(param_1 + 0x10);
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x14);
    pcVar3 = *(code **)(*(int *)(iVar1 + 8) + 0x10);
    if (pcVar3 == (code *)0x0) {
      iVar1 = -0x58;
    }
    else {
      iVar1 = (*pcVar3)(iVar1,*(undefined4 *)(*(int *)(param_1 + 4) + 0x18),0);
      if (iVar1 == 0) {
        iVar5 = iVar5 + 0x2c0;
        FUN_000731b8(iVar5,1);
        process_data_with_callback_validation_alt5(iVar5);
        iVar1 = FUN_0007eda4(iVar4 + 0x1c8,*puVar7);
        if (iVar1 == 0) {
          fill_memory_buffer(iVar4 + 0x1c8,0,0xe8);
          fill_memory_buffer(iVar4,0,0x1c4);
          uVar2 = 0;
          goto LAB_0007eca4;
        }
      }
    }
  }
  uVar2 = 2;
LAB_0007eca4:
  FUN_0007eb4e(piVar6,uVar2);
  return iVar1;
}


