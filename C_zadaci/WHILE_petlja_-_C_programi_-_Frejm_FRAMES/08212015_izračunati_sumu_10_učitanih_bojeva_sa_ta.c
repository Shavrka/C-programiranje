/*
 * ZADATAK 08212015 - 08212015
 * Izračunati sumu 10 učitanih bojeva sa tastature.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212015.htm
 */

#include <stdio.h>
#include <math.h>

main()
{
int i;
double a,s;

i=1;
while(i<=10)
{
printf("Ucitaj %d",i);
printf(". broj");
scanf("%lf",&a);
s=s+a;
i++;
}
printf("Suma je: %lf",s);

return 0;
}