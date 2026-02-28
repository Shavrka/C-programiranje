/*
 * ZADATAK 08212075 - 08212075
 * Napisati program za prebrojavanje prirodnih brojeva do n djeljivih sa l.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212075.htm
 */

#include <stdio.h>

int main ()
{
int i=1,n,l,br=0;
printf("Do broja: ");
scanf ("%d", &n);
printf("Djelilac: ");
scanf ("%d", &l);

while (i<=n)
{
if(i%l==0)
br++;}
i++;
}

printf("Djeljivih ima: %d", br);
return 0;
}