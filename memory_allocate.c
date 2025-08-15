/*
 * Function: memory_allocate
 * Entry:    00076e20
 * Prototype: undefined memory_allocate()
 */


uint memory_allocate(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  
  uVar5 = (param_2 + 3 & 0xfffffffc) + 8;
  if (uVar5 < 0xc) {
    uVar5 = 0xc;
  }
  if (((int)uVar5 < 0) || (uVar5 < param_2)) {
    *param_1 = 0xc;
  }
  else {
    acquire_memory_mutex();
    puVar1 = FREE_MEMORY_LIST_HEAD;
    for (puVar4 = FREE_MEMORY_LIST_HEAD; puVar4 != (uint *)0x0; puVar4 = (uint *)puVar4[1]) {
      uVar3 = *puVar4 - uVar5;
      if (-1 < (int)uVar3) {
        if (0xb < uVar3) {
          *puVar4 = uVar3;
          puVar4 = (uint *)((int)puVar4 + uVar3);
          goto LAB_00076e84;
        }
        if (puVar1 == puVar4) {
          FREE_MEMORY_LIST_HEAD = (uint *)puVar4[1];
        }
        if (puVar1 != puVar4) {
          puVar1[1] = puVar4[1];
        }
        goto LAB_00076e92;
      }
      puVar1 = puVar4;
    }
    if (MEMORY_ALLOCATION_FLAG == 0) {
      MEMORY_ALLOCATION_FLAG = memory_allocate_wrapper(param_1,0,puVar1,0,param_4);
    }
    puVar1 = (uint *)memory_allocate_wrapper(param_1,uVar5);
    if ((puVar1 != (uint *)0xffffffff) &&
       ((puVar4 = (uint *)((int)puVar1 + 3U & 0xfffffffc), puVar1 == puVar4 ||
        (iVar2 = memory_allocate_wrapper(param_1,(int)puVar4 - (int)puVar1), iVar2 != -1)))) {
LAB_00076e84:
      *puVar4 = uVar5;
LAB_00076e92:
      release_memory_mutex(param_1);
      puVar1 = puVar4 + 1;
      uVar5 = (int)puVar4 + 0xbU & 0xfffffff8;
      iVar2 = uVar5 - (int)puVar1;
      if (iVar2 != 0) {
        puVar1 = (uint *)((int)puVar1 - uVar5);
      }
      if (iVar2 == 0) {
        return uVar5;
      }
      *(uint **)((int)puVar4 + iVar2) = puVar1;
      return uVar5;
    }
    *param_1 = 0xc;
    release_memory_mutex(param_1);
  }
  return 0;
}


