/*
 * Function: ipc0_ept_recv
 * Entry:    00025a48
 * Prototype: undefined ipc0_ept_recv()
 */


void ipc0_ept_recv(byte *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  
  iVar4 = 0;
  uVar1 = (uint)*param_1;
  piVar3 = (int *)(DAT_20007a84 + 4);
  iVar2 = *piVar3;
  while( true ) {
    if (iVar2 <= iVar4) {
      if (1 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): NOT MATCH(cmd=%x)! ipc_receiver_index: %d, len:%d, received_data: %02x,%02x,%02x,%02x,%02x,%02x,%02x,%02x\n"
                      ,"ipc0_ept_recv",uVar1,iVar2,param_2,uVar1,(uint)param_1[1],(uint)param_1[2],
                      (uint)param_1[3],(uint)param_1[4],(uint)param_1[5],(uint)param_1[6],
                      (uint)param_1[7]);
        }
        else {
          handle_heartbeat();
        }
      }
      return;
    }
    piVar3 = piVar3 + 1;
    pbVar5 = (byte *)*piVar3;
    if ((pbVar5 != (byte *)0x0) && (*pbVar5 == uVar1)) break;
    iVar4 = iVar4 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00025ac6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pbVar5 + 8))(DAT_20007a84 + -0x714,param_1 + 1,param_2 + -1);
  return;
}


