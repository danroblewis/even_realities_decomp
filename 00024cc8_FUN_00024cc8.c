/*
 * Function: FUN_00024cc8
 * Entry:    00024cc8
 * Prototype: undefined FUN_00024cc8()
 */


char FUN_00024cc8(int param_1)

{
  char local_19;
  undefined4 local_18;
  undefined4 local_14;
  
  local_19 = '\0';
  FUN_0007ca24(DAT_20007a44,&local_19);
  if (local_19 == '\0') {
    if (param_1 == 0) goto LAB_00024cf4;
    local_14 = 0;
    local_18 = 0;
  }
  else {
    if ((local_19 != '\x01') || (param_1 != 0)) goto LAB_00024cf4;
    local_18 = 0x12345678;
    local_14 = 0x13245678;
  }
  FUN_0007c99e(DAT_20007a44,&local_18);
LAB_00024cf4:
  FUN_0007ca24(DAT_20007a44,&local_19);
  return local_19;
}


