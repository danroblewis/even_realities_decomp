/*
 * Function: process_ble_characteristic_value_update
 * Entry:    00059dec
 * Prototype: undefined process_ble_characteristic_value_update()
 */


int process_ble_characteristic_value_update(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *extraout_r2;
  undefined1 *extraout_r2_00;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (*(int *)(param_1 + 8) == 0x5a465) {
    uVar5 = *(undefined4 *)(param_1 + 0xc);
    if ((ushort *)param_3[2] != (ushort *)0x0) {
      if (param_3[3] == 0) {
        return 0;
      }
      uVar3 = (uint)*(ushort *)param_3[2];
      if (uVar3 == param_2) {
        uVar4 = *param_3;
        puVar2 = (undefined1 *)validate_byte_array_pattern(uVar5,uVar4,*(undefined1 *)(param_3 + 1))
        ;
        if (puVar2 == (undefined1 *)0x0) {
          iVar1 = validate_byte_array_pattern(uVar5,&DAT_000f2b3a);
          if (iVar1 == 0) goto LAB_00059e2a;
          copy_data_structure_fields(iVar1 + 1,uVar4,iVar1);
          *extraout_r2_00 = *(undefined1 *)(param_3 + 1);
          puVar2 = extraout_r2_00;
        }
        *(undefined2 *)(puVar2 + 8) = *(undefined2 *)(param_3[2] + 2);
      }
      else if (param_2 <= uVar3) {
        return 1;
      }
LAB_00059e2a:
      iVar1 = param_3[3] + -1;
      param_3[3] = iVar1;
      if (iVar1 != 0) {
        iVar1 = 1;
      }
      param_3[2] = param_3[2] + 4;
      return iVar1;
    }
    iVar1 = validate_byte_array_pattern(uVar5,*param_3,*(undefined1 *)(param_3 + 1));
    if (iVar1 != 0) {
      copy_data_structure_fields(iVar1 + 1,&DAT_000f2b3a,iVar1);
      *extraout_r2 = 0;
      *(undefined2 *)(extraout_r2 + 8) = 0;
    }
  }
  return 1;
}


