/*
 * Function: FUN_0004d944
 * Entry:    0004d944
 * Prototype: undefined FUN_0004d944()
 */


void FUN_0004d944(undefined4 param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_68;
  char *local_64;
  undefined4 local_60;
  undefined1 *local_5c;
  undefined4 local_58;
  uint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  undefined1 auStack_3c [8];
  int local_34;
  uint local_30;
  undefined4 local_2c;
  
  uVar3 = (param_2 << 0xc) >> 0x15;
  local_4c = param_4;
  local_48 = param_1;
  if (uVar3 == 0) {
    iVar1 = FUN_0004d55c(((param_2 >> 0x14) + 0x17 & 0xfffffff8) >> 2);
    uVar3 = 0;
  }
  else {
    local_5c = auStack_3c;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_58 = 4;
    local_60 = 10;
    local_44 = uVar3;
    local_50 = FUN_0004abc0(param_3,uVar3,0,&local_34);
    if (0x7ff < local_50) {
      local_60 = *(undefined4 *)(param_3 + 4);
      local_64 = "Message (\"%s\") dropped because it exceeds size limitation (%u)";
      local_5c = (undefined1 *)0x7ff;
      local_58 = CONCAT22(local_58._2_2_,0x200);
      local_68 = 0x1000004;
      FUN_0004d944(&DAT_000881e0,0x2480,&local_68,0);
      return;
    }
    uVar3 = local_50 & 0x7ff;
    iVar1 = FUN_0004d55c(((param_2 >> 0x14) + 0x17 + local_50 & 0xfffffff8) >> 2);
    param_2 = param_2 & 0xfff001ff;
    if (iVar1 != 0) {
      local_34 = iVar1 + 0x10;
      local_30 = local_50;
      local_2c = 0;
      local_5c = auStack_3c;
      local_60 = 10;
      local_58 = 4;
      iVar2 = FUN_0004abc0(param_3,local_44,0x7ee49,&local_34);
      if (iVar2 < 0) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","len >= 0",
                     "WEST_TOPDIR/zephyr/subsys/logging/log_msg.c",0x59);
                    /* WARNING: Subroutine does not return */
        FUN_0007e2ec("WEST_TOPDIR/zephyr/subsys/logging/log_msg.c",0x59);
      }
    }
  }
  FUN_0007ee74(iVar1,local_48,param_2 & 0xfff001ff | uVar3 << 9,local_4c);
  return;
}


