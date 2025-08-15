/*
 * Function: FUN_00082bd4
 * Entry:    00082bd4
 * Prototype: undefined FUN_00082bd4()
 */


void FUN_00082bd4(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uStack_20;
  char *pcStack_1c;
  int iStack_18;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  iVar1 = FUN_0008256e();
  if (((iVar1 != 0) && (iVar1 = FUN_00059c04(param_1), iVar1 != 0)) &&
     ((int)((uint)*(byte *)(iVar1 + 8) << 0x1f) < 0)) {
    FUN_00082bb8(iVar1,1);
  }
  if ((param_3 == 0) &&
     (puVar2 = (undefined1 *)FUN_00059bcc(*(undefined1 *)(param_1 + 8),param_1 + 0x90),
     puVar2 != (undefined1 *)0x0)) {
    *(undefined4 *)(puVar2 + 8) = 0;
    iStack_18 = format_bluetooth_log_message_with_callback(*puVar2,puVar2 + 1,puVar2 + 8,4);
    if (iStack_18 != 0) {
      pcStack_1c = "failed to store SC (err %d)";
      uStack_20 = 3;
      FUN_00082a42(&DAT_00088128,0x1840,&uStack_20);
    }
    return;
  }
  return;
}


