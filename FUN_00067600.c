/*
 * Function: FUN_00067600
 * Entry:    00067600
 * Prototype: undefined FUN_00067600()
 */


void FUN_00067600(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char local_28 [4];
  undefined2 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (*param_2 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","p_cb->handler",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_twim.c",0x297);
                    /* WARNING: Subroutine does not return */
    assertion_failure("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_twim.c",0x297);
  }
  iVar2 = FUN_0008539a(param_1,2);
  iVar3 = FUN_0008539a(param_1,0x200);
  if (iVar3 == 0) {
    if (iVar2 != 0) goto LAB_00067670;
    FUN_0008539a(param_1,0x40000);
    if ((char)param_2[8] != '\0') {
      *(undefined4 *)(param_1 + 0x200) = 0x200;
      param_2[2] = 0x202;
      *(undefined4 *)(param_1 + 0x308) = 0x19c0202;
      *(int *)(param_1 + 0x304) = param_2[2];
      *(undefined4 *)(param_1 + 8) = 1;
      *(undefined4 *)(param_1 + 0x20) = 1;
      return;
    }
    uVar4 = (uint)*(byte *)((int)param_2 + 0x25);
    if (uVar4 == 0) goto LAB_000676b2;
  }
  else {
    if (iVar2 == 0) {
      *(int *)(param_1 + 0x308) = param_2[2];
      param_2[2] = 2;
      *(int *)(param_1 + 0x304) = param_2[2];
      iVar2 = FUN_0008539a(param_1,0x1000000);
      if ((iVar2 == 0) || (-1 < *(int *)(param_1 + 0x200) << 0x16)) {
        *(undefined4 *)(param_1 + 0x20) = 1;
        *(undefined4 *)(param_1 + 0x14) = 1;
      }
      *(undefined1 *)((int)param_2 + 0x23) = 1;
      return;
    }
LAB_00067670:
    if ((-1 < param_2[7] << 0x19) && (*(char *)((int)param_2 + 0x23) == '\0')) {
      bVar1 = FUN_00085316(param_1,param_2);
      *(byte *)((int)param_2 + 0x23) = bVar1 ^ 1;
    }
    if ((param_2[7] & 4U) != 0) goto LAB_0006770c;
    *(undefined4 *)(param_1 + 0x160) = 0;
    *(undefined4 *)(param_1 + 0x15c) = 0;
    if ((*(char *)((int)param_2 + 0x25) == '\0') || (*(char *)((int)param_2 + 0x23) != '\0')) {
      uVar4 = 0;
LAB_000676b2:
      *(uint *)(param_1 + 0x200) = uVar4;
      param_2[2] = uVar4;
      *(undefined4 *)(param_1 + 0x308) = 0x19c0202;
      uVar4 = (param_1 << 0xc) >> 0x18;
      if (-1 < (int)uVar4) {
        *(int *)(((uVar4 >> 5) + 0x60) * 4 + -0x1fff1f00) = 1 << (uVar4 & 0x1f);
      }
    }
  }
  local_24 = (undefined2)param_2[8];
  local_18 = param_2[3];
  local_20 = param_2[4];
  local_14 = param_2[5];
  local_1c = param_2[6];
LAB_0006770c:
  iVar2 = *(int *)(param_1 + 0x4c4);
  *(int *)(param_1 + 0x4c4) = iVar2;
  if (iVar2 << 0x1e < 0) {
    local_28[0] = '\x01';
  }
  else if (iVar2 << 0x1d < 0) {
    local_28[0] = '\x02';
  }
  else if (iVar2 << 0x1f < 0) {
    local_28[0] = '\x03';
  }
  else {
    local_28[0] = *(char *)((int)param_2 + 0x23) << 2;
  }
  if (*(char *)((int)param_2 + 0x25) == '\0') {
    *(undefined1 *)(param_2 + 9) = 0;
  }
  if ((-1 < param_2[7] << 0x1d) || (*(char *)((int)param_2 + 0x23) != '\0')) {
    (*(code *)*param_2)(local_28,param_2[1]);
  }
  return;
}


