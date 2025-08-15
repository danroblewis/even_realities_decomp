/*
 * Function: manage_memory_buffer_with_string_processing_and_busy_wait
 * Entry:    00084a54
 * Prototype: undefined manage_memory_buffer_with_string_processing_and_busy_wait()
 */


uint manage_memory_buffer_with_string_processing_and_busy_wait(int *param_1,int param_2,int param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  uint uVar4;
  int iVar5;
  int *piStack_18;
  int iStack_14;
  
  ppiVar2 = &piStack_18;
  iVar5 = *param_1;
  uVar4 = *(uint *)(iVar5 + 0x53c);
  if (param_2 == 0) {
    param_3 = 5;
    ppiVar3 = (int **)0x0;
  }
  else {
    piStack_18 = param_1;
    iStack_14 = param_2;
    ppiVar2 = (int **)fill_memory_buffer(param_2,0);
    ppiVar3 = ppiVar2;
  }
  *(int ***)(iVar5 + 0x534) = ppiVar2;
  *(int *)(iVar5 + 0x538) = param_3;
  *(undefined4 *)(iVar5 + 0x110) = 0;
  *(undefined4 *)(iVar5 + 0x2c) = 1;
  do {
  } while (*(int *)(iVar5 + 0x110) == 0);
  *(undefined4 *)(iVar5 + 0x110) = 0;
  if ((ppiVar3 != (int **)0x0) && (uVar4 == *(uint *)(iVar5 + 0x53c))) {
    ppiVar2 = ppiVar3;
    do {
      if (ppiVar2 == (int **)((int)ppiVar3 + param_3)) {
        return 0;
      }
      cVar1 = *(char *)ppiVar2;
      ppiVar2 = (int **)((int)ppiVar2 + 1);
    } while (cVar1 == '\0');
  }
  return *(uint *)(iVar5 + 0x53c) & 0xff;
}


