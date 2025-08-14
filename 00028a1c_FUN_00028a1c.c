/*
 * Function: FUN_00028a1c
 * Entry:    00028a1c
 * Prototype: undefined FUN_00028a1c()
 */


void FUN_00028a1c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  
  iVar4 = 0;
  iVar6 = 0;
  iVar5 = 0;
  iVar7 = 0;
  iVar9 = param_1;
LAB_00028a32:
  do {
    while( true ) {
      uVar8 = func_0x00032fdc();
      if ((int)uVar8 == 1) {
        return;
      }
      thunk_FUN_00072908(param_1 + 0xb0,(int)((ulonglong)uVar8 >> 0x20),0x4000,0,iVar9,param_2,
                         param_3);
      if ((*(char *)(param_1 + 1) != '\x01') &&
         (iVar1 = get_work_mode(), *(char *)(iVar1 + 1) != '\b')) break;
      FUN_0007cb8e(5000);
    }
  } while (-1 < (int)((uint)*(ushort *)(param_1 + 0x105c) << 0x1f));
  if (DAT_20006a00 != 0) {
    FUN_00086690();
    FUN_00030af0();
    FUN_00086690();
    DAT_20006a00 = 0;
  }
  if (DAT_20019dac == '\x01') {
    iVar1 = FUN_00086690();
    FUN_0007d0aa(param_1 + 0x1078);
    if (30000 < iVar1 - iVar7) {
      iVar6 = 0;
      iVar4 = iVar6;
    }
    iVar4 = iVar4 + 1;
    DAT_20019dac = '\0';
  }
  else {
    iVar1 = iVar7;
    if (DAT_20019dac == '\x02') {
      iVar6 = FUN_00086690();
      DAT_20019dac = '\0';
    }
  }
  param_2 = FUN_00086690();
  iVar2 = FUN_00086690();
  iVar7 = iVar1;
  if (iVar4 != 1) goto LAB_00028b3a;
  if (iVar5 == 0) {
    if ((iVar6 == 0) && (30000 < param_2 - iVar1)) {
      DEBUG_PRINT("########################turn on the mic and start to speak! holdtime %d\n");
      param_2 = iVar2;
      goto LAB_00028aae;
    }
  }
  else {
LAB_00028aae:
    iVar5 = 1;
  }
  goto LAB_00028ab0;
LAB_00028b3a:
  if (iVar4 == 0) goto LAB_00028a32;
LAB_00028ab0:
  if ((iVar6 <= iVar1) || (iVar2 - iVar6 < 0x2711)) goto LAB_00028a32;
  if (150000 < iVar6 - iVar1) {
    DEBUG_PRINT("#############################long press################################\n");
    FUN_0007d0aa(param_1 + 0x1078);
code_r0x00028ad6:
    DEBUG_PRINT("aw9320x_diff_get: %d\n",*(undefined4 *)(param_1 + 0x1078));
    goto LAB_00028b4e;
  }
  if (iVar6 - iVar1 < 0x15f91) {
    switch(iVar4) {
    case 1:
      if (iVar5 == 0) {
        DEBUG_PRINT("#############################single click################################\n");
        goto code_r0x00028ad6;
      }
      pcVar3 = "turn off mic now\n";
      goto code_r0x00028b4a;
    case 2:
      func_0x0002893c();
      break;
    case 3:
      on_triple_click();
      break;
    case 4:
      if (0 < LOG_LEVEL) {
        pcVar3 = "%s(): sys reboot because touch event, %d click, reboot now\n\n";
        if (IS_DEBUG == 0) goto code_r0x00028ba2;
        handle_heartbeat("%s(): sys reboot because touch event, %d click, reboot now\n\n",
                         "product_test_touch_key_thread",4);
      }
      do {
        FUN_0007cb8e(500);
        pcVar3 = (char *)FUN_0004c0a8(1);
code_r0x00028ba2:
        DEBUG_PRINT(pcVar3);
      } while( true );
    default:
      func_0x00028964();
      FUN_00032fd0(1);
    }
  }
  else {
    pcVar3 = "#############################short press################################\n";
code_r0x00028b4a:
    DEBUG_PRINT(pcVar3);
  }
LAB_00028b4e:
  iVar4 = 0;
  iVar5 = iVar4;
  goto LAB_00028a32;
}


