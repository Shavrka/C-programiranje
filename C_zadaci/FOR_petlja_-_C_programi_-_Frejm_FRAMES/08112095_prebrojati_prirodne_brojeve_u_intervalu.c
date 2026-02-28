/*
 * ZADATAK 08112095 - 08112095
 * Prebrojati prirodne brojeve u intervalu od 1 do 5 koji nisu djeljivi sa a.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112095.htm
 */

#include <stdio.h>

int main ()
{
int i, a, br;              // deklarisanje varijabli
printf("Djelilac: ");
scanf ("%d", &a);          // vrijednosti djelioca
br = 0;                    // pocetna vrijednost proizvoda

for (i=1; i <= 5; ++i)     // petlja od 1 do 5
if (i % a != 0)        // nije djeljiv sa a?
br++;              // uvecaj brojac br = br + 1;

printf("Od 1 do 5 ima %d koji nisu djeljivi sa %d ", br, a); // ispis vrijednosti

return 0;
}