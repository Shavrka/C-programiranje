/*
 * ZADATAK 07211039 - 07211039
 * Od dva učitana broja (a, b) sa tastature naći manji min(a, b).
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211039.htm
 */

#include <stdio.h>

int main ()
{
double a,b,min;
printf("1. broj: ");     // ulaz
scanf("%lf", &a);
printf("2. broj: ");
scanf("%lf", &b);

if (a < b)    // 1. broj manji?
min=a;    // 1. broj manji
else
min=b;    // 2. broj manji

printf("Od brojeva %lf i %lf\n" a, b);   // ispis
printf("manji je %lf",min);

return 0;
}