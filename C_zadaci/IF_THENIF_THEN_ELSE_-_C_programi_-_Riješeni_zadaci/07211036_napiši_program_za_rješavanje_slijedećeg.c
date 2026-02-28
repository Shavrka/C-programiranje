/*
 * ZADATAK 27 - 07211036
 * Napiši program za rješavanje slijedećeg izraza:
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211036.htm
 */

#include <stdio.h>
int main()
{
double x, y, z, v;             // deklarisanje varijabli

printf("1. broj: ");
scanf("%lf", &x);              // ulaz x
printf("2. broj: ");
scanf("%lf", &y);              // ulaz y
printf("3. broj: ");
scanf("%lf", &z);              // ulaz z

if ((2*x)-(y*z) != 0 ) {       // nazivnik razlicit od nule ?
v=(z-y) / ((2*x)-(y*z));   // izraz
printf("Izraz: %lf", v);   // ispis
}
else                           // nazivnik = 0
printf("Izraz nije definisan\n");    // ispis

return 0;
}