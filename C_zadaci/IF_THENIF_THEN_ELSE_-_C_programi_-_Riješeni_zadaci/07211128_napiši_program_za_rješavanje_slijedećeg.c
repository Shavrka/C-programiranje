/*
 * ZADATAK 27_1 - 07211128
 * Napiši program za rješavanje slijedećeg izraza:c=(2a+b)/(2b-3a).
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211128.htm
 */

#include <stdio.h>
int main()
{
double a, b, c;               // deklarisanje varijabli

printf("1. broj: ");
scanf("%lf", &a);             // ulaz a
printf("2. broj: ");
scanf("%lf", &b);             // ulaz b

if ( (2*b-3*a) != 0 ) {       // nazivnik razlicit od nule ?
c = (2*a+b)/(2*b-3*a);    // izraz
printf("Izraz: %lf", c);  // ispis
}
else                          // nazivnik = 0
printf("Izraz nije definisan\n");    // ispis

return 0;
}