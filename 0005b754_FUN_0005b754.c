/*
 * Function: FUN_0005b754
 * Entry:    0005b754
 * Prototype: undefined FUN_0005b754()
 */


undefined4 FUN_0005b754(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_28 [2];
  undefined2 local_26;
  undefined4 *local_24;
  undefined2 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  int *local_14;
  
  if (param_2 == (int *)0x0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","params",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/gatt.c",0xae3);
    DEBUG_PRINT2("\tinvalid parameters\n\n");
    uVar2 = 0xae3;
  }
  else {
    if ((param_2[1] != 0) || (*param_2 != 0)) {
      iVar1 = FUN_0008270c(&DAT_200020d4);
      if (-1 < iVar1 << 0x1d) {
        return 0xfffffff5;
      }
      if ((param_1 != 0) && (*(char *)(param_1 + 0xd) != '\a')) {
        return 0xffffff80;
      }
      local_24 = (undefined4 *)param_2[1];
      iVar1 = FUN_0005a9f4();
      local_20 = (undefined2)iVar1;
      if (*param_2 == 0) {
        if (iVar1 != 0) goto LAB_0005b7e6;
      }
      else {
        local_24 = (undefined4 *)0x0;
        FUN_0005aa84(iVar1,0xffff,*param_2,0,1,&LAB_000825fa_1,&local_24);
        if (local_24 != (undefined4 *)0x0) {
          param_2[1] = (int)local_24;
LAB_0005b7e6:
          local_28[0] = 0;
          local_26 = 0x2803;
          iVar1 = FUN_00080d3e(*local_24,local_28);
          if (iVar1 == 0) {
            if (-1 < (int)((uint)*(byte *)(local_24[3] + 6) << 0x1b)) {
              return 0xffffffea;
            }
            local_20 = FUN_00082c0e();
          }
          if (param_1 != 0) {
            uVar2 = FUN_0005b680(param_1,local_20,param_2);
            return uVar2;
          }
          local_1c = 0xffffff80;
          local_26 = 0x2902;
          local_18 = 1;
          local_28[0] = 0;
          local_14 = param_2;
          FUN_0005aa84(local_20,0xffff,local_28,0,1,0x5b891,&local_24);
          return local_1c;
        }
      }
      return 0xfffffffe;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","params->attr || params->uuid",
                 "WEST_TOPDIR/zephyr/subsys/bluetooth/host/gatt.c",0xae4);
    DEBUG_PRINT2("\tinvalid parameters\n\n");
    uVar2 = 0xae4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0007e2ec("WEST_TOPDIR/zephyr/subsys/bluetooth/host/gatt.c",uVar2);
}


