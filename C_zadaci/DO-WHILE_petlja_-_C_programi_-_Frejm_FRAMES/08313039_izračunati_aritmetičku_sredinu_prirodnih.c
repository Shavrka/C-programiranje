/*
 * ZADATAK 08313039 - 08313039
 * Izračunati aritmetičku sredinu prirodnih brojeva od a do b.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08313039.htm
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
i=a;
do
{
s=s+i;
br=br+1;
i++;
} while(i<=b);
as=s/br;
printf("Aritmeticka sredina od a do b je: %lf",as);

return 0;
}