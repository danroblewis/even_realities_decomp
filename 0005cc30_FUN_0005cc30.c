/*
 * Function: FUN_0005cc30
 * Entry:    0005cc30
 * Prototype: undefined FUN_0005cc30()
 */


undefined4 FUN_0005cc30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  fill_memory_buffer(param_1,0,0xf0,param_4,param_4);
  iVar1 = FUN_00055cb4(param_1 + 0x27,0x10);
  if (iVar1 == 0) {
    FUN_00083090(param_1,5);
    DAT_2000af48 = FUN_00055e58();
    uVar2 = 0;
  }
  else {
    uVar2 = 8;
  }
  return uVar2;
}


