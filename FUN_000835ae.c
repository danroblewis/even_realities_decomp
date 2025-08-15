/*
 * Function: FUN_000835ae
 * Entry:    000835ae
 * Prototype: undefined FUN_000835ae()
 */


undefined4 FUN_000835ae(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_118 [88];
  undefined1 auStack_c0 [176];
  
  iVar1 = derive_encryption_keys(auStack_118,param_1,auStack_c0);
  if (((iVar1 == 0) || (iVar1 = sha256_update(auStack_118,param_2,param_3), iVar1 == 0)) ||
     (iVar1 = sha256_finalize_and_reset(param_4,auStack_118), iVar1 == 0)) {
    uVar2 = 0xfffffffb;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


