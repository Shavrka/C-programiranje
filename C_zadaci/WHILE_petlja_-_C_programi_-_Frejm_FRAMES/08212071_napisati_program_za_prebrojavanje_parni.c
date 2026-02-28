/*
 * ZADATAK 08212071 - 08212071
 * Napisati program za prebrojavanje  parnih brojeva do
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212071.htm
 */

#include <stdio.h>

int main ()
{
int i=1,n,br=0;
printf("Do broja: ");
scanf ("%d", &n);

while (i<=n)
{
if(i%2==0)
br++;
i++;
}

printf("Broj parnih: %d", br);
return 0;
}