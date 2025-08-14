/*
 * Function: FUN_0004cc50
 * Entry:    0004cc50
 * Prototype: undefined FUN_0004cc50()
 */


undefined4 FUN_0004cc50(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 local_18;
  char *local_14;
  
  if (param_1 == (int *)0x0) {
    local_14 = "Invalid endpoint";
    local_18 = 2;
    FUN_0007e9ea(&DAT_000881d8,0x1040,&local_18);
    uVar1 = 0xffffffea;
  }
  else {
    iVar2 = *param_1;
    if (iVar2 == 0) {
      local_14 = "Endpoint not registered\n";
      local_18 = 2;
      FUN_0007e9ea(&DAT_000881d8,0x1040,&local_18);
      uVar1 = 0xfffffffe;
    }
    else {
      if ((*(int *)(iVar2 + 8) != 0) &&
         (UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(iVar2 + 8) + 8),
         UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0004ccc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*UNRECOVERED_JUMPTABLE)(iVar2,param_1[1],param_2,param_3);
        return uVar1;
      }
      local_14 = "Invalid backend configuration";
      local_18 = 2;
      FUN_0007e9ea(&DAT_000881d8,0x1040,&local_18);
      uVar1 = 0xfffffffb;
    }
  }
  return uVar1;
}


