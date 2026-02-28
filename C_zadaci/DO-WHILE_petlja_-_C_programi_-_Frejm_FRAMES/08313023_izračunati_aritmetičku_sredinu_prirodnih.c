/*
 * ZADATAK 08313023 - 08313023
 * Izračunati aritmetičku sredinu prirodnih brojeva od k do n.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08313023.htm
 */

#include <stdio.h>

main()
{
int k,n,i;
double as,br,s;

printf("Od broja: ");
scanf("%d",&k);

printf("Do broja: ");
scanf("%d",&n);

br=0;
s=0;
i=k;
do
{
s=s+i;
br=br+1;
i++;
} while(i<=n);
as=s/br;
printf("Aritmeticka sredina od k do n je: %lf",as);

return 0;
}