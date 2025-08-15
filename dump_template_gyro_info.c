/*
 * Function: dump_template_gyro_info
 * Entry:    00036164
 * Prototype: undefined dump_template_gyro_info()
 */


void dump_template_gyro_info(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = get_work_mode();
  if (2 < LOG_LEVEL) {
    uVar2 = float_divide_64bit_complex(*(undefined4 *)(iVar1 + 0xef));
    uVar3 = float_divide_64bit_complex(*(undefined4 *)(iVar1 + 0xf3));
    uVar4 = float_divide_64bit_complex(*(undefined4 *)(iVar1 + 0xf7));
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): screen_id: %d, ypr: %.2f, %.2f, %.2f\n","dump_template_gyro_info",
                  (uint)*(byte *)(param_1 + 1),0,(int)uVar2,(int)((ulonglong)uVar2 >> 0x20),
                  (int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)uVar4,
                  (int)((ulonglong)uVar4 >> 0x20));
    }
    else {
      handle_heartbeat();
    }
  }
  return;
}


