/*
 * Function: FUN_00010fc8
 * Entry:    00010fc8
 * Prototype: undefined FUN_00010fc8()
 */


undefined4
FUN_00010fc8(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  DEBUG_PRINT("###################################join in get_lux_info\n");
  if ((param_3 == (undefined4 *)0x0) || (param_4 == (undefined1 *)0x0)) {
    DEBUG_PRINT("get_lux_info para is NULL\n");
    uVar1 = 0xffffffff;
  }
  else {
    puVar3 = (undefined1 *)*param_3;
    puVar3[1] = 1;
    *puVar3 = 0x20;
    puVar3[2] = 3;
    puVar3[3] = 0x20;
    uVar1 = FUN_0002e648(0);
    *(undefined4 *)(puVar3 + 4) = uVar1;
    iVar2 = get_work_mode();
    *(undefined4 *)(puVar3 + 8) = *(undefined4 *)(iVar2 + 4000);
    iVar2 = get_work_mode();
    *(undefined4 *)(puVar3 + 0xc) = *(undefined4 *)(iVar2 + 0xfa4);
    iVar2 = get_work_mode();
    *(undefined4 *)(puVar3 + 0x10) = *(undefined4 *)(iVar2 + 0xfa8);
    iVar2 = get_work_mode();
    *(undefined4 *)(puVar3 + 0x14) = *(undefined4 *)(iVar2 + 0xf94);
    iVar2 = get_work_mode();
    *(undefined4 *)(puVar3 + 0x18) = *(undefined4 *)(iVar2 + 0xfb0);
    iVar2 = get_work_mode();
    *(undefined4 *)(puVar3 + 0x1c) = *(undefined4 *)(iVar2 + 0xfb4);
    iVar2 = get_work_mode();
    uVar4 = FUN_0000d848((float)(longlong)*(int *)(iVar2 + 0xfb0));
    uVar4 = float_multiply_64bit((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0,0x412e8480);
    uVar5 = FUN_0000d804(uVar1);
    FUN_0000d8f8((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),(int)uVar5,
                 (int)((ulonglong)uVar5 >> 0x20));
    uVar1 = FUN_0000dea8();
    iVar2 = LOG_LEVEL;
    *(undefined4 *)(puVar3 + 0x20) = uVar1;
    if (2 < iVar2) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): curve_lux:0x%x\n\n","get_lux_info",uVar1);
      }
      else {
        handle_heartbeat();
      }
    }
    uVar1 = 0;
    *param_4 = 0x24;
  }
  return uVar1;
}


