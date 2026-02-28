/*
 * ZADATAK 08313019 - 08313019
 * Izračunati aritmetičku sredinu parnih brojeva od k do n.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08313019.htm
 */

#include <stdio.h>

main()
{
int n,k,i;
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
if(i % 2 == 0)
{
s=s+i;
br=br+1;
}
i++;
} while (i<=n);
as=s/br;
printf("Aritmeticka sredina djeljivih sa 2 od k do n je: %lf",as);

return 0;
}