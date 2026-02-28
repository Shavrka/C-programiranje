/*
 * ZADATAK 56 - 07211073
 * Za učitane a i b izračunati z prema formuli:
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211073.htm
 */

#include <stdio.h>

int main ()
{
printf("izračunati z prema formuli\n");       // naslov
double a,b,max,max2,z;

printf("Unesite vasa 2 broja: ");
scanf("%lf", &a);
scanf("%lf", &b);

max=a;
if (a < b)
max=b;
max2=a*a; // max2=(a=a);
if ((a*a) < (b*b))
max2=(b*b);
z= (2 * max) / (1 + max2);

printf("a = %lf  b = %lf   z = %lf \n", a, b, z);
return 0;
}