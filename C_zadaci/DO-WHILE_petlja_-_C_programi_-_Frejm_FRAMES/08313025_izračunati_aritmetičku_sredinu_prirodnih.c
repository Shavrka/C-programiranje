/*
 * ZADATAK 08313025 - 08313025
 * Izračunati aritmetičku sredinu prirodnih brojeva od k do n koji su djeljivi sa 3.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08313025.htm
 */

#include <stdio.h>
main()
{
int i,n,k;
double s,br,as;
printf("Od broja: ");
scanf("%d",&k);
printf("Do broja: ");
scanf("%d",&n);

s=0;
br=0;

i=k;
do
{
if(i % 3 == 0)
{
s=s+i;
br=br+1;
}
i++;
} while (i<=n);
as=s/br;
printf("Aritmeticka sredina djeljivih sa 3 od k do n je: %lf",as);
getchar();
return 0;
}