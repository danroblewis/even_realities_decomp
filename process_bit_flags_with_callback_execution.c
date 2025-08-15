/*
 * Function: process_bit_flags_with_callback_execution
 * Entry:    0004d2d0
 * Prototype: undefined __stdcall process_bit_flags_with_callback_execution(undefined4 bit_flags)
 */


uint process_bit_flags_with_callback_execution(uint bit_flags)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = bit_flags;
  while (bit_flags != 0) {
    bVar2 = (byte)bit_flags;
    bVar3 = (byte)(bit_flags >> 8);
    bVar4 = (byte)(bit_flags >> 0x10);
    bVar1 = (byte)(bit_flags >> 0x18);
    iVar6 = LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1) <<
                                     1 | bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 |
                                  bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18
                    | (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1)
                                       << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                    bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                      0x10 | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                              bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                            bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                          bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
                    (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1) <<
                                     1 | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 |
                                  bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
    bit_flags = bit_flags & ~(1 << iVar6);
    if (((&SYSTEM_TASKS_PRIORITY_MANAGEMENT_CONFIG)[iVar6 * 0x10] != '\0') &&
       ((*(code **)((&SYSTEM_TASK_PRIORITY_MANAGEMENT_TABLE)[iVar6 * 4] + 0x10) == (code *)0x0 ||
        (iVar5 = (**(code **)((&SYSTEM_TASK_PRIORITY_MANAGEMENT_TABLE)[iVar6 * 4] + 0x10))
                           (&SYSTEM_TASK_PRIORITY_MANAGEMENT_TABLE + iVar6 * 4), iVar5 == 0)))) {
      uVar7 = uVar7 & ~(1 << iVar6);
      initialize_task_entry_with_priority_and_state
                (&SYSTEM_TASK_PRIORITY_MANAGEMENT_TABLE + iVar6 * 4,
                 *(undefined4 *)(&SYSTEM_TASKS_AND_MEMORY_MANAGEMENT_CONFIG)[iVar6 * 4],4);
    }
  }
  return uVar7;
}


