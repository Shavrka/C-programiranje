/*
 * ZADATAK 12700034 - 12700034
 * Napisati program koji će za učitanu vrijednost N izračunati vrijednost izraza i ispisati::
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/120c/12700034.htm
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
s = 0; 	// pocetna vrijednost sume
p = 1;  // pocetna vrijednost proizvod

i = 1;               	// pocetna vrijednost kontrolne varijable
while(i <= 3*n) {		// pocetak petlje - dok je i <= 3*n radi
p *= i;       		// nova vrijednost proizvoda p=p*i;
if (i % 3 == 0)		// za djeljive sa 3 izvedi
s += k*p;		// nova vrijednost sume  s=s+k*p;
i++;            	// slijedeca vrijednost kontrolne varijable i
}						// kraj while petlje

printf("Suma faktorijela: %f", s);
return 0;
}