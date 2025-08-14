/*
 * Function: FUN_00080872
 * Entry:    00080872
 * Prototype: undefined FUN_00080872()
 */


undefined4 FUN_00080872(undefined4 param_1,undefined4 *param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_30;
  int iStack_2c;
  
  iVar2 = FUN_00085fa2();
  if (iVar2 != 0) {
    *param_4 = 0;
    puVar5 = param_2;
LAB_000808a2:
    do {
      iVar3 = FUN_00085f9c(param_1,&local_30);
      iVar2 = iStack_2c;
      uVar1 = local_30;
      if (iVar3 == 0) break;
      for (iVar3 = 0; param_3 != iVar3; iVar3 = iVar3 + 1) {
        if (param_2 + param_3 * 5 <= puVar5) {
          puVar5 = param_2;
        }
        if ((iVar2 == puVar5[1]) && (iVar4 = memcmp_byte_arrays(uVar1,*puVar5), iVar4 == 0)) {
          if (*(char *)(puVar5 + 4) != '\0') {
            return 0xffffff90;
          }
          iVar2 = (*(code *)puVar5[2])(param_1,puVar5[3]);
          if (iVar2 == 0) {
            return 0xffffffdd;
          }
          *(undefined1 *)(puVar5 + 4) = 1;
          puVar5 = puVar5 + 5;
          *param_4 = *param_4 + 1;
          goto LAB_000808a2;
        }
        puVar5 = puVar5 + 5;
      }
      iVar2 = FUN_00086064(param_1,0);
    } while (iVar2 != 0);
    iVar2 = thunk_FUN_00085df6(param_1);
    if (iVar2 != 0) {
      return 0;
    }
  }
  return 0xffffffb3;
}


