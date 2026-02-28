/*
 * ZADATAK 07211032 - 07211032
 * Napisati program za ispis drugog korijena upisanog broja ako je moguće inače ispisati 'Nedefinisan'.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211032.htm
 */

#include <stdio.h>
#include <math.h>

int main ()
{
double x;
printf("Broj: ");
scanf("%lf", &x);

if (x > 0)
printf("x = %lf \t sqrt(x) = %lf\n", x, sqrt(x));   // kvadratni korijen broja
else
printf("Nedefinisan\n");   // poruka

return 0;
}