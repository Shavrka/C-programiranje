/*
 * ZADATAK 08312017 - 08312017
 * Izračunati sumu n učitanih bojeva sa tastature.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312017.htm
 */

#include <stdio.h>
#include &ltmath.h>

main()
{
int i,n;
double a,s;

printf("Broj brojeva: ");
scanf("%d",&n);

s=0;

i=1;
do
{
printf("Otkucaj %d",i);
printf(". broj");
scanf("%lf",&a);
s = s + a;
i++;
} while (i<=n);
printf("Suma je: %lf",s);

return 0;
}