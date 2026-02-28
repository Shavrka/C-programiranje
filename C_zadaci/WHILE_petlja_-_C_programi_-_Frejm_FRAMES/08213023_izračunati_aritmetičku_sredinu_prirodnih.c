/*
 * ZADATAK 08213023 - 08213023
 * Izračunati aritmetičku sredinu prirodnih brojeva od k do n.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08213023.htm
 */

#include <stdio.h>

int main ()
{
int k,n,i;
double as,br,s;

printf("Od broja: ");
scanf("%d",&k);

printf("Do broja: ");
scanf("%d",&n);

br=0;
s=0;
i=k;
while(i<=n)
{
s=s+i;
br=br+1;
i++;
}
as=s/br;
printf("Aritmeticka sredina od k do n je: %lf",as);

return 0;
}