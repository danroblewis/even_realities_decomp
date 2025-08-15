/*
 * Function: set_hardware_register_from_bytes
 * Entry:    00066720
 * Prototype: undefined set_hardware_register_from_bytes()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_hardware_register_from_bytes(undefined4 param_1,byte *param_2)

{
  switch(param_1) {
  case 2:
    _DAT_5002b638 = 0;
    goto LAB_0006675c;
  case 3:
    _DAT_5002b638 = 0;
    goto LAB_00066756;
  case 4:
    _DAT_5002b638 = 0;
    goto LAB_00066750;
  case 5:
    goto switchD_00066726_caseD_5;
  case 6:
    _DAT_5002b63c = 0;
    goto LAB_00066742;
  case 7:
    _DAT_5002b63c = 0;
    goto LAB_0006673c;
  case 8:
    _DAT_5002b63c = 0;
    break;
  case 9:
    _DAT_5002b63c = (uint)param_2[7] << 0x18;
    break;
  default:
    goto switchD_00066726_caseD_8;
  }
  _DAT_5002b63c = _DAT_5002b63c | (uint)param_2[6] << 0x10;
LAB_0006673c:
  _DAT_5002b63c = _DAT_5002b63c | (uint)param_2[5] << 8;
LAB_00066742:
  _DAT_5002b63c = _DAT_5002b63c | param_2[4];
switchD_00066726_caseD_5:
  _DAT_5002b638 = (uint)param_2[3] << 0x18;
LAB_00066750:
  _DAT_5002b638 = _DAT_5002b638 | (uint)param_2[2] << 0x10;
LAB_00066756:
  _DAT_5002b638 = _DAT_5002b638 | (uint)param_2[1] << 8;
LAB_0006675c:
  _DAT_5002b638 = _DAT_5002b638 | *param_2;
switchD_00066726_caseD_8:
  return;
}


