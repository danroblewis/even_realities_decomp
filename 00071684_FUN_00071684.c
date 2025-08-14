/*
 * Function: FUN_00071684
 * Entry:    00071684
 * Prototype: undefined FUN_00071684()
 */


void FUN_00071684(uint param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_50;
  char *local_4c;
  uint uStack_48;
  char *local_44;
  undefined4 local_40;
  undefined2 local_3c;
  undefined4 local_28;
  char *local_24;
  
  uVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar4 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  iVar3 = FUN_000748ac();
  if (param_1 < 5) {
    local_44 = (&PTR_s_CPU_exception_00098658)[param_1];
  }
  else {
    local_44 = "Unknown error";
  }
  local_3c = 0x301;
  local_4c = ">>> ZEPHYR FATAL ERROR %d: %s on CPU %d";
  local_40 = 0;
  local_50 = 0x1000005;
  uStack_48 = param_1;
  FUN_0004d944(&DAT_00088258,0x2c40,&local_50,0);
  if ((param_2 != 0) && ((*(uint *)(param_2 + 0x1c) & 0x1ff) != 0)) {
    local_24 = "Fault during interrupt handling\n";
    local_28 = 2;
    FUN_0004d944(&DAT_00088258,0x1040,&local_28,0);
  }
  if (((iVar3 == 0) || (local_44 = (char *)FUN_00086418(iVar3), local_44 == (char *)0x0)) ||
     (*local_44 == '\0')) {
    local_44 = "unknown";
  }
  local_4c = "Current thread: %p (%s)";
  local_40 = CONCAT22(local_40._2_2_,0x301);
  local_50 = 0x1000004;
  uStack_48 = iVar3;
  FUN_0004d944(&DAT_00088258,0x2440,&local_50,0);
  FUN_00063b7c(param_1,param_2);
  if (param_1 != 4) {
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar4);
    }
    InstructionSynchronizationBarrier(0xf);
    FUN_00050b8c(iVar3);
    return;
  }
  DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","reason != K_ERR_KERNEL_PANIC",
               "WEST_TOPDIR/zephyr/kernel/fatal.c",0x93);
  DEBUG_PRINT2("\tAttempted to recover from a kernel panic condition\n");
                    /* WARNING: Subroutine does not return */
  FUN_0007e2ec("WEST_TOPDIR/zephyr/kernel/fatal.c",0x93);
}


