/*
 * Function: FUN_000827de
 * Entry:    000827de
 * Prototype: undefined FUN_000827de()
 */


undefined4 FUN_000827de(int param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  puVar1 = (undefined2 *)FUN_0005f5d0(param_1 + 0xc,4,param_3,param_4,param_4);
  *puVar1 = (short)param_3[2];
  puVar1[1] = *(undefined2 *)((int)param_3 + 0xe);
  if ((char)param_3[4] == '\x02') {
    uVar2 = 0x2802;
  }
  else if ((char)param_3[4] == '\x03') {
    uVar2 = 0x2803;
  }
  else {
    uVar2 = *(undefined2 *)(*param_3 + 2);
  }
  FUN_00083766(param_1 + 0xc,uVar2);
  return 0;
}


