/*
 * Function: FUN_0004ff6c
 * Entry:    0004ff6c
 * Prototype: undefined FUN_0004ff6c()
 */


void FUN_0004ff6c(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_50;
  char *local_4c;
  int iStack_48;
  int local_44;
  int local_40;
  char *local_3c;
  int local_38;
  char *local_34;
  int local_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  uStack_28 = param_4;
  if (param_2 != (int *)0x0) {
    local_38 = *param_2;
    local_34 = (char *)param_2[1];
    local_30 = param_2[2];
    local_3c = "r0/a1:  0x%08x  r1/a2:  0x%08x  r2/a3:  0x%08x";
    local_40 = 5;
    FUN_0004d944(&DAT_00088258,0x2840,&local_40,0);
    local_38 = param_2[3];
    local_34 = (char *)param_2[4];
    local_30 = param_2[5];
    local_3c = "r3/a4:  0x%08x r12/ip:  0x%08x r14/lr:  0x%08x";
    local_40 = 5;
    FUN_0004d944(&DAT_00088258,0x2840,&local_40,0);
    local_30 = param_2[7];
    local_34 = " xpsr:  0x%08x";
    local_38 = 3;
    FUN_0004d944(&DAT_00088258,0x1840,&local_38,0);
    iVar1 = 0;
    piVar3 = param_2;
    do {
      local_44 = piVar3[8];
      local_3c = (char *)piVar3[9];
      local_34 = (char *)piVar3[10];
      iStack_2c = piVar3[0xb];
      local_40 = iVar1 + 1;
      local_38 = iVar1 + 2;
      local_30 = iVar1 + 3;
      local_4c = "s[%2d]:  0x%08x  s[%2d]:  0x%08x  s[%2d]:  0x%08x  s[%2d]:  0x%08x";
      local_50 = 10;
      iVar2 = iVar1 + 4;
      iStack_48 = iVar1;
      FUN_0004d944(&DAT_00088258,0x5040,&local_50,0);
      piVar3 = piVar3 + 4;
      iVar1 = iVar2;
    } while (iVar2 != 0x10);
    local_30 = param_2[0x18];
    local_34 = "fpscr:  0x%08x";
    local_38 = 3;
    FUN_0004d944(&DAT_00088258,0x1840,&local_38,0);
    local_30 = param_2[6];
    local_34 = "Faulting instruction address (r15/pc): 0x%08x";
    local_38 = 3;
    FUN_0004d944(&DAT_00088258,0x1840,&local_38,0);
  }
  FUN_00071684(param_1,param_2);
  return;
}


