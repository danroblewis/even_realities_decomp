/*
 * Function: FUN_00083dc8
 * Entry:    00083dc8
 * Prototype: undefined FUN_00083dc8()
 */


void FUN_00083dc8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 uStack_9;
  undefined4 uStack_8;
  
  uStack_9 = (undefined1)((uint)param_2 >> 0x18);
  _local_c = CONCAT12((char)param_4,CONCAT11((char)param_3,(char)param_2));
  uStack_8 = param_3;
  FUN_00083d60(*(undefined4 *)(param_1 + 4),&local_c,3,param_4,param_1);
  return;
}


