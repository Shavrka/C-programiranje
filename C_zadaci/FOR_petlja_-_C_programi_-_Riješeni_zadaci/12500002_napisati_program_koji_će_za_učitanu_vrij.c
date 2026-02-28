/*
 * ZADATAK 302 - 12500002
 * Napisati program koji će za učitanu vrijednost N izračunati vrijednost izraza i ispisati:
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/120C/12500002.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
int i, n;
double s,fact;    // vrijednost faktorijela brzo se uvecava i prelazi opseg predvidjen za cijele brojeve
printf("Do broja n: ");
scanf("%d", &n);
s = 0; 		// pocetna vrijednost sume
fact = 1; 	// pocetna vrijednost faktorijela

for(i=1; i <= n; ++i) {	// ponavljanje za i=1 do i=n - pocetak petlje
fact *= i;   		// fact=fact*i;
s += fact;   		// s=s+fact;
}						// kraj for petlje

printf("Suma faktorijela: %f", s);
return 0;
}