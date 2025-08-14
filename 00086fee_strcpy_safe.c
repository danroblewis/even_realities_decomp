/*
 * Function: strcpy_safe
 * Entry:    00086fee
 * Prototype: undefined __stdcall strcpy_safe(undefined4 dest, undefined4 src)
 */


void strcpy_safe(char *dest,char *src)

{
  char cVar1;
  
  do {
    cVar1 = *src;
    *dest = cVar1;
    src = src + 1;
    dest = dest + 1;
  } while (cVar1 != '\0');
  return;
}


