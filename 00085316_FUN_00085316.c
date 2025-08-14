/*
 * Function: FUN_00085316
 * Entry:    00085316
 * Prototype: undefined FUN_00085316()
 */


undefined4 FUN_00085316(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  switch(*(undefined1 *)(param_2 + 0x20)) {
  case 0:
    iVar2 = *(int *)(param_1 + 0x54c);
    break;
  case 1:
    iVar2 = *(int *)(param_1 + 0x53c);
    break;
  case 2:
    if (*(int *)(param_2 + 0x10) != *(int *)(param_1 + 0x54c)) goto LAB_00085348;
    iVar2 = *(int *)(param_1 + 0x53c);
    goto LAB_00085342;
  case 3:
    if ((*(int *)(param_2 + 8) << 0xd < 0) &&
       (*(int *)(param_2 + 0x10) != *(int *)(param_1 + 0x54c))) goto LAB_00085348;
    if (*(int *)(param_2 + 8) << 0xd < 0) {
      return 1;
    }
    iVar2 = *(int *)(param_1 + 0x54c);
LAB_00085342:
    iVar1 = *(int *)(param_2 + 0x18);
    goto LAB_00085344;
  default:
    goto switchD_00085320_caseD_4;
  }
  iVar1 = *(int *)(param_2 + 0x10);
LAB_00085344:
  if (iVar1 != iVar2) {
LAB_00085348:
    *(undefined4 *)(param_1 + 0x500) = 0;
    *(undefined4 *)(param_1 + 0x500) = 6;
    return 0;
  }
switchD_00085320_caseD_4:
  return 1;
}


