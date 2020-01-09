/* Test MIPS32 DSP REV 2 MULTU instruction */
/* { dg-do compile } */
/* { dg-options "-mgp32 -mdspr2 -O2 -ffixed-hi -ffixed-lo" } */

/* { dg-final { scan-assembler "\tmultu\t" } } */
/* { dg-final { scan-assembler "ac1" } } */
/* { dg-final { scan-assembler "ac2" } } */

typedef unsigned long long a64;

NOMIPS16 a64 test (a64 *a, unsigned int *b, unsigned int *c)
{
  a[0] = (a64) b[0] * c[0];
  a[1] = (a64) b[1] * c[1];
}
