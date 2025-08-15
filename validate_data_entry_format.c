/*
 * Function: validate_data_entry_format
 * Entry:    0003483c
 * Prototype: undefined validate_data_entry_format()
 */


int validate_data_entry_format(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  
  puVar3 = &SYSTEM_ENTRY_TIMEOUT_MANAGEMENT + param_1 * 0x1b4;
  iVar2 = compare_string_offsets("com.android.phone_missed",puVar3,0x18,0x1b4,param_4);
  if ((iVar2 == 0) ||
     (iVar2 = compare_string_offsets("com.apple.mobilephone_missed",puVar3,0x1c), iVar2 == 0)) {
    iVar2 = 1;
  }
  else {
    iVar2 = compare_string_offsets("com.android.phone_incall",puVar3,0x18);
    if ((iVar2 == 0) ||
       (iVar2 = compare_string_offsets("com.apple.mobilephone",puVar3,0x15), iVar2 == 0)) {
      iVar2 = 2;
    }
    else {
      iVar2 = compare_string_offsets("com.apple.MobileSMS",puVar3,0x13);
      if ((iVar2 != 0) &&
         (iVar2 = compare_string_offsets("com.android.even_sms",puVar3,0x14), iVar2 != 0)) {
        iVar2 = get_work_mode();
        pcVar4 = (char *)0x20003152;
        if (*(char *)(iVar2 + 0x1068) != '\0') {
          pcVar4 = (char *)0x20003292;
        }
        for (; *pcVar4 != '\0'; pcVar4 = pcVar4 + 0x20) {
          bVar1 = calculate_string_length(pcVar4);
          if (0x1e < bVar1) {
            bVar1 = 0x1f;
          }
          iVar2 = compare_string_offsets(pcVar4,puVar3,bVar1);
          if (iVar2 == 0) {
            return 3;
          }
        }
        iVar2 = get_work_mode();
        pcVar4 = (char *)0x20003032;
        if (*(char *)(iVar2 + 0x1068) != '\0') {
          pcVar4 = (char *)0x200030d2;
        }
        for (; *pcVar4 != '\0'; pcVar4 = pcVar4 + 0x20) {
          bVar1 = calculate_string_length(pcVar4);
          if (0x1e < bVar1) {
            bVar1 = 0x1f;
          }
          iVar2 = compare_string_offsets(pcVar4,puVar3,bVar1);
          if (iVar2 == 0) {
            return 4;
          }
        }
        iVar2 = 5;
      }
    }
  }
  return iVar2;
}


