/*
 * Function: search_linked_list_by_string_value
 * Entry:    0008503c
 * Prototype: undefined search_linked_list_by_string_value()
 */


/* WARNING: Removing unreachable block (ram,0x000644ce) */
/* WARNING: Removing unreachable block (ram,0x000644d0) */
/* WARNING: Removing unreachable block (ram,0x000644d4) */
/* WARNING: Removing unreachable block (ram,0x000644cc) */

int search_linked_list_by_string_value(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  
  if (param_1 != (int *)0x0) {
    if (param_2 == 0) {
      param_1 = (int *)0x0;
    }
    else {
      for (param_1 = *(int **)((int)param_1 + 8); param_1 != (int *)0x0; param_1 = (int *)*param_1)
      {
        iVar3 = param_1[8];
        if (iVar3 != 0) {
          if (iVar3 == param_2) {
LAB_000644de:
            if (param_1[8] != 0) {
              return (int)param_1;
            }
            return 0;
          }
          pbVar6 = (byte *)(param_2 + -1);
          pbVar4 = (byte *)(iVar3 + -1);
          while( true ) {
            pbVar6 = pbVar6 + 1;
            uVar1 = (uint)*pbVar6;
            pbVar4 = pbVar4 + 1;
            uVar2 = (uint)*pbVar4;
            uVar5 = uVar1;
            if (((&DAT_000f8a6b)[uVar1] & 3) == 1) {
              uVar5 = uVar1 + 0x20;
            }
            if (((&DAT_000f8a6b)[uVar2] & 3) == 1) {
              uVar2 = uVar2 + 0x20;
            }
            if (uVar5 != uVar2) break;
            if (uVar1 == 0) goto LAB_000644de;
          }
        }
      }
    }
  }
  return (int)param_1;
}


