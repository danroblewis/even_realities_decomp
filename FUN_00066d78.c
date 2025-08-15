/*
 * Function: FUN_00066d78
 * Entry:    00066d78
 * Prototype: undefined FUN_00066d78()
 */


undefined4 FUN_00066d78(int *param_1,int *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = (char *)param_2[5];
  if (pcVar3 == (char *)0x1e8480) {
LAB_00066e18:
    if (((*(char *)((int)param_2 + 0x21) != '\0') && (param_2[3] != -1)) || (param_2[7] != -1))
    goto LAB_00066db6;
    if (*(char *)((int)param_2 + 0x23) == '\0') {
      return 0xbad0000;
    }
  }
  else {
    if (pcVar3 < (char *)0x1e8481) {
      if (pcVar3 != "\x05F") {
        if (pcVar3 < "F") {
          if (pcVar3 == (char *)0x1e848) goto LAB_00066e18;
          pcVar2 = (char *)0x3d090;
        }
        else {
          pcVar2 = "size";
        }
LAB_00066d92:
        if (pcVar3 != pcVar2) {
          return 0xbad0004;
        }
      }
      goto LAB_00066e18;
    }
    if (pcVar3 != (char *)0xf42400) {
      if (pcVar3 < (char *)0xf42401) {
        if (pcVar3 != (char *)0x3d0900) {
          pcVar2 = (char *)0x7a1200;
          goto LAB_00066d92;
        }
        goto LAB_00066e18;
      }
      if (pcVar3 != (char *)0x1e84800) {
        return 0xbad0004;
      }
    }
LAB_00066db6:
    if ((char)param_1[1] == '\0') {
      return 0xbad0003;
    }
    if (*(char *)((int)param_2 + 0x23) == '\0') goto LAB_00066dca;
  }
  if ((char)param_2[9] != '\0') {
    return 0xbad0000;
  }
LAB_00066dca:
  if ((*param_1 != 0x5000a000) || (pcVar3 != (char *)0x1e84800)) {
    return 0xbad0000;
  }
  if (((((*param_2 == -1) || (*param_2 == 8)) && ((param_2[1] == -1 || (param_2[1] == 9)))) &&
      ((param_2[2] == -1 || (param_2[2] == 10)))) &&
     (((*(char *)((int)param_2 + 0x21) == '\0' || (param_2[3] == -1)) || (param_2[3] == 0xb)))) {
    uVar1 = 0xbad0000;
    if (param_2[7] == -1) {
      return 0xbad0000;
    }
    if (param_2[7] != 0xc) {
      uVar1 = 0xbad0004;
    }
    return uVar1;
  }
  return 0xbad0004;
}


