/*
 * Function: FUN_0007ffd6
 * Entry:    0007ffd6
 * Prototype: undefined FUN_0007ffd6()
 */


void FUN_0007ffd6(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  
  bVar1 = FUN_0007fec8(*param_2);
  bVar2 = FUN_0007fec8(param_2[1]);
  *param_1 = bVar2 ^ bVar1 ^ param_2[1] ^ param_2[2] ^ param_2[3];
  bVar1 = *param_2;
  bVar2 = FUN_0007fec8(param_2[1]);
  bVar3 = FUN_0007fec8(param_2[2]);
  param_1[1] = bVar3 ^ bVar2 ^ bVar1 ^ param_2[2] ^ param_2[3];
  bVar1 = param_2[1];
  bVar2 = *param_2;
  bVar3 = FUN_0007fec8(param_2[2]);
  bVar4 = FUN_0007fec8(param_2[3]);
  param_1[2] = bVar4 ^ bVar3 ^ bVar2 ^ bVar1 ^ param_2[3];
  bVar4 = FUN_0007fec8(*param_2);
  bVar1 = param_2[1];
  bVar2 = *param_2;
  bVar3 = param_2[2];
  bVar5 = FUN_0007fec8(param_2[3]);
  param_1[3] = bVar4 ^ bVar2 ^ bVar1 ^ bVar3 ^ bVar5;
  return;
}


