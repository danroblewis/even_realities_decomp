/*
 * Function: FUN_000821f4
 * Entry:    000821f4
 * Prototype: undefined FUN_000821f4()
 */


void FUN_000821f4(undefined4 param_1,int param_2,undefined2 param_3,undefined1 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    return;
  }
  uVar3 = FUN_000585f0(param_1,1,4);
  iVar1 = (int)uVar3;
  if (iVar1 == 0) {
    FUN_00081ddc(&DAT_00088100,0x1040,&stack0xfffffff0,2,0,(int)((ulonglong)uVar3 >> 0x20),
                 extraout_r2,extraout_r3);
    return;
  }
  puVar2 = (undefined1 *)FUN_0005f5d0(iVar1 + 0xc,4);
  *puVar2 = (char)param_2;
  *(undefined2 *)(puVar2 + 1) = param_3;
  puVar2[3] = param_4;
  FUN_000821a4(param_1,iVar1);
  return;
}


