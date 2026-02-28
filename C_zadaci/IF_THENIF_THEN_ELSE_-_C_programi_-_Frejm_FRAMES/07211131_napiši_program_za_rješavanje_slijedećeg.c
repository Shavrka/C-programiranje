/*
 * ZADATAK 07211131 - 07211131
 * Napiši program za rješavanje slijedećeg izraza:v=(a+2b+c)/(b-a+3c).
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211131.htm
 */

#include <stdio.h>
int main()
{
double a, b, c, v;             // deklarisanje varijabli

printf("1. broj: ");
scanf("%lf", &a);              // ulaz a
printf("2. broj: ");
scanf("%lf", &b);              // ulaz b
printf("3. broj: ");
scanf("%lf", &c);              // ulaz c

if ((b-a+3*c) != 0 ) {         // nazivnik razlicit od nule ?
v = (a+2*b+c) / (b-a+3*c); // izraz
printf("Izraz: %lf", v);   // ispis
}
else                           // nazivnik = 0
printf("Izraz nije definisan\n");    // ispis

return 0;
}