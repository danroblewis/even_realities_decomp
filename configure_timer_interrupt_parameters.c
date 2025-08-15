/*
 * Function: configure_timer_interrupt_parameters
 * Entry:    00063984
 * Prototype: undefined configure_timer_interrupt_parameters()
 */


int configure_timer_interrupt_parameters
              (int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  
  pcVar2 = *(char **)(param_1 + 0x10);
  puVar3 = *(undefined4 **)(param_1 + 4);
  if (*pcVar2 != '\0') {
    return -0xc;
  }
  if (*param_2 == 0) {
    iVar1 = FUN_00083e70(*puVar3,param_2[1],param_3,0,param_4);
    if (iVar1 < 0) {
      return iVar1;
    }
    if ((*(byte *)(param_2 + 3) & 3) != 3) {
      iVar1 = FUN_00083dc8(*puVar3,7,5,(&DAT_000f66c1)[*(byte *)(param_2 + 3) & 3]);
      if (iVar1 < 0) {
        return iVar1;
      }
      *pcVar2 = '\x01';
      return 0;
    }
  }
  return -0x16;
}


