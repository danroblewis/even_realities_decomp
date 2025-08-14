/*
 * Function: FUN_00076c3c
 * Entry:    00076c3c
 * Prototype: undefined FUN_00076c3c()
 */


undefined4 * FUN_00076c3c(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  FUN_00076b9c();
  if (DAT_20002d3c == 0) {
    FUN_00076bcc(&DAT_20002d24);
  }
  piVar3 = &DAT_20002d6c;
  do {
    iVar1 = piVar3[1];
    puVar2 = (undefined4 *)piVar3[2];
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      if (*(short *)(puVar2 + 3) == 0) {
        puVar2[0x19] = 0;
        puVar2[3] = 0xffff0001;
        FUN_0005109c(puVar2 + 0x16);
        FUN_00076ba8();
        *puVar2 = 0;
        puVar2[6] = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        fill_memory_buffer(puVar2 + 0x17,0,8);
        puVar2[0xd] = 0;
        puVar2[0xe] = 0;
        puVar2[0x12] = 0;
        puVar2[0x13] = 0;
        return puVar2;
      }
      puVar2 = puVar2 + 0x1a;
    }
    if (*piVar3 == 0) {
      iVar1 = FUN_00086b14(param_1,4);
      *piVar3 = iVar1;
      if (iVar1 == 0) {
        FUN_00076ba8();
        *param_1 = 0xc;
        return (undefined4 *)0x0;
      }
    }
    piVar3 = (int *)*piVar3;
  } while( true );
}


