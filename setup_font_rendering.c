/*
 * Function: setup_font_rendering
 * Entry:    0008673e
 * Prototype: undefined setup_font_rendering()
 */


void setup_font_rendering(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = cleanup_ble_connection_state_with_validation();
  if (iVar3 == 0) {
    if (*(code **)(param_1 + 0x24) != (code *)0x0) {
      (**(code **)(param_1 + 0x24))(param_1);
    }
    iVar3 = process_ble_connection_list(param_1 + 0x18);
    if (iVar3 != 0) {
      FUN_000738d4();
      uVar4 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        uVar4 = getBasePriority();
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
        setBasePriority(0x20);
      }
      InstructionSynchronizationBarrier(0xf);
      initialize_magnetometer(uVar4);
      return;
    }
  }
  return;
}


