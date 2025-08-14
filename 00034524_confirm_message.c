/*
 * Function: confirm_message
 * Entry:    00034524
 * Prototype: undefined confirm_message()
 */


void confirm_message(int param_1)

{
  bool bVar1;
  undefined1 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  byte bVar10;
  uint uVar11;
  
  iVar5 = DAT_20008ebc;
  if (((DAT_20008ec4 != '\0') && (DAT_20008ebc == param_1)) && (DAT_20008ec1 == '\x04')) {
    uVar11 = DAT_20009064 & 0xff;
    pcVar3 = (char *)get_work_mode();
    if (((*pcVar3 == '\x01') && (uVar11 == 0)) && (iVar4 = FUN_00033f24(10,iVar5), iVar4 != 0)) {
      if (0 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): add found same message, uidtail %d\n","confirm_message",iVar5);
        }
        else {
          handle_heartbeat();
        }
      }
      fill_memory_buffer(&DAT_20008eb4,0,0x1b4);
      return;
    }
    DAT_20018d8e = 1;
    iVar5 = get_work_mode();
    if (*(char *)(iVar5 + 0xd5) != '\x04') {
      clear_timeout_message(0);
    }
    uVar6 = FUN_00033cdc();
    if (DAT_20009064 == 0) {
      if (uVar6 == 10) {
        iVar5 = 0;
        puVar9 = &DAT_20007dac;
        do {
          iVar4 = memcpy(puVar9,puVar9 + 0x6d,0x1b4);
          *(char *)(iVar4 + 0xc) = (char)iVar5;
          iVar5 = iVar5 + 1;
          puVar9 = puVar9 + 0x6d;
        } while (iVar5 != 9);
        uVar6 = 9;
      }
      iVar5 = memcpy(&DAT_20007dac + uVar6 * 0x6d,&DAT_20008eb4);
      iVar4 = (&DAT_20007dac)[uVar6 * 0x6d];
      *(char *)(iVar5 + 0xc) = (char)uVar6;
      if (iVar4 == 0) {
        uVar7 = FUN_0007d224();
        (&DAT_20007dac)[uVar6 * 0x6d] = uVar7;
      }
      (&DAT_20007dba)[uVar6 * 0x1b4] = 1;
      if ((&DAT_20007db0)[uVar6 * 0x6d] != 0) {
        uVar7 = FUN_0007d224();
        (&DAT_20007db0)[uVar6 * 0x6d] = uVar7;
      }
    }
    else if (DAT_20009064 == 2) {
      if (uVar6 != 0) {
        bVar1 = false;
        bVar10 = 0;
        puVar9 = &DAT_20007dac;
        do {
          if ((puVar9[2] == DAT_20008ebc) || (bVar1)) {
            iVar5 = memcpy(puVar9,puVar9 + 0x6d,0x1b4);
            bVar1 = true;
            *(byte *)(iVar5 + 0xc) = bVar10;
          }
          bVar10 = bVar10 + 1;
          puVar9 = puVar9 + 0x6d;
        } while (bVar10 < uVar6);
        if (bVar1) {
          fill_memory_buffer(&DAT_20007dac + (uVar6 - 1) * 0x6d,0);
        }
      }
    }
    else if ((DAT_20009064 == 1) && (uVar6 != 0)) {
      puVar9 = &DAT_20007dac;
      uVar8 = 0;
      do {
        if (puVar9[2] == DAT_20008ebc) {
          memcpy(&DAT_20007dac + uVar8 * 0x6d,&DAT_20008eb4);
          break;
        }
        uVar8 = uVar8 + 1;
        puVar9 = puVar9 + 0x6d;
      } while ((uVar8 & 0xff) < uVar6);
    }
    fill_memory_buffer(&DAT_20008eb4,0,0x1b4);
    for (uVar6 = 10; uVar6 < DAT_2001a22b; uVar6 = uVar6 + 1 & 0xff) {
      if ((&DAT_20007f70)[uVar6 * 0x1b4] == '\0') goto LAB_00034640;
      iVar5 = memcpy(&DAT_20007dac + uVar6 * 0x6d,&DAT_20007f60 + uVar6 * 0x6d,0x1b4);
      *(char *)(iVar5 + 0xc) = (char)uVar6;
      *(undefined1 *)(iVar5 + 0xd) = 0;
    }
    if (10 < DAT_2001a22b) {
LAB_00034640:
      DAT_2001a22b = DAT_2001a22b - 1;
    }
    fill_memory_buffer(&DAT_20007dac + (uint)DAT_2001a22b * 0x6d,0);
    iVar5 = get_work_mode();
    if (*(char *)(iVar5 + 0xd5) == '\x04') {
      iVar5 = get_work_mode();
      uVar2 = FUN_00033cf8();
      *(undefined1 *)(iVar5 + 0xdd) = uVar2;
    }
    else {
      clear_timeout_message(0);
    }
    if (uVar11 == 0) {
      iVar5 = FUN_00033cb0();
      iVar4 = get_work_mode();
      if (*(char *)(iVar4 + 0xd5) == '\x04') {
        if (iVar5 != 0xff) {
          FUN_0002c1fc();
        }
      }
      else {
        iVar5 = get_work_mode();
        if (((*(char *)(iVar5 + 0xd5) == '\0') ||
            ((iVar5 = get_work_mode(), *(char *)(iVar5 + 0x108f) != '\0' &&
             (iVar5 = get_work_mode(), *(char *)(iVar5 + 0xd5) == '\x06')))) &&
           (iVar5 = is_msg_expiration(), iVar5 != 1)) {
          DAT_2001a229 = 1;
        }
      }
    }
    if (DAT_20018d9f == '\0') {
      FUN_00033b0c();
      FUN_00033b4c();
    }
    DAT_20018d8e = 0;
  }
  return;
}


