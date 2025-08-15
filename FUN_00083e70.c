/*
 * Function: FUN_00083e70
 * Entry:    00083e70
 * Prototype: undefined FUN_00083e70()
 */


int FUN_00083e70(int param_1,uint param_2)

{
  int iVar1;
  undefined2 local_10;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined1 local_c;
  undefined3 uStack_b;
  
  if (param_2 < 0x10000000) {
    _local_10 = CONCAT13((char)((param_2 >> 4) >> 8),CONCAT12((char)(param_2 >> 0x14),0x807));
    _local_c = CONCAT31((int3)(param_2 >> 8),(char)(param_2 >> 4));
    iVar1 = FUN_00083d60(*(undefined4 *)(param_1 + 4),&local_10,5);
    if (iVar1 == 0) {
      iVar1 = FUN_00083dc8(param_1,7,3,1);
    }
  }
  else {
    iVar1 = -0x16;
  }
  return iVar1;
}


