/*
 * Function: FUN_0008693c
 * Entry:    0008693c
 * Prototype: undefined FUN_0008693c()
 */


float FUN_0008693c(float param_1,float param_2)

{
  int iVar1;
  
  iVar1 = FUN_00075980();
  if ((iVar1 == 0) ||
     ((iVar1 = FUN_00075980(param_2), iVar1 != 0 && (-1 < (int)((uint)(param_1 < param_2) << 0x1f)))
     )) {
    param_1 = param_2;
  }
  return param_1;
}


