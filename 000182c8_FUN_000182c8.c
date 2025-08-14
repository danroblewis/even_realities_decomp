/*
 * Function: FUN_000182c8
 * Entry:    000182c8
 * Prototype: undefined FUN_000182c8()
 */


void FUN_000182c8(undefined4 param_1,ushort param_2,undefined4 param_3)

{
  int iVar1;
  ushort local_c;
  undefined2 local_a;
  undefined4 uStack_8;
  
  _local_c = CONCAT22(0x1801,param_2 & 0xff00);
  uStack_8 = param_3;
  iVar1 = FUN_0004ed8c(param_1,&local_c,&PTR_FUN_000189a0_1_00088a00,&DAT_20006abc,param_1);
  if (iVar1 != 0) {
    DEBUG_PRINT("Failed to start discovery for GATT Service (err %d)\n",iVar1);
  }
  return;
}


