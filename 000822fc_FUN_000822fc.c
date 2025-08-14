/*
 * Function: FUN_000822fc
 * Entry:    000822fc
 * Prototype: undefined FUN_000822fc()
 */


void FUN_000822fc(undefined4 param_1,int *param_2,int param_3)

{
  int *extraout_r1;
  int *piVar1;
  
  piVar1 = param_2;
  if (param_3 == 0) {
    FUN_000822ae();
    piVar1 = extraout_r1;
  }
  if (*(int *)(*param_2 + 0x124) != 0) {
    FUN_0007350c(*param_2 + 0x160,piVar1,0xf0000,0);
  }
  FUN_0005833c(param_2);
  return;
}


