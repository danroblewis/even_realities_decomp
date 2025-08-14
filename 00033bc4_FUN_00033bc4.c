/*
 * Function: FUN_00033bc4
 * Entry:    00033bc4
 * Prototype: undefined FUN_00033bc4()
 */


undefined4 * FUN_00033bc4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(uint)DAT_20008ec4;
  if (puVar1 != (undefined4 *)0x0) {
    if (DAT_20008ec2 == '\0') {
      puVar1 = (undefined4 *)0x0;
      if (DAT_20008ec1 < 4) {
        DAT_20008ec0 = 10;
        return &DAT_20008eb4;
      }
    }
    else {
      puVar1 = (undefined4 *)0x0;
    }
  }
  return puVar1;
}


