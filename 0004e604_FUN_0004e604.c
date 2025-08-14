/*
 * Function: FUN_0004e604
 * Entry:    0004e604
 * Prototype: undefined FUN_0004e604(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


undefined4
FUN_0004e604(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_40;
  char *local_3c;
  undefined4 uStack_38;
  int local_34;
  int local_30;
  undefined4 local_24;
  
  local_24 = param_1;
  if (param_5 != (int *)0x0) {
    if ((*param_5 != 0) && (iVar1 = FUN_0007f1a0(param_1,*param_5,&local_24), iVar1 == 0)) {
      return 0;
    }
    if ((code *)param_5[1] != (code *)0x0) {
      local_30 = param_5[2];
      uVar2 = (*(code *)param_5[1])(local_24,param_2,param_3,param_4);
      return uVar2;
    }
  }
  iVar1 = FUN_0004e540(param_1,&local_24);
  if ((iVar1 != 0) &&
     (local_34 = (**(code **)(iVar1 + 8))(local_24,param_2,param_3,param_4), local_34 != 0)) {
    local_3c = "set-value failure. key: %s error(%d)";
    local_30 = CONCAT22(local_30._2_2_,0x200);
    local_40 = 0x1000004;
    uStack_38 = param_1;
    FUN_0004d944(&DAT_00088278,0x2440,&local_40,0);
  }
  return 0;
}


