/*
 * Function: FUN_0005a1b0
 * Entry:    0005a1b0
 * Prototype: undefined FUN_0005a1b0(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


void FUN_0005a1b0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 local_20;
  char *local_1c;
  
  FUN_000826f6(param_5 + 5,0xfffffffb);
  if (param_2 == 0) {
    if (*(short *)(param_5 + 4) == 0) {
      (*(code *)*param_5)(param_1,param_5,0,0);
    }
  }
  else {
    iVar1 = FUN_00059c70(param_1);
    if (iVar1 == 0) {
      return;
    }
    puVar3 = *(undefined4 **)(iVar1 + 8);
    if (puVar3 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)*puVar3;
      while (puVar3 != (undefined4 *)0x0) {
        if (puVar3 == param_5 + 6) {
          FUN_000828e8(param_1,iVar1,puVar2,param_5);
          break;
        }
        puVar3 = puVar2;
        if (puVar2 != (undefined4 *)0x0) {
          puVar2 = (undefined4 *)*puVar2;
        }
      }
    }
  }
  UNRECOVERED_JUMPTABLE = (code *)param_5[1];
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    if (param_5[2] == 0) {
      return;
    }
    local_1c = "write callback is deprecated, use subscribe cb instead";
    local_20 = 2;
    FUN_00082a42(&DAT_00088128,0x1080,&local_20);
    UNRECOVERED_JUMPTABLE = (code *)param_5[2];
    param_5 = (undefined4 *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x0005a1fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_5);
  return;
}


