/*
 * ZADATAK 08312006 - 08312006
 * Izračunati i ispisati sumu prvih 5 prirodnih brojeva.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312006.htm
 */

#include <stdio.h>

int main ()
{
int i=1,s=0;
do
{
s=s+i;
i++;
} while (i<=5);
printf("Suma iznosi: %d", s);
return 0;
}