/*
 * ZADATAK 08212006 - 08212006
 * Izračunati i ispisati sumu prvih
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212006.htm
 */

#include <stdio.h>

int main ()
{
int i=1,s=0;
while (i <= 5)
{
s = s + i;
i++;
}
printf("Suma iznosi: %d", s);
return 0;
}