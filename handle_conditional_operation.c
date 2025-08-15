/*
 * Function: handle_conditional_operation
 * Entry:    000187e8
 * Prototype: undefined handle_conditional_operation()
 */


void handle_conditional_operation(undefined4 param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_2c [2];
  undefined1 local_24 [16];
  
  pcVar1 = (char *)get_work_mode();
  if (((*pcVar1 == '\x02') && (iVar2 = get_system_ready_state(), iVar2 != 1)) &&
     (uVar5 = DAT_20006ab4 | 1, iVar2 = DAT_20006ab4 << 0x1f, DAT_20006ab4 = uVar5, -1 < iVar2)) {
    if (((int)(uVar5 << 0x1e) < 0) ||
       ((param_2 != 0 && (iVar2 = FUN_0007c08e(&DAT_20006ab4,0xfffffffb), -1 < iVar2 << 0x1d)))) {
      FUN_0007c08e(&DAT_20006ab4,0xfffffffe);
      return;
    }
    puVar7 = &DAT_00088388;
    puVar6 = local_2c;
    do {
      uVar3 = *puVar7;
      uVar4 = puVar7[1];
      puVar7 = puVar7 + 2;
      *puVar6 = uVar3;
      puVar6[1] = uVar4;
      puVar6 = puVar6 + 2;
    } while (puVar7 != (undefined4 *)&UNK_00088398);
    *(undefined1 *)puVar6 = 0x79;
    iVar2 = process_data_with_callback_and_validation_alt
                      (param_1,local_2c,&PTR_handle_multi_step_operation_1_00088a0c,&DAT_20006ae8);
    if (iVar2 != 0) {
      DEBUG_PRINT("Failed to start discovery for ANCS (err %d)\n",iVar2);
      FUN_0007c08e(&DAT_20006ab4,0xfffffffe);
    }
  }
  return;
}


