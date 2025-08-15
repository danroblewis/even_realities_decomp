/*
 * Function: remove_data_structure_from_list
 * Entry:    000682a8
 * Prototype: undefined remove_data_structure_from_list()
 */


undefined4 remove_data_structure_from_list(void)

{
  *(int **)((int)DAT_20002c60 + 4) = DAT_20002c64;
  *DAT_20002c64 = (int)DAT_20002c60;
  DAT_20002c60 = &DAT_20002c60;
  DAT_20002c64 = (int *)&DAT_20002c60;
  if (DAT_20002c40 != (code *)0x0) {
    (*DAT_20002c40)();
  }
  if ((6 < DAT_2000b424) && (DAT_2000b428 != (code *)0x0)) {
    (*DAT_2000b428)(7,"unregistered %s bus\n",DAT_20002c3c);
  }
  return 0;
}


