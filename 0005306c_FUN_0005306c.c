/*
 * Function: FUN_0005306c
 * Entry:    0005306c
 * Prototype: undefined FUN_0005306c()
 */


undefined4 FUN_0005306c(undefined1 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [40];
  
  if (param_2 == 0) {
    iVar2 = FUN_0007ddbe(auStack_34,0x24,"bt/%s","ccc");
    if (iVar2 < 0) {
      return 0xffffffea;
    }
  }
  else {
    if (param_1 != (undefined1 *)0x0) {
      FUN_0007dc4a(auStack_38,4,param_1);
      param_1 = auStack_38;
    }
    FUN_00052e7c(auStack_34,0x24,"ccc",param_2,param_1);
  }
  uVar1 = FUN_0007f198(auStack_34);
  return uVar1;
}


