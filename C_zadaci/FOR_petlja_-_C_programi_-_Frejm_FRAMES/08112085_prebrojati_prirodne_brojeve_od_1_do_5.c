/*
 * ZADATAK 08112085 - 08112085
 * Prebrojati prirodne brojeve od 1 do 5.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112085.htm
 */

#include <stdio.h>
int main ()
{
int i, br;                 // deklarisanje varjabli
br=0;                      // pocetna vrijednost

for (i=1; i <= 5; ++i)     // petlja od 1 do 5
br = br + 1;           // uvecaj brojac br = br + 1;

printf("brojač je: %d", br); // ispis

return 0;
}

II varijanta  br += 1;
// 08112085
// Prebrojati prirodne brojeve od 1 do 5
#include <stdio.h>
int main ()
{
int i, br;                 // deklarisanje varjabli
br=0;                      // pocetna vrijednost

for (i=1; i <= 5; ++i)     // petlja od 1 do 5
br++;                  // uvecaj brojac br = br + 1;

printf("brojač je: %d", br); // ispis

return 0;
}