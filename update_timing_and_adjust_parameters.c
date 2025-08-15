/*
 * Function: update_timing_and_adjust_parameters
 * Entry:    0003629c
 * Prototype: undefined update_timing_and_adjust_parameters()
 */


void update_timing_and_adjust_parameters(undefined4 param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  longlong lVar5;
  
  cVar3 = *(char *)((int)param_2 + 6);
  bVar4 = cVar3 == '\x01';
  if (bVar4) {
    cVar3 = '\0';
    TIMING_AND_PARAMETER_ADJUSTMENT_MANAGEMENT = 0;
  }
  if (bVar4) {
    *(char *)((int)param_2 + 6) = cVar3;
  }
  lVar5 = calculate_ble_connection_timing_with_validation();
  uVar2 = (uint)(lVar5 * 1000) >> 0xf | (int)((ulonglong)(lVar5 * 1000) >> 0x20) * 0x20000;
  uVar1 = uVar2;
  if ((TIMING_AND_PARAMETER_ADJUSTMENT_MANAGEMENT != 0) &&
     (uVar1 = TIMING_AND_PARAMETER_ADJUSTMENT_MANAGEMENT,
     999 < uVar2 - TIMING_AND_PARAMETER_ADJUSTMENT_MANAGEMENT)) {
    *param_2 = *param_2 - (uVar2 - TIMING_AND_PARAMETER_ADJUSTMENT_MANAGEMENT) / 1000;
    uVar1 = uVar2;
  }
  TIMING_AND_PARAMETER_ADJUSTMENT_MANAGEMENT = uVar1;
  return;
}


