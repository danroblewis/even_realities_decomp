/*
 * Function: initialize_buffer_structure_with_context
 * Entry:    0004e494
 * Prototype: undefined initialize_buffer_structure_with_context()
 */


undefined4 initialize_buffer_structure_with_context(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  ppuVar2 = (undefined **)&DAT_000882b0;
  while( true ) {
    if (&PTR_LAB_00051fd8_1_00088328 < ppuVar2) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","ch <= _settings_handler_static_list_end",
                   "WEST_TOPDIR/zephyr/subsys/settings/src/settings.c",0x2b);
      DEBUG_PRINT2("\tunexpected list end location\n");
                    /* WARNING: Subroutine does not return */
      assertion_failure("WEST_TOPDIR/zephyr/subsys/settings/src/settings.c",0x2b);
    }
    if (&UNK_00088327 < ppuVar2) break;
    uVar5 = compare_byte_arrays(*param_1,*ppuVar2);
    param_2 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if ((int)uVar5 == 0) {
      return 0xffffffef;
    }
    ppuVar2 = ppuVar2 + 5;
  }
  resource_mutex_acquire(&DAT_20003868,param_2,0xffffffff,0xffffffff);
  puVar3 = DAT_2000a10c;
  do {
    if (puVar3 == (undefined4 *)0x0) {
      param_1[5] = 0;
      param_1 = param_1 + 5;
      puVar3 = param_1;
      if (DAT_2000a110 != (undefined4 *)0x0) {
        *DAT_2000a110 = param_1;
        puVar3 = DAT_2000a10c;
      }
      DAT_2000a10c = puVar3;
      uVar4 = 0;
      DAT_2000a110 = param_1;
LAB_0004e502:
      mutex_unlock(&DAT_20003868);
      return uVar4;
    }
    iVar1 = compare_byte_arrays(*param_1,puVar3[-5]);
    if (iVar1 == 0) {
      uVar4 = 0xffffffef;
      goto LAB_0004e502;
    }
    puVar3 = (undefined4 *)*puVar3;
  } while( true );
}


