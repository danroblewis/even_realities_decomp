/*
 * Function: validate_and_process_ble_characteristics_with_callback_validation
 * Entry:    00055d08
 * Prototype: undefined validate_and_process_ble_characteristics_with_callback_validation()
 */


int validate_and_process_ble_characteristics_with_callback_validation(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_20;
  char *local_1c;
  
  if ((DAT_200020a2 & 6) == 6) {
    if (param_1 == (int *)0x0) {
      iVar3 = -0x16;
    }
    else {
      piVar2 = DAT_2000ac74;
      if (DAT_2000ac74 != (int *)0x0) {
        do {
          if (piVar2 + -1 == param_1) {
            local_1c = "Callback already registered";
            local_20 = 2;
            process_and_compress_data_with_validation(&DAT_00088120,0x1080,&local_20,0);
            return -0x78;
          }
          piVar2 = (int *)*piVar2;
        } while (piVar2 != (int *)0x0);
      }
      param_1[1] = (int)DAT_2000ac74;
      DAT_2000ac74 = param_1 + 1;
      if (DAT_2000ac78 == (int *)0x0) {
        DAT_2000ac78 = DAT_2000ac74;
      }
      uVar1 = DAT_200020d4 | 0x20;
      if ((DAT_200020d4 & 0x20) == 0) {
        DAT_200020d4 = DAT_200020d4 & 0xffffffef | 0x20;
        iVar3 = process_data_with_initialization_and_validation(0x2025,0,0);
        uVar1 = DAT_200020d4;
        if (iVar3 != 0) {
          local_1c = "Sending LE P256 Public Key command failed";
          local_20 = 2;
          process_and_compress_data_with_validation(&DAT_00088120,0x1040,&local_20,0);
          DAT_200020d4 = DAT_200020d4 & 0xffffffdf;
          for (piVar2 = DAT_2000ac74; piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
            if ((code *)piVar2[-1] != (code *)0x0) {
              (*(code *)piVar2[-1])(0);
            }
          }
          DAT_2000ac74 = (int *)0x0;
          DAT_2000ac78 = (int *)0x0;
          return iVar3;
        }
      }
      DAT_200020d4 = uVar1;
      iVar3 = 0;
    }
  }
  else {
    local_1c = "ECC HCI commands not available";
    local_20 = 2;
    iVar3 = -0x86;
    process_and_compress_data_with_validation(&DAT_00088120,0x1080,&local_20,0);
  }
  return iVar3;
}


