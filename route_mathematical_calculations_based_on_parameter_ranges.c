/*
 * Function: route_mathematical_calculations_based_on_parameter_ranges
 * Entry:    00084516
 * Prototype: undefined route_mathematical_calculations_based_on_parameter_ranges()
 */


undefined4
route_mathematical_calculations_based_on_parameter_ranges
          (int param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  undefined4 uVar4;
  bool bVar5;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (param_2 < 4) {
    uVar4 = *(undefined4 *)(iVar2 + 0xc);
    if (param_2 == 2) {
      param_2 = (uint)*(short *)(iVar2 + 8);
    }
    else {
      if (param_2 == 3) {
        psVar3 = (short *)(iVar2 + 2);
        iVar2 = param_3;
        do {
          psVar3 = psVar3 + 1;
          iVar1 = iVar2 + 8;
          calculate_mathematical_result(iVar2,(int)*psVar3,uVar4);
          iVar2 = iVar1;
        } while (iVar1 != param_3 + 0x18);
        return 0;
      }
      bVar5 = param_2 != 1;
      if (bVar5) {
        param_2 = (uint)*(short *)(iVar2 + 4);
      }
      if (!bVar5) {
        param_2 = (uint)*(short *)(iVar2 + 6);
      }
    }
    calculate_mathematical_result(param_3,param_2,uVar4,param_4,param_4);
  }
  else {
    if (3 < param_2 - 4) {
      return 0xffffff7a;
    }
    uVar4 = *(undefined4 *)(iVar2 + 0x18);
    if (param_2 == 6) {
      param_2 = (uint)*(short *)(iVar2 + 0x14);
    }
    else {
      if (param_2 == 7) {
        psVar3 = (short *)(iVar2 + 0xe);
        iVar2 = param_3;
        do {
          psVar3 = psVar3 + 1;
          iVar1 = iVar2 + 8;
          calculate_mathematical_result_alt(iVar2,(int)*psVar3,uVar4);
          iVar2 = iVar1;
        } while (iVar1 != param_3 + 0x18);
        return 0;
      }
      bVar5 = param_2 != 5;
      if (bVar5) {
        param_2 = (uint)*(short *)(iVar2 + 0x10);
      }
      if (!bVar5) {
        param_2 = (uint)*(short *)(iVar2 + 0x12);
      }
    }
    calculate_mathematical_result_alt(param_3,param_2,uVar4);
  }
  return 0;
}


