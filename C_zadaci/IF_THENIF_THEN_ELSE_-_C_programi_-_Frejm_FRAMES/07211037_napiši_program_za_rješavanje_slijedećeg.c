/*
 * ZADATAK 07211037 - 07211037
 * Napiši program za rješavanje slijedećeg izraza:
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211037.htm
 */

#include <stdio.h>
#include <math.h>
int main()
{
double x, y, z, v;                 // deklarisanje varijabli

printf("1. broj: ");
scanf("%lf", &x);                  // ulaz x
printf("2. broj: ");
scanf("%lf", &y);                  // ulaz y
printf("3. broj: ");
scanf("%lf", &z);                  // ulaz z

if ((x*y+2*y*z) != 0 ) {           // nazivnik razlicit od nule ?
v=(x-y+pow(z,2))/(x*y+2*y*z);  // izraz
printf("Izraz: %lf", v);       // ispis
}
else                               // nazivnik = 0
printf("Izraz nije definisan\n");   // ispis

return 0;
}