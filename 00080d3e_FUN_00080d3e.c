/*
 * Function: FUN_00080d3e
 * Entry:    00080d3e
 * Prototype: undefined FUN_00080d3e()
 */


int FUN_00080d3e(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uStack_30;
  undefined1 auStack_2f [19];
  undefined1 uStack_1c;
  undefined1 auStack_1b [19];
  
  cVar1 = *param_2;
  if (cVar1 == *param_1) {
    if (cVar1 == '\x01') {
      uVar3 = *(uint *)(param_1 + 4);
      uVar4 = *(uint *)(param_2 + 4);
    }
    else {
      if (cVar1 == '\x02') {
        iVar2 = memcmp_byte_arrays(param_1 + 1,param_2 + 1,0x10);
        return iVar2;
      }
      if (cVar1 != '\0') {
        return -0x16;
      }
      uVar3 = (uint)*(ushort *)(param_1 + 2);
      uVar4 = (uint)*(ushort *)(param_2 + 2);
    }
    iVar2 = uVar3 - uVar4;
  }
  else {
    FUN_000531e4(param_1,&uStack_30);
    FUN_000531e4(param_2,&uStack_1c);
    iVar2 = memcmp_byte_arrays(auStack_2f,auStack_1b,0x10);
  }
  return iVar2;
}


