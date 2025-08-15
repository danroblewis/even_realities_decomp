/*
 * Function: safe_string_copy_with_overflow_check
 * Entry:    00087080
 * Prototype: undefined safe_string_copy_with_overflow_check()
 */


void safe_string_copy_with_overflow_check
               (undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint extraout_r2;
  undefined8 uVar3;
  
  uVar3 = CONCAT44(param_2,param_1);
  if (param_3 <= param_4) goto LAB_0008708a;
LAB_00087086:
  do {
    uVar3 = handle_buffer_overflow();
    param_3 = extraout_r2;
LAB_0008708a:
    uVar2 = (uint)((ulonglong)uVar3 >> 0x20);
    uVar1 = (uint)uVar3;
    if (uVar2 <= uVar1) {
      if (uVar1 < uVar2 + param_3) goto LAB_00087086;
      if (uVar2 != uVar1) goto LAB_0008709e;
    }
    if (uVar1 + param_3 <= uVar2) {
LAB_0008709e:
      safe_string_copy_with_padding();
      return;
    }
  } while( true );
}


