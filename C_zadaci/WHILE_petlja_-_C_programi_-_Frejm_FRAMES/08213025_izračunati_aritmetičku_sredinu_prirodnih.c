/*
 * ZADATAK 08213025 - 08213025
 * Izračunati aritmetičku sredinu prirodnih brojeva od k do n koji su djeljivi sa 3.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08213025.htm
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
while( i<=n)
{
if(i % 3 == 0)
{
s=s+i;
br=br+1;
}
i++;
}
as=s/br;
printf("Aritmeticka sredina djeljivih sa 3 od k do n je: %lf",as);
getchar();
return 0;
}