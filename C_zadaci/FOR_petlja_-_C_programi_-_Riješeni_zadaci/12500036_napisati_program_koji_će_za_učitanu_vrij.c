/*
 * ZADATAK 315 - 12500036
 * Napisati program koji će za učitanu vrijednost K i N izračunati vrijednost izraza i ispisati:
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/120C/12500036.htm
 */

#include <stdio.h>
int main ()
{
int i, k, n;
double s, p, kfakt;    // vrijednost faktorijela brzo se uvecava i prelazi opseg predvidjen za cijele brojeve
printf("Keficijent: ");
scanf("%d", &k);
printf("Do broja n: ");
scanf("%d", &n);
kfakt=1; 	// pocetna vrijednost stepena koeficijenta
s = 0;    	// pocetna vrijednost sume
p = 1;    	// pocetna vrijednost proizvod

for(i=1; i <= 3*n; ++i) {		// ponavljanje za i=1 do i=3*n - pocetak petlje
p = p * i;      			// nova vrijednost proizvoda
if (i % 3 == 0){			// za djeljive sa 3 izvedi
kfakt = kfakt * k;		// nova vrijednost kfakt-ora kfakt*k
s = s + kfakt * p;		// nova vrijednost sume
}							// if
}								// for - kraj petlje

printf("Suma faktorijela: %f", s);
return 0;
}