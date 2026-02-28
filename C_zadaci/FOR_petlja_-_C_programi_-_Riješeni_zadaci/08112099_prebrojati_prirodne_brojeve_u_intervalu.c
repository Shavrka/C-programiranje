/*
 * ZADATAK 171 - 08112099
 * Prebrojati prirodne brojeve u intervalu od 1 do n koji su djeljivi sa a.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08112099.htm
 */

#include <stdio.h>

int main ()
{
int i, n, a, br;           // deklarisanje varijabli
printf("Do broja: ");
scanf("%d", &n);           // ulaz n
printf("Djelilac: ");
scanf ("%d", &a);          // vrijednosti djelioca
br = 0;                    // pocetna vrijednost proizvoda

for (i=1; i <= n; ++i)     // petlja od 1 do n
if (i % a == 0)        // djeljiv sa a?
br++;              // uvecaj brojac br = br + 1;

printf("Od 1 do %d ima %d koji su djeljivi sa %d ", n, br, a); // ispis

return 0;
}