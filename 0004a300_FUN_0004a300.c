/*
 * Function: FUN_0004a300
 * Entry:    0004a300
 * Prototype: undefined FUN_0004a300()
 */


int FUN_0004a300(float param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  char local_25 [17];
  
  uVar7 = (uint)(param_1 * 100.0);
  uVar4 = (uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f);
  local_25[1] = '\0';
  local_25[2] = '\0';
  local_25[3] = '\0';
  local_25[4] = '\0';
  local_25[5] = '\0';
  local_25[6] = '\0';
  local_25[7] = '\0';
  local_25[8] = '\0';
  local_25[9] = '\0';
  local_25[10] = '\0';
  local_25[0xb] = '\0';
  local_25[0xc] = '\0';
  if ((int)uVar4 < 10) {
    iVar6 = 2;
  }
  else if ((int)uVar4 < 100) {
    iVar6 = 1;
  }
  else {
    iVar6 = 0;
  }
  iVar1 = 0;
  while (uVar4 != 0) {
    if ((iVar1 == 2) && (iVar6 == 0)) {
      iVar1 = 3;
      local_25[3] = 0x2e;
    }
    local_25[iVar1 + 1] = (char)uVar4 + (char)(uVar4 / 10) * -10 + '0';
    iVar1 = iVar1 + 1;
    uVar4 = uVar4 / 10;
  }
  if (iVar6 == 2) {
    if ((int)uVar7 < 1) {
      cVar3 = '-';
    }
    else {
      cVar3 = '+';
    }
    local_25[iVar1 + 1] = '0';
    *param_2 = cVar3;
    iVar1 = iVar1 + 1;
  }
  else {
    if ((int)uVar7 < 1) {
      cVar3 = '-';
    }
    else {
      cVar3 = '+';
    }
    *param_2 = cVar3;
    if (iVar6 == 0) {
      pcVar5 = local_25 + iVar1 + 1;
      pcVar2 = param_2 + iVar1;
      while (param_2 != pcVar2) {
        pcVar5 = pcVar5 + -1;
        param_2 = param_2 + 1;
        *param_2 = *pcVar5;
      }
      param_2[1] = '\0';
      return iVar1 + 1;
    }
  }
  param_2[1] = '0';
  param_2 = param_2 + 2;
  *param_2 = '.';
  iVar6 = iVar1;
  while (iVar6 + -1 != -1) {
    param_2 = param_2 + 1;
    *param_2 = local_25[iVar6];
    iVar6 = iVar6 + -1;
  }
  return iVar1 + 3;
}


