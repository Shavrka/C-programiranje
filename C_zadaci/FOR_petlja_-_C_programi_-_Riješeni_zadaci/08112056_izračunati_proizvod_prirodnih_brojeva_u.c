/*
 * ZADATAK 143 - 08112056
 * Izračunati proizvod prirodnih brojeva u intervalu od k do n koji su djeljivi sa 4.
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081C/08112056.htm
 */

#include <stdio.h>

int main ()
{
int i, k, n, p;
printf("Od broja: ");
scanf("%d", &k);
printf("Do broja ");
scanf("%d", &n);
p=1;	// pocetna vrijednost proizvoda

for(i=k; i <= n; ++i) 	// ponavljanje za i=k do i=n
if(i % 4 == 0)		// ako je i djeljiv sa 4 izvedi
p *= i;   		// p=p*i;

printf("Proizvod: %d", p);
return 0;
}