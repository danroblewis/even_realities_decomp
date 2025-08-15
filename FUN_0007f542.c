/*
 * Function: FUN_0007f542
 * Entry:    0007f542
 * Prototype: undefined FUN_0007f542()
 */


undefined4 * FUN_0007f542(undefined4 param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 extraout_r2;
  undefined4 local_c;
  
  local_c = param_2;
  puVar2 = (undefined4 *)FUN_0007f51a();
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = (ushort)local_c;
    local_c = CONCAT22(0x2803,uVar1 & 0xff00);
    iVar3 = compare_data_structures(&local_c,*puVar2,extraout_r2,0x2803,param_1);
    if (iVar3 != 0) {
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}


