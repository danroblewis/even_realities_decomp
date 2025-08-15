/*
 * Function: float_to_string_ieee754
 * Entry:    00080780
 * Prototype: undefined __stdcall float_to_string_ieee754(undefined4 output_buffer, undefined4 float_value, undefined4 unused)
 */


void float_to_string_ieee754(undefined4 output_buffer,uint float_value,int unused)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uStack_68;
  char *pcStack_64;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined4 uStack_58;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  undefined1 auStack_3c [8];
  int iStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  
  uVar3 = (float_value << 0xc) >> 0x15;
  uStack_4c = 0;
  uStack_48 = output_buffer;
  if (uVar3 == 0) {
    iVar1 = allocate_memory_with_priority_management
                      (((float_value >> 0x14) + 0x17 & 0xfffffff8) >> 2);
    uVar3 = 0;
  }
  else {
    puStack_5c = auStack_3c;
    iStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_58 = 4;
    uStack_60 = 10;
    uStack_44 = uVar3;
    uStack_50 = process_data_with_callback_and_validation(unused,uVar3,0,&iStack_34);
    if (0x7ff < uStack_50) {
      uStack_60 = *(undefined4 *)(unused + 4);
      pcStack_64 = "Message (\"%s\") dropped because it exceeds size limitation (%u)";
      puStack_5c = (undefined1 *)0x7ff;
      uStack_58 = CONCAT22(uStack_58._2_2_,0x200);
      uStack_68 = 0x1000004;
      process_and_compress_data_with_validation(&DAT_000881e0,0x2480,&uStack_68,0);
      return;
    }
    uVar3 = uStack_50 & 0x7ff;
    iVar1 = allocate_memory_with_priority_management
                      (((float_value >> 0x14) + 0x17 + uStack_50 & 0xfffffff8) >> 2);
    float_value = float_value & 0xfff001ff;
    if (iVar1 != 0) {
      iStack_34 = iVar1 + 0x10;
      uStack_30 = uStack_50;
      uStack_2c = 0;
      puStack_5c = auStack_3c;
      uStack_60 = 10;
      uStack_58 = 4;
      iVar2 = process_data_with_callback_and_validation(unused,uStack_44,0x7ee49,&iStack_34);
      if (iVar2 < 0) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","len >= 0",
                     "WEST_TOPDIR/zephyr/subsys/logging/log_msg.c",0x59);
                    /* WARNING: Subroutine does not return */
        assertion_failure("WEST_TOPDIR/zephyr/subsys/logging/log_msg.c",0x59);
      }
    }
  }
  FUN_0007ee74(iVar1,uStack_48,float_value & 0xfff001ff | uVar3 << 9,uStack_4c);
  return;
}


