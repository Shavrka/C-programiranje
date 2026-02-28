/*
 * ZADATAK 154 - 08112086
 * Prebrojati parne prirodne brojeve od 1 do 5.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08112086.htm
 */

#include <stdio.h>

int main ()
{
int i, br;                 // deklarisanje varijabli
br=0;                      // pocetna vrijednost brojaca

for (i=1; i <= 5; ++i)     // petlja od 1 do 5
if (i % 2 == 0)        // djeljiv sa 2? (paran)
br++;              // uvecaj brojac br = br + 1;

printf("Od 1 do 5 ima %d koji su djeljivi sa 2", br); // ispis

return 0;
}