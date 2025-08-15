/*
 * Function: FUN_00066ec0
 * Entry:    00066ec0
 * Prototype: undefined FUN_00066ec0()
 */


void FUN_00066ec0(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  bool bVar16;
  
  pcVar9 = (char *)param_2[5];
  uVar13 = (uint)*(byte *)(param_1 + 1);
  if (pcVar9 == (char *)0x1e8480) {
    uVar12 = 0x20000000;
  }
  else if (pcVar9 < (char *)0x1e8481) {
    if (pcVar9 == "\x05F") {
      uVar12 = 0x8000000;
    }
    else if (pcVar9 < "F") {
      if (pcVar9 == (char *)0x1e848) {
        uVar12 = 0x2000000;
      }
      else {
        if (pcVar9 != (char *)0x3d090) goto LAB_00066ef2;
        uVar12 = 0x4000000;
      }
    }
    else {
      if (pcVar9 != "size") {
LAB_00066ef2:
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","0",
                     "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_spim.c",0x15c);
                    /* WARNING: Subroutine does not return */
        assertion_failure("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_spim.c",0x15c);
      }
      uVar12 = 0x10000000;
    }
  }
  else if (pcVar9 == (char *)0xf42400) {
    uVar12 = 0xa000000;
  }
  else if (pcVar9 < (char *)0xf42401) {
    if (pcVar9 == (char *)0x3d0900) {
      uVar12 = 0x40000000;
    }
    else {
      if (pcVar9 != (char *)0x7a1200) goto LAB_00066ef2;
      uVar12 = 0x80000000;
    }
  }
  else {
    if (pcVar9 != (char *)0x1e84800) goto LAB_00066ef2;
    uVar12 = 0x14000000;
  }
  (&DAT_2000b3a2)[uVar13 * 0x24] =
       (&DAT_2000b3a2)[uVar13 * 0x24] & 0xfe | *(byte *)((int)param_2 + 0x23) & 1;
  (&DAT_2000b3a3)[(uint)*(byte *)(param_1 + 1) * 0x24] = *(undefined1 *)(param_2 + 4);
  if (*(char *)((int)param_2 + 0x23) == '\0') {
    if (param_2[5] == 32000000) {
      uVar14 = 3;
    }
    else {
      uVar14 = 0;
    }
    FUN_00066e70(*param_2,1,0,uVar14,1 < *(byte *)(param_2 + 6));
    FUN_00066e70(param_2[1],1,0,uVar14,0);
    FUN_00066e70(param_2[2],0,*(undefined1 *)((int)param_2 + 0x1a),uVar14,0);
    FUN_00066e70(param_2[3],1,0,uVar14,*(byte *)(param_2 + 4) ^ 1);
    FUN_00066e70(param_2[7],1,0,uVar14,1);
  }
  uVar8 = (uint)*(byte *)(param_1 + 1);
  cVar2 = *(char *)((int)param_2 + 0x21);
  if ((uVar8 == 0) || (cVar2 == '\0')) {
    (&DAT_2000b3a4)[uVar13 * 9] = param_2[3];
    (&DAT_2000b3a3)[uVar13 * 0x24] = *(undefined1 *)(param_2 + 4);
  }
  else {
    (&DAT_2000b3a4)[uVar13 * 9] = 0xffffffff;
  }
  uVar13 = (uint)*(byte *)((int)param_2 + 0x19);
  bVar3 = *(byte *)((int)param_2 + 0x12);
  cVar4 = *(char *)(param_2 + 6);
  iVar15 = param_2[7];
  if (*(char *)((int)param_2 + 0x21) == '\0') {
    iVar7 = -1;
  }
  else {
    iVar7 = param_2[3];
  }
  bVar1 = *(byte *)(param_2 + 4);
  bVar5 = *(byte *)((int)param_2 + 0x22);
  bVar6 = *(byte *)(param_2 + 8);
  if (uVar8 != 0) {
    if (cVar2 == '\0') {
      uVar8 = iVar15 + 1;
      if (uVar8 != 0) {
        uVar8 = 1;
      }
    }
    else {
      uVar8 = 1;
    }
  }
  cVar2 = *(char *)(param_2 + 9);
  iVar10 = *param_1;
  if (cVar2 == '\0') {
    uVar14 = param_2[1];
    uVar11 = param_2[2];
    *(undefined4 *)(iVar10 + 0x508) = *param_2;
    *(undefined4 *)(iVar10 + 0x50c) = uVar14;
    *(undefined4 *)(iVar10 + 0x510) = uVar11;
  }
  *(uint *)(iVar10 + 0x5c0) = (uint)bVar3;
  if (uVar13 != 0) {
    uVar13 = 1;
  }
  *(undefined4 *)(iVar10 + 0x524) = uVar12;
  if (cVar4 == '\x02') {
    uVar13 = uVar13 | 4;
  }
  else if (cVar4 == '\x03') {
    uVar13 = uVar13 | 6;
  }
  else if (cVar4 == '\x01') {
    uVar13 = uVar13 | 2;
  }
  *(uint *)(iVar10 + 0x554) = uVar13;
  if (uVar8 != 0) {
    if (cVar2 == '\0') {
      if (iVar15 != -1) {
        *(int *)(iVar10 + 0x56c) = iVar15;
      }
      bVar16 = iVar7 + 1U != 0;
      uVar13 = iVar7 + 1U;
      if (bVar16) {
        uVar13 = (uint)bVar1;
      }
      if (bVar16) {
        *(int *)(iVar10 + 0x514) = iVar7;
      }
      if (bVar16) {
        *(uint *)(iVar10 + 0x568) = uVar13;
      }
      if (bVar16) {
        *(uint *)(iVar10 + 0x564) = (uint)bVar5;
      }
    }
    *(uint *)(iVar10 + 0x560) = (uint)bVar6;
  }
  if ((&DAT_2000b384)[(uint)*(byte *)(param_1 + 1) * 9] == 0) {
    return;
  }
  process_data_with_parameter_validation_alt4((*param_1 << 0xc) >> 0x18);
  return;
}


