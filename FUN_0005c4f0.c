/*
 * Function: FUN_0005c4f0
 * Entry:    0005c4f0
 * Prototype: undefined FUN_0005c4f0()
 */


int FUN_0005c4f0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  int *piVar5;
  bool bVar6;
  
  if (param_1 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","conn",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/gatt.c",0x14dc,param_4);
    DEBUG_PRINT2("\tinvalid parameters\n\n");
    uVar3 = 0x14dc;
  }
  else {
    if (param_2 != (int *)0x0) {
      if (*(char *)(param_1 + 0xd) == '\a') {
        iVar1 = FUN_00059c70();
        if ((iVar1 != 0) && (piVar5 = *(int **)(iVar1 + 8), piVar5 != (int *)0x0)) {
          bVar4 = false;
          bVar6 = false;
          do {
            if (param_2 == piVar5 + -6) {
              bVar4 = true;
            }
            else if ((short)piVar5[-3] == (short)param_2[3]) {
              bVar6 = true;
            }
            piVar5 = (int *)*piVar5;
          } while (piVar5 != (int *)0x0);
          if (bVar4) {
            iVar2 = FUN_0008270c(param_2 + 5);
            if (iVar2 << 0x1d < 0) {
              FUN_00082e24(param_1,param_2);
            }
            if (bVar6) {
              FUN_00082ab8(iVar1 + 8,param_2 + 6);
              if (*(int *)(iVar1 + 8) == 0) {
                FUN_00059e78(iVar1);
              }
              (*(code *)*param_2)(param_1,param_2,0);
            }
            else {
              *(undefined2 *)(param_2 + 4) = 0;
              iVar2 = FUN_0005a540(param_1,param_2);
              if (iVar2 != 0) {
                return iVar2;
              }
              FUN_00082ab8(iVar1 + 8,param_2 + 6);
              if (*(int *)(iVar1 + 8) == 0) {
                FUN_00059e78(iVar1);
              }
            }
            return 0;
          }
        }
        iVar1 = -0x16;
      }
      else {
        iVar1 = -0x80;
      }
      return iVar1;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","params",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/gatt.c",0x14dd,param_4);
    DEBUG_PRINT2("\tinvalid parameters\n\n");
    uVar3 = 0x14dd;
  }
                    /* WARNING: Subroutine does not return */
  assertion_failure("WEST_TOPDIR/zephyr/subsys/bluetooth/host/gatt.c",uVar3);
}


