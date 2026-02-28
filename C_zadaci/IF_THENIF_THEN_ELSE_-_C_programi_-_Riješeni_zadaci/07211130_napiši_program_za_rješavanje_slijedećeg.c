/*
 * ZADATAK 28_1 - 07211130
 * Napiši program za rješavanje slijedećeg izraza:y=(a+d)/(2b-d-a).
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211130.htm
 */

#include <stdio.h>
int main()
{
double a, b, d, y;             // deklarisanje varijabli

printf("1. broj: ");
scanf("%lf", &a);              // ulaz a
printf("2. broj: ");
scanf("%lf", &b);              // ulaz b
printf("3. broj: ");
scanf("%lf", &d);              // ulaz d

if ((2*b-d-a) != 0 ) {         // nazivnik razlicit od nule ?
y=(a+d)/(2*b-d-a); // izraz
printf("Izraz: %lf", y);   // ispis
}
else                           // nazivnik = 0
printf("Izraz nije definisan\n");    // ispis

return 0;
}