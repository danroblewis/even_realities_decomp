/*
 * Function: FUN_000827ae
 * Entry:    000827ae
 * Prototype: undefined FUN_000827ae()
 */


undefined4 FUN_000827ae(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined2 *)FUN_0005f5d0(param_1 + 0xc,4,param_3,param_4,param_4);
  *puVar1 = *(undefined2 *)(param_3 + 8);
  puVar1[1] = *(undefined2 *)(param_3 + 0xe);
  if (*(char *)(param_3 + 0x10) == '\0') {
    uVar2 = 0x2800;
  }
  else {
    uVar2 = 0x2801;
  }
  FUN_00083766(param_1 + 0xc,uVar2);
  return 0;
}


