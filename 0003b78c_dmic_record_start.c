/*
 * Function: dmic_record_start
 * Entry:    0003b78c
 * Prototype: undefined dmic_record_start()
 */


void dmic_record_start(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = get_work_mode();
  *(undefined1 *)(iVar2 + 0x1059) = 4;
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): received open dmic command\n","dmic_record_start");
    }
    else {
      handle_heartbeat();
    }
  }
  FUN_0002f688();
  startAudioStreamRecord();
  uVar1 = DAT_20007b78;
  DAT_20007b78 = 1;
  iVar2 = get_work_mode(0,uVar1);
  *(undefined4 *)(iVar2 + 0x104c) = 0x1d;
  iVar2 = get_work_mode();
  z_spin_lock_valid(iVar2 + 0x68);
  return;
}


