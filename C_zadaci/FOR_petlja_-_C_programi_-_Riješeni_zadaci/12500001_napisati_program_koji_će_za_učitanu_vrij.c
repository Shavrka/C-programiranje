/*
 * ZADATAK 299 - 12500001
 * Napisati program koji će za učitanu vrijednost N i zračunati vrijednost izraza i ispisati:
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/120C/12500001.htm
 */

#include <stdio.h>
int main ()
{
int i, n;
double s;		// vrijednost faktorijela brzo se uvecava i prelazi opseg predvidjen za cijele brojeve
printf("Do broja n: ");
scanf("%d", &n);
s = 0;		// pocetna vrijednost sume

for (i = 1; i <= n; i++) {		// ponavljanje za i=1 do i=n - pocetak petlje
s += i/(double)pow((2*i-1),2); 	// s = s + i/(double)pow((2*i-1),2)
}						    		// for - kraj petlje

printf("Suma je: %f", s);
return 0;
}