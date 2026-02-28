/*
 * ZADATAK 137 - 08112068
 * Izračunati proizvod prirodnih brojeva u intervalu od k do n koji su djeljivi sa 3.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08112068.htm
 */

#include <stdio.h>

int main ()
{
int i, k, n, p;
printf("Od broja: ");
scanf("%d", &k);
printf("Do broja ");
scanf("%d", &n);
p=1;    // pocetna vrijednost proizvoda

for(i=k; i <= n; ++i)   // ponavljanje za i=k do i=n
if(i % 3 == 0)      // ako je i djeljiv sa 3 izvedi
p *= i;         // p=p*i;

printf("Proizvod: %d", p);
return 0;
}