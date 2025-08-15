/*
 * Function: search_heap_chunk_by_size
 * Entry:    0007df24
 * Prototype: undefined search_heap_chunk_by_size()
 */


uint search_heap_chunk_by_size(void *param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint index1;
  int iVar8;
  int iVar9;
  
  iVar5 = calculate_heap_chunk_size(*(undefined4 *)((int)param_1 + 8));
  iVar9 = *(int *)((int)param_1 + iVar5 * 4 + 0x10);
  if (iVar9 != 0) {
    iVar8 = 3;
    do {
      index1 = *(uint *)((int)param_1 + iVar5 * 4 + 0x10);
      uVar6 = set_heap_chunk_flag_wrapper(param_1,index1);
      if (param_2 <= uVar6) goto LAB_0007df56;
      iVar7 = get_heap_chunk_metadata(param_1,index1,3);
      iVar8 = iVar8 + -1;
      *(int *)((int)param_1 + iVar5 * 4 + 0x10) = iVar7;
    } while ((iVar8 != 0) && (iVar9 != iVar7));
  }
  index1 = -1 << (iVar5 + 1U & 0xff) & *(uint *)((int)param_1 + 0xc);
  if (index1 != 0) {
    bVar2 = (byte)index1;
    bVar3 = (byte)(index1 >> 8);
    bVar4 = (byte)(index1 >> 0x10);
    bVar1 = (byte)(index1 >> 0x18);
    iVar5 = LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1) <<
                                     1 | bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 |
                                  bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18
                    | (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1)
                                       << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                    bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                      0x10 | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                              bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                            bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                          bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
                    (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1) <<
                                     1 | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 |
                                  bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
    index1 = *(uint *)((int)param_1 + (iVar5 + 4) * 4);
LAB_0007df56:
    manage_heap_chunk_with_validation(param_1,index1,iVar5);
  }
  return index1;
}


