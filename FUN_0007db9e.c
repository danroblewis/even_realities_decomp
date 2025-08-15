/*
 * Function: FUN_0007db9e
 * Entry:    0007db9e
 * Prototype: undefined FUN_0007db9e()
 */


undefined4
FUN_0007db9e(undefined4 param_1,code *UNRECOVERED_JUMPTABLE,undefined4 param_3,byte *param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  
  if (param_4 != (byte *)0x0) {
    bVar1 = param_4[1];
    pbVar4 = param_4 + (uint)*param_4 * 4 + (uint)param_4[3] * 2 + (uint)param_4[2];
    for (uVar6 = 0; uVar6 < bVar1; uVar6 = uVar6 + 1) {
      pbVar5 = pbVar4 + 1;
      *(byte **)(param_4 + (uint)*pbVar4 * 4) = pbVar5;
      iVar3 = calculate_string_length(pbVar5);
      pbVar4 = pbVar5 + iVar3 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x0007dbde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,param_3,*(undefined4 *)(param_4 + 4),param_4 + 8);
    return uVar2;
  }
  return 0xffffffea;
}


