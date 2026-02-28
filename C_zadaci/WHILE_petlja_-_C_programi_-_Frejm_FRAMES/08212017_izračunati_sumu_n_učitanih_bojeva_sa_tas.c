/*
 * ZADATAK 08212017 - 08212017
 * Izračunati sumu n učitanih bojeva sa tastature.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212017.htm
 */

#include <stdio.h>
#include <math.h>

main()
{
int i,n;
double a,s;

printf("Broj brojeva: ");
scanf("%d",&n);

s=0;

i=1;
while (i<=n)
{
printf("Otkucaj %d",i);
printf(". broj");
scanf("%lf",&a);
s = s + a;
i++;
}
printf("Suma je: %lf",s);

return 0;
}