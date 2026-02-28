/*
 * ZADATAK 52 - 07211070
 * Za učitane a i b izračunati z prema formuli:
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211070.htm
 */

#include <stdio.h>

int main()
{
double a, b, max1, max2, z;

printf("1. broj: ");      // ulaz
scanf("%lf", &a);
printf("2. broj: ");
scanf("%lf", &b);

max1=a;                   // pretpostavljeni maksimum
if (a < b)                // poredi brojeve
max1=b;               // drugi veci

max2=(a * a);             // pretpostavljeni maksimum kvadrata
if ((a * a) < (b * b))    // poredi brojeve
max2=(b * b);         // drugi kvadrat veci

if (b>=0)
z = 2 - max1;
else
z = max2;

printf("z = %lf", z);

return 0;
}