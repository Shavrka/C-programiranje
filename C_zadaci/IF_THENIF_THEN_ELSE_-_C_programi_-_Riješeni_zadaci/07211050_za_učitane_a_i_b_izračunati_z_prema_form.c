/*
 * ZADATAK 51 - 07211050
 * Za učitane a i b izračunati z prema formuli:
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211050.htm
 */

#include <stdio.h>

int main ()
{
printf("izracunati z prema formuli\n");       // naslov
double a,b,max,max2,z;

printf("Unesite vasa 2 broja: ");
scanf("%lf", &a);
scanf("%lf", &b);

max=a;
max2=a;
if (a < b)
max=b;
max2=(b*b);
if ((a*a) < max2)
max2=(b*b);
if (a >= b)
z=max;
else
z=max2;
printf("a = %lf  b = %lf   z = %lf \n", a, b, z);
return 0;
}