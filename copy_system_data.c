/*
 * Function: copy_system_data
 * Entry:    00016658
 * Prototype: undefined copy_system_data()
 */


void copy_system_data(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar5;
  
  iVar1 = WORK_MODE;
  **(int **)(WORK_MODE + 0xfec) = WORK_MODE_TIMESTAMP_OPERATIONS_BUFFER + 1;
  *(undefined1 *)(*(int *)(iVar1 + 0xfec) + 4) = (undefined1)DAT_2007fc04;
  *(undefined1 *)(*(int *)(iVar1 + 0xfec) + 5) = DAT_2007fc04._1_1_;
  uVar3 = SYSTEM_STATIC_INFO_RESET_2;
  iVar2 = *(int *)(iVar1 + 0xfec);
  *(undefined4 *)(iVar2 + 6) = SYSTEM_STATIC_INFO_RESET_1;
  *(undefined4 *)(iVar2 + 10) = uVar3;
  *(undefined1 *)(*(int *)(iVar1 + 0xfec) + 0x5d) = SYSTEM_STATIC_INFO_RESET_5;
  *(undefined1 *)(*(int *)(iVar1 + 0xfec) + 0x5e) = (undefined1)DAT_2007fc60;
  *(undefined1 *)(*(int *)(iVar1 + 0xfec) + 0x61) = SYSTEM_STATIC_INFO_RESET_6;
  *(undefined1 *)(*(int *)(iVar1 + 0xfec) + 0x60) = DAT_2007fc60._1_1_;
  *(undefined1 *)(*(int *)(iVar1 + 0xfec) + 99) = DAT_2007fc68;
  if (SYSTEM_STATIC_INFO_RESET_8 < 4) {
    SYSTEM_PARAMETER_AND_WORK_MODE_STATUS = SYSTEM_STATIC_INFO_RESET_8;
  }
  puVar4 = (undefined4 *)(*(int *)(iVar1 + 0xfec) + 0xe);
  puVar6 = &SYSTEM_STATIC_INFO_RESET_3;
  do {
    puVar7 = puVar6;
    puVar5 = puVar4;
    uVar3 = puVar7[1];
    *puVar5 = *puVar7;
    puVar5[1] = uVar3;
    puVar4 = puVar5 + 2;
    puVar6 = puVar7 + 2;
  } while (puVar7 + 2 != (undefined4 *)0x2007fc30);
  puVar5[2] = uRam2007fc30;
  *(undefined1 *)(puVar5 + 3) = *(undefined1 *)(puVar7 + 3);
  puVar4 = &SYSTEM_STATIC_INFO_RESET_4;
  puVar6 = (undefined4 *)(*(int *)(iVar1 + 0xfec) + 0x33);
  do {
    puVar5 = puVar4 + 1;
    puVar7 = puVar6 + 1;
    *puVar6 = *puVar4;
    puVar4 = puVar5;
    puVar6 = puVar7;
  } while (puVar5 != (undefined4 *)0x2007fc5d);
  *(undefined2 *)puVar7 = uRam2007fc5d;
  return;
}


