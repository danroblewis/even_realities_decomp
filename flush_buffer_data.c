/*
 * Function: flush_buffer_data
 * Entry:    0006897c
 * Prototype: undefined flush_buffer_data()
 */


void flush_buffer_data(int param_1)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (0xffff < uVar1) {
    return;
  }
  uVar4 = *(uint *)(param_1 + 4);
  do {
    if ((uVar4 < 0xff0000) || (*(int *)(param_1 + 0x10) != 0)) {
      if ((-1 < *(int *)(param_1 + 0xc)) &&
         (pcVar2 = *(char **)(param_1 + 0x30), pcVar2 < *(char **)(param_1 + 0x2c))) {
        *(char **)(param_1 + 0x30) = pcVar2 + 1;
        *pcVar2 = (char)*(int *)(param_1 + 0xc) + (char)*(undefined4 *)(param_1 + 0x10);
      }
      iVar3 = *(int *)(param_1 + 0x14);
      while (0 < iVar3) {
        pcVar2 = *(char **)(param_1 + 0x30);
        if (*(char **)(param_1 + 0x2c) <= pcVar2) {
          *(int *)(param_1 + 0x14) = iVar3 + -1;
          if (0 < iVar3 + -1) {
            *(undefined4 *)(param_1 + 0x14) = 0;
          }
          break;
        }
        *(char **)(param_1 + 0x30) = pcVar2 + 1;
        *pcVar2 = -(*(int *)(param_1 + 0x10) == 0);
        iVar3 = *(int *)(param_1 + 0x14) + -1;
        *(int *)(param_1 + 0x14) = iVar3;
      }
      uVar4 = *(uint *)(param_1 + 4);
      uVar1 = *(uint *)(param_1 + 8);
      *(uint *)(param_1 + 0xc) = uVar4 >> 0x10;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    }
    uVar1 = uVar1 << 8;
    uVar4 = (uVar4 & 0xffff) << 8;
    *(uint *)(param_1 + 4) = uVar4;
    *(uint *)(param_1 + 8) = uVar1;
    if (0xffff < uVar1) {
      return;
    }
  } while( true );
}


