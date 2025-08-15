/*
 * Function: update_timer_interval
 * Entry:    0004a46c
 * Prototype: undefined __stdcall update_timer_interval(undefined4 counter_value, undefined4 timer_index, undefined4 reset_flag)
 */


void update_timer_interval(int *counter_value,int timer_index,int reset_flag)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (reset_flag == 0) {
    iVar2 = get_system_timestamp_ms();
    iVar3 = *(int *)(&TIMER_REFERENCE_ARRAY + timer_index * 4);
    if (iVar3 == 0) {
      *(int *)(&TIMER_REFERENCE_ARRAY + timer_index * 4) = iVar2;
    }
    else if (999 < (uint)(iVar2 - iVar3)) {
      uVar4 = (uint)(iVar2 - iVar3) / 1000;
      iVar2 = *counter_value;
      *(uint *)(&TIMER_REFERENCE_ARRAY + timer_index * 4) = uVar4 * 1000 + iVar3;
      *counter_value = iVar2 + uVar4;
    }
  }
  else {
    uVar1 = get_system_timestamp_ms();
    *(undefined4 *)(&TIMER_REFERENCE_ARRAY + timer_index * 4) = uVar1;
  }
  return;
}


