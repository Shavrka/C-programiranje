/*
 * ZADATAK 175 - 08112072
 * Prebrojati prirodne brojeve u intervalu od k do n.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08112072.htm
 */

#include <stdio.h>
int main ()
{
printf("Prebroj prirodne brojeve od k do n\n"); // naslov
int i, k, n, br;          // deklarisanje varijabli
printf("Od broja: ");
scanf("%d", &k);          // ulaz k
printf("Do broja: ");
scanf("%d", &n);          // ulaz n
br = 0;                   // pocetna vrijednost brojaca

for (i=k; i<=n; ++i)      // ponavljanje za i=k do i=n
br = br + 1;         // uvecaj brojac br = br + 1;

printf("Brojeva u datom intervalu ima: %d", br); // ispis
return 0;
}

II varijanta  br += 1;
#include <stdio.h>
int main ()
{
printf("Prebroj prirodne brojeve od k do n\n"); // naslov
int i, k, n, br;          // deklarisanje varijabli
printf("Od broja: ");
scanf("%d", &k);          // ulaz k
printf("Do broja: ");
scanf("%d", &n);          // ulaz n
br = 0;                   // pocetna vrijednost brojaca

for (i=k; i<=n; ++i)      // ponavljanje za i=k do i=n
br++;                // uvecaj brojac br = br + 1;

printf("Brojeva u datom intervalu ima: %d", br); // ispis
return 0;
}