/*
 * ZADATAK 161 - 08112094
 * Prebrojati prirodne brojeve u intervalu od 1 do 5 koji su djeljivi sa a.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08112094.htm
 */

#include <stdio.h>

int main ()
{
int i, a, br;              // deklarisanje varijabli
printf("Djelilac: ");
scanf("%d",&a);            // ulaz a
br = 0;                    // pocetna vrijednost

for (i=1; i <= 5; ++i)     // petlja od 1 do 5
if (i % a == 0)        // djeljiv sa a?
br++;              // uvecaj brojac br = br + 1;

printf("Od 1 do 5 ima %d koji su djeljivi sa %d ", br, a); // ispis

return 0;
}