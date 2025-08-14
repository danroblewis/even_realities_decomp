/*
 * Function: memcpy
 * Entry:    00086c04
 * Prototype: undefined __stdcall memcpy(undefined4 dest, undefined4 src, undefined4 size)
 */


void memcpy(int dest,undefined1 *src,int size)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = src + size;
  puVar3 = (undefined1 *)(dest + -1);
  if (src != puVar2) {
    do {
      puVar1 = src + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *src;
      src = puVar1;
    } while (puVar1 != puVar2);
    return;
  }
  return;
}


