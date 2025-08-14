/*
 * Function: run_main_dispatch_thread
 * Entry:    0002a65c
 * Prototype: undefined run_main_dispatch_thread()
 */


void run_main_dispatch_thread(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): enter.\n","run_main_dispatch_thread");
    }
    else {
      handle_heartbeat();
    }
  }
  FUN_000864c2(&DAT_20007b3c);
  FUN_00023a54(param_1);
  init_watchdog();
  iVar1 = get_system_ready_state();
  if (iVar1 == 0) {
    FUN_0007cb66(&DAT_200046b8,&DAT_20026a68,0xc00,0x2a8d9,param_1,0xfffffff6,0,0);
    FUN_0007cb66(&DAT_200041a8,&DAT_20024868,0x400,0x286f9,param_1,0xfffffff6,0,0);
  }
  else {
    FUN_0007cb66(&DAT_200046b8,&DAT_20026a68,0xc00,0x2685d,param_1,0xfffffff6,0,0);
    FUN_00032fe8();
    FUN_0003304c();
  }
  FUN_0007cb66(&DAT_200040d0,&DAT_20023c68,0xc00,0x2a4f5,0,0xfffffff7,0,0);
  if (*param_1 == '\x01') {
    FUN_0007cb66(&DAT_200045e0,&DAT_20026268,0x800,0x28bed,param_1,0xfffffff3,0,0);
    FUN_0007cb66(&DAT_20004508,&DAT_20025a68,0x800,&LAB_0002692c_1,param_1,0xfffffff4,0,0);
    FUN_00047ad0(param_1);
  }
  else {
    if (*param_1 != '\x02') goto LAB_0002a72e;
    FUN_0007cb66(&DAT_200045e0,&DAT_20026268,0x800,0x28bed,param_1,0xfffffff3,0,0);
    FUN_0007cb66(&DAT_20004508,&DAT_20025a68,0x800,&LAB_0002692c_1,param_1,0xfffffff4,0,0);
    FUN_0007cb66(&DAT_20004430,&DAT_20025468,0x600,&DAT_00027cfd,param_1,0xfffffff5,0,0);
  }
  FUN_00049638(param_1);
LAB_0002a72e:
  iVar1 = get_system_ready_state();
  if (iVar1 == 1) {
    uVar2 = 0x28a1d;
  }
  else {
    uVar2 = 0x2a0d9;
  }
  FUN_0007cb66(&DAT_20004358,&DAT_20025068,0x400,uVar2,param_1,0xfffffff2,0,0);
  FUN_0007cb66(&DAT_20004280,&DAT_20024c68,0x400,0x2955d,param_1,0xfffffff3,0,0);
  return;
}


