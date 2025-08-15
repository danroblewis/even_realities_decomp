/*
 * Function: validate_float_value
 * Entry:    0000e938
 * Prototype: undefined validate_float_value()
 */


int validate_float_value(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  undefined8 uVar3;
  
  uVar3 = float_divide_64bit_complex(param_1);
  uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
  iVar1 = check_float_nan((int)uVar3,uVar2,(int)uVar3,uVar2,in_r3);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}


