/*
 * Function: setup_image_processing
 * Entry:    000867da
 * Prototype: undefined setup_image_processing()
 */


undefined4 setup_image_processing(int param_1,uint param_2)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  
  pbVar3 = *(byte **)(param_1 + 8);
  if (pbVar3 == (byte *)0x0) goto LAB_000867f8;
  if (pbVar3[1] == 1) {
    bVar1 = pbVar3[-0x53] & 2;
    if ((pbVar3[-0x53] & 2) != 0) {
      if (*(int *)(pbVar3 + -0x34) == -1 && *(int *)(pbVar3 + -0x38) == -2) {
        *pbVar3 = 0;
        return 0xfffffff5;
      }
      FUN_000742b4(pbVar3 + -0x60);
      if (param_2 == 8) {
        uVar2 = 0xfffffffc;
      }
      else {
        uVar2 = 0;
      }
      *(undefined4 *)(pbVar3 + 0x30) = uVar2;
      if (((pbVar3[-0x53] & 0x1f) != 0) || (*(int *)(pbVar3 + -0x48) != 0)) goto LAB_0008684e;
      FUN_000738d4(pbVar3 + -0x60);
      iVar4 = 0;
LAB_00086846:
      *pbVar3 = (byte)iVar4;
      goto LAB_000867f8;
    }
  }
  else {
    if (pbVar3[1] == 2) {
      if (*pbVar3 == 0) goto LAB_000867f8;
      iVar4 = *(int *)(pbVar3 + -4);
      if (iVar4 != 0) {
        FUN_00074d74(pbVar3 + 0x14);
        pbVar3[0x2c] = 0;
        pbVar3[0x2d] = 0;
        pbVar3[0x2e] = 0;
        pbVar3[0x2f] = 0;
        FUN_00072f28(iVar4,pbVar3 + -0x14);
        *pbVar3 = 0;
        goto LAB_000867f8;
      }
      goto LAB_00086846;
    }
LAB_0008684e:
    bVar1 = 0;
  }
  *pbVar3 = bVar1;
LAB_000867f8:
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) =
       *(uint *)(param_1 + 0xc) & 0xffe03fff |
       (param_2 & 0x7f | (*(uint *)(param_1 + 0xc) << 0xb) >> 0x19) << 0xe;
  return 0;
}


