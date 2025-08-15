/*
 * Function: FUN_0008281a
 * Entry:    0008281a
 * Prototype: undefined FUN_0008281a()
 */


undefined4 FUN_0008281a(int param_1,undefined4 param_2,int param_3)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined2 *)FUN_0005f5d0(param_1 + 0xc,2);
  *puVar1 = *(undefined2 *)(param_3 + 4);
  uVar2 = FUN_0005f450(param_1,*(undefined2 *)(param_3 + 0xc),*(undefined4 *)(param_3 + 8),0,0,0,0,0
                      );
  if (*(ushort *)(param_3 + 0xc) == uVar2) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0xfffffff4;
  }
  return uVar3;
}


