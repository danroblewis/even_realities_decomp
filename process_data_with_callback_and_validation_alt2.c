/*
 * Function: process_data_with_callback_and_validation_alt2
 * Entry:    00051354
 * Prototype: undefined process_data_with_callback_and_validation_alt2()
 */


int process_data_with_callback_and_validation_alt2(uint param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = LINKED_LIST_HEAD_POINTER_ALT;
  if (LINKED_LIST_HEAD_POINTER_ALT != (int *)0x0) {
    piVar2 = (int *)*LINKED_LIST_HEAD_POINTER_ALT;
  }
  iVar4 = param_2 * 8;
  piVar1 = LINKED_LIST_HEAD_POINTER_ALT;
  do {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if (*(ushort *)((int)piVar1 + 10) == param_1) {
      if (*(ushort *)((int)piVar1 + 8) <= param_2) {
        return 0;
      }
      iVar3 = *(int *)((int)piVar1 + 4);
      if ((*(int *)(iVar3 + iVar4) != 0) || (*(int *)(iVar3 + iVar4 + 4) != 0)) {
        return iVar3 + iVar4;
      }
    }
    piVar1 = piVar2;
    if (piVar2 != (int *)0x0) {
      piVar2 = (int *)*piVar2;
    }
  } while( true );
}


