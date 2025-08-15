/*
 * Function: process_data_with_callback_and_parameter
 * Entry:    0004dfb8
 * Prototype: undefined process_data_with_callback_and_parameter()
 */


/* WARNING: Removing unreachable block (ram,0x0004e024) */

int process_data_with_callback_and_parameter(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_r3;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 == 0) {
    iVar2 = -0x58;
  }
  else {
    uVar4 = FUN_0007ef6e();
    iVar2 = (int)((ulonglong)uVar4 >> 0x20);
    if ((int)uVar4 == 0) {
      cVar1 = (&DAT_000f0ff1)[iVar2];
      if (*(char *)(iVar3 + 8) == cVar1) {
        iVar2 = -0x78;
      }
      else if (""[iVar2] == *(char *)(iVar3 + 8)) {
        iVar2 = (**(code **)(iVar3 + 0xc))(extraout_r3);
        if (iVar2 < 0) {
          if (param_2 != 2) {
            if (param_2 != 3) {
              return iVar2;
            }
            if (iVar2 != -0x86) {
              *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) | 2;
            }
          }
          *(char *)(iVar3 + 8) = cVar1;
        }
        else {
          *(char *)(iVar3 + 8) = cVar1;
          if (param_2 == 2) {
            *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) & 0xfffffffd;
          }
          iVar2 = 0;
        }
      }
      else {
        iVar2 = -0x86;
      }
    }
    else {
      iVar2 = -1;
    }
  }
  return iVar2;
}


