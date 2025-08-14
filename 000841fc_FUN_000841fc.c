/*
 * Function: FUN_000841fc
 * Entry:    000841fc
 * Prototype: undefined FUN_000841fc(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


undefined4 FUN_000841fc(int param_1,int param_2,char param_3,byte param_4,char param_5)

{
  byte bVar1;
  undefined4 uVar2;
  bool bVar3;
  
  bVar1 = param_3 + 1;
  bVar3 = param_2 == 1;
  if (bVar3) {
    bVar1 = bVar1 * '\b';
  }
  if (!bVar3) {
    param_4 = bVar1 | param_4 << 6;
  }
  if (bVar3) {
    param_4 = bVar1 | param_4 << 7;
  }
  if (param_5 == '\x01') {
    uVar2 = 0xd;
  }
  else if (param_5 == '\x02') {
    uVar2 = 0xe;
  }
  else {
    if (param_5 != '\0') {
      return 0xffffff7a;
    }
    uVar2 = 0xc;
  }
  uVar2 = FUN_00083e0e(*(undefined4 *)(param_1 + 0x1c),4,uVar2,param_4);
  return uVar2;
}


