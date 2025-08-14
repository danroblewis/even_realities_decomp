/*
 * Function: FUN_000593ec
 * Entry:    000593ec
 * Prototype: undefined FUN_000593ec(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined2 param_5)
 */


undefined4
FUN_000593ec(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined2 param_5)

{
  int iVar1;
  undefined4 *local_28;
  undefined2 local_24;
  int local_20;
  char local_1c;
  
  iVar1 = FUN_00082ec8(*(undefined4 *)*param_1,1);
  if (iVar1 == 0) {
    iVar1 = FUN_00082236(param_1 + 0x48,5);
    if (iVar1 == 0) {
      return 0x12;
    }
  }
  else {
    if (param_4 == 0) {
      return 1;
    }
    fill_memory_buffer(&local_28,0,0x10);
    local_20 = FUN_00058f34(param_1,param_3,0);
    if (local_20 == 0) {
      return 0x11;
    }
    local_24 = param_5;
    local_1c = '\x01';
    local_28 = param_1;
    FUN_00081cee(param_4,param_4,&LAB_00081f78_1,&local_28);
    if (local_1c == '\0') {
      FUN_000821a4(param_1,local_20);
    }
    else {
      FUN_0005833c(*(undefined4 *)(local_20 + 0x18));
      FUN_0005f24c(local_20);
      FUN_000821f4(param_1,param_2,param_4,local_1c);
    }
  }
  return 0;
}


