/*
 * ZADATAK 12500035 - 12500035
 * Napisati program koji će za učitanu vrijednost K i N izračunati vrijednost izraza i ispisati:
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/120c/12500035.htm
 */

#include <stdio.h>
int main ()
{
int i, k, n;
double s, p;    // vrijednost faktorijela brzo se uvecava i prelazi opseg predvidjen za cijele brojeve
printf("Keficijent: ");
scanf("%d", &k);
printf("Do broja n: ");
scanf("%d", &n);
s = 0;    // pocetna vrijednost sume
p = 1;    // pocetna vrijednost proizvod

for(i=1; i <= (2*n); ++i) { 	// ponavljanje za i=1 do i=2*n - pocetak petlje
p *= i;       	       		// nova vrijednost proizvoda p=p*i;
if (i % 2 == 0)  			// za djeljive sa 2 izvedi
s += k * p;   			// nova vrijednost sume s=s+k*p;
} 								// for - kraj petlje

printf("Suma faktorijela: %f", s);
return 0;
}