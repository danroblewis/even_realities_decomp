/*
 * Function: FUN_0007c132
 * Entry:    0007c132
 * Prototype: undefined FUN_0007c132()
 */


int FUN_0007c132(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_10;
  undefined3 uStack_c;
  undefined1 uStack_9;
  
  local_10 = 0;
  uStack_9 = (undefined1)((uint)param_2 >> 0x18);
  uStack_c = 0;
  iVar1 = get_work_mode();
  iVar1 = memcmp_byte_arrays(iVar1 + 0x1069,&local_10,7);
  if (iVar1 != 0) {
    local_10 = 0xffffffff;
    _uStack_c = CONCAT13(uStack_9,0xffffff);
    iVar1 = get_work_mode();
    iVar1 = memcmp_byte_arrays(iVar1 + 0x1069,&local_10,7);
    if (iVar1 != 0) {
      iVar1 = 1;
    }
  }
  return iVar1;
}


