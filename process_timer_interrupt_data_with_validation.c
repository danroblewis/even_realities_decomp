/*
 * Function: process_timer_interrupt_data_with_validation
 * Entry:    00063ff8
 * Prototype: undefined process_timer_interrupt_data_with_validation()
 */


int process_timer_interrupt_data_with_validation(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 local_28 [5];
  
  puVar5 = local_28;
  iVar2 = *(int *)(param_1 + 8);
  FUN_0007f012();
  pcVar4 = (char *)&DAT_0009907c;
  do {
    uVar1 = *(undefined4 *)pcVar4;
    uVar3 = *(undefined4 *)(pcVar4 + 4);
    pcVar4 = pcVar4 + 8;
    *puVar5 = uVar1;
    puVar5[1] = uVar3;
    puVar5 = puVar5 + 2;
  } while (pcVar4 != "%s(): RTC has sync at %lld ms\n");
  iVar2 = FUN_0007efaa(param_1,iVar2 - 0x10U & 0xfffffff8,local_28,0x10);
  if (iVar2 != 0) {
    iVar2 = 1;
  }
  return iVar2;
}


