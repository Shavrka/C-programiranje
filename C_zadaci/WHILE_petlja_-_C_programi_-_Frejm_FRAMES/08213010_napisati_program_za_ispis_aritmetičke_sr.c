/*
 * ZADATAK 08213010 - 08213010
 * Napisati program za ispis aritmetičke sredine
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08213010.htm
 */

#include <stdio.h>

int main ()
{
int i,n;
float as,s,br;

printf("Unesite promjenljivu N: ");
scanf("%d",&n);

s=0;
br=0;

i=1;
while(i<=n)
{
s=s+i;
br=br+1;
i++;
}
as=s/br;
printf("Aritmeticka sredina od 1 do: %d \n",n);
printf("Je: %f",as);
return 0;
}