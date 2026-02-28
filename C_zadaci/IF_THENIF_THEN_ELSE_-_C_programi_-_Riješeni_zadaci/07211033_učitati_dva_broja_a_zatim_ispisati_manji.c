/*
 * ZADATAK 40 - 07211033
 * Učitati dva broja a zatim ispisati manji pa veći broj.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211033.htm
 */

#include <stdio.h>

int main ()
{
double x, y;
printf("Od dva upisana,ispisati manji pa veci broj\n");  // naslov
printf("1. broj: ");     // ulaz
scanf("%lf", &x);
printf("2. broj: ");
scanf("%lf", &y);

if (x < y)
{
printf("%lf\n", x);    // prvi pa drugi
printf("%lf", y);

}
else if ( x >= y)
{
printf("%lf\n", y);    // drugi pa privi
printf("%lf", x);
}
return 0;
}