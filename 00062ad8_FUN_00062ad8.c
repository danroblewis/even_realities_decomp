/*
 * Function: FUN_00062ad8
 * Entry:    00062ad8
 * Prototype: undefined FUN_00062ad8()
 */


undefined4 FUN_00062ad8(int param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  if (*(char *)((int)param_2 + 5) == '\x01') {
    uVar8 = 0;
  }
  else {
    if (*(char *)((int)param_2 + 5) != '\x03') {
      return 0xffffff7a;
    }
    uVar8 = 0x10;
  }
  if (*(char *)((int)param_2 + 6) != '\x03') {
    return 0xffffff7a;
  }
  uVar7 = (uint)*(byte *)((int)param_2 + 7);
  if ((uVar7 != 0) && (uVar7 != 1)) {
    return 0xffffff7a;
  }
  cVar1 = *(char *)(param_2 + 1);
  if (cVar1 == '\x01') {
    uVar5 = 0x100;
  }
  else {
    if (cVar1 != '\x02') {
      if (cVar1 != '\0') {
        return 0xffffff7a;
      }
      uVar3 = 0;
      uVar5 = 0;
      goto LAB_00062b02;
    }
    uVar5 = 0;
  }
  uVar3 = 0xe;
LAB_00062b02:
  pcVar4 = (char *)*param_2;
  if (pcVar4 == (char *)0x9600) {
    pcVar4 = (char *)0x9d0000;
  }
  else if (pcVar4 < (char *)0x9601) {
    if (pcVar4 == (char *)0x2580) {
      pcVar4 = (char *)0x275000;
    }
    else if (pcVar4 < (char *)0x2581) {
      if (pcVar4 == (char *)0x4b0) {
        pcVar4 = (char *)0x4f000;
      }
      else if (pcVar4 < (char *)0x4b1) {
        if (pcVar4 == (char *)0x12c) {
          pcVar4 = "";
        }
        else {
          if (pcVar4 != (char *)0x258) {
            return 0xffffff7a;
          }
          pcVar4 = (char *)0x27000;
        }
      }
      else if (pcVar4 == (char *)0x960) {
        pcVar4 = "ket size = %d\n";
      }
      else {
        if (pcVar4 != (char *)0x12c0) {
          return 0xffffff7a;
        }
        pcVar4 = (char *)0x13b000;
      }
    }
    else if (pcVar4 == (char *)0x7080) {
      pcVar4 = (char *)0x75c000;
    }
    else if (pcVar4 < (char *)0x7081) {
      if (pcVar4 == (char *)0x3840) {
        pcVar4 = (char *)0x3af000;
      }
      else {
        if (pcVar4 != (char *)0x4b00) {
          return 0xffffff7a;
        }
        pcVar4 = (char *)0x4ea000;
      }
    }
    else {
      if (pcVar4 != (char *)0x7a12) {
        return 0xffffff7a;
      }
      pcVar4 = (char *)0x800000;
    }
  }
  else if (pcVar4 == (char *)0x38400) {
    pcVar4 = (char *)0x3b00000;
  }
  else if (pcVar4 < (char *)0x38401) {
    if (pcVar4 == (char *)&DAT_00012c00) {
      pcVar4 = (char *)0x13a9000;
    }
    else if (&DAT_00012c00 < pcVar4) {
      if (pcVar4 != (char *)0x1c200) {
        return 0xffffff7a;
      }
      pcVar4 = (char *)0x1d60000;
    }
    else if (pcVar4 == (char *)0xdac0) {
      pcVar4 = (char *)0xe50000;
    }
    else {
      if (pcVar4 != &UNK_0000e100) {
        return 0xffffff7a;
      }
      pcVar4 = (char *)0xeb0000;
    }
  }
  else if (pcVar4 == "") {
    pcVar4 = (char *)0xf000000;
  }
  else if ("" < pcVar4) {
    if (pcVar4 != "size") {
      return 0xffffff7a;
    }
    pcVar4 = (char *)0x10000000;
  }
  else if (pcVar4 == (char *)0x3d090) {
    pcVar4 = (char *)0x4000000;
  }
  else {
    if (pcVar4 != (char *)0x70800) {
      return 0xffffff7a;
    }
    pcVar4 = (char *)0x7400000;
  }
  iVar6 = *(int *)(param_1 + 0x10);
  *(char **)(**(int **)(param_1 + 4) + 0x524) = pcVar4;
  *(uint *)(**(int **)(param_1 + 4) + 0x56c) = uVar3 | uVar8 | uVar5 | uVar7;
  uVar2 = param_2[1];
  *(undefined4 *)(iVar6 + 4) = *param_2;
  *(undefined4 *)(iVar6 + 8) = uVar2;
  return 0;
}


