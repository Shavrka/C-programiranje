/*
 * ZADATAK 08311015 - 08311015
 * Izračunati i ispisati sumu prirodne brojeve do 100.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08311015.htm
 */

#include <stdio.h>

int main ()
{
int i=1,s=0;
do
{
s=s+i;
i++;
} while (i<=100);
printf("Suma iznosi: %d", s);
return 0;
}