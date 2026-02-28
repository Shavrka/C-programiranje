/*
 * ZADATAK 08112015 - 08112015
 * Izračunati sumu 10 učitanih bojeva sa tastature.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112015.htm
 */

#include <stdio.h>
#include <math.h>

int main()
{
int i;
double a,s;

for(i=1;i<=10;i++)
{
printf("Ucitaj %d",i);
printf(". broj");
scanf("%lf",&a);

s=s+a;
}
printf("Suma je: %lf",s);

return 0;
}