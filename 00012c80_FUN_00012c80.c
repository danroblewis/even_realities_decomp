/*
 * Function: FUN_00012c80
 * Entry:    00012c80
 * Prototype: undefined FUN_00012c80()
 */


undefined4 FUN_00012c80(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = FUN_00012db0();
  if ((DAT_200035af != -1) && (iVar1 = FUN_000869dc(param_1), iVar1 != 0)) {
    iVar1 = FUN_0000de18();
    if (iVar1 == 0) {
      iVar1 = FUN_0000dddc();
      if (iVar1 != 0) {
        puVar2 = (undefined4 *)thunk_FUN_00071678();
        uVar3 = 0;
        *puVar2 = 0x22;
      }
    }
    else {
      puVar2 = (undefined4 *)thunk_FUN_00071678();
      uVar3 = 0;
      *puVar2 = 0x22;
    }
  }
  return uVar3;
}


