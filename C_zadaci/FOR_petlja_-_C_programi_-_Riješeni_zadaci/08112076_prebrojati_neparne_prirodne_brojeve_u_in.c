/*
 * ZADATAK 165 - 08112076
 * Prebrojati neparne prirodne brojeve u intervalu od 1 do n.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08112076.htm
 */

#include <stdio.h>

int main ()
{
printf("Prebroj neparne prirodne brojeve od 1 do n\n");
int i, n, br;              // deklarisanje varijabli
printf("Do broja: ");
scanf("%d", &n);           // ulaz n
br = 0;                    // pocetna vrijednost proizvoda

for(i=1; i <= n; i++)      // ponavljanje za i=1 do i=n - pocetak petlje
if(i % 2 != 0)         // i neparno?
br++;              // uvecaj brojac br = br + 1;

printf("Prebrojanih ima = %d", br);; // ispis
return 0;
}