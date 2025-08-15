/*
 * Function: FUN_0005e130
 * Entry:    0005e130
 * Prototype: undefined FUN_0005e130()
 */


undefined4 FUN_0005e130(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 local_30;
  char *local_2c;
  uint uStack_28;
  undefined4 uStack_20;
  
  uVar4 = *(undefined4 *)(param_1 + 0xf0);
  uStack_20 = param_4;
  iVar1 = FUN_0005cac0();
  pbVar3 = *(byte **)(param_2 + 0xc);
  uStack_28 = (uint)*pbVar3;
  local_2c = "pairing failed (peer reason 0x%x)";
  local_30 = 3;
  FUN_00083074(&DAT_00088180,0x1840,&local_30);
  iVar2 = FUN_000831be(param_1 + 4,10);
  if ((((iVar2 != 0) || (iVar2 = FUN_000831be(param_1 + 4,0xb), iVar2 != 0)) && (iVar1 != 0)) &&
     (*(code **)(iVar1 + 0x10) != (code *)0x0)) {
    (**(code **)(iVar1 + 0x10))(uVar4);
  }
  FUN_0005daf0(param_1,*pbVar3);
  return 0;
}


