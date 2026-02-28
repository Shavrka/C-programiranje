/*
 * ZADATAK 08112066 - 08112066
 * Izračunati proizvod neparnih prirodnih brojeva u intervalu od k do n.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112066.htm
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
if(i % 2 != 0)      // ako i nije djeljiv sa 2-neparno izvedi
p *= i;         // p=p*i;

printf("Proizvod: %d", p);
return 0;
}