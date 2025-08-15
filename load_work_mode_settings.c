/*
 * Function: load_work_mode_settings
 * Entry:    000165cc
 * Prototype: undefined load_work_mode_settings()
 */


void load_work_mode_settings(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar4 = *(undefined4 **)(WORK_MODE + 0xfec);
  DAT_2007fc00 = *puVar4;
  SYSTEM_STATIC_INFO_RESET_1 = *(undefined4 *)((int)puVar4 + 6);
  DAT_2007fc04._0_1_ = *(undefined1 *)(puVar4 + 1);
  DAT_2007fc04._1_1_ = *(undefined1 *)((int)puVar4 + 5);
  SYSTEM_STATIC_INFO_RESET_2 = *(undefined4 *)((int)puVar4 + 10);
  DAT_2007fc5f = *(undefined1 *)((int)puVar4 + 0x5d);
  DAT_2007fc60._0_1_ = *(undefined1 *)((int)puVar4 + 0x5e);
  DAT_2007fc62 = *(undefined1 *)((int)puVar4 + 0x61);
  DAT_2007fc60._1_1_ = *(undefined1 *)(puVar4 + 0x18);
  puVar2 = &SYSTEM_STATIC_INFO_RESET_3;
  puVar5 = (undefined4 *)((int)puVar4 + 0xe);
  do {
    puVar6 = puVar5;
    puVar3 = puVar2;
    uVar1 = puVar6[1];
    puVar5 = puVar6 + 2;
    *puVar3 = *puVar6;
    puVar3[1] = uVar1;
    puVar2 = puVar3 + 2;
  } while (puVar5 != (undefined4 *)((int)puVar4 + 0x2e));
  puVar3[2] = *puVar5;
  *(undefined1 *)(puVar3 + 3) = *(undefined1 *)(puVar6 + 3);
  puVar2 = &SYSTEM_STATIC_INFO_RESET_4;
  puVar5 = (undefined4 *)((int)puVar4 + 0x33);
  do {
    puVar6 = puVar5 + 1;
    puVar3 = puVar2 + 1;
    *puVar2 = *puVar5;
    puVar2 = puVar3;
    puVar5 = puVar6;
  } while (puVar6 != (undefined4 *)((int)puVar4 + 0x5b));
  *(undefined2 *)puVar3 = *(undefined2 *)puVar6;
  return;
}


