/*
 * ZADATAK 27_2 - 07211129
 * Napiši program za rješavanje slijedećeg izraza:d=(a+b+c)/(2b-a+c).
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211129.htm
 */

#include <stdio.h>
int main()
{
double a, b, c, d;               // deklarisanje varijabli

printf("1. broj: ");
scanf("%lf", &a);             // ulaz a
printf("2. broj: ");
scanf("%lf", &b);             // ulaz b
printf("3. broj: ");
scanf("%lf", &c);             // ulaz c

if ((2*b-a+c) != 0 ) {        // nazivnik razlicit od nule ?
d = (a+b+c) / (2*b-a+c);  // izraz
printf("Izraz: %lf", d);  // ispis
}
else                          // nazivnik = 0
printf("Izraz nije definisan\n");    // ispis

return 0;
}