/*
 * ZADATAK 142 - 08112142
 * Izračunati proizvod prirodnih brojeva u intervalu od k do n koji nisu djeljivi sa 7.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08112142.htm
 */

#include <stdio.h>

int main ()
{
int i, k, n, p;         // deklarisanje varjabli
printf("Od broja: ");
scanf("%d", &k);        // ulaz k
printf("Do broja: ");
scanf("%d", &n);        // ulaz n
p=1;	// pocetna vrijednost proizvoda

for(i=k; i <= n; ++i)   // ponavljanje za i=k do i=n
if(i % 7 != 0)      // ako i nije djeljiv sa 7 izvedi
p *= i;         // p=p*i;

printf("Proizvod: %d", p);
return 0;
}