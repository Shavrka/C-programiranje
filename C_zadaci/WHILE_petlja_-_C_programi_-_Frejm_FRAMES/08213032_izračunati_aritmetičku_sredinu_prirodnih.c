/*
 * ZADATAK 08213032 - 08213032
 * Izračunati aritmetičku sredinu prirodnih brojeva od 1 do n koji nisu djeljivi sa 7.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08213032.htm
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

i=1;
while(i<=n)
{
if (i % 7 != 0)	{
s=s+i;
br=br+1;
}
i++;
}
as=s/br;
printf("Aritmeticka sredina nedjeljivih sa 7 od 1 do n iznosi: %lf",as);

return 0;
}