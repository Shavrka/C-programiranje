/*
 * ZADATAK 08113031 - 08113031
 * Izračunati aritmetičku sredinu prirodnih brojeva od 1 do n koji su djeljivi sa 7.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08113031.htm
 */

#include <stdio.h>

main()
{
int i,n;
double s,br,as;

printf("Do broja: ");
scanf("%d",&n);

s=0;
br=0;

for(i=1;i<=n;i++) {
if (i % 3 == 0)	{
s=s+i;
br=br+1;
}
}
as=s/br;
printf("Aritmeticka sredina djeljivih sa 7 od 1 do n iznosi: %lf",as);

return 0;
}