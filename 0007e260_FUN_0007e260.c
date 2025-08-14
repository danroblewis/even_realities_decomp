/*
 * Function: FUN_0007e260
 * Entry:    0007e260
 * Prototype: undefined FUN_0007e260()
 */


void FUN_0007e260(uint *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (ulonglong)*param_1 * 0x33333333;
  lVar2 = lVar1 + (ulonglong)param_1[1] * 0x33333333;
  *(ulonglong *)param_1 =
       (ulonglong)param_1[1] * 0x33333333 +
       (ulonglong)
       ((int)((ulonglong)lVar2 >> 0x20) +
       (uint)CARRY4((uint)lVar2,
                    (int)((ulonglong)lVar1 >> 0x20) + (uint)(0xcccccccc < (uint)lVar1) + 0x33333333)
       );
  return;
}


