/*
 * ZADATAK 08213019 - 08213019
 * Izračunati aritmetičku sredinu parnih brojeva od k do n.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08213019.htm
 */

#include <stdio.h>

int main ()
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
while (i<=n)
{
if(i % 2 == 0)
{
s=s+i;
br=br+1;
}
i++;
}
as=s/br;
printf("Aritmeticka sredina djeljivih sa 2 od k do n je: %lf",as);

return 0;
}