/*
 * Function: FUN_0005c0bc
 * Entry:    0005c0bc
 * Prototype: undefined FUN_0005c0bc(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


void FUN_0005c0bc(undefined4 param_1,int param_2,byte *param_3,int param_4,int *param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  ushort *puVar6;
  ushort *puVar8;
  undefined4 local_78;
  char *local_74;
  uint uStack_70;
  uint local_64;
  uint local_60;
  undefined4 local_5c;
  undefined1 local_58 [2];
  undefined2 local_56;
  undefined1 local_54 [2];
  undefined2 local_52;
  char local_50;
  undefined4 uStack_4f;
  undefined4 local_3c;
  undefined1 auStack_38 [12];
  undefined2 local_2c;
  ushort *puVar7;
  
  local_5c = param_1;
  if (param_2 == 0) {
    uVar2 = (uint)*param_3;
    if (uVar2 == 1) {
      uVar2 = 4;
      local_50 = '\0';
    }
    else {
      if (uVar2 != 2) {
        local_74 = "Invalid format %u";
        local_78 = 3;
        uStack_70 = uVar2;
        FUN_00082a42(&DAT_00088128,0x1840,&local_78);
        goto LAB_0005c0f2;
      }
      uVar2 = 0x12;
      local_50 = '\x02';
    }
    uVar5 = param_4 - 1U & 0xffff;
    if (uVar2 <= uVar5) {
      bVar1 = false;
      uVar5 = uVar5 / uVar2;
      puVar8 = (ushort *)(param_3 + 1);
      local_60 = 0;
      do {
        if (uVar5 == 0) {
          FUN_00082d2e(local_5c,local_60,param_5);
          return;
        }
        local_64 = (uint)*puVar8;
        local_60 = local_64;
        if (bVar1) {
LAB_0005c1ec:
          bVar1 = false;
        }
        else {
          if (local_50 == '\0') {
            uStack_4f._1_2_ = puVar8[1];
          }
          else if (local_50 == '\x02') {
            puVar4 = &uStack_4f;
            puVar6 = puVar8 + 1;
            do {
              puVar7 = puVar6 + 2;
              *puVar4 = *(undefined4 *)puVar6;
              puVar4 = puVar4 + 1;
              puVar6 = puVar7;
            } while (puVar7 != puVar8 + 9);
          }
          if ((*param_5 != 0) && (iVar3 = compare_data_structures(&local_50), iVar3 != 0))
          goto LAB_0005c1ec;
          if ((char)param_5[4] == '\x04') {
            local_58[0] = 0;
            local_56 = 0x2800;
            iVar3 = compare_data_structures(&local_50,local_58);
            if (iVar3 != 0) {
              local_54[0] = 0;
              local_52 = 0x2801;
              iVar3 = compare_data_structures(&local_50,local_54);
              if (iVar3 != 0) {
                local_3c._0_2_ = (ushort)local_3c & 0xff00;
                local_3c = (char *)CONCAT22(0x2802,(ushort)local_3c);
                iVar3 = compare_data_structures(&local_50,&local_3c);
                if (iVar3 != 0) {
                  local_3c._0_2_ = (ushort)local_3c & 0xff00;
                  local_3c = (char *)CONCAT22(0x2803,(ushort)local_3c);
                  iVar3 = compare_data_structures(&local_50,&local_3c);
                  if (iVar3 != 0) goto LAB_0005c1f8;
                  bVar1 = true;
                  goto LAB_0005c1f0;
                }
              }
            }
            goto LAB_0005c1ec;
          }
LAB_0005c1f8:
          fill_memory_buffer(auStack_38,0,0x10);
          local_2c = (undefined2)local_64;
          local_3c = &local_50;
          iVar3 = (*(code *)param_5[1])(local_5c,&local_3c,param_5);
          if (iVar3 == 0) {
            return;
          }
        }
LAB_0005c1f0:
        uVar5 = uVar5 - 1;
        puVar8 = (ushort *)((int)puVar8 + uVar2);
      } while( true );
    }
  }
LAB_0005c0f2:
  (*(code *)param_5[1])(local_5c,0,param_5);
  return;
}


