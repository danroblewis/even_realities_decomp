/*
 * Function: update_burial_point_timing_statistics_alt
 * Entry:    0007db50
 * Prototype: void update_burial_point_timing_statistics_alt(undefined4 time_param1, undefined4 time_param2, undefined4 time_param3, undefined4 time_param4)
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void update_work_mode_timing_statistics(undefined4 time_param1, undefined4
   time_param2, undefined4 time_param3, undefined4 time_param4) */

void update_burial_point_timing_statistics_alt
               (undefined4 time_param1,undefined4 time_param2,undefined4 time_param3,
               undefined4 time_param4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = get_burial_point_status_value();
  if (uVar1 < 7) {
    iVar2 = get_work_mode();
    iVar3 = handle_signed_division(time_param1,time_param2,1000,0,time_param4);
    iVar2 = uVar1 * 0xc + iVar2;
    *(int *)(iVar2 + 0x1136) = *(int *)(iVar2 + 0x1136) + iVar3;
    iVar2 = get_work_mode();
    *(int *)(iVar2 + 0x10d2) = *(int *)(iVar2 + 0x10d2) + iVar3;
  }
  return;
}


