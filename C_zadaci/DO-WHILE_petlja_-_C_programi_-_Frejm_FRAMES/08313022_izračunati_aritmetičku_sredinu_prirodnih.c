/*
 * ZADATAK 08313022 - 08313022
 * Izračunati aritmetičku sredinu prirodnih brojeva od 1 do n koji nisu djeljivi sa 3.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08313022.htm
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
do
{
if (i % 3 != 0)
{
s=s+i;
br=br+1;
}
i++;
}do while(i<=n)
as=s/br;
printf("Aritmeticka sredina nedjeljivih sa 3 od 1 do n iznosi: %lf",as);

return 0;
}