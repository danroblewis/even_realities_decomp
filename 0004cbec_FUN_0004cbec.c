/*
 * Function: FUN_0004cbec
 * Entry:    0004cbec
 * Prototype: undefined FUN_0004cbec()
 */


undefined4 FUN_0004cbec(int param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_18;
  char *local_14;
  
  if (((param_1 == 0) || (param_2 == (int *)0x0)) || (param_3 == 0)) {
    local_14 = "Invalid instance, endpoint or configuration";
    local_18 = 2;
    FUN_0007e9ea(&DAT_000881d8,0x1040,&local_18);
    uVar1 = 0xffffffea;
  }
  else {
    iVar2 = *(int *)(param_1 + 8);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0xc) != 0)) {
      *param_2 = param_1;
                    /* WARNING: Could not recover jumptable at 0x0004cc40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(iVar2 + 0xc))(param_1,param_2 + 1);
      return uVar1;
    }
    local_14 = "Invalid backend configuration";
    local_18 = 2;
    FUN_0007e9ea(&DAT_000881d8,0x1040,&local_18);
    uVar1 = 0xfffffffb;
  }
  return uVar1;
}


