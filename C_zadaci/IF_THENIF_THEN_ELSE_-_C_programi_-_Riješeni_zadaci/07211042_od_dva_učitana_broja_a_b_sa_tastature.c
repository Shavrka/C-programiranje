/*
 * ZADATAK 47 - 07211042
 * Od dva učitana broja (a, b) sa tastature naći broj sa većim kvadratom: max(a2, b2).
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211042.htm
 */

#include <stdio.h>
int main ()
{
printf("Od dva upisana,ispisati broj ciji je kvadrat veci\n");     // naslov
double a,b,max;
printf("1. broj: ");     // ulaz
scanf("%lf", &a);
printf("2. broj: ");
scanf("%lf", &b);

printf("Od brojeva: a= %lf\t b= %lf\n", a, b);
if ((a*a) > (b*b))
{
max=(a*a);       // kvadrat prvog broja veci
printf("Broj = %lf\tima veci kvadrat = %lf", a, max);
}
else
{
max=(b*b);       // kvadrat drugog broja veci
printf("Broj = %lf\tima veci kvadrat = %lf", b, max);
}
return 0;
}