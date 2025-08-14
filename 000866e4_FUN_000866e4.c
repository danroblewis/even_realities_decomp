/*
 * Function: FUN_000866e4
 * Entry:    000866e4
 * Prototype: undefined FUN_000866e4()
 */


undefined8 FUN_000866e4(int *param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  if (param_4 == 0xffffffff && param_3 == 0xffffffff) {
    iVar3 = -1;
    iVar4 = iVar3;
  }
  else {
    if (param_4 != 0 || param_3 != 0) {
      uVar5 = FUN_00074f68();
      uVar2 = (uint)((ulonglong)uVar5 >> 0x20);
      uVar1 = (uint)uVar5;
      param_2 = (uVar2 - param_4) - (uint)(param_3 > uVar1);
      if (uVar2 <= param_4 && (uint)(param_3 <= uVar1) <= uVar2 - param_4) {
        iVar3 = param_3 - uVar1;
        iVar4 = (param_4 - uVar2) - (uint)(param_3 < uVar1);
        goto LAB_00086712;
      }
    }
    iVar3 = 0;
    iVar4 = iVar3;
  }
LAB_00086712:
  *param_1 = iVar3;
  param_1[1] = iVar4;
  return CONCAT44(param_2,param_1);
}


