/*
 * Function: process_bit_flags_with_state_management
 * Entry:    00083b62
 * Prototype: undefined process_bit_flags_with_state_management()
 */


int process_bit_flags_with_state_management
              (int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  iVar4 = *(int *)(param_1 + 4);
  do {
    if ((int)((param_2 >> (uVar3 & 0xff)) << 0x1f) < 0) {
      if ((int)((param_3 >> (uVar3 & 0xff)) << 0x1f) < 0) {
        uVar2 = 8;
      }
      else {
        uVar2 = 9;
      }
      iVar1 = pack_parameters_and_call_callback
                        (*(undefined4 *)(iVar4 + 4),6,uVar3 & 0xff,uVar2,param_4);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    uVar3 = uVar3 + 1;
    if (uVar3 == 5) {
      return 0;
    }
  } while( true );
}


