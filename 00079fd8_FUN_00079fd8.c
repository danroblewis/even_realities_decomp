/*
 * Function: FUN_00079fd8
 * Entry:    00079fd8
 * Prototype: undefined FUN_00079fd8()
 */


void FUN_00079fd8(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1 + 0x44;
  param_1[0x3e] = 0;
  fill_memory_buffer(param_1 + 0x3f,0,0x14);
  fill_memory_buffer(puVar2,0,8);
  (*DAT_20002f5c)(puVar2);
  *param_1 = 0;
  FUN_0007abc0(param_1 + 1);
  iVar1 = (*DAT_20002f58)(puVar2);
  if (iVar1 == 0) {
    iVar1 = param_1[0x3e];
    if (iVar1 < 1) {
      param_1[iVar1 * 5 + 0x40] = 0;
      param_1[iVar1 * 5 + 0x42] = 0x20;
      param_1[iVar1 * 5 + 0x43] = 1;
      param_1[iVar1 * 5 + 0x3f] = 0x7a9fd;
      param_1[0x3e] = iVar1 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x0007a048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_20002f54)(puVar2);
    return;
  }
  return;
}


