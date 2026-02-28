/*
 * ZADATAK 286 - 12500056
 * Napisati program koji će za učitanu vrijednost N izračunati vrijednost izraza i ispisati:
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/120C/12500056.htm
 */

#include <stdio.h>
int main ()
{
int i, n;
double s;		// vrijednost faktorijela brzo se uvecava i prelazi opseg predvidjen za cijele brojeve
printf("Do broja n: ");
scanf("%d", &n);
s = 0;    // pocetna vrijednost sume

for(i=2; i <= 2*n; i+=2) {	// samo parni u petlji - ponavljanje za i=2 do i=2*n - pocetak petlje
s+=1/(double)(i);		// s = s + 1/(double)(i) reciprocna vrijednost parnih
}							// for - kraj petlje

printf("Suma je: %f", s);
return 0;
}

II Varijanta
#include <stdio.h>
int main ()
{
int i, n;
double s;		// vrijednost faktorijela brzo se uvecava i prelazi opseg predvidjen za cijele brojeve
printf("Do broja n: ");
scanf("%d", &n);
s = 0;    // pocetna vrijednost sume

for (i = 1; i <= n; i++) {		// ponavljanje za i=1 do i=n - pocetak petlje
s += 1 / (double) (2 * i); 	// s = s + 1/(2*i), sa 2*i dobijamo dvostruku vrijednost
}								// for - kraj petlje

printf("Suma je: %f", s);
return 0;
}