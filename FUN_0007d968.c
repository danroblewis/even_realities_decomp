/*
 * Function: FUN_0007d968
 * Entry:    0007d968
 * Prototype: undefined FUN_0007d968()
 */


undefined4 FUN_0007d968(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_78 [4];
  undefined4 auStack_68 [22];
  
  puVar3 = local_78;
  initialize_data_structure_with_offsets(auStack_68,param_1,param_2);
  FUN_0007d8f4();
  pad_and_process_data_with_length(auStack_68,local_78);
  do {
    uVar1 = *puVar3;
    uVar2 = puVar3[1];
    puVar3 = puVar3 + 2;
    *param_3 = uVar1;
    param_3[1] = uVar2;
    param_3 = param_3 + 2;
  } while (puVar3 != auStack_68);
  return 0;
}


