/*
 * ZADATAK 163 - 08112084
 * Prebrojati prirodne brojeve od 1 do n.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08112084.htm
 */

#include <stdio.h>
int main ()
{
printf("Prebroj prirodne brojeve od 1 do n\n"); // naslov
int i, n, br;             // deklarisanje varijabli
printf("Do broja: ");
scanf("%d", &n);          // ulaz n
br = 0;                   // pocetna vrijednost brojaca

for (i=1; i<=n; ++i)      // ponavljanje za i=1 do i=n
br = br + 1;          // uvecaj brojac br = br + 1;

printf("Brojeva u datom intervalu ima: %d", br); // ispis
return 0;
}

II varijanta  br += 1;
#include <stdio.h>
int main ()
{
printf("Prebroj prirodne brojeve od 1 do n\n"); // naslov
int i, n, br;             // deklarisanje varijabli
printf("Do broja: ");
scanf("%d", &n);          // ulaz n
br = 0;                   // pocetna vrijednost brojaca

for (i=1; i<=n; ++i)      // ponavljanje za i=1 do i=n
br++;                 // uvecaj brojac br = br + 1;

printf("Brojeva u datom intervalu ima: %d", br); // ispis
return 0;
}