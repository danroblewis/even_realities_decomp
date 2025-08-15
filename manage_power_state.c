/*
 * Function: manage_power_state
 * Entry:    00080c46
 * Prototype: undefined __stdcall manage_power_state(undefined4 power_data)
 */


void manage_power_state(undefined4 power_data)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = process_data_with_callback_validation_alt5();
  if (iVar1 == 0) {
    return;
  }
  uVar2 = FUN_0008157a(power_data);
  if (((int)uVar2 != 0) && ((int)uVar2 != -0x78)) {
    FUN_0007350c(iVar1 + 0x38,(int)((ulonglong)uVar2 >> 0x20),0x8000,0);
    return;
  }
  FUN_00073518(iVar1 + 0x38);
  return;
}


