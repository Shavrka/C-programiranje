/*
 * ZADATAK 08312015 - 08312015
 * Izračunati sumu 10 učitanih bojeva sa tastature.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312015.htm
 */

#include <stdio.h>
#include &ltmath.h>

main()
{
int i;
double a,s;

i=1;
do
{
printf("Ucitaj %d",i);
printf(". broj");
scanf("%lf",&a);
s=s+a;
i++;
} while(i<=10);
printf("Suma je: %lf",s);

return 0;
}