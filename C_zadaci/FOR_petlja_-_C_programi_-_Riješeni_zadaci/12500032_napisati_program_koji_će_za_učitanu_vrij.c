/*
 * ZADATAK 310 - 12500032
 * Napisati program koji će za učitanu vrijednost K i N izračunati vrijednost izraza i ispisati:
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/120C/12500032.htm
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
s = 0; 		// pocetna vrijednost sume
p = 1;    	// pocetna vrijednost proizvod

for(i=1; i <= n; ++i) { // ponavljanje za i=1 do i=n - pocetak petlje
p *= i;   			// p=p*i;
s += k * p;   		// s=s+k*p;
}						// kraj for petlje

printf("Suma faktorijela: %f", s);
return 0;
}