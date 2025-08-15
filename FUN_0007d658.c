/*
 * Function: FUN_0007d658
 * Entry:    0007d658
 * Prototype: undefined FUN_0007d658()
 */


void FUN_0007d658(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_c;
  undefined1 local_b;
  undefined2 uStack_a;
  undefined4 uStack_8;
  
  uStack_a = (undefined2)((uint)param_2 >> 0x10);
  _local_c = CONCAT11((char)param_2,(char)param_1);
  uStack_8 = param_3;
  jbd_spi_write_command(0xc0,&local_c,2,param_4,param_1);
  FUN_0007d77c(0x97);
  FUN_0007d772(1);
  return;
}


