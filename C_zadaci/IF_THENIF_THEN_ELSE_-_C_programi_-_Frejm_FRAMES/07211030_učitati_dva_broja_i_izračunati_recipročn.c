/*
 * ZADATAK 07211030 - 07211030
 * Učitati dva broja i izračunati recipročnu vrijednost većeg i ispisati je.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211030.htm
 */

#include <stdio.h>

int main ()
{
double a,b;

printf("Reciprocna vrijednost veceg\n");       // naslov
printf("Unesite vasa 2 broja: ");
scanf("%lf", &a);
scanf("%lf", &b);

if (a > b)                   // prvi broj veci od drugog?
printf("1 / %lf = %lf\n", a, 1/a);   // prvi broj veci
else
printf("1 / %lf = %lf\n", b, 1/b);   // drugi broj veci

return 0;
}