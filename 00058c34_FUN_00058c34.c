/*
 * Function: FUN_00058c34
 * Entry:    00058c34
 * Prototype: undefined FUN_00058c34(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined2 param_5, undefined4 param_6, undefined2 param_7)
 */


char FUN_00058c34(undefined4 *param_1,int param_2,int param_3,int param_4,undefined2 param_5,
                 undefined4 param_6,undefined2 param_7)

{
  int iVar1;
  undefined4 local_30;
  int local_2c;
  undefined1 local_28;
  undefined4 local_24;
  undefined2 local_20;
  undefined2 local_1e;
  char local_1c;
  
  iVar1 = param_2;
  if (param_2 != 0) {
    iVar1 = 1;
  }
  iVar1 = FUN_00082ec8(*(undefined4 *)*param_1,iVar1);
  if (iVar1 == 0) {
    iVar1 = FUN_00082236(param_1 + 0x48,5);
    if (iVar1 == 0) {
      return '\x12';
    }
  }
  else {
    if (param_4 == 0) {
      return '\x01';
    }
    fill_memory_buffer(&local_30,0,0x18);
    if ((param_3 != 0) && (local_2c = FUN_000585f0(param_1,param_3,0), local_2c == 0)) {
      return '\x11';
    }
    local_30 = *(undefined4 *)*param_1;
    local_1e = param_5;
    local_28 = (undefined1)param_2;
    local_24 = param_6;
    local_20 = param_7;
    local_1c = '\x01';
    FUN_00081cee(param_4,param_4,0x81c8d,&local_30);
    if (local_1c == '\0') {
      if (local_2c != 0) {
        FUN_000821a4(param_1);
      }
    }
    else {
      if (param_3 != 0) {
        FUN_0005833c(*(undefined4 *)(local_2c + 0x18));
        FUN_0005f24c(local_2c);
        FUN_000821f4(param_1,param_2,param_4,local_1c);
      }
      if (param_2 == 0x18) {
        return local_1c;
      }
    }
  }
  return '\0';
}


