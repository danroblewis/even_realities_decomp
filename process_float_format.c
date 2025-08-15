/*
 * Function: process_float_format
 * Entry:    0008790e
 * Prototype: undefined process_float_format()
 */


undefined4 process_float_format(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if ((int *)param_2[0xd] == param_2 + 0x11) {
    iVar1 = memory_allocate_with_mutex_protection(param_1,0x400);
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
    iVar1 = process_float_overflow(param_1,(int *)param_2[0xd],iVar2 << 1);
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


