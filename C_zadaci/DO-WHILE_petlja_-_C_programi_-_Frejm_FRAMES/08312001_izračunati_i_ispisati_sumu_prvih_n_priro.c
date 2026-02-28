/*
 * ZADATAK 08312001 - 08312001
 * Izračunati i ispisati sumu prvih n prirodnih brojeva.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312001.htm
 */

#include <stdio.h>

int main ()
{
int i=1,s=0,n;
printf("Do broja: ");
scanf("%d", &n);
do
{
s=s+i;
i++;
} while (i<=n);
printf("Suma iznosi: %d", s);
return 0;
}