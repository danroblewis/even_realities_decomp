/*
 * Function: process_data_with_callback_execution_alt
 * Entry:    0004f0ec
 * Prototype: undefined process_data_with_callback_execution_alt()
 */


int process_data_with_callback_execution_alt
              (undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_30;
  char *local_2c;
  int iStack_28;
  undefined4 uStack_20;
  
  if ((param_1 == (undefined4 *)0x0) || (param_2 == 0)) {
    iVar1 = -0x16;
  }
  else {
    uStack_20 = param_4;
    iVar1 = FUN_0007f612(param_1 + 1,1);
    if (iVar1 == 0) {
      *(undefined2 *)(param_1 + 0x216) = 1;
      param_1[0x212] = &LAB_0007f5c4_1;
      *(undefined2 *)(param_1 + 0x215) = *(undefined2 *)((int)param_1 + 0xe);
      *(undefined2 *)((int)param_1 + 0x856) = *(undefined2 *)(param_1 + 4);
      param_1[0x217] = param_1[0x217] | 1;
      param_1[0x219] = param_2;
      iVar1 = FUN_0005c3c4(*param_1,param_1 + 0x212);
      if (iVar1 != 0) {
        FUN_0007f5d8(param_1 + 1,1);
        local_2c = "Subscribe Data Source failed (err %d)";
        local_30 = 3;
        iStack_28 = iVar1;
        process_and_compress_data_with_validation(&DAT_000880e8,0x1840,&local_30,0);
      }
    }
    else {
      iVar1 = -0x78;
    }
  }
  return iVar1;
}


