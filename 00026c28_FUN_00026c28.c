/*
 * Function: FUN_00026c28
 * Entry:    00026c28
 * Prototype: undefined FUN_00026c28()
 */


bool FUN_00026c28(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  iVar2 = get_work_mode();
  iVar3 = get_work_mode();
  cVar1 = get_ancs_connection_handle();
  if ((DAT_20018d91 == '\x03') && (cVar1 != '\0')) {
    pcVar4 = (char *)get_work_mode();
    if (*pcVar4 == '\x01') {
      if ((int)((uint)*(byte *)(iVar3 + 0x6de) << 0x1f) < 0) {
        *(byte *)(iVar2 + 0xe4) = *(byte *)(iVar2 + 0xe4) | 3;
      }
    }
    else {
      *(byte *)(iVar3 + 0x6de) = *(byte *)(iVar3 + 0x6de) | 1;
    }
  }
  return (*(byte *)(iVar2 + 0xe4) & 3) == 3;
}


