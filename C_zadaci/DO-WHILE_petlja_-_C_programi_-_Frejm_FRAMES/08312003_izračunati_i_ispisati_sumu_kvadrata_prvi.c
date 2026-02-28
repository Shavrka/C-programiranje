/*
 * ZADATAK 08312003 - 08312003
 * Izračunati i ispisati sumu kvadrata prvih n prirodnih brojeva.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312003.htm
 */

#include <stdio.h>

int main ()
{
int i=1,s=0,n;
printf("Do broja: ");
scanf("%d", &n);
do
{
s=s+i*i;
i++;
} while (i<=n);
printf("Suma iznosi: %d", s);
return 0;
}