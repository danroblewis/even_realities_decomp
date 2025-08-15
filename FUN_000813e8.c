/*
 * Function: FUN_000813e8
 * Entry:    000813e8
 * Prototype: undefined FUN_000813e8()
 */


ushort * FUN_000813e8(int param_1,int param_2,uint param_3)

{
  ushort *puVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (iVar2 == param_2) {
      return (ushort *)0x0;
    }
    puVar1 = (ushort *)
             validate_and_process_ble_characteristics_with_validation_and_callback_execution
                       (iVar2 * 0xd8 + param_1);
    if (puVar1 != (ushort *)0x0) {
      if (((*(byte *)((int)puVar1 + 0xd) == 1) || (*(byte *)((int)puVar1 + 0xd) - 7 < 2)) &&
         (*puVar1 == param_3)) {
        return puVar1;
      }
      validate_and_process_ble_characteristics_with_callback_validation_and_state_management(puVar1)
      ;
    }
    iVar2 = iVar2 + 1;
  } while( true );
}


