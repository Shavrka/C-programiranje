/*
 * ZADATAK 08213033 - 08213033
 * Izračunati aritmetičku sredinu prirodnih brojeva od 1 do n koji su djeljivi sa a.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08213033.htm
 */

#include <stdio.h>

int main ()
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
while(i<=n)
{
if (i % a == 0)	{
s=s+i;
br=br+1;
}
i++;
}
as=s/br;
printf("Aritmeticka sredina djeljivih sa a od 1 do n iznosi: %lf",as);

return 0;
}