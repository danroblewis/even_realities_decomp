/*
 * Function: set_brightness_lum_base
 * Entry:    00031cbc
 * Prototype: undefined set_brightness_lum_base()
 */


undefined4
set_brightness_lum_base(int param_1,undefined4 param_2,undefined4 *param_3,undefined1 *param_4)

{
  bool bVar1;
  char cVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  undefined1 *puVar9;
  undefined1 auStack_9c [116];
  ushort local_28;
  ushort local_26;
  ushort local_24;
  
  DEBUG_PRINT("join in set_brightness_lum_base\n");
  if ((param_3 == (undefined4 *)0x0) || (param_4 == (undefined1 *)0x0)) {
    DEBUG_PRINT("set_brightness_lum_base para is NULL\n");
    uVar4 = 0xffffffff;
  }
  else if (DAT_20019ef3 == '\x01') {
    puVar9 = (undefined1 *)*param_3;
    *puVar9 = 0x36;
    puVar9[2] = 3;
    puVar9[3] = 2;
    puVar9[1] = 1;
    cVar2 = *(char *)(param_1 + 4);
    uVar7 = (uint)*(ushort *)(param_1 + 5);
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): tmp_lum_value is:0x%x\n","set_brightness_lum_base",uVar7);
      }
      else {
        handle_heartbeat();
      }
    }
    bVar1 = 0x3f < uVar7;
    if (bVar1) {
      uVar7 = 0x3f;
    }
    puVar9[4] = bVar1;
    uVar3 = (undefined2)uVar7;
    if (cVar2 == '\x01') {
      iVar5 = get_work_mode();
      *(undefined2 *)(iVar5 + 0xedc) = uVar3;
    }
    else if (cVar2 == '\x02') {
      iVar5 = get_work_mode();
      *(undefined2 *)(iVar5 + 0xede) = uVar3;
    }
    else if (cVar2 == '\0') {
      iVar5 = get_work_mode();
      *(undefined2 *)(iVar5 + 0xeda) = uVar3;
    }
    iVar5 = get_work_mode();
    *(undefined2 *)(iVar5 + 0xed8) = uVar3;
    uVar4 = get_work_mode();
    prepare_system_settings_for_verification(uVar4,0);
    cVar8 = '\0';
    do {
      iVar5 = read_sys_settting_from_flash(auStack_9c);
      if (iVar5 == 0) {
        if (cVar2 == '\0') {
          uVar6 = (uint)local_28;
        }
        else if (cVar2 == '\x01') {
          uVar6 = (uint)local_26;
        }
        else {
          if (cVar2 != '\x02') goto LAB_00031d6a;
          uVar6 = (uint)local_24;
        }
        if (uVar6 == uVar7) goto LAB_00031d7c;
      }
LAB_00031d6a:
      cVar8 = cVar8 + '\x01';
      delay_ms(100);
    } while (cVar8 != '\x05');
    puVar9[4] = 2;
LAB_00031d7c:
    puVar9[5] = cVar2;
    uVar4 = 0;
    *param_4 = 6;
  }
  else {
    DEBUG_PRINT("warning: not test mode,disable setting\n");
    uVar4 = 0xfffffffe;
  }
  return uVar4;
}


