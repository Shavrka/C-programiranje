/*
 * ZADATAK 23 - 07211018
 * Napisati program za izračunavanje vrijednosti z prema izrazu:
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211018.htm
 */

#include <stdio.h>

int main()
{
float a,b,z;
printf("Unesite vas broj a: ");
scanf("%e", &a);  // ulaz
printf("Unesite vas broj b: ");
scanf("%e", &b);  // ulaz

if(a>0)           // a > 0 ?
z=b-a;        // izracunaj
else if(a>-3)     // -3 > a >= 0
z=a/3;        // izracunaj
else              // a <= 3
z=2*b;        // izracunaj

printf("broj je %e", z); // ispis

return 0;
}