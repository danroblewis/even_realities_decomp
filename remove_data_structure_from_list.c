/*
 * Function: remove_data_structure_from_list
 * Entry:    000682a8
 * Prototype: undefined remove_data_structure_from_list()
 */


undefined4 remove_data_structure_from_list(void)

{
  *(int **)((int)LINKED_LIST_HEAD_POINTER + 4) = DAT_20002c64;
  *DAT_20002c64 = (int)LINKED_LIST_HEAD_POINTER;
  LINKED_LIST_HEAD_POINTER = &LINKED_LIST_HEAD_POINTER;
  DAT_20002c64 = (int *)&LINKED_LIST_HEAD_POINTER;
  if (DAT_20002c40 != (code *)0x0) {
    (*DAT_20002c40)();
  }
  if ((6 < DAT_2000b424) && (LINKED_LIST_HEAD_POINTER != (code *)0x0)) {
    (*LINKED_LIST_HEAD_POINTER)(7,"unregistered %s bus\n",DAT_20002c3c);
  }
  return 0;
}


