/*
 * Function: strstr
 * Entry:    000870be
 * Prototype: undefined __stdcall strstr(undefined4 haystack, undefined4 needle)
 */


char * strstr(char *haystack,char *needle)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (*needle != '\0') {
    for (; *haystack != '\0'; haystack = haystack + 1) {
      pcVar2 = needle;
      pcVar3 = haystack;
      if (*needle == *haystack) {
        do {
          cVar1 = pcVar2[1];
          if (cVar1 == '\0') {
            return haystack;
          }
          pcVar3 = pcVar3 + 1;
          pcVar2 = pcVar2 + 1;
        } while (*pcVar3 == cVar1);
      }
    }
    haystack = (char *)0x0;
  }
  return haystack;
}


