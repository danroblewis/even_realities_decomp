/*
 * Function: backup_and_restore_hardware_config
 * Entry:    000667e0
 * Prototype: undefined backup_and_restore_hardware_config()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void backup_and_restore_hardware_config(void)

{
  undefined4 *extraout_r1;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_28 = 0xff;
  uStack_24 = 0xff;
  uStack_20 = 0xff;
  uStack_1c = 0xff;
  local_18 = 0xff;
  uStack_14 = 0xff;
  local_40 = _DAT_5002b524 & 0xff;
  local_3c = _DAT_5002b528 & 0xff;
  local_38 = _DAT_5002b530 & 0xff;
  local_34 = _DAT_5002b534 & 0xff;
  local_30 = _DAT_5002b538 & 0xff;
  local_2c = _DAT_5002b53c & 0xff;
  write_interrupt_configuration_registers(&local_28);
  extraout_r1[0x40] = 0;
  *extraout_r1 = 1;
  do {
  } while (extraout_r1[0x40] == 0);
  write_interrupt_configuration_registers(&local_40);
  return;
}


