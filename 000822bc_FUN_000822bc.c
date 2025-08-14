/*
 * Function: FUN_000822bc
 * Entry:    000822bc
 * Prototype: undefined FUN_000822bc()
 */


void FUN_000822bc(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  ushort uVar1;
  ushort uVar2;
  code *pcVar3;
  undefined4 uVar4;
  
  if (param_3 == 0) {
    FUN_000822ae();
    pcVar3 = *(code **)(param_2 + 8);
    uVar1 = *(ushort *)(param_2 + 4);
    uVar4 = *(undefined4 *)(param_2 + 0xc);
    FUN_0005833c(param_2);
    uVar2 = 0;
    if (pcVar3 != (code *)0x0) {
      for (; uVar2 < uVar1; uVar2 = uVar2 + 1) {
        (*pcVar3)(param_1,uVar4);
      }
    }
    return;
  }
  FUN_0005833c(param_2,param_2,param_3,param_4);
  return;
}


