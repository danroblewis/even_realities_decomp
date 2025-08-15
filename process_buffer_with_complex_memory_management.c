/*
 * Function: process_buffer_with_complex_memory_management
 * Entry:    00077e70
 * Prototype: undefined process_buffer_with_complex_memory_management()
 */


undefined4
process_buffer_with_complex_memory_management(undefined4 *param_1,uint *param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  
  if (param_3[2] != 0) {
    uVar4 = (uint)(ushort)param_2[3];
    if (((-1 < (int)(uVar4 << 0x1c)) || (uVar4 = param_2[4], uVar4 == 0)) &&
       (iVar2 = handle_buffer_status_with_memory_allocation_and_validation
                          (param_1,param_2,param_3,uVar4,param_1,param_2,param_3), iVar2 != 0)) {
      return 0xffffffff;
    }
    piVar7 = (int *)*param_3;
    if ((param_2[3] & 2) == 0) {
      if ((param_2[3] & 1) == 0) {
        iVar2 = 0;
        uVar4 = 0;
        do {
          while( true ) {
            uVar1 = (uint)(short)param_2[3];
            uVar3 = *param_2;
            uVar9 = param_2[2];
            if (uVar4 != 0) break;
            iVar2 = *piVar7;
            uVar4 = piVar7[1];
            piVar7 = piVar7 + 2;
          }
          if ((int)(uVar1 << 0x16) < 0) {
            if ((uVar9 <= uVar4) && ((uVar1 & 0x480) != 0)) {
              iVar10 = uVar3 - param_2[4];
              uVar3 = iVar10 + 1 + uVar4;
              uVar9 = (int)(param_2[5] * 3) / 2;
              if (uVar9 < uVar3) {
                uVar9 = uVar3;
              }
              if ((int)(uVar1 << 0x15) < 0) {
                uVar3 = memory_allocate_with_mutex_protection(param_1,uVar9);
                if (uVar3 != 0) {
                  memcpy(uVar3,param_2[4],iVar10);
                  *(ushort *)(param_2 + 3) = (ushort)param_2[3] & 0xfb7f | 0x80;
LAB_00077fec:
                  param_2[4] = uVar3;
                  param_2[5] = uVar9;
                  *param_2 = uVar3 + iVar10;
                  param_2[2] = uVar9 - iVar10;
                  uVar9 = uVar4;
                  goto LAB_00077ffc;
                }
              }
              else {
                uVar3 = process_float_overflow(param_1,param_2[4],uVar9);
                if (uVar3 != 0) goto LAB_00077fec;
                memory_free_with_mutex_protection(param_1,param_2[4]);
                *(ushort *)(param_2 + 3) = (ushort)param_2[3] & 0xff7f;
              }
              *param_1 = 0xc;
              goto LAB_00077fc4;
            }
LAB_00077ffc:
            if (uVar4 <= uVar9) {
              uVar9 = uVar4;
            }
            copy_memory_safe(*param_2,iVar2);
            param_2[2] = param_2[2] - uVar9;
            *param_2 = *param_2 + uVar9;
            uVar9 = uVar4;
          }
          else if ((param_2[4] < uVar3) || (uVar1 = param_2[5], uVar4 < uVar1)) {
            if (uVar4 <= uVar9) {
              uVar9 = uVar4;
            }
            copy_memory_safe(uVar3,iVar2);
            uVar3 = param_2[2];
            param_2[2] = uVar3 - uVar9;
            *param_2 = *param_2 + uVar9;
            if ((uVar3 - uVar9 == 0) &&
               (iVar10 = process_buffer_with_mutex_and_validation(param_1,param_2), iVar10 != 0))
            goto LAB_00077fc4;
          }
          else {
            uVar9 = 0x7fffffff;
            if (uVar4 < 0x80000000) {
              uVar9 = uVar4;
            }
            uVar9 = (*(code *)param_2[10])
                              (param_1,param_2[8],iVar2,uVar1 * ((int)uVar9 / (int)uVar1));
            if ((int)uVar9 < 1) goto LAB_00077fc4;
          }
          iVar10 = param_3[2];
          iVar2 = iVar2 + uVar9;
          uVar4 = uVar4 - uVar9;
          param_3[2] = iVar10 - uVar9;
        } while (iVar10 - uVar9 != 0);
      }
      else {
        iVar2 = 0;
        uVar4 = 0;
        uVar9 = 0;
        iVar10 = 0;
        do {
          if (uVar9 == 0) {
            do {
              piVar8 = piVar7;
              uVar9 = piVar8[1];
              piVar7 = piVar8 + 2;
            } while (uVar9 == 0);
            iVar10 = *piVar8;
LAB_000780be:
            iVar2 = find_character_in_string(iVar10,10,uVar9);
            if (iVar2 == 0) {
              uVar4 = uVar9 + 1;
            }
            else {
              uVar4 = (iVar2 + 1) - iVar10;
            }
          }
          else if (iVar2 == 0) goto LAB_000780be;
          uVar1 = *param_2;
          uVar3 = uVar4;
          if (uVar9 <= uVar4) {
            uVar3 = uVar9;
          }
          if ((param_2[4] < uVar1) && (uVar6 = param_2[2] + param_2[5], (int)uVar6 < (int)uVar3)) {
            copy_memory_safe(uVar1,iVar10,uVar6);
            *param_2 = *param_2 + uVar6;
            iVar2 = process_buffer_with_mutex_and_validation(param_1,param_2);
            if (iVar2 != 0) goto LAB_00077fc4;
          }
          else if ((int)uVar3 < (int)param_2[5]) {
            uVar6 = uVar3;
            copy_memory_safe(uVar1,iVar10);
            param_2[2] = param_2[2] - uVar6;
            *param_2 = *param_2 + uVar6;
          }
          else {
            uVar6 = (*(code *)param_2[10])(param_1,param_2[8],iVar10);
            if ((int)uVar6 < 1) {
LAB_00077fc4:
              *(ushort *)(param_2 + 3) = (ushort)param_2[3] | 0x40;
              return 0xffffffff;
            }
          }
          uVar4 = uVar4 - uVar6;
          if (uVar4 == 0) {
            iVar2 = process_buffer_with_mutex_and_validation(param_1,param_2);
            if (iVar2 != 0) goto LAB_00077fc4;
          }
          else {
            iVar2 = 1;
          }
          iVar5 = param_3[2];
          iVar10 = iVar10 + uVar6;
          uVar9 = uVar9 - uVar6;
          param_3[2] = iVar5 - uVar6;
        } while (iVar5 - uVar6 != 0);
      }
    }
    else {
      iVar2 = 0;
      uVar4 = 0;
      do {
        while( true ) {
          if (uVar4 != 0) break;
          iVar2 = *piVar7;
          uVar4 = piVar7[1];
          piVar7 = piVar7 + 2;
        }
        uVar9 = uVar4;
        if (0x7ffffbff < uVar4) {
          uVar9 = 0x7ffffc00;
        }
        iVar10 = (*(code *)param_2[10])(param_1,param_2[8],iVar2,uVar9);
        if (iVar10 < 1) goto LAB_00077fc4;
        iVar5 = param_3[2];
        iVar2 = iVar2 + iVar10;
        uVar4 = uVar4 - iVar10;
        param_3[2] = iVar5 - iVar10;
      } while (iVar5 - iVar10 != 0);
    }
  }
  return 0;
}


