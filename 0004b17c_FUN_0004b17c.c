/*
 * Function: FUN_0004b17c
 * Entry:    0004b17c
 * Prototype: undefined FUN_0004b17c()
 */


undefined4 FUN_0004b17c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = param_2;
  iVar1 = FUN_0004b01c();
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_0007dcb8(*(undefined4 *)(&DAT_2000254c + param_1 * 0x28),
                         *(undefined4 *)(&DAT_20002548 + param_1 * 0x28),0x101,param_2,param_3,uVar2
                        );
  }
  return uVar2;
}


