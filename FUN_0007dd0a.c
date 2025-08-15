/*
 * Function: FUN_0007dd0a
 * Entry:    0007dd0a
 * Prototype: undefined FUN_0007dd0a()
 */


uint FUN_0007dd0a(undefined1 *param_1,uint param_2,byte *param_3,uint param_4)

{
  int iVar1;
  byte *extraout_r2;
  char *extraout_r2_00;
  char *extraout_r2_01;
  char cVar2;
  undefined1 *puVar3;
  uint uVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  undefined4 uStack_1c;
  byte *pbStack_18;
  
  uVar4 = (param_2 & 1) + (param_2 >> 1);
  if (param_4 < uVar4) {
LAB_0007dd1e:
    uVar4 = 0;
  }
  else {
    puVar6 = param_1;
    uStack_1c = param_2;
    pbStack_18 = param_3;
    if ((param_2 & 1) != 0) {
      iVar1 = FUN_0007dcda(*param_1,(int)&uStack_1c + 3,param_3,param_4,param_1);
      if (iVar1 < 0) goto LAB_0007dd1e;
      param_4 = (uint)uStack_1c._3_1_;
      param_1 = param_1 + 1;
      param_3 = extraout_r2 + 1;
      *extraout_r2 = uStack_1c._3_1_;
    }
    pbVar5 = param_3 + (param_2 >> 1);
    puVar3 = param_1 + 1;
    while (param_3 != pbVar5) {
      iVar1 = FUN_0007dcda(puVar3[-1],(int)&uStack_1c + 3,param_3,param_4,puVar6);
      if (iVar1 < 0) goto LAB_0007dd1e;
      cVar2 = uStack_1c._3_1_ * '\x10';
      *extraout_r2_00 = cVar2;
      iVar1 = FUN_0007dcda(*puVar3);
      if (iVar1 < 0) goto LAB_0007dd1e;
      param_4 = (uint)uStack_1c._3_1_;
      *extraout_r2_01 = cVar2 + uStack_1c._3_1_;
      puVar3 = puVar3 + 2;
      param_3 = (byte *)(extraout_r2_01 + 1);
    }
  }
  return uVar4;
}


