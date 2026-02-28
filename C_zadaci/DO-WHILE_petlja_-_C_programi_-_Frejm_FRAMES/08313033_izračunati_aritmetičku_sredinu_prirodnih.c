/*
 * ZADATAK 08313033 - 08313033
 * Izračunati aritmetičku sredinu prirodnih brojeva od 1 do n koji su djeljivi sa a.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08313033.htm
 */

#include <stdio.h>

main()
{
int i,n,a;
double s,br,as;

printf("Do broja: ");
scanf("%d",&n);

printf("Djeljivi sa brojem: ");
scanf("%d",&a);

s=0;
br=0;

i=1;
do
{
if (i % a == 0)	{
s=s+i;
br=br+1;
}
i++;
} while(i<=n);
as=s/br;
printf("Aritmeticka sredina djeljivih sa a od 1 do n iznosi: %lf",as);

return 0;
}