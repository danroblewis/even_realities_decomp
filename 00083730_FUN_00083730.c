/*
 * Function: FUN_00083730
 * Entry:    00083730
 * Prototype: undefined FUN_00083730()
 */


int FUN_00083730(int *param_1)

{
  return ((uint)*(ushort *)((int)param_1 + 6) - (uint)*(ushort *)(param_1 + 1)) -
         (*param_1 - param_1[2]);
}


