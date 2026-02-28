/*
 * ZADATAK 159 - 08112093
 * Prebrojati prirodne brojeve u intervalu od 1 do 15 koji nisu djeljivi sa 7.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08112093.htm
 */

#include <stdio.h>

int main ()
{
int i, br;
br=0;

for (i=1; i <= 15; ++i)    // petlja od 1 do 15
if (i % 7 != 0)        // nije djeljiv sa 7?
br++;              // uvecaj brojac br = br + 1;

printf("Od 1 do 15 ima %d koji nisu djeljivi sa 7", br);

return 0;
}