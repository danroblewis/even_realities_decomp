/*
 * Function: handle_message_dequeue
 * Entry:    000181b8
 * Prototype: undefined handle_message_dequeue()
 */


int handle_message_dequeue(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_114 [264];
  
  fill_memory_buffer(auStack_114,0,0x101);
  iVar1 = FUN_00072240(&DAT_200038f8,auStack_114,0,0);
  if (iVar1 == 0) {
    memcpy(param_1,auStack_114,0x101);
  }
  return iVar1;
}


