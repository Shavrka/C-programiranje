/*
 * ZADATAK 08212076 - 08212076
 * Napisati program  za prebrojavanje neparnih brojeva od 1 do n.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212076.htm
 */

#include <stdio.h>

int main ()
{
int i=1,n,br=0;
printf("Do broja: ");
scanf ("%d", &n);

while (i<=n)
{
if(i%2==1)
{br++;}
i++;
}

printf("Broj neparnih: %d", br);
return 0;
}