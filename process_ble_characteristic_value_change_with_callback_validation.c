/*
 * Function: process_ble_characteristic_value_change_with_callback_validation
 * Entry:    00058f80
 * Prototype: undefined process_ble_characteristic_value_change_with_callback_validation()
 */


undefined4
process_ble_characteristic_value_change_with_callback_validation(int *param_1,int param_2)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  iVar6 = 0;
  cVar1 = **(char **)(param_2 + 0xc);
  do {
    if (*(int *)(*param_1 + 0x28) == 0) {
      if (iVar6 == 0) {
        iVar6 = process_ble_characteristic_value_change_with_validation_and_callback(param_1,0x19,0)
        ;
        if (iVar6 == 0) {
          return 0xe;
        }
        FUN_000821a4(param_1,iVar6);
      }
      return 0;
    }
    iVar4 = FUN_0005f148(*param_1 + 0x28);
    DAT_200029a4 = 0;
    sVar3 = *(short *)(iVar4 + 0x18);
    DAT_200029a0 = DAT_200029a8;
    FUN_00083740(&DAT_200029a0,*(undefined4 *)(iVar4 + 0xc),*(undefined2 *)(iVar4 + 0x10));
    iVar6 = *param_1;
    uVar2 = *(ushort *)(iVar4 + 0x1a);
    puVar7 = *(undefined4 **)(iVar6 + 0x28);
    if (puVar7 != (undefined4 *)0x0) {
      puVar8 = (undefined4 *)*puVar7;
      puVar9 = (undefined4 *)0x0;
      while (puVar7 != (undefined4 *)0x0) {
        puVar10 = puVar7;
        if (*(short *)(puVar7 + 6) == sVar3) {
          if (*(ushort *)((int)puVar7 + 0x1a) == 0) break;
          if ((uint)*(ushort *)((int)puVar7 + 0x1a) != (uint)uVar2 + (uint)DAT_200029a4) {
            uVar5 = 7;
LAB_000590a6:
            FUN_000821f4(param_1,0x18,sVar3,uVar5);
            return 0;
          }
          if ((uint)DAT_200029a6 < (uint)DAT_200029a4 + (uint)*(ushort *)(puVar7 + 4)) {
            uVar5 = 0xd;
            goto LAB_000590a6;
          }
          FUN_00083740(&DAT_200029a0,puVar7[3]);
          uVar5 = *puVar7;
          if (puVar9 == (undefined4 *)0x0) {
            *(undefined4 *)(iVar6 + 0x28) = uVar5;
            if (puVar7 == *(undefined4 **)(iVar6 + 0x2c)) {
              *(undefined4 *)(iVar6 + 0x2c) = uVar5;
            }
          }
          else {
            *puVar9 = uVar5;
            if (puVar7 == *(undefined4 **)(iVar6 + 0x2c)) {
              *(undefined4 **)(iVar6 + 0x2c) = puVar9;
            }
          }
          *puVar7 = 0;
          FUN_0005f24c(puVar7);
          puVar10 = puVar9;
        }
        puVar7 = puVar8;
        puVar9 = puVar10;
        if (puVar8 != (undefined4 *)0x0) {
          puVar8 = (undefined4 *)*puVar8;
        }
      }
    }
    if (cVar1 == '\x01') {
      iVar6 = process_ble_characteristic_value_change_with_state_management
                        (param_1,0x18,0,sVar3,*(undefined2 *)(iVar4 + 0x1a),DAT_200029a0,
                         DAT_200029a4);
      if (iVar6 != 0) {
        FUN_000821f4(param_1,0x18,*(undefined2 *)(iVar4 + 0x18),iVar6);
      }
    }
    else {
      iVar6 = 0;
    }
    FUN_0005f24c(iVar4);
  } while( true );
}


