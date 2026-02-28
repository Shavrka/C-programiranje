/*
 * ZADATAK 212 - 08113039
 * Izračunati aritmetičku sredinu prirodnih brojeva od a do b.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08113039.htm
 */

#include <stdio.h>

main()
{
int a,b,i;
double as,br,s;

printf("Od broja: ");
scanf("%d",&a);

printf("Do broja: ");
scanf("%d",&b);

br=0;
s=0;

for(i=a;i<=b;i++) {
s=s+i;
br=br+1;
}
as=s/br;
printf("Aritmeticka sredina od a do b je: %lf",as);

return 0;
}