/*
 * Function: FUN_0005af8c
 * Entry:    0005af8c
 * Prototype: undefined FUN_0005af8c(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


uint FUN_0005af8c(undefined4 param_1,int param_2,code *param_3,undefined4 param_4,undefined4 param_5
                 )

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 local_110;
  char *local_10c;
  uint uStack_108;
  undefined2 local_104;
  int local_100;
  int local_fc;
  undefined1 auStack_f8 [8];
  undefined1 *local_f0;
  undefined1 local_ec;
  undefined1 *local_e8;
  uint uStack_e4;
  undefined1 auStack_e0 [16];
  undefined4 local_d0;
  char *local_cc;
  
  iVar1 = FUN_0007f1a0(param_5,"bt/ccc",&local_100);
  if (iVar1 == 0) {
    uVar2 = FUN_00059edc();
  }
  else {
    FUN_0007f1e8(local_100,&local_fc);
    if (local_100 == 0) {
      local_cc = "Insufficient number of arguments";
      local_d0 = 2;
      FUN_00082a42(&DAT_00088128,0x1040,&local_d0);
    }
    else {
      if ((local_fc == 0) || (uStack_108 = FUN_00077c1c(local_fc,0,10), uStack_108 == 0)) {
        local_ec = 0;
        iVar1 = parse_config_data(local_100,auStack_f8);
        if (iVar1 == 0) {
          local_f0 = auStack_f8;
          if (param_2 == 0) {
            local_e8 = (undefined1 *)0x0;
            uStack_e4 = 0;
          }
          else {
            uStack_e4 = (*param_3)(param_4,auStack_e0,0xc0);
            if ((int)uStack_e4 < 0) {
              local_10c = "Failed to decode value (err %zd)";
              local_110 = 3;
              uStack_108 = uStack_e4;
              FUN_00082a42(&DAT_00088128,0x1840,&local_110);
              return uStack_e4;
            }
            uStack_e4 = uStack_e4 >> 2;
            local_e8 = auStack_e0;
          }
          FUN_00082c9c(1,0xffff,0x59ded,&local_f0);
          return 0;
        }
        uVar3 = 0x1c40;
        local_10c = "Unable to decode address %s";
        uStack_108 = local_100;
        local_104 = 0x200;
        local_110 = 0x1000003;
      }
      else {
        uVar3 = 0x1840;
        local_10c = "Invalid local identity %lu";
        local_110 = 3;
      }
      FUN_00082a42(&DAT_00088128,uVar3,&local_110);
    }
    uVar2 = 0xffffffea;
  }
  return uVar2;
}


