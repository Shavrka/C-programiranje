/*
 * ZADATAK 08213034 - 08213034
 * Izračunati aritmetičku sredinu prirodnih brojeva od 1 do n koji nisu djeljivi sa a.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08213034.htm
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
if (i % a != 0) {
s=s+i;
br=br+1;
i++;
}
}
as=s/br;
printf("Aritmeticka sredina nedjeljivih sa a od 1 do n iznosi: %lf",as);

return 0;
}