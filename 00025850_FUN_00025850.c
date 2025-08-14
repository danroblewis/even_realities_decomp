/*
 * Function: FUN_00025850
 * Entry:    00025850
 * Prototype: undefined FUN_00025850()
 */


int FUN_00025850(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (param_4 == 0) {
    iVar1 = 0;
  }
  else {
    iVar3 = 0x14;
    iVar4 = *(int *)(param_1 + 4);
    uVar5 = *(undefined4 *)(param_1 + 0x10);
    uVar2 = param_2;
    while( true ) {
      resource_mutex_acquire(uVar5,uVar2,0xffffffff,0xffffffff);
      iVar1 = FUN_0007c882(iVar4,param_2,param_3,param_4);
      mutex_unlock(uVar5);
      if (iVar1 == 0) break;
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) {
        DEBUG_PRINT("eeprom_st25dv_write_sys addr %04X offset %04X failed %d\r\n",
                    *(ushort *)(iVar4 + 8) | 4,param_2,iVar1);
        return iVar1;
      }
      FUN_0007c87a();
      uVar2 = extraout_r1;
    }
  }
  return iVar1;
}


