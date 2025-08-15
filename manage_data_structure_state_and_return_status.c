/*
 * Function: manage_data_structure_state_and_return_status
 * Entry:    0008493a
 * Prototype: undefined manage_data_structure_state_and_return_status()
 */


undefined4 manage_data_structure_state_and_return_status(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)**(undefined4 **)(param_1 + 4);
  if (*(int *)(*(int *)(param_1 + 0x10) + 0xc) == 0) {
    if (puVar2[0x44] == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      *param_2 = **(undefined1 **)(*(int *)(param_1 + 0x10) + 0x18);
      puVar2[0x44] = 0;
      *puVar2 = 1;
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xffffff7a;
  }
  return uVar1;
}


