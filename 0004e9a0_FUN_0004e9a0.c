/*
 * Function: FUN_0004e9a0
 * Entry:    0004e9a0
 * Prototype: undefined FUN_0004e9a0()
 */


undefined4 * FUN_0004e9a0(undefined4 *param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_20;
  char *local_1c;
  
  if (DAT_2000a288 < 0x23) {
    iVar2 = FUN_0004e98c(*(undefined1 *)*param_1);
    iVar3 = FUN_0004e8e8(iVar2 + param_2);
    if (iVar3 != 0) {
      iVar4 = DAT_2000a288 + 3;
      DAT_2000a288 = DAT_2000a288 + 1;
      *(undefined2 *)(&DAT_2000a15c + iVar4 * 2) = *(undefined2 *)(param_1 + 4);
      uVar1 = *(undefined2 *)((int)param_1 + 0x12);
      (&DAT_2000a158)[iVar4 * 2] = iVar3 + param_2;
      *(char *)((int)&DAT_2000a15c + iVar4 * 8 + 2) = (char)uVar1;
      memcpy(iVar3 + param_2,*param_1,iVar2);
      return &DAT_2000a158 + iVar4 * 2;
    }
    local_1c = "No space for attribute data.";
  }
  else {
    local_1c = "No space for new attribute.";
  }
  local_20 = 2;
  FUN_0007f406(&DAT_00088130,0x1040,&local_20);
  return (undefined4 *)0x0;
}


