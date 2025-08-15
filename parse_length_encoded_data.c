/*
 * Function: parse_length_encoded_data
 * Entry:    00085e1a
 * Prototype: undefined parse_length_encoded_data()
 */


int parse_length_encoded_data(int *param_1,byte *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  
  if ((param_3 == 0) || (param_2 == (byte *)0x0)) {
    uVar2 = 0xe;
  }
  else {
    iVar1 = validate_data_structure_and_update_state();
    if (iVar1 == 0) {
      return 0;
    }
    if (param_1[2] == 0) {
      uVar2 = 3;
    }
    else {
      pbVar4 = (byte *)*param_1;
      bVar7 = *pbVar4;
      param_1[1] = (int)pbVar4;
      bVar7 = bVar7 & 0x1f;
      *param_1 = (int)(pbVar4 + 1);
      fill_memory_buffer(param_2,0,param_3);
      if (bVar7 < 0x18) {
        *param_2 = bVar7;
LAB_00085e6a:
        param_1[2] = param_1[2] + -1;
        return iVar1;
      }
      iVar5 = *param_1;
      if ((byte)(bVar7 - 0x18) < 4) {
        uVar3 = 1 << (uint)(byte)(bVar7 - 0x18);
        if (param_3 < uVar3) {
          uVar2 = 5;
          *param_1 = iVar5 + -1;
        }
        else {
          if (iVar5 + uVar3 <= (uint)param_1[3]) {
            param_2 = param_2 + -1;
            uVar6 = uVar3;
            do {
              uVar6 = uVar6 - 1;
              param_2 = param_2 + 1;
              *param_2 = *(byte *)(*param_1 + uVar6);
            } while (uVar6 != 0);
            *param_1 = *param_1 + uVar3;
            goto LAB_00085e6a;
          }
          uVar2 = 8;
          *param_1 = iVar5 + -1;
        }
      }
      else {
        uVar2 = 7;
        *param_1 = iVar5 + -1;
      }
    }
  }
  update_data_structure_state_alt(param_1,uVar2);
  return 0;
}


