/*
 * ZADATAK 08112042 - 08112042
 * Proizvod prirodnih od k do n.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112042.htm
 */

#include <stdio.h>
int main ()
{
int i, k, n, p;           // deklarisanje varjabli
printf("Od broja: ");     // ulaz k
scanf("%d", &k);
printf("Do broja: ");
scanf("%d", &n);          // ulaz n
p = 1;                    // pocetna vrijednost proizvoda

for(i=k; i <= n; ++i)     // ponavljanje za i=k do i=n
p *= i;                // uvecaj proizvod p=p*i;

printf("Proizvod: %d", p); // ispis
return 0;
}