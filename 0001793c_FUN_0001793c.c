/*
 * Function: FUN_0001793c
 * Entry:    0001793c
 * Prototype: undefined FUN_0001793c()
 */


void FUN_0001793c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  FUN_00017858(&DAT_000889d0,0x200000);
  if ((param_3 == 0x200) && (DAT_20007bcc != 0)) {
    DAT_20006a00 = 1;
    iVar1 = get_work_mode();
    z_spin_lock_valid(iVar1 + 0xb0);
  }
  FUN_00017858(&DAT_000889d0,0x5c00000);
  return;
}


