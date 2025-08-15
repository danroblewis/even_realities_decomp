/*
 * Function: handle_chunked_data_verification
 * Entry:    000227d0
 * Prototype: undefined handle_chunked_data_verification()
 */


int handle_chunked_data_verification(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (IS_DEBUG == 0) {
    DEBUG_PRINT("size is %d\n",param_3);
  }
  else {
    handle_heartbeat();
  }
  iVar4 = 0;
  uVar3 = (param_3 >> 0xc) + 1 & 0xff;
  iVar5 = uVar3 - 1;
  for (uVar2 = 0; (uVar2 & 0xff) < uVar3; uVar2 = uVar2 + 1) {
    iVar1 = (int)(short)((short)param_3 + (short)iVar5 * -0x1000);
    if ((int)uVar2 < iVar5) {
      iVar1 = 0x1000;
    }
    iVar1 = handle_data_verification(param_1 + uVar2 * 0x1000,param_2 + uVar2 * 0x1000,iVar1);
    iVar4 = iVar4 + iVar1;
  }
  return iVar4;
}


