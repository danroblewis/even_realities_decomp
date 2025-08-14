/*
 * Function: FUN_0008145c
 * Entry:    0008145c
 * Prototype: undefined FUN_0008145c()
 */


int FUN_0008145c(int param_1)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc0);
  if ((iVar2 != 0) ||
     (iVar2 = FUN_0005e938(*(undefined1 *)(param_1 + 8),param_1 + 0x90), iVar2 != 0)) {
    if (*(char *)(param_1 + 3) == '\0') {
      uVar1 = *(ushort *)(iVar2 + 0xe) & 0x21;
    }
    else {
      uVar1 = *(ushort *)(iVar2 + 0xe) & 0x24;
    }
    if (uVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = 1;
    }
  }
  return iVar2;
}


