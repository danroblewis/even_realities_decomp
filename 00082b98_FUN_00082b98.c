/*
 * Function: FUN_00082b98
 * Entry:    00082b98
 * Prototype: undefined FUN_00082b98()
 */


uint FUN_00082b98(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    uVar1 = FUN_000826f6(param_1 + 0xc,0xfffffffe,param_3,param_4,param_4);
    uVar1 = uVar1 & 1;
  }
  else {
    uVar2 = FUN_000826e0(param_1 + 0xc,1);
    uVar1 = ~(uint)uVar2 & (uint)((ulonglong)uVar2 >> 0x20);
  }
  return uVar1;
}


