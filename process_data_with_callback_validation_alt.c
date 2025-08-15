/*
 * Function: process_data_with_callback_validation_alt
 * Entry:    0004f418
 * Prototype: undefined process_data_with_callback_validation_alt()
 */


int process_data_with_callback_validation_alt
              (int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 local_28;
  char *local_24;
  int iStack_20;
  undefined4 uStack_18;
  
  if (((param_1 == (int *)0x0) || (*param_1 == 0)) || (param_2 == 0)) {
    iVar1 = -0x16;
  }
  else {
    puVar3 = (uint *)(param_1 + 10);
    uVar2 = *puVar3;
    *puVar3 = uVar2 | 1;
    if ((uVar2 & 1) == 0) {
      param_1[9] = param_2;
      param_1[2] = 0x7f895;
      *(undefined2 *)(param_1 + 6) = 2;
      param_1[5] = param_1[1];
      param_1[7] = param_1[7] | 1;
      uStack_18 = param_4;
      iVar1 = initialize_ble_attribute_data_structure(*param_1,param_1 + 2);
      if (iVar1 != 0) {
        *puVar3 = *puVar3 & 0xfffffffe;
        local_24 = "Subscribe Service Changed failed (err %d)";
        local_28 = 3;
        iStack_20 = iVar1;
        process_and_compress_data_with_validation(&DAT_000881c0,0x1840,&local_28,0);
      }
    }
    else {
      iVar1 = -0x78;
    }
  }
  return iVar1;
}


