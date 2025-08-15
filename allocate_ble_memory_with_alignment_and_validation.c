/*
 * Function: allocate_ble_memory_with_alignment_and_validation
 * Entry:    00075944
 * Prototype: undefined allocate_ble_memory_with_alignment_and_validation()
 */


undefined4 *
allocate_ble_memory_with_alignment_and_validation
          (uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  
  iVar2 = check_privilege_level();
  if (iVar2 == 0) {
    puVar3 = *(undefined **)(DMIC_BUFFER_SIZE + 0x88);
    if (puVar3 == (undefined *)0x0) {
      return (undefined4 *)0x0;
    }
  }
  else {
    puVar3 = &DAT_200037d8;
  }
  if ((0xfffffffb < param_2) ||
     (puVar1 = (undefined4 *)
               manage_ble_memory_with_display_integration
                         (puVar3,param_1 | 4,param_2 + 4,param_4,0,0,unaff_r4,unaff_r5),
     puVar1 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
  puVar4 = puVar1 + 1;
  *puVar1 = puVar3;
  if (param_1 == 0) {
    return puVar4;
  }
  if (((uint)puVar4 & param_1 - 1) == 0) {
    return puVar4;
  }
  DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","align == 0 || ((uintptr_t)mem & (align - 1)) == 0",
               "WEST_TOPDIR/zephyr/kernel/mempool.c",0x25);
  DEBUG_PRINT2("\tmisaligned memory at %p (align = %zu)\n",puVar4,param_1);
                    /* WARNING: Subroutine does not return */
  assertion_failure("WEST_TOPDIR/zephyr/kernel/mempool.c",0x25);
}


