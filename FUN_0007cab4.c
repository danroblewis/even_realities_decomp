/*
 * Function: FUN_0007cab4
 * Entry:    0007cab4
 * Prototype: undefined FUN_0007cab4()
 */


void FUN_0007cab4(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = *(float *)(param_1 + 0x10);
  fVar3 = *(float *)(param_1 + 0x14);
  fVar5 = *(float *)(param_1 + 0x18);
  fVar2 = *(float *)(param_1 + 0xc);
  uVar1 = thunk_FUN_00076154(fVar3 * fVar5 + fVar2 * fVar4,(0.5 - fVar4 * fVar4) - fVar3 * fVar3);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = FUN_00075c2c((fVar4 * fVar5 - fVar2 * fVar3) * -2.0);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = thunk_FUN_00076154(fVar2 * fVar5 + fVar4 * fVar3,(0.5 - fVar3 * fVar3) - fVar5 * fVar5);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}


