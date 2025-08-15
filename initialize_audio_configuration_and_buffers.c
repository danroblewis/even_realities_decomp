/*
 * Function: initialize_audio_configuration_and_buffers
 * Entry:    00068f94
 * Prototype: undefined initialize_audio_configuration_and_buffers()
 */


undefined1 *
initialize_audio_configuration_and_buffers(int param_1,int param_2,int param_3,undefined1 *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_3 < 1) {
    param_3 = param_2;
  }
  if (param_1 == 0x1d4c) {
    if (param_2 == 8000) {
      if (param_3 == 8000) {
        iVar1 = 0;
        uVar2 = 3;
        iVar4 = 0;
        uVar7 = 0;
        uVar8 = 0;
      }
      else {
        if (param_3 == 16000) {
          uVar8 = 1;
        }
        else if (param_3 == 24000) {
          uVar8 = 2;
        }
        else {
          if (param_3 != 32000) {
            if (param_3 != 48000) {
              return (undefined1 *)0x0;
            }
            iVar4 = 0;
            iVar1 = 1;
            uVar2 = 3;
            uVar8 = 4;
            uVar7 = 0;
            goto LAB_00069026;
          }
          uVar8 = 3;
        }
        iVar1 = 0;
        uVar2 = 3;
        iVar4 = 0;
        uVar7 = 0;
      }
      goto LAB_00069026;
    }
    uVar2 = 3;
    iVar4 = 0;
  }
  else if (param_1 == 10000) {
    if (param_2 == 8000) {
      if (param_3 == 8000) {
        iVar1 = 0;
        uVar2 = 4;
        iVar4 = 1;
        uVar7 = 0;
        uVar8 = 0;
      }
      else if (param_3 == 16000) {
        iVar1 = 0;
        iVar4 = 1;
        uVar2 = 4;
        uVar7 = 0;
        uVar8 = 1;
      }
      else {
        if (param_3 == 24000) {
          uVar8 = 2;
        }
        else {
          if (param_3 != 32000) {
            if (param_3 != 48000) {
              return (undefined1 *)0x0;
            }
            iVar1 = 1;
            uVar2 = 4;
            uVar7 = 0;
            iVar4 = iVar1;
            uVar8 = uVar2;
            goto LAB_00069026;
          }
          uVar8 = 3;
        }
        iVar1 = 0;
        uVar2 = 4;
        iVar4 = 1;
        uVar7 = 0;
      }
      goto LAB_00069026;
    }
    uVar2 = 4;
    iVar4 = 1;
  }
  else {
    if (param_2 == 8000) {
      return (undefined1 *)0x0;
    }
    uVar2 = 5;
    iVar4 = 2;
  }
  if (param_2 == 16000) {
    if (param_3 == 8000) {
      return (undefined1 *)0x0;
    }
    uVar8 = 1;
    uVar7 = 1;
    if (param_3 == 16000) goto LAB_00069106;
LAB_00068ffe:
    uVar7 = uVar8;
    if (param_3 == 24000) {
      if (iVar4 == 2) {
        return (undefined1 *)0x0;
      }
      iVar1 = 0;
      uVar8 = 2;
    }
    else if (param_3 == 32000) {
      if (iVar4 == 2) {
        return (undefined1 *)0x0;
      }
      iVar1 = 0;
      uVar8 = 3;
    }
    else {
      if (param_3 != 48000) {
        return (undefined1 *)0x0;
      }
      if (iVar4 == 2) {
        return (undefined1 *)0x0;
      }
      iVar1 = 1;
      uVar8 = 4;
    }
  }
  else {
    if (param_2 == 24000) {
      if (param_3 == 8000) {
        return (undefined1 *)0x0;
      }
      uVar7 = 2;
    }
    else if (param_2 == 32000) {
      if (param_3 == 8000) {
        return (undefined1 *)0x0;
      }
      uVar7 = 3;
    }
    else if (param_2 == 48000) {
      if (param_3 == 8000) {
        return (undefined1 *)0x0;
      }
      uVar7 = 4;
    }
    else {
      if (param_3 == 8000) {
        return (undefined1 *)0x0;
      }
      uVar7 = 5;
    }
    uVar8 = uVar7;
    if (param_3 != 16000) goto LAB_00068ffe;
LAB_00069106:
    if (iVar4 == 2) {
      return (undefined1 *)0x0;
    }
    iVar1 = 0;
    uVar8 = 1;
  }
  if (uVar8 < uVar7) {
    return (undefined1 *)0x0;
  }
LAB_00069026:
  if (param_4 == (undefined1 *)0x0) {
    return (undefined1 *)0x0;
  }
  iVar5 = uVar7 + 1;
  if (uVar7 == 4) {
    iVar5 = 6;
  }
  iVar3 = (iVar1 + uVar8) * uVar2 + uVar2;
  fill_memory_buffer(param_4,0,0x4b0);
  iVar1 = iVar5 * 10 + iVar3 * 0x14 >> 1;
  *param_4 = (char)iVar4;
  puVar6 = param_4 + 0x4ac;
  *(undefined1 **)(param_4 + 0x4a8) = puVar6 + (iVar3 * 0x14 + iVar1) * 4;
  *(undefined1 **)(param_4 + 0x4a4) = puVar6 + iVar1 * 4;
  iVar4 = (param_1 * param_3) / 1000000;
  param_4[1] = (char)uVar7;
  param_4[2] = (char)uVar8;
  *(undefined1 **)(param_4 + 0x4a0) = puVar6 + iVar5 * 0x14;
  if (param_1 == 0x1d4c) {
    iVar1 = (iVar4 * 0x17) / 0x1e;
  }
  else {
    iVar1 = iVar4 * 5;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 7;
    }
    iVar1 = iVar1 >> 3;
  }
  fill_memory_buffer(puVar6,0,(iVar4 + (param_3 / 800 + iVar4) / 2 + iVar1) * 4);
  return param_4;
}


