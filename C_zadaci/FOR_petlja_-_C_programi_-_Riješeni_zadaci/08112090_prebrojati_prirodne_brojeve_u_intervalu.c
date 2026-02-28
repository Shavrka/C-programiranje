/*
 * ZADATAK 156 - 08112090
 * Prebrojati prirodne brojeve u intervalu od 1 do 5 koji su djeljivi sa 3.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08112090.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
int i, br;                // deklarisanje varjabli
br=0;                     // pocetna vrijednost

for (i=1; i <= 5; ++i)     // petlja od 1 do 5
if (i % 3 == 0)        // djeljiv sa 3?
br++;              // uvecaj brojac br = br + 1;

printf("Od 1 do 5 ima %d koji su djeljivi sa 3 ", br);

return 0;
}