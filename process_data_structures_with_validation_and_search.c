/*
 * Function: process_data_structures_with_validation_and_search
 * Entry:    0007f8dc
 * Prototype: undefined process_data_structures_with_validation_and_search()
 */


undefined4
process_data_structures_with_validation_and_search
          (undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_24 = param_2;
  local_20 = param_3;
  local_1c = param_4;
  calculate_address_with_offset_0x1c();
  puVar2 = (undefined4 *)validate_data_structures_and_calculate_offset();
  local_1c._0_2_ = (ushort)local_1c & 0xff00;
  local_1c = CONCAT22(0x1801,(ushort)local_1c);
  iVar3 = compare_data_structures(*puVar2,&local_1c);
  if (iVar3 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[10] = 0;
    uVar1 = (ushort)local_24;
    local_24 = (undefined4 *)CONCAT22(0x2a05,uVar1 & 0xff00);
    iVar3 = process_data_with_validation_and_retry_alt(param_1,&local_24);
    if (iVar3 != 0) {
      uVar1 = (ushort)local_20;
      local_20 = CONCAT22(0x2a05,uVar1 & 0xff00);
      iVar4 = search_for_matching_data_structure_entry(param_1,iVar3,&local_20);
      if (iVar4 != 0) {
        *(undefined2 *)(param_2 + 1) = *(undefined2 *)(iVar4 + 4);
        local_1c._0_2_ = (ushort)local_1c & 0xff00;
        local_1c = CONCAT22(0x2902,(ushort)local_1c);
        iVar3 = search_for_matching_data_structure_entry(param_1,iVar3,&local_1c);
        if (iVar3 != 0) {
          *(undefined2 *)((int)param_2 + 6) = *(undefined2 *)(iVar3 + 4);
          uVar5 = dereference_pointer_simple(param_1);
          *param_2 = uVar5;
          return 0;
        }
      }
    }
    uVar5 = 0xffffffea;
  }
  else {
    uVar5 = 0xffffff7a;
  }
  return uVar5;
}


