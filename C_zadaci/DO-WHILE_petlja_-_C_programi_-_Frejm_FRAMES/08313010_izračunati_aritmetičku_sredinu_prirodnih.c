/*
 * ZADATAK 08313010 - 08313010
 * Izračunati aritmetičku sredinu prirodnih brojeva do n.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08313010.htm
 */

#include <stdio.h>

main()
{
int i,n;
float as,s,br;

printf("Unesite promjenljivu N: ");
scanf("%d",&n);

s=0;
br=0;

i=1;
do
{
s=s+i;
br=br+1;
i++;
} while(i<=n);
as=s/br;
printf("Aritmeticka sredina od 1 do: %d \n",n);
printf("Je: %f",as);
return 0;
}