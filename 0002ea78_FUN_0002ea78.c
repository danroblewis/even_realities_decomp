/*
 * Function: FUN_0002ea78
 * Entry:    0002ea78
 * Prototype: undefined FUN_0002ea78()
 */


undefined4 FUN_0002ea78(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  
  iVar1 = FUN_00083dc8(&DAT_00087c80,3,0xc,8,in_r3);
  if (iVar1 < 0) {
    DEBUG_PRINT("Could not change termination voltage to 4.2V\n");
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


