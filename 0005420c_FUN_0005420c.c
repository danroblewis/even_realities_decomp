/*
 * Function: FUN_0005420c
 * Entry:    0005420c
 * Prototype: undefined FUN_0005420c()
 */


undefined4 FUN_0005420c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    if ((param_2 == 0) ||
       (iVar1 = memcmp_byte_arrays(param_2,&DAT_000f2b3a,7,param_4,0,
                                   CONCAT13((char)param_1,(int3)param_2)), iVar1 == 0)) {
      FUN_0005e6d4(0,&LAB_00080e80_1,&stack0xffffffef);
    }
    else {
      FUN_00053380(0,param_2);
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffea;
  }
  return uVar2;
}


