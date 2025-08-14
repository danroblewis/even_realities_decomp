/*
 * Function: FUN_0004a3d0
 * Entry:    0004a3d0
 * Prototype: undefined FUN_0004a3d0()
 */


void FUN_0004a3d0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined4 uVar1;
  undefined4 extraout_r2_00;
  
  if (IS_DEBUG == 0) {
    DEBUG_PRINT("app_identifier:(%s)\n",param_2 + 0x10);
  }
  else {
    handle_heartbeat();
  }
  if (IS_DEBUG == 0) {
    DEBUG_PRINT("message:(%s)\n",param_2 + 0x90);
    uVar1 = extraout_r2_00;
  }
  else {
    handle_heartbeat();
    uVar1 = extraout_r2;
  }
  if (IS_DEBUG != 0) {
    handle_heartbeat();
    return;
  }
  DEBUG_PRINT("uid :(%d)\n",*(undefined4 *)(param_2 + 8),uVar1,param_4);
  return;
}


