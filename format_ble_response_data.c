/*
 * Function: format_ble_response_data
 * Entry:    0005c004
 * Prototype: undefined format_ble_response_data(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


void format_ble_response_data
               (undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar5;
  undefined4 local_60;
  char *local_5c;
  int iStack_58;
  undefined1 local_4c [2];
  undefined2 local_4a;
  undefined1 *local_48;
  undefined2 local_44;
  undefined2 local_42;
  undefined1 local_40;
  undefined4 auStack_3f [4];
  undefined1 *local_2c;
  undefined1 auStack_28 [8];
  undefined1 **local_20;
  undefined2 local_1c;
  undefined4 *puVar4;
  
  if (param_4 == 0x10) {
    local_44 = *(undefined2 *)((int)param_5 + 10);
    local_48 = &local_40;
    local_42 = (undefined2)param_5[3];
    iVar1 = param_5[2];
    local_40 = 2;
    puVar3 = param_3;
    puVar5 = auStack_3f;
    do {
      puVar4 = puVar3 + 1;
      *puVar5 = *puVar3;
      puVar3 = puVar4;
      puVar5 = puVar5 + 1;
    } while (puVar4 != param_3 + 4);
    if ((*param_5 == 0) || (iVar2 = compare_data_structures(), iVar2 == 0)) {
      local_4c[0] = 0;
      local_4a = 0x2802;
      fill_memory_buffer(auStack_28,0,0x10);
      local_2c = local_4c;
      local_20 = &local_48;
      local_1c = (short)iVar1;
      iVar1 = (*(code *)param_5[1])(param_1,&local_2c,param_5);
      if (iVar1 == 0) {
        return;
      }
    }
    FUN_00082d2e(param_1,(short)param_5[2],param_5);
  }
  else {
    local_5c = "Invalid data len %u";
    local_60 = 3;
    iStack_58 = param_4;
    ble_data_processing_wrapper(&DAT_00088128,0x1840,&local_60);
    (*(code *)param_5[1])(param_1,0,param_5);
  }
  return;
}


