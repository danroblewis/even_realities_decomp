/*
 * Function: FUN_000682a8
 * Entry:    000682a8
 * Prototype: undefined FUN_000682a8()
 */


undefined4 FUN_000682a8(void)

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


