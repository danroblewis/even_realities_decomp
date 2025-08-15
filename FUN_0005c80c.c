/*
 * Function: FUN_0005c80c
 * Entry:    0005c80c
 * Prototype: undefined FUN_0005c80c()
 */


int FUN_0005c80c(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 local_f0;
  char *local_ec;
  int iStack_e8;
  undefined4 local_dc;
  undefined1 local_d8;
  undefined1 auStack_d4 [192];
  int local_14;
  
  local_d8 = (undefined1)param_1;
  local_14 = 0;
  local_dc = param_2;
  FUN_00082c9c(1,0xffff,&LAB_0005a328_1,&local_dc);
  if (local_14 == 0) {
    puVar1 = (undefined1 *)0x0;
    iVar2 = 0;
  }
  else {
    iVar2 = local_14 << 2;
    puVar1 = auStack_d4;
  }
  iVar2 = format_bluetooth_log_message_with_context(param_1,param_2,puVar1,iVar2);
  if (iVar2 != 0) {
    local_ec = "Failed to store CCCs (err %d)";
    local_f0 = 3;
    iStack_e8 = iVar2;
    FUN_00082a42(&DAT_00088128,0x1840,&local_f0);
  }
  return iVar2;
}


