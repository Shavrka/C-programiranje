/*
 * ZADATAK 61 - 07211019
 * Od tri učitana broja (a, b, c) sa tastature naći najmanji min(a, b, c).
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211019.htm
 */

#include <stdio.h>
#include <math.h>

int main ()

{
double a,b,c,min;
printf("Unesite vasa 3 broja: \n");
scanf("lf", a);
scanf("lf", b);
scanf("lf", c);
min=a;
if (b < min)
min=b;
if (c < min)
min=c;

printf("od brojeva %lf, %lf i %lf najmanji je %lf \n", a, b, b, min);

return 0;
}