/*
 * Function: calculate_mathematical_formula_with_floating_point
 * Entry:    0007cab4
 * Prototype: undefined calculate_mathematical_formula_with_floating_point()
 */


void calculate_mathematical_formula_with_floating_point(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = *(float *)(param_1 + 0x10);
  fVar3 = *(float *)(param_1 + 0x14);
  fVar5 = *(float *)(param_1 + 0x18);
  fVar2 = *(float *)(param_1 + 0xc);
  uVar1 = calculate_division_with_audio_integration
                    (fVar3 * fVar5 + fVar2 * fVar4,(0.5 - fVar4 * fVar4) - fVar3 * fVar3);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = handle_audio_mixing_with_validation((fVar4 * fVar5 - fVar2 * fVar3) * -2.0);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = calculate_division_with_audio_integration
                    (fVar2 * fVar5 + fVar4 * fVar3,(0.5 - fVar3 * fVar3) - fVar5 * fVar5);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}


