/*
 * ZADATAK 24010520 - 24010520
 * Sa  tastature unese realan broj x. Ukoliko je zaista unesen broj, i ukoliko je x > 0, ispisati njegov kvadratni korijen, ...
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24010520.htm
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
double x;
printf("Unesite broj x:");
scanf("%lf", &x);
while(x <=0 || x!=(double)x)
{
printf("Vrijednost nije validna, unesite ponovo:");
scanf("%lf", &x);
}
double korijen=sqrt(x);
printf("Korijen unesenog broja je:%lf", korijen);
return 0;
}