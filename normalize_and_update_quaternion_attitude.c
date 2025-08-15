/*
 * Function: normalize_and_update_quaternion_attitude
 * Entry:    00026624
 * Prototype: void normalize_and_update_quaternion_attitude(float q0, float q1, float q2, float q3, float x, float y, float z, int attitude_data)
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void normalize_and_update_quaternion_attitude(float q0, float q1, float q2,
   float q3, float x, float y, float z, int attitude_data) */

void normalize_and_update_quaternion_attitude
               (float q0,float q1,float q2,float q3,float x,float y,float z,int attitude_data)

{
  int extraout_r0;
  int extraout_r0_00;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s2;
  float extraout_s3;
  float extraout_s4;
  float extraout_s5;
  float extraout_s6;
  float current_q0;
  float extraout_s7;
  float fVar1;
  float extraout_s8;
  float fVar2;
  float extraout_s9;
  float extraout_s9_00;
  float fVar3;
  float extraout_s10;
  float extraout_s11;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  current_q0 = *(float *)(attitude_data + 0x18);
  fVar9 = *(float *)(attitude_data + 0x10);
  fVar8 = *(float *)(attitude_data + 0xc);
  fVar7 = *(float *)(attitude_data + 0x14);
  fVar2 = 0.5;
  if (((q3 != 0.0) || (x != 0.0)) || (y != 0.0)) {
    current_q0 = fast_inverse_square_root(x * x + q3 * q3 + y * y);
    fVar2 = extraout_s7 * fVar7 + fVar9 * fVar8;
    fVar5 = fVar9 * extraout_s7 - fVar8 * fVar7;
    fVar6 = (fVar8 * fVar8 - extraout_s9) + extraout_s7 * extraout_s7;
    fVar4 = extraout_s4 * current_q0 * fVar6 - extraout_s5 * current_q0 * fVar2;
    fVar2 = extraout_s3 * current_q0 * fVar2 - extraout_s4 * current_q0 * fVar5;
    fVar6 = extraout_s5 * current_q0 * fVar5 - extraout_s3 * current_q0 * fVar6;
    fVar5 = 0.0;
    current_q0 = *(float *)(extraout_r0 + 8);
    if (current_q0 <= 0.0) {
      *(undefined4 *)(extraout_r0 + 0x1c) = 0;
      *(undefined4 *)(extraout_r0 + 0x20) = 0;
      fVar3 = extraout_s1;
      current_q0 = extraout_s2;
      fVar1 = extraout_s11;
    }
    else {
      fVar1 = *(float *)(extraout_r0 + 0x1c) + current_q0 * fVar4 * extraout_s6;
      fVar3 = *(float *)(extraout_r0 + 0x20) + current_q0 * fVar6 * extraout_s6;
      fVar5 = *(float *)(extraout_r0 + 0x24) + current_q0 * fVar2 * extraout_s6;
      *(float *)(extraout_r0 + 0x1c) = fVar1;
      *(float *)(extraout_r0 + 0x20) = fVar3;
      fVar1 = extraout_s11 + fVar1;
      fVar3 = extraout_s1 + fVar3;
      current_q0 = extraout_s2 + fVar5;
    }
    *(float *)(extraout_r0 + 0x24) = fVar5;
    fVar5 = *(float *)(extraout_r0 + 4);
    q0 = fVar1 + fVar5 * fVar4;
    q1 = fVar3 + fVar5 * fVar6;
    q2 = current_q0 + fVar5 * fVar2;
    z = extraout_s6;
    current_q0 = extraout_s7;
    fVar2 = extraout_s9;
  }
  fVar2 = z * fVar2;
  fVar4 = fVar2 * q2;
  fVar1 = fVar2 * q0;
  fVar2 = fVar2 * q1;
  fVar6 = ((fVar4 * fVar7 + fVar1 * fVar8) - current_q0 * fVar2) + fVar9;
  fVar5 = ((-(fVar2 * fVar7) + -(fVar9 * fVar1)) - current_q0 * fVar4) + fVar8;
  fVar3 = (fVar2 * fVar8 - fVar4 * fVar9) + current_q0 * fVar1 + fVar7;
  current_q0 = ((fVar2 * fVar9 + fVar4 * fVar8) - fVar1 * fVar7) + current_q0;
  current_q0 = fast_inverse_square_root
                         (fVar6 * fVar6 + fVar5 * fVar5 + fVar3 * fVar3 + current_q0 * current_q0);
  *(float *)(extraout_r0_00 + 0xc) = extraout_s8 * current_q0;
  *(float *)(extraout_r0_00 + 0x10) = extraout_s9_00 * current_q0;
  *(float *)(extraout_r0_00 + 0x14) = extraout_s10 * current_q0;
  *(float *)(extraout_r0_00 + 0x18) = extraout_s1_00 * current_q0;
  *(undefined1 *)(extraout_r0_00 + 0x28) = 0;
  return;
}


