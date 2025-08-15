/*
 * Function: update_burial_point_timing_statistics
 * Entry:    0007db02
 * Prototype: undefined update_burial_point_timing_statistics()
 */


void update_burial_point_timing_statistics
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = get_burial_point_status_value();
  if (uVar1 < 7) {
    iVar2 = get_work_mode();
    iVar3 = handle_signed_division(param_1,param_2,1000,0,param_4);
    iVar2 = uVar1 * 0xc + iVar2;
    *(int *)(iVar2 + 0x10e2) = *(int *)(iVar2 + 0x10e2) + iVar3;
    iVar2 = get_work_mode();
    *(int *)(iVar2 + 0x10ca) = *(int *)(iVar2 + 0x10ca) + iVar3;
  }
  return;
}


