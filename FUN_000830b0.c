/*
 * Function: FUN_000830b0
 * Entry:    000830b0
 * Prototype: undefined FUN_000830b0()
 */


int FUN_000830b0(int param_1,undefined1 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00082ff6(param_1 + 4,4);
  if (iVar1 == 0) {
    uVar3 = 0xf0000;
  }
  else {
    uVar3 = 0;
  }
  iVar1 = FUN_0008181a(0,0,uVar3,0);
  if (iVar1 == 0) {
    FUN_00083090(param_1 + 4,4);
  }
  else {
    puVar2 = (undefined1 *)ble_memory_allocation_utility(iVar1 + 0xc,1);
    *puVar2 = param_2;
  }
  return iVar1;
}


