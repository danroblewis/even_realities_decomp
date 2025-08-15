/*
 * Function: format_and_send_data_packet
 * Entry:    00025670
 * Prototype: undefined format_and_send_data_packet(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


int format_and_send_data_packet
              (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              int param_5)

{
  int iVar1;
  undefined1 auStack_28 [4];
  undefined1 *local_24;
  int local_20;
  undefined1 local_1c;
  
  iVar1 = -(param_5 + 9U & 0xfffffff8);
  auStack_28[iVar1] = (char)((uint)param_3 >> 8);
  auStack_28[iVar1 + 1] = (char)param_3;
  memcpy(auStack_28 + iVar1 + 2,param_4);
  local_1c = 2;
  local_24 = auStack_28 + iVar1;
  local_20 = param_5 + 2;
  iVar1 = FUN_0007c85e(*param_1,&local_24,1,param_2);
  FUN_0007c87a();
  if (iVar1 < 0) {
    DEBUG_PRINT("_st25dv_write  ret %d \n",iVar1);
  }
  return iVar1;
}


