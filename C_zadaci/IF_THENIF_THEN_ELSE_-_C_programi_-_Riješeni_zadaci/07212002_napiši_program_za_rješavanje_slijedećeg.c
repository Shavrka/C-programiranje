/*
 * ZADATAK 28 - 07212002
 * Napiši program za rješavanje slijedećeg izraza:
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07212002.htm
 */

#include <stdio.h>
int main()
{
double x, y;                  // deklarisanje varijabli

printf("Broj: ");
scanf("%lf", &x);             // ulaz x

if ((2*x-1) != 0 ) {          // nazivnik razlicit od nule ?
y=(3*x+8)/(2*x-1);        // izraz
printf("Izraz: %lf", y);  // ispis
}
else                          // nazivnik = 0
printf("Izraz nije definisan\n");    // ispis

return 0;
}