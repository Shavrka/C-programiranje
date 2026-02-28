/*
 * ZADATAK 08111015 - 08111015
 * Saberi prirodne brojeve do 100.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08111015.htm
 */

#include <stdio.h>

int main ()
{
int i, s;                      // deklarisanje varijabli i, s
s = 0;                         // pocetna vrijednost kumulativne sume

for (i = 1; i <= 100; i++)     // ponavljanje za i=1 do i=100 - pocetak petlje
s = s + i;                 // uvecaj sumu
printf("Suma iznosi: %d", s);  // ispis

return 0;
}