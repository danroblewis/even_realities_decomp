/*
 * Function: FUN_0007c456
 * Entry:    0007c456
 * Prototype: undefined FUN_0007c456()
 */


undefined4 FUN_0007c456(byte *param_1,int *param_2)

{
  byte bVar1;
  
  if (((param_1 != (byte *)0x0) && (param_2 != (int *)0x0)) &&
     ((*param_2 != 0 || (param_2[1] == 0)))) {
    bVar1 = *param_1;
    *param_1 = bVar1 & 0xef;
    *param_1 = bVar1 & 0xef | ((uint)param_2[1] < 0x100) << 4;
    *(int *)(param_1 + 0xc) = *param_2;
    *(int *)(param_1 + 0x10) = param_2[1];
    return 0;
  }
  return 7;
}


