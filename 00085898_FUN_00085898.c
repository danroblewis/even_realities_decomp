/*
 * Function: FUN_00085898
 * Entry:    00085898
 * Prototype: undefined FUN_00085898()
 */


uint FUN_00085898(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 local_14;
  
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  local_18 = uVar2;
  local_14 = param_2;
  FUN_0008705a(auStack_38,param_1,0x20);
  uVar1 = FUN_00070f1c(param_1,uVar2,0x35,auStack_38,0x28,1);
  return uVar1 & (int)uVar1 >> 0x1f;
}


