/*
 * ZADATAK 43 - 07211015
 * Od dva učitana broja (a, b) sa tastature naći veći max(a, b).
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211015.htm
 */

#include <stdio.h>

int main ()
{
double a,b,max;

printf("Unesite vasa 2 broja:   \n");
printf("1. broj: ");     // ulaz
scanf("%lf", &a);
printf("2. broj: ");
scanf("%lf", &b);

if (a > b) {     // prvi broj veci?
max = a;     // prvi broj veci
}
else {
max = b;     // drugi broj veci
}
printf("Od brojeva %lf i %lf veci je %lf \n", a, b, max);
return 0;
}