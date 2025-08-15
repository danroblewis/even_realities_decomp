/*
 * Function: FUN_00082030
 * Entry:    00082030
 * Prototype: undefined FUN_00082030()
 */


int FUN_00082030(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = calculate_linked_list_total_size(*(undefined4 *)(param_2 + 8));
  iVar2 = (int)((ulonglong)uVar6 >> 0x20);
  uVar3 = (uint)*(ushort *)(param_1 + 0x1e);
  uVar4 = (uint)*(ushort *)(param_1 + 0x2e);
  if (uVar3 <= *(ushort *)(param_1 + 0x2e)) {
    uVar4 = uVar3;
  }
  if (uVar4 < (uint)uVar6) {
    iVar1 = -0x7a;
  }
  else {
    *(int *)(param_1 + 0x124) = iVar2;
    uVar5 = *(undefined4 *)(iVar2 + 8);
    *(undefined4 *)(iVar2 + 8) = 0;
    iVar1 = process_ble_characteristic_value_change(param_1,uVar5,uVar3,uVar4,param_4);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar2 + 8) = uVar5;
      *(undefined4 *)(param_1 + 0x124) = 0;
    }
  }
  return iVar1;
}


