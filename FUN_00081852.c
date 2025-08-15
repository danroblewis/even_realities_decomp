/*
 * Function: FUN_00081852
 * Entry:    00081852
 * Prototype: undefined FUN_00081852()
 */


uint FUN_00081852(int param_1,int *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar2 = *param_2;
  uVar4 = FUN_00081616(iVar2);
  iVar3 = param_3 + (int)uVar4;
  if ((int)(uint)*(ushort *)(param_1 + 0x26) < iVar3) {
    param_3 = 0xffffff86;
  }
  else {
    if ((*(short *)(iVar2 + 0x10) == 0) && (*(int *)(iVar2 + 4) != 0)) {
      iVar2 = *(int *)(iVar2 + 4);
    }
    if (param_3 == 0) {
      uVar1 = bt_connection_disconnect_with_validation_and_state_management_and_callback_execution
                        (param_1,iVar2,2);
      if ((int)uVar1 < 0) {
LAB_0008188e:
        if (uVar1 == 0xfffffff5) {
          **(uint **)(iVar2 + 0x18) = param_3;
        }
        *(int *)((ulonglong)uVar4 >> 0x20) = iVar2;
        return uVar1;
      }
      param_3 = uVar1 & 0xffff;
    }
    for (; (int)param_3 < iVar3; param_3 = param_3 + uVar1 & 0xffff) {
      if (*(short *)(iVar2 + 0x10) == 0) {
        iVar2 = remove_element_from_linked_list(0,iVar2);
      }
      uVar1 = bt_connection_disconnect_with_validation_and_state_management_and_callback_execution
                        (param_1,iVar2,0);
      if ((int)uVar1 < 0) goto LAB_0008188e;
    }
    decrement_reference_count_and_cleanup_memory(iVar2);
  }
  return param_3;
}


