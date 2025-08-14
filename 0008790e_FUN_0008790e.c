/*
 * Function: FUN_0008790e
 * Entry:    0008790e
 * Prototype: undefined FUN_0008790e()
 */


undefined4 FUN_0008790e(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if ((int *)param_2[0xd] == param_2 + 0x11) {
    iVar1 = FUN_00076e20(param_1,0x400);
    if (iVar1 != 0) {
      param_2[0xd] = iVar1;
      param_2[0xe] = 0x400;
      *(undefined1 *)(iVar1 + 0x3ff) = *(undefined1 *)((int)param_2 + 0x46);
      *(undefined1 *)(iVar1 + 0x3fe) = *(undefined1 *)((int)param_2 + 0x45);
      *(undefined1 *)(iVar1 + 0x3fd) = (char)param_2[0x11];
      *param_2 = iVar1 + 0x3fd;
      return 0;
    }
  }
  else {
    iVar2 = param_2[0xe];
    iVar1 = FUN_000876ec(param_1,(int *)param_2[0xd],iVar2 << 1);
    if (iVar1 != 0) {
      memcpy(iVar1 + iVar2,iVar1,iVar2);
      *param_2 = iVar1 + iVar2;
      param_2[0xd] = iVar1;
      param_2[0xe] = iVar2 << 1;
      return 0;
    }
  }
  return 0xffffffff;
}


