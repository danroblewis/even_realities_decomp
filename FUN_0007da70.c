/*
 * Function: FUN_0007da70
 * Entry:    0007da70
 * Prototype: undefined FUN_0007da70()
 */


int FUN_0007da70(byte *param_1,uint param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  
  iVar3 = 0;
  pbVar2 = param_1;
  while( true ) {
    if (param_2 <= (uint)((int)pbVar2 - (int)param_1)) break;
    bVar1 = *pbVar2;
    fill_memory_buffer(param_3 + iVar3,pbVar2[1],(uint)bVar1,(int)pbVar2 - (int)param_1,param_4);
    iVar3 = iVar3 + (uint)bVar1;
    pbVar2 = pbVar2 + 2;
  }
  return iVar3;
}


