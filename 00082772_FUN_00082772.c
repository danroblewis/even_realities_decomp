/*
 * Function: FUN_00082772
 * Entry:    00082772
 * Prototype: undefined FUN_00082772()
 */


undefined4 FUN_00082772(int param_1,undefined4 param_2,int param_3)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)FUN_0005f5d0(param_1 + 0xc,4);
  *puVar1 = *(undefined2 *)(param_3 + 8);
  puVar1[1] = *(undefined2 *)(param_3 + 0xe);
  return 0;
}


