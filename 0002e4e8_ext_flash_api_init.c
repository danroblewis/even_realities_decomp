/*
 * Function: ext_flash_api_init
 * Entry:    0002e4e8
 * Prototype: undefined ext_flash_api_init()
 */


undefined4
ext_flash_api_init(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_000864c2(&DAT_20007b54);
  iVar2 = FUN_0008638c(&DAT_00087bf0);
  if (iVar2 == 0) {
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): FAILURE!\n","ext_flash_api_init");
      }
      else {
        handle_heartbeat();
      }
    }
    uVar3 = 0xffffffff;
  }
  else {
    *param_1 = 0x2e399;
    *param_2 = 0x2e441;
    *param_3 = &LAB_0002e300_1;
    DAT_20007b68 = &DAT_00087bf0;
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): flash init success!\n","ext_flash_api_init",&DAT_20007b68,0,param_4);
      }
      else {
        handle_heartbeat();
      }
    }
    uVar1 = FUN_00083a9a(&DAT_00087bf0);
    iVar2 = get_work_mode();
    uVar3 = 0;
    *(undefined2 *)(iVar2 + 0x108a) = uVar1;
  }
  return uVar3;
}


