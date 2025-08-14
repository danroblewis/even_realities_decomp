/*
 * Function: FUN_00053580
 * Entry:    00053580
 * Prototype: undefined FUN_00053580()
 */


void FUN_00053580(undefined4 param_1,int param_2)

{
  ushort uVar1;
  undefined4 local_28;
  char *local_24;
  undefined4 uStack_20;
  uint local_1c;
  undefined4 uStack_18;
  undefined2 local_14;
  
  uVar1 = *(ushort *)(param_2 + 0x10);
  uStack_18 = FUN_00052c98(*(undefined4 *)(param_2 + 0xc),(uint)uVar1);
  local_24 = "Unhandled event 0x%02x len %u: %s";
  local_14 = 0x402;
  local_28 = 0x1000005;
  uStack_20 = param_1;
  local_1c = (uint)uVar1;
  FUN_00080ea2(&DAT_00088138,0x2c80,&local_28);
  return;
}


