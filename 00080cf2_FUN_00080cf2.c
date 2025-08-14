/*
 * Function: FUN_00080cf2
 * Entry:    00080cf2
 * Prototype: undefined FUN_00080cf2()
 */


undefined4 FUN_00080cf2(int param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 *puVar5;
  
  iVar1 = FUN_0007f1e8(param_1,0);
  if (iVar1 == 0xd) {
    if (*(char *)(param_1 + 0xc) == '0') {
      uVar3 = 0;
    }
    else {
      if (*(char *)(param_1 + 0xc) != '1') goto LAB_00080d34;
      uVar3 = 1;
    }
    puVar5 = param_2 + 6;
    *param_2 = uVar3;
    iVar1 = param_1;
    do {
      iVar4 = iVar1 + 2;
      FUN_0007dd0a(iVar1,2,puVar5,1);
      puVar5 = puVar5 + -1;
      iVar1 = iVar4;
    } while (iVar4 != param_1 + 0xc);
    uVar2 = 0;
  }
  else {
LAB_00080d34:
    uVar2 = 0xffffffea;
  }
  return uVar2;
}


