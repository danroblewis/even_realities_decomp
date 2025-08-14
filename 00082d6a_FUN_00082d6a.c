/*
 * Function: FUN_00082d6a
 * Entry:    00082d6a
 * Prototype: undefined FUN_00082d6a(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


void FUN_00082d6a(undefined4 param_1,int param_2,undefined2 *param_3,uint param_4,
                 undefined4 *param_5)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  undefined1 local_48 [2];
  undefined2 local_46;
  undefined4 local_44;
  undefined2 local_40;
  undefined1 *local_3c;
  undefined1 auStack_38 [8];
  undefined4 *local_30;
  undefined2 local_2c;
  
  if ((param_2 == 0) && ((param_4 & 3) == 0)) {
    puVar3 = param_3 + ((param_4 << 0x16) >> 0x18) * 2;
    uVar4 = 0;
    do {
      if (param_3 == puVar3) {
        FUN_00082d2e(param_1,uVar4,param_5);
        return;
      }
      uVar4 = param_3[1];
      if (*(char *)(param_5 + 4) == '\0') {
        local_46 = 0x2800;
      }
      else {
        local_46 = 0x2801;
      }
      local_44 = *param_5;
      uVar1 = *param_3;
      local_48[0] = 0;
      local_40 = uVar4;
      fill_memory_buffer(auStack_38,0);
      local_30 = &local_44;
      local_3c = local_48;
      local_2c = uVar1;
      iVar2 = (*(code *)param_5[1])(param_1,&local_3c,param_5);
      param_3 = param_3 + 2;
    } while (iVar2 != 0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00082d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_5[1])(param_1,0,param_5);
  return;
}


