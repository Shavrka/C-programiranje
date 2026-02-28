/*
 * ZADATAK 07211044 - 07211044
 * Za učitane a i b izračunati z prema formuli:
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211044.htm
 */

#include <stdio.h>
int main()
{
double a, b, min, z;          // deklarisanje varijabli
printf("Izracunaj izraz\n");  // naslov
printf("1. broj: ");          // ulaz
scanf("%lf", &a);
printf("2. broj: ");
scanf("%lf", &b);

min=a;
if (a > b)
min=b;
if (a >= 0)
z = min;
else
z=2*min;
printf("a= %lf\t b= %lf\t z= %lf\t min= %lf\t", a, b, z, min);
return 0;
}