/*
 * Function: process_ble_characteristic_operation_by_type
 * Entry:    0005bbf4
 * Prototype: undefined process_ble_characteristic_operation_by_type(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


void process_ble_characteristic_operation_by_type
               (undefined4 param_1,int param_2,byte *param_3,int param_4,int param_5)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  code *pcVar6;
  ushort *puVar7;
  ushort uVar9;
  ushort *puVar10;
  undefined4 local_70;
  char *local_6c;
  uint uStack_68;
  undefined1 local_5c [2];
  undefined2 local_5a;
  char *local_58;
  ushort local_54;
  char local_50;
  undefined4 uStack_4f;
  undefined1 *local_3c [3];
  char **local_30;
  ushort local_2c;
  ushort *puVar8;
  
  if (param_2 != 0) {
    pcVar6 = *(code **)(param_5 + 4);
    goto LAB_0005bc0e;
  }
  uVar3 = (uint)*param_3;
  cVar2 = '\0';
  if (uVar3 == 6) {
LAB_0005bc4e:
    local_50 = cVar2;
    uVar9 = 0;
    puVar10 = (ushort *)(param_3 + 1);
    for (uVar3 = param_4 - 1; uVar3 = uVar3 & 0xffff, *param_3 <= uVar3; uVar3 = uVar3 - *param_3) {
      fill_memory_buffer(local_3c,0,0x14);
      uVar1 = *puVar10;
      if (((uVar1 == 0) || (uVar9 = puVar10[1], uVar9 == 0)) || (uVar9 < uVar1)) goto LAB_0005bc40;
      if (local_50 == '\0') {
        uStack_4f._1_2_ = puVar10[2];
      }
      else if (local_50 == '\x02') {
        puVar5 = &uStack_4f;
        puVar7 = puVar10 + 2;
        do {
          puVar8 = puVar7 + 2;
          *puVar5 = *(undefined4 *)puVar7;
          puVar5 = puVar5 + 1;
          puVar7 = puVar8;
        } while (puVar8 != puVar10 + 10);
      }
      local_5a = 0x2801;
      if (*(char *)(param_5 + 0x10) == '\0') {
        local_5a = 0x2800;
      }
      local_58 = &local_50;
      local_3c[0] = local_5c;
      local_30 = &local_58;
      local_5c[0] = 0;
      local_54 = uVar9;
      local_2c = uVar1;
      iVar4 = (**(code **)(param_5 + 4))(param_1,local_3c,param_5);
      if (iVar4 == 0) {
        return;
      }
      puVar10 = (ushort *)((int)puVar10 + (uint)*param_3);
    }
    if ((uVar3 == 0) && (uVar9 != 0)) {
      handle_ble_characteristic_operation_with_validation(param_1,uVar9,param_5);
      return;
    }
  }
  else {
    if (uVar3 == 0x14) {
      cVar2 = '\x02';
      goto LAB_0005bc4e;
    }
    local_6c = "Invalid data len %u";
    local_70 = 3;
    uStack_68 = uVar3;
    ble_data_processing_wrapper(&DAT_00088128,0x1840,&local_70);
  }
LAB_0005bc40:
  pcVar6 = *(code **)(param_5 + 4);
LAB_0005bc0e:
  (*pcVar6)(param_1,0,param_5);
  return;
}


