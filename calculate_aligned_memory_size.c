/*
 * Function: calculate_aligned_memory_size
 * Entry:    0007ebee
 * Prototype: undefined calculate_aligned_memory_size()
 */


int calculate_aligned_memory_size(int param_1,int param_2)

{
  return ((param_2 * param_1 + 3U & 0xfffffffc) +
         (param_1 * 0x12 + 9U & 0xfffffffc) + param_1 * 8 + 8) * 2;
}


