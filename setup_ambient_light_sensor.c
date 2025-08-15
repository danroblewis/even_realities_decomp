/*
 * Function: setup_ambient_light_sensor
 * Entry:    00086668
 * Prototype: undefined setup_ambient_light_sensor()
 */


undefined4 setup_ambient_light_sensor(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = 0;
  while ((piVar2 = (int *)*param_1, param_1 != piVar2 && (piVar2 != (int *)0x0))) {
    cleanup_ble_connection_state_complete(piVar2);
    handle_ble_connection_insertion_with_privilege_management(piVar2);
    uVar1 = 1;
  }
  return uVar1;
}


