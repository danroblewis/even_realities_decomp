/*
 * Function: ancs_c_init
 * Entry:    0001905c
 * Prototype: undefined ancs_c_init()
 */


int ancs_c_init(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0007f69e(&DAT_20006ae8);
  if (iVar1 == 0) {
    iVar1 = FUN_0007f772(&DAT_20006ae8,0,param_1 + 0x10,0x20,param_4);
    if (iVar1 == 0) {
      iVar1 = FUN_0007f79e(&DAT_20006ae8,0,param_1 + 0x30,0x20);
      if (iVar1 == 0) {
        iVar1 = FUN_0007f772(&DAT_20006ae8,1,param_1 + 0x50,0x20,param_4);
        if (iVar1 == 0) {
          iVar1 = FUN_0007f772(&DAT_20006ae8,2,param_1 + 0x70,0x20,param_4);
          if (iVar1 == 0) {
            iVar1 = FUN_0007f772(&DAT_20006ae8,3,param_1 + 0x90,0x100);
            if (iVar1 == 0) {
              iVar1 = FUN_0007f772(&DAT_20006ae8,5,param_1 + 400,0x20);
              if (iVar1 == 0) {
                return 0;
              }
              if (LOG_LEVEL < 1) {
                return iVar1;
              }
              if (IS_DEBUG == 0) {
                uVar2 = 0x3e4;
                goto LAB_00019090;
              }
              uVar2 = 0x3e4;
            }
            else {
              if (LOG_LEVEL < 1) {
                return iVar1;
              }
              if (IS_DEBUG == 0) {
                uVar2 = 0x3dc;
LAB_00019090:
                DEBUG_PRINT("%s(): %d: err=%d\n","ancs_c_init",uVar2,iVar1);
                return iVar1;
              }
              uVar2 = 0x3dc;
            }
          }
          else {
            if (LOG_LEVEL < 1) {
              return iVar1;
            }
            if (IS_DEBUG == 0) {
              uVar2 = 0x3d4;
              goto LAB_00019090;
            }
            uVar2 = 0x3d4;
          }
        }
        else {
          if (LOG_LEVEL < 1) {
            return iVar1;
          }
          if (IS_DEBUG == 0) {
            uVar2 = 0x3cc;
            goto LAB_00019090;
          }
          uVar2 = 0x3cc;
        }
      }
      else {
        if (LOG_LEVEL < 1) {
          return iVar1;
        }
        if (IS_DEBUG == 0) {
          uVar2 = 0x3c4;
          goto LAB_00019090;
        }
        uVar2 = 0x3c4;
      }
    }
    else {
      if (LOG_LEVEL < 1) {
        return iVar1;
      }
      if (IS_DEBUG == 0) {
        uVar2 = 0x3bc;
        goto LAB_00019090;
      }
      uVar2 = 0x3bc;
    }
  }
  else {
    if (LOG_LEVEL < 1) {
      return iVar1;
    }
    if (IS_DEBUG == 0) {
      uVar2 = 0x3b4;
      goto LAB_00019090;
    }
    uVar2 = 0x3b4;
  }
  handle_heartbeat("%s(): %d: err=%d\n","ancs_c_init",uVar2,iVar1);
  return iVar1;
}


