/*
 * ZADATAK 314 - 12500037
 * Napisati program koji će za učitanu vrijednost K i N izračunati vrijednost izraza i ispisati:
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/120C/12500037.htm
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
kfakt = 1;  // pocetna vrijednost faktorijela
s = 0;		// pocetna vrijednost sume
p = 1;		// pocetna vrijednost proizvoda

for(i=1; i <= 2*n; ++i) {	// ponavljanje za i=1 do i=2*n - pocetak petlje
p = p * i;				// proizvod, faktorijel - p *= i;
if (i % 2 == 0){
kfakt = kfakt * k;  // stepen koeficijenta
s = s + kfakt * p;	 // suma
}						 // if
}							 // for - kraj petlje

printf("Suma faktorijela: %f", s);
return 0;
}