/*
 * Function: enter_wear_burial_point
 * Entry:    0004a890
 * Prototype: undefined enter_wear_burial_point()
 */


void enter_wear_burial_point(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  iVar1 = get_work_mode();
  if ((*(char *)(iVar1 + 0x10ac) != '\x01') && (uVar2 = FUN_0007dac0(), uVar2 < 7)) {
    iVar1 = get_work_mode();
    *(undefined1 *)(iVar1 + 0x10ac) = 1;
    iVar1 = get_work_mode();
    *(char *)(iVar1 + 0x10ad) = (char)uVar2;
    iVar1 = get_work_mode();
    uVar3 = FUN_0007daa4();
    *(undefined8 *)(iVar1 + 0x10ae) = uVar3;
    iVar1 = get_work_mode();
    iVar1 = uVar2 * 0xc + iVar1;
    *(int *)(iVar1 + 0x10e6) = *(int *)(iVar1 + 0x10e6) + 1;
    iVar1 = get_work_mode();
    *(int *)(iVar1 + 0x10ce) = *(int *)(iVar1 + 0x10ce) + 1;
    if (1 < LOG_LEVEL) {
      if (IS_DEBUG != 0) {
        iVar1 = get_work_mode();
        handle_heartbeat("%s(): [enter_wear_burial_point] start_time is %d\n",
                         "enter_wear_burial_point",*(undefined4 *)(iVar1 + 0x10ae),
                         *(undefined4 *)(iVar1 + 0x10b2));
        return;
      }
      iVar1 = get_work_mode();
      DEBUG_PRINT("%s(): [enter_wear_burial_point] start_time is %d\n","enter_wear_burial_point",
                  *(undefined4 *)(iVar1 + 0x10ae),*(undefined4 *)(iVar1 + 0x10b2));
      return;
    }
  }
  return;
}


