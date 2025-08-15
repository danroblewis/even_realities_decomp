/*
 * Function: process_data_with_state_validation
 * Entry:    0004df34
 * Prototype: undefined process_data_with_state_validation()
 */


void process_data_with_state_validation(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puStack_18;
  uint uStack_14;
  
  puStack_18 = &DAT_0008ad08;
  uVar2 = 9999;
  if (param_2 < 10000) {
    uVar2 = param_2;
  }
  uStack_14 = param_2;
  uVar1 = FUN_0007ddbe(&puStack_18,5,"%d",uVar2);
  FUN_0007eea6(&LAB_0004df64_1,"\x1b[1;31m--- ",0xb,DAT_2000a0f4);
  FUN_0007eea6(&LAB_0004df64_1,&puStack_18,uVar1,DAT_2000a0f4);
  FUN_0007eea6(&LAB_0004df64_1," messages dropped ---\r\n\x1b[0m",0x1b,DAT_2000a0f4);
  return;
}


