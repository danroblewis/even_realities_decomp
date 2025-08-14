/*
 * Function: FUN_0000de2c
 * Entry:    0000de2c
 * Prototype: undefined FUN_0000de2c()
 */


undefined4 FUN_0000de2c(int param_1,uint param_2,int param_3,uint param_4)

{
  if ((((int)(param_2 << 1) >> 0x15 != -1) || (param_1 == 0 && (param_2 & 0xfffff) == 0)) &&
     (((int)(param_4 << 1) >> 0x15 != -1 || (param_3 == 0 && (param_4 & 0xfffff) == 0)))) {
    return 0;
  }
  return 1;
}


