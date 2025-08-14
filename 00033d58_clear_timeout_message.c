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
  DAT_20018d8e = 1;
LAB_00033d76:
  iVar2 = (&DAT_20007dac)[iVar5 * 0x6d];
  iVar4 = (&DAT_20007db0)[iVar5 * 0x6d];
  if (iVar2 == 0) {
    if (iVar6 == 0) goto LAB_00033dc2;
    if (iVar7 == 0) {
      iVar7 = iVar6;
      if (iVar4 == 0) {
        iVar4 = iVar5 + 1;
        goto joined_r0x00033edc;
      }
      if ((&DAT_20007dbb)[iVar5 * 0x1b4] == '\0') goto LAB_00033daa;
LAB_00033de4:
      if (param_1 == 0) {
LAB_00033de8:
        uVar3 = FUN_0007d224();
        if (uVar3 <= (&DAT_20007db0)[iVar5 * 0x6d] + 10) goto LAB_00033daa;
      }
    }
    else {
      if ((&DAT_20007dbb)[iVar5 * 0x1b4] == '\0') {
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
    fill_memory_buffer(&DAT_20007dac + iVar5 * 0x6d,0);
    if (9 < iVar4) goto LAB_00033e3e;
    if ((&DAT_20007dac)[iVar5 * 0x6d] != 0) {
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
    if ((&DAT_20007dbb)[iVar5 * 0x1b4] != '\0') goto LAB_00033de4;
    if ((iVar2 != 0) && (uVar3 = FUN_0007d224(), (&DAT_20007db0)[iVar5 * 0x6d] + 5 < uVar3)) {
      iVar7 = iVar7 + 1;
      iVar4 = iVar7 + iVar5;
      fill_memory_buffer(&DAT_20007dac + iVar5 * 0x6d,0,0x1b4);
      if (iVar4 < 10) {
        if ((&DAT_20007dac)[iVar5 * 0x6d] != 0) goto LAB_00033e8a;
        goto LAB_00033e98;
      }
      goto LAB_00033e3e;
    }
LAB_00033daa:
    iVar4 = iVar7 + iVar5;
    if (9 < iVar4) goto LAB_00033e3e;
    if (((&DAT_20007dac)[iVar5 * 0x6d] != 0) || (iVar7 == 0)) goto LAB_00033dc8;
  }
LAB_00033e98:
  if ((&DAT_20007dbc)[iVar4 * 0x1b4] == '\0') {
    iVar7 = iVar7 + 1;
    goto LAB_00033d76;
  }
  memcpy(&DAT_20007dac + iVar5 * 0x6d,&DAT_20007dac + iVar4 * 0x6d);
  fill_memory_buffer(&DAT_20007dac + iVar4 * 0x6d,0,0x1b4);
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
    uVar1 = FUN_00033cf8();
    *(undefined1 *)(iVar7 + 0xdd) = uVar1;
    DAT_20018d8e = 0;
    return;
  }
  goto LAB_00033d76;
}


