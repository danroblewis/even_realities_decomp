/*
 * Function: FUN_0008349c
 * Entry:    0008349c
 * Prototype: undefined FUN_0008349c()
 */


void FUN_0008349c(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  int extraout_r1_00;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar7;
  undefined8 uVar8;
  undefined4 *puVar6;
  
  uVar8 = process_ble_data_with_processing(8);
  iVar7 = (int)((ulonglong)uVar8 >> 0x20);
  iVar3 = (int)uVar8;
  if (iVar3 != 0) {
    iVar7 = iVar3 + 4;
    uVar1 = FUN_0008304c(iVar7,8);
    if (param_1 == (undefined4 *)0x0) {
      iVar7 = 0xb;
      goto LAB_00083520;
    }
    FUN_0008304c(uVar1,7);
    puVar4 = (undefined4 *)(iVar3 + 0x97);
    puVar5 = param_1;
    do {
      puVar6 = puVar5 + 1;
      *puVar4 = *puVar5;
      puVar4 = puVar4 + 1;
      puVar5 = puVar6;
    } while (puVar6 != param_1 + 8);
    iVar2 = FUN_00082ff6(iVar7,10);
    if ((iVar2 == 0) && (iVar2 = FUN_00082ff6(iVar7,0x10), iVar2 == 0)) {
      uVar8 = FUN_00082ff6(iVar7,9);
      iVar7 = (int)((ulonglong)uVar8 >> 0x20);
      if (((int)uVar8 != 0) && (iVar7 = process_ble_key_derivation(iVar3), iVar7 != 0))
      goto LAB_00083520;
    }
    else {
      FUN_00083090(iVar7,9);
      iVar7 = extraout_r1;
    }
  }
  while ((iVar3 = process_ble_data_with_processing(7,iVar7), iVar3 != 0 &&
         (iVar7 = process_ble_characteristics_with_validation(), iVar7 != 0))) {
LAB_00083520:
    update_ble_connection_parameters(iVar3,iVar7);
    iVar7 = extraout_r1_00;
  }
  return;
}


