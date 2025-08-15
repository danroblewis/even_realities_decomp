/*
 * Function: FUN_00082e04
 * Entry:    00082e04
 * Prototype: undefined FUN_00082e04(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


void FUN_00082e04(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_28;
  char *local_24;
  
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00082e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_5)(param_1,param_2,param_5);
    return;
  }
  uVar1 = *(ushort *)(param_5 + 3);
  uVar5 = param_4 - 4;
  if (uVar1 < uVar5) {
    local_24 = "Incorrect length, canceling write";
LAB_0005c326:
    local_28 = 2;
    ble_data_processing_wrapper(&DAT_00088128,0x1040,&local_28);
    uVar3 = 0x8278b;
  }
  else {
    iVar6 = param_5[2];
    iVar2 = memcmp_byte_arrays(iVar6,param_3 + 4,uVar5);
    if ((*(short *)(param_3 + 2) != *(short *)((int)param_5 + 6)) || (iVar2 != 0)) {
      local_24 = "Incorrect offset or data in response, canceling write";
      goto LAB_0005c326;
    }
    uVar4 = uVar1 - uVar5;
    *(short *)((int)param_5 + 6) = *(short *)(param_3 + 2) + (short)uVar5;
    param_5[2] = iVar6 + uVar5;
    *(short *)(param_5 + 3) = (short)uVar4;
    if ((uVar4 & 0xffff) != 0) {
      iVar2 = handle_ble_characteristic_read_request(param_1,param_5);
      goto LAB_0005c34c;
    }
    uVar3 = 0x8279d;
  }
  iVar2 = FUN_00082aee(param_1,&DAT_00082603,param_5,uVar3,0x18,1);
LAB_0005c34c:
  if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0005c35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_5)(param_1,0xe,param_5);
    return;
  }
  return;
}


