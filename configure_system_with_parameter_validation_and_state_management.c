/*
 * Function: configure_system_with_parameter_validation_and_state_management
 * Entry:    0007a50c
 * Prototype: undefined configure_system_with_parameter_validation_and_state_management(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int configure_system_with_parameter_validation_and_state_management
              (uint *param_1,int param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  
  if (((param_1 != (uint *)0x0) && (param_2 != 0)) && (param_4 != (int *)0x0)) {
    if (param_3 != 0) {
      *param_4 = 1;
      *param_1 = 0;
    }
    if (*param_4 == 0) {
      iVar1 = 0xf10c31;
    }
    else {
      iVar1 = validate_sha256_parameter_with_bit_manipulation(param_2,param_4);
      if ((iVar1 == 0) &&
         (iVar1 = select_sha256_parameter_with_switch_logic(*param_4,param_2), iVar1 == 0)) {
        iVar1 = *param_4;
        if (iVar1 == 8) {
          _DAT_5084510c = 3;
        }
        else if (iVar1 == 4) {
          _DAT_5084510c = 2;
        }
        else {
          _DAT_5084510c = (uint)(iVar1 == 2);
        }
        _DAT_50845140 = 1;
        _DAT_508451c4 = 1;
        _DAT_50845130 = *(undefined4 *)(param_2 + 0x24);
        _DAT_5084512c = 0;
        _DAT_50845108 = 0xffffffff;
        _DAT_50845100 = 0xffffffe4;
        set_system_parameter_simple(_DAT_50845a04 | 0x400);
        _DAT_50845138 = 10;
        if (param_5 == 1) {
          if (_DAT_00ff0c0c == 0xffffffff) {
            uVar2 = 0x16;
          }
          else {
            uVar2 = _DAT_00ff0c0c / 0x18;
          }
        }
        else {
          uVar2 = *(uint *)(param_2 + 0x10) / 0x18;
        }
        _DAT_508451d8 = *(int *)(param_2 + 0x24) * uVar2 * 0x18000 >> 6;
        _DAT_5084512c = 1;
        uVar2 = *param_1 & 0xffffff | *param_4 << 0x18;
        *param_1 = uVar2;
        *param_1 = uVar2 | *param_4 << 8;
        return 0;
      }
    }
    return iVar1;
  }
  return 0xf10c35;
}


