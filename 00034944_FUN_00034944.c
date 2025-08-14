/*
 * Function: FUN_00034944
 * Entry:    00034944
 * Prototype: undefined FUN_00034944()
 */


void FUN_00034944(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_r3;
  undefined4 unaff_lr;
  
  DAT_2001a22b = 10;
  DAT_2001a22a = 0;
  DAT_2001a229 = 0;
  uVar1 = FUN_0003441c();
  fill_memory_buffer(&DAT_20007dac,uVar1,0x2210);
  fill_memory_buffer(&DAT_2001a22c,0,0x15e2,in_r3,in_r3,unaff_lr);
  DEBUG_PRINT("MAX_WHITE_LIST_BUF_LEN is %d \n",0x15e3);
  iVar2 = FUN_00034b34();
  if (iVar2 == 0) {
    FUN_000355b4();
    return;
  }
  return;
}


