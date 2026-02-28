/*
 * ZADATAK 305 - 12500061
 * Napisati program koji će za učitanu vrijednost N i zračunati vrijednost izraza i ispisati:S = 3! + 6! + 9! + … + N!
 * Kategorija: FOR petlja - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/120C/12500061.htm
 */

#include <stdio.h>
int main ()
{
int i, n;
double s, p;		// vrijednost faktorijela brzo se uvecava i prelazi opseg predvidjen za cijele brojeve
printf("Do broja n: ");
scanf("%d", &n);
s = 0;   // pocetna vrijednost sume
p = 1;   // pocetna vrijednost proizvoda

for(i=1; i <= n; i++) {	// ponavljanje za i=1 do i=n - pocetak petlje
p = p * i;			// faktorijel do broja i
if(i % 3 == 0)		// ako je i djeljivo sa 3 izvedi
s = s + p;		// suma faktorijel djeljivih sa 3
}                       // for - kraj petlje

printf("Suma je: %f", s);
return 0;
}