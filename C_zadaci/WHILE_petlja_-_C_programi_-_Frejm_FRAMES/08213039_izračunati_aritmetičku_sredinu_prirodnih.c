/*
 * ZADATAK 08213039 - 08213039
 * Izračunati aritmetičku sredinu prirodnih brojeva od a do b.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08213039.htm
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
while(i<=b)
{
s=s+i;
br=br+1;
i++;
}
as=s/br;
printf("Aritmeticka sredina od a do b je: %lf",as);

return 0;
}