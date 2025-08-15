/*
 * Function: allocate_and_initialize_resource
 * Entry:    0007eb7e
 * Prototype: int allocate_and_initialize_resource(undefined4 param1, undefined4 param2, undefined4 param3)
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: int allocate_and_initialize_resource(undefined4 param1, undefined4 param2,
   undefined4 param3) */

int allocate_and_initialize_resource(int param1,char *param2,undefined4 param3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *local_1c;
  
  if ((param2 != (char *)0x0) && (*param2 != '\0')) {
    iVar4 = *(int *)(param1 + 0xb0) + -0x19c;
    iVar3 = *(int *)(param1 + 0xb0) + 0x14;
    local_1c = param2;
    resource_mutex_acquire(iVar3,param2,0xffffffff,0xffffffff,param1);
    iVar2 = check_and_allocate_memory_with_fallback(iVar4,&local_1c,param2);
    pcVar1 = local_1c;
    if (local_1c != (char *)0x0) {
      if (iVar2 != 0) {
        mutex_unlock(iVar3);
        iVar2 = process_resource_allocation_with_callback(iVar4,pcVar1,param2,param3);
        return iVar2;
      }
      safe_string_copy_with_padding(local_1c + 0x40,param2,0x20);
      *(undefined4 *)(pcVar1 + 0x60) = param3;
    }
    iVar2 = mutex_unlock(iVar3);
    return iVar2;
  }
  return param1;
}


