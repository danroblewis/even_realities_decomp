/*
 * Function: FUN_0006a700
 * Entry:    0006a700
 * Prototype: undefined FUN_0006a700()
 */


void FUN_0006a700(longlong *param_1,int param_2,undefined2 *param_3,int param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined2 *local_2c;
  
  if (0 < param_4) {
    uVar9 = 0;
    uVar8 = 0xffce0000;
    uVar7 = 0;
    local_2c = param_3;
    while( true ) {
      iVar4 = ((int)uVar9 >> 4) + -0xf;
      iVar6 = param_2 + iVar4 * 4;
      uVar5 = *(undefined4 *)(param_2 + iVar4 * 4);
      uVar9 = uVar9 + 0xf;
      iVar4 = (int)(short)*(undefined4 *)(iVar6 + 0x3c) * (int)(short)(&DAT_0008bff4)[uVar7 * 0x10]
              + (int)(short)((uint)*(undefined4 *)(iVar6 + 0x3c) >> 0x10) *
                (int)(short)((uint)(&DAT_0008bff4)[uVar7 * 0x10] >> 0x10) +
              (int)(short)*(undefined4 *)(iVar6 + 0x38) * (int)(short)(&DAT_0008bff0)[uVar7 * 0x10]
              + (int)(short)((uint)*(undefined4 *)(iVar6 + 0x38) >> 0x10) *
                (int)(short)((uint)(&DAT_0008bff0)[uVar7 * 0x10] >> 0x10) +
              (int)(short)*(undefined4 *)(iVar6 + 0x34) * (int)(short)(&DAT_0008bfec)[uVar7 * 0x10]
              + (int)(short)((uint)*(undefined4 *)(iVar6 + 0x34) >> 0x10) *
                (int)(short)((uint)(&DAT_0008bfec)[uVar7 * 0x10] >> 0x10) +
              (int)(short)*(undefined4 *)(iVar6 + 0x30) * (int)(short)(&DAT_0008bfe8)[uVar7 * 0x10]
              + (int)(short)((uint)*(undefined4 *)(iVar6 + 0x30) >> 0x10) *
                (int)(short)((uint)(&DAT_0008bfe8)[uVar7 * 0x10] >> 0x10) +
              (int)(short)*(undefined4 *)(iVar6 + 0x2c) * (int)(short)(&DAT_0008bfe4)[uVar7 * 0x10]
              + (int)(short)((uint)*(undefined4 *)(iVar6 + 0x2c) >> 0x10) *
                (int)(short)((uint)(&DAT_0008bfe4)[uVar7 * 0x10] >> 0x10) +
              (int)(short)*(undefined4 *)(iVar6 + 0x28) * (int)(short)(&DAT_0008bfe0)[uVar7 * 0x10]
              + (int)(short)((uint)*(undefined4 *)(iVar6 + 0x28) >> 0x10) *
                (int)(short)((uint)(&DAT_0008bfe0)[uVar7 * 0x10] >> 0x10) +
              (int)(short)*(undefined4 *)(iVar6 + 0x24) * (int)(short)(&DAT_0008bfdc)[uVar7 * 0x10]
              + (int)(short)((uint)*(undefined4 *)(iVar6 + 0x24) >> 0x10) *
                (int)(short)((uint)(&DAT_0008bfdc)[uVar7 * 0x10] >> 0x10) +
              (int)(short)*(undefined4 *)(iVar6 + 0x20) * (int)(short)(&DAT_0008bfd8)[uVar7 * 0x10]
              + (int)(short)((uint)*(undefined4 *)(iVar6 + 0x20) >> 0x10) *
                (int)(short)((uint)(&DAT_0008bfd8)[uVar7 * 0x10] >> 0x10) +
              (int)(short)*(undefined4 *)(iVar6 + 0x1c) * (int)(short)(&DAT_0008bfd4)[uVar7 * 0x10]
              + (int)(short)((uint)*(undefined4 *)(iVar6 + 0x1c) >> 0x10) *
                (int)(short)((uint)(&DAT_0008bfd4)[uVar7 * 0x10] >> 0x10) +
              (int)(short)*(undefined4 *)(iVar6 + 0x18) * (int)(short)(&DAT_0008bfd0)[uVar7 * 0x10]
              + (int)(short)((uint)*(undefined4 *)(iVar6 + 0x18) >> 0x10) *
                (int)(short)((uint)(&DAT_0008bfd0)[uVar7 * 0x10] >> 0x10) +
              (int)(short)*(undefined4 *)(iVar6 + 0x14) * (int)(short)(&DAT_0008bfcc)[uVar7 * 0x10]
              + (int)(short)((uint)*(undefined4 *)(iVar6 + 0x14) >> 0x10) *
                (int)(short)((uint)(&DAT_0008bfcc)[uVar7 * 0x10] >> 0x10) +
              (int)(short)*(undefined4 *)(iVar6 + 0x10) * (int)(short)(&DAT_0008bfc8)[uVar7 * 0x10]
              + (int)(short)((uint)*(undefined4 *)(iVar6 + 0x10) >> 0x10) *
                (int)(short)((uint)(&DAT_0008bfc8)[uVar7 * 0x10] >> 0x10) +
              (int)(short)*(undefined4 *)(iVar6 + 0xc) * (int)(short)(&DAT_0008bfc4)[uVar7 * 0x10] +
              (int)(short)((uint)*(undefined4 *)(iVar6 + 0xc) >> 0x10) *
              (int)(short)((uint)(&DAT_0008bfc4)[uVar7 * 0x10] >> 0x10) +
              (int)(short)*(undefined4 *)(iVar6 + 8) * (int)(short)(&DAT_0008bfc0)[uVar7 * 0x10] +
              (int)(short)((uint)*(undefined4 *)(iVar6 + 8) >> 0x10) *
              (int)(short)((uint)(&DAT_0008bfc0)[uVar7 * 0x10] >> 0x10) +
              (int)(short)*(undefined4 *)(iVar6 + 4) * (int)(short)(&DAT_0008bfbc)[uVar7 * 0x10] +
              (int)(short)((uint)*(undefined4 *)(iVar6 + 4) >> 0x10) *
              (int)(short)((uint)(&DAT_0008bfbc)[uVar7 * 0x10] >> 0x10) +
              (int)(short)uVar5 * (int)(short)uVar8 +
              (int)(short)((uint)uVar5 >> 0x10) * (int)(short)((uint)uVar8 >> 0x10);
      lVar2 = (longlong)iVar4 * 0x3ee61bc6;
      lVar3 = lVar2 + *param_1;
      uVar7 = (uint)lVar3 >> 0x1e | (int)((ulonglong)lVar3 >> 0x20) * 4;
      uVar1 = (longlong)iVar4 * -0x7dcc378e + param_1[1];
      *param_1 = (longlong)(int)uVar7 * 0x7dc75ddb +
                 ((longlong)(int)(uVar1 >> 0x20) << 0x20 | uVar1 & 0xffffffff);
      param_1[1] = (longlong)(int)uVar7 * -0x3dd11141 + lVar2;
      *local_2c = (short)(uVar7 + 0x8000 >> 0x10);
      if (param_4 * 0xf <= (int)uVar9) break;
      uVar8 = *(undefined4 *)(&UNK_0008bfb8 + (uVar9 & 0xf) * 0x40);
      uVar7 = uVar9 & 0xf;
      local_2c = local_2c + 1;
    }
  }
  return;
}


