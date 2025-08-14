/*
 * Function: FUN_00086ffe
 * Entry:    00086ffe
 * Prototype: undefined FUN_00086ffe()
 */


void FUN_00086ffe(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint extraout_r2;
  
  iVar1 = FUN_0000ef12(param_2);
  uVar2 = iVar1 + 1;
  if (uVar2 <= param_3) goto LAB_00087016;
LAB_00087012:
  do {
    handle_buffer_overflow();
    uVar2 = extraout_r2;
LAB_00087016:
    if (param_2 <= param_1) {
      if (param_1 < param_2 + uVar2) goto LAB_00087012;
      if (param_2 != param_1) goto LAB_0008702a;
    }
    if (param_1 + uVar2 <= param_2) {
LAB_0008702a:
      memcpy(param_1,param_2);
      return;
    }
  } while( true );
}


