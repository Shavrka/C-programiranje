/*
 * ZADATAK 08313034 - 08313034
 * Izračunati aritmetičku sredinu prirodnih brojeva od 1 do n koji nisu djeljivi sa a.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08313034.htm
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
if (i % a != 0) {
s=s+i;
br=br+1;
i++;
}
} while(i<=n);
as=s/br;
printf("Aritmeticka sredina nedjeljivih sa a od 1 do n iznosi: %lf",as);

return 0;
}