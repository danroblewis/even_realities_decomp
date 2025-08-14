/*
 * Function: FUN_000256dc
 * Entry:    000256dc
 * Prototype: undefined FUN_000256dc()
 */


int FUN_000256dc(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_4 == 0) {
    iVar1 = 0;
  }
  else {
    iVar4 = 0x14;
    iVar3 = *(int *)(param_1 + 4);
    uVar5 = *(undefined4 *)(param_1 + 0x10);
    uVar2 = param_2;
    uVar6 = param_2;
    while( true ) {
      resource_mutex_acquire(uVar5,uVar2,0xffffffff,0xffffffff,param_1,uVar6);
      param_1 = param_4;
      iVar1 = FUN_00025670(iVar3,*(undefined2 *)(iVar3 + 8),param_2,param_3);
      mutex_unlock(uVar5);
      if (iVar1 == 0) break;
      iVar4 = iVar4 + -1;
      if (iVar4 == 0) {
        DEBUG_PRINT("eeprom_st25dv_write addr %04X offset %04X failed %d\r\n",
                    (uint)*(ushort *)(iVar3 + 8),param_2,iVar1);
        return iVar1;
      }
      FUN_0007c87a();
      uVar2 = extraout_r1;
    }
  }
  return iVar1;
}


