/*
 * Function: configure_device_parameters_from_data
 * Entry:    0005f654
 * Prototype: undefined configure_device_parameters_from_data()
 */


undefined4 configure_device_parameters_from_data(undefined4 param_1,byte *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_18;
  char *local_14;
  
  uVar4 = param_2[4] & 0x1f;
  if (7 < uVar4) {
    return 0xffffffea;
  }
  uVar3 = (uint)*param_2;
  switch(uVar3) {
  case 0:
  case 1:
  case 2:
  case 3:
    break;
  default:
    local_14 = "Selected ADC gain is not valid";
    goto LAB_0005f696;
  case 5:
    uVar3 = 4;
    break;
  case 8:
    uVar3 = 5;
    break;
  case 9:
    uVar3 = 6;
    break;
  case 0xb:
    uVar3 = 7;
  }
  if (param_2[1] == 3) {
    iVar5 = 1;
  }
  else {
    if (param_2[1] != 4) {
      local_14 = "Selected ADC reference is not valid";
      goto LAB_0005f696;
    }
    iVar5 = 0;
  }
  uVar1 = *(ushort *)(param_2 + 2);
  if (uVar1 != 0x400a) {
    if (uVar1 < 0x400b) {
      if (uVar1 == 0x4003) {
        iVar2 = 0;
        goto LAB_0005f6f8;
      }
      if (uVar1 == 0x4005) {
        iVar2 = 1;
        goto LAB_0005f6f8;
      }
      if (uVar1 == 0) goto LAB_0005f73e;
    }
    else {
      if (uVar1 == 0x4014) {
        iVar2 = 4;
        goto LAB_0005f6f8;
      }
      if (uVar1 == 0x4028) {
        iVar2 = 5;
        goto LAB_0005f6f8;
      }
      if (uVar1 == 0x400f) {
        iVar2 = 3;
        goto LAB_0005f6f8;
      }
    }
    local_14 = "Selected ADC acquisition time is not valid";
LAB_0005f696:
    local_18 = 2;
    process_and_compress_data_with_validation(&DAT_000880e0,0x1040,&local_18,0);
    return 0xffffffea;
  }
LAB_0005f73e:
  iVar2 = 2;
LAB_0005f6f8:
  *(uint *)(uVar4 * 0x10 + 0x5000e518) =
       uVar3 << 8 | (((uint)param_2[4] << 0x1a) >> 0x1f) << 0x14 | iVar5 << 0xc | iVar2 << 0x10;
  *(uint *)(uVar4 * 0x10 + 0x5000e514) = (uint)param_2[6];
  *(undefined4 *)(uVar4 * 0x10 + 0x5000e510) = 0;
  (&COMPREHENSIVE_DEVICE_CONFIGURATION_MANAGEMENT_AND_PARAMETER_CONFIGURATION)[uVar4] = param_2[5];
  return 0;
}


