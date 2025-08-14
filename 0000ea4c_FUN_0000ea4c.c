/*
 * Function: FUN_0000ea4c
 * Entry:    0000ea4c
 * Prototype: undefined FUN_0000ea4c()
 */


undefined4 FUN_0000ea4c(int param_1,int param_2)

{
  char *pcVar1;
  
  if (*(int *)(param_2 + 4) == 0) {
    return 0;
  }
  pcVar1 = (char *)(param_1 + -1);
  do {
    if (*(int *)(param_2 + 4) <= (int)(pcVar1 + (1 - param_1))) {
      return 1;
    }
    pcVar1 = pcVar1 + 1;
  } while (*pcVar1 != '\0');
  return 0;
}


