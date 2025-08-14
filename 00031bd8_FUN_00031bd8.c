/*
 * Function: FUN_00031bd8
 * Entry:    00031bd8
 * Prototype: undefined FUN_00031bd8()
 */


undefined4 FUN_00031bd8(int param_1,undefined4 param_2,undefined4 *param_3,undefined1 *param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined1 *puVar3;
  
  DEBUG_PRINT("join in get_mac_info\n");
  if ((param_3 == (undefined4 *)0x0) || (param_4 == (undefined1 *)0x0)) {
    DEBUG_PRINT("get_mac_info para is NULL\n");
    return 0xffffffff;
  }
  puVar3 = (undefined1 *)*param_3;
  *puVar3 = 5;
  puVar3[1] = 1;
  puVar3[2] = 3;
  puVar3[3] = 6;
  if (*(char *)(param_1 + 2) == '\x01') {
    iVar1 = get_work_mode();
    *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(iVar1 + 0xfda);
    uVar2 = *(undefined2 *)(iVar1 + 0xfde);
  }
  else {
    if (*(char *)(param_1 + 2) != '\0') goto LAB_00031c1e;
    iVar1 = get_work_mode();
    *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(iVar1 + 0xfe0);
    uVar2 = *(undefined2 *)(iVar1 + 0xfe4);
  }
  *(undefined2 *)(puVar3 + 8) = uVar2;
LAB_00031c1e:
  *param_4 = 10;
  return 0;
}


