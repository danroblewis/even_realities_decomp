/*
 * Function: FUN_000835ea
 * Entry:    000835ea
 * Prototype: undefined FUN_000835ea(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


int FUN_000835ea(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                undefined4 param_5)

{
  int iVar1;
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [32];
  undefined1 auStack_3c [32];
  undefined1 local_1c;
  
  FUN_0005ec84(auStack_5c,param_1,0x20);
  FUN_0005ec84(auStack_3c,param_2,0x20);
  local_1c = param_4;
  FUN_0005ec84(auStack_6c,param_3,0x10);
  iVar1 = FUN_000835ae(auStack_6c,auStack_5c,0x41,param_5);
  if (iVar1 == 0) {
    FUN_00083592(param_5);
  }
  return iVar1;
}


