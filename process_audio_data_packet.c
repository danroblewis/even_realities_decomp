/*
 * Function: process_audio_data_packet
 * Entry:    00085a04
 * Prototype: undefined process_audio_data_packet()
 */


undefined4 process_audio_data_packet(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 auStack_38 [32];
  
  iVar5 = *(int *)(param_1 + 0x20);
  piVar1 = *(int **)(iVar5 + 0xac);
  if (param_3 == 0x28) {
    uVar3 = param_2 - *piVar1;
    if ((uint)piVar1[2] <= uVar3) {
      uVar3 = 0xffffffff;
    }
    copy_data_from_circular_buffer(piVar1,uVar3,auStack_38,0x20);
    iVar6 = iVar5 + 0x58;
    uVar7 = *(undefined4 *)(param_2 + 0x20);
    manage_ble_connection_state_wrapper_alt(iVar6);
    iVar2 = find_audio_buffer_descriptor(iVar5,auStack_38,0xffffffff,uVar7);
    if (*(int *)(param_2 + 0x24) << 0x1f < 0) {
      if (iVar2 == 0) {
        z_spin_lock_valid(iVar6);
      }
      else {
        *(undefined4 *)(iVar2 + 0x28) = 0xffffffff;
        z_spin_lock_valid(iVar6);
        if (*(code **)(iVar2 + 0x30) != (code *)0x0) {
          (**(code **)(iVar2 + 0x30))(iVar2);
        }
      }
      pcVar4 = *(code **)(iVar5 + 0x74);
    }
    else {
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 0x28) = uVar7;
        z_spin_lock_valid(iVar6);
        return 0;
      }
      z_spin_lock_valid(iVar6);
      pcVar4 = *(code **)(iVar5 + 0x70);
    }
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(iVar5,auStack_38,uVar7);
    }
  }
  return 0;
}


