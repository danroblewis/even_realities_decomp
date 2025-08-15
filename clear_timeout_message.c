/*
 * Function: clear_timeout_message
 * Entry:    00033d58
 * Prototype: undefined clear_timeout_message()
 */


void clear_timeout_message(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  iVar7 = 0;
  iVar5 = 0;
  TIMEOUT_MESSAGE_COUNTER = 1;
LAB_00033d76:
  iVar2 = (&TIMEOUT_MESSAGE_STATE_MANAGEMENT_ARRAY)[iVar5 * 0x6d];
  iVar4 = (&TIMEOUT_MESSAGE_STATE_TABLE)[iVar5 * 0x6d];
  if (iVar2 == 0) {
    if (iVar6 == 0) goto LAB_00033dc2;
    if (iVar7 == 0) {
      iVar7 = iVar6;
      if (iVar4 == 0) {
        iVar4 = iVar5 + 1;
        goto joined_r0x00033edc;
      }
      if ((&TIMEOUT_MESSAGE_STATE_AND_EXPIRATION_MANAGEMENT)[iVar5 * 0x1b4] == '\0')
      goto LAB_00033daa;
LAB_00033de4:
      if (param_1 == 0) {
LAB_00033de8:
        uVar3 = get_work_mode_timestamp();
        if (uVar3 <= (&TIMEOUT_MESSAGE_STATE_TABLE)[iVar5 * 0x6d] + 10) goto LAB_00033daa;
      }
    }
    else {
      if ((&TIMEOUT_MESSAGE_STATE_AND_EXPIRATION_MANAGEMENT)[iVar5 * 0x1b4] == '\0') {
LAB_00033d92:
        iVar4 = iVar5 + iVar7;
joined_r0x00033edc:
        if (iVar4 < 10) goto LAB_00033e98;
        goto LAB_00033e3e;
      }
      if (param_1 == 0) {
        if (iVar4 == 0) goto LAB_00033d92;
        goto LAB_00033de8;
      }
      if (iVar4 == 0) goto LAB_00033d92;
    }
    iVar7 = iVar7 + 1;
    iVar4 = iVar7 + iVar5;
    fill_memory_buffer(&TIMEOUT_MESSAGE_STATE_MANAGEMENT_ARRAY + iVar5 * 0x6d,0);
    if (9 < iVar4) goto LAB_00033e3e;
    if ((&TIMEOUT_MESSAGE_STATE_MANAGEMENT_ARRAY)[iVar5 * 0x6d] != 0) {
      iVar5 = iVar5 + 1;
      goto LAB_00033d76;
    }
  }
  else {
    iVar6 = 1;
LAB_00033dc2:
    if (iVar4 == 0) {
      if (iVar7 != 0) {
        iVar4 = iVar5 + iVar7;
        if (9 < iVar4) goto LAB_00033e3e;
        if (iVar2 == 0) goto LAB_00033e98;
LAB_00033e8a:
        iVar5 = iVar5 + 1;
        goto LAB_00033d76;
      }
      goto LAB_00033dc8;
    }
    if ((&TIMEOUT_MESSAGE_STATE_AND_EXPIRATION_MANAGEMENT)[iVar5 * 0x1b4] != '\0')
    goto LAB_00033de4;
    if ((iVar2 != 0) &&
       (uVar3 = get_work_mode_timestamp(), (&TIMEOUT_MESSAGE_STATE_TABLE)[iVar5 * 0x6d] + 5 < uVar3)
       ) {
      iVar7 = iVar7 + 1;
      iVar4 = iVar7 + iVar5;
      fill_memory_buffer(&TIMEOUT_MESSAGE_STATE_MANAGEMENT_ARRAY + iVar5 * 0x6d,0,0x1b4);
      if (iVar4 < 10) {
        if ((&TIMEOUT_MESSAGE_STATE_MANAGEMENT_ARRAY)[iVar5 * 0x6d] != 0) goto LAB_00033e8a;
        goto LAB_00033e98;
      }
      goto LAB_00033e3e;
    }
LAB_00033daa:
    iVar4 = iVar7 + iVar5;
    if (9 < iVar4) goto LAB_00033e3e;
    if (((&TIMEOUT_MESSAGE_STATE_MANAGEMENT_ARRAY)[iVar5 * 0x6d] != 0) || (iVar7 == 0))
    goto LAB_00033dc8;
  }
LAB_00033e98:
  if ((&DAT_20007dbc)[iVar4 * 0x1b4] == '\0') {
    iVar7 = iVar7 + 1;
    goto LAB_00033d76;
  }
  memcpy(&TIMEOUT_MESSAGE_STATE_MANAGEMENT_ARRAY + iVar5 * 0x6d,
         &TIMEOUT_MESSAGE_STATE_MANAGEMENT_ARRAY + iVar4 * 0x6d);
  fill_memory_buffer(&TIMEOUT_MESSAGE_STATE_MANAGEMENT_ARRAY + iVar4 * 0x6d,0,0x1b4);
  if (0 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): ######clear_timeout_message copy data from %d to  i %d\n",
                  "clear_timeout_message",iVar4,iVar5);
    }
    else {
      handle_heartbeat("%s(): ######clear_timeout_message copy data from %d to  i %d\n",
                       "clear_timeout_message",iVar4,iVar5);
    }
  }
LAB_00033dc8:
  iVar5 = iVar5 + 1;
  if (iVar5 == 10) {
LAB_00033e3e:
    iVar7 = get_work_mode();
    uVar1 = calculate_next_timeout_message_state();
    *(undefined1 *)(iVar7 + 0xdd) = uVar1;
    TIMEOUT_MESSAGE_COUNTER = 0;
    return;
  }
  goto LAB_00033d76;
}


