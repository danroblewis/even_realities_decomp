/*
 * Function: process_data_with_parameter_validation_alt7
 * Entry:    00052d58
 * Prototype: undefined process_data_with_parameter_validation_alt7()
 */


undefined4
process_data_with_parameter_validation_alt7
          (int param_1,undefined4 param_2,code *param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_50;
  char *local_4c;
  int iStack_48;
  undefined1 auStack_3c [20];
  undefined4 local_28;
  char *local_24;
  
  if (DAT_200020d4 << 0x1f < 0) {
    if (param_1 == 0) {
      local_24 = "Insufficient number of arguments";
      local_28 = 2;
      process_and_compress_data_with_validation(&DAT_00088178,0x1040,&local_28,0);
      return 0xfffffffe;
    }
    uVar2 = FUN_0007f1e8(param_1,auStack_3c);
    iVar3 = compare_string_offsets(param_1,"id",uVar2);
    if (iVar3 == 0) {
      uVar5 = DAT_200020d4 << 0x1c;
      if (DAT_200020d4 << 0x1c < 0) {
        local_24 = "Ignoring identities stored in flash";
        local_28 = 2;
        process_and_compress_data_with_validation(&DAT_00088178,0x1080,&local_28);
      }
      else {
        uVar4 = (*param_3)(param_4,&DAT_20002000,7);
        if (uVar4 < 7) {
          local_24 = "Invalid length ID address in storage";
          local_28 = 2;
          process_and_compress_data_with_validation(&DAT_00088178,0x1040,&local_28,uVar5 >> 0x1f);
          bVar1 = (byte)(uVar5 >> 0x18);
          DAT_20002007 = bVar1 >> 7;
          DAT_20002000._0_3_ = (uint3)(uVar5 >> 0x1f);
          DAT_20002000._3_1_ = bVar1 >> 7;
          uRam20002004 = 0;
        }
        else {
          DAT_20002007 = (byte)(uVar4 / 7);
        }
      }
    }
    else {
      iVar3 = compare_string_offsets(param_1,"name",uVar2,iVar3);
      if (iVar3 != 0) {
        return 0xfffffffe;
      }
      iStack_48 = (*param_3)(param_4,&DAT_2000216c,0x1c);
      if (iStack_48 < 0) {
        local_4c = "Failed to read device name from storage (err %zd)";
        local_50 = 3;
        process_and_compress_data_with_validation(&DAT_00088178,0x1840,&local_50,0);
      }
      else {
        (&DAT_2000216c)[iStack_48] = 0;
      }
    }
  }
  return 0;
}


