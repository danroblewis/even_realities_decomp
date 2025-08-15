/*
 * Function: bluetooth_hci_command_processing_with_validation_and_parameter
 * Entry:    00054ce8
 * Prototype: undefined bluetooth_hci_command_processing_with_validation_and_parameter()
 */


uint bluetooth_hci_command_processing_with_validation_and_parameter
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_r2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  puVar4 = &DAT_20002000;
  uVar5 = (uint)DAT_20002007;
  uVar1 = 0;
  do {
    uVar3 = uVar1;
    if (uVar5 <= (uVar3 & 0xff)) {
      return 0xfffffffe;
    }
    iVar2 = FUN_00080fa4(param_1,puVar4,param_3,uVar3 & 0xff,param_4);
    puVar4 = (undefined4 *)((int)puVar4 + 7);
    uVar1 = uVar3 + 1;
    param_3 = extraout_r2;
  } while (iVar2 == 0);
  return uVar3;
}


