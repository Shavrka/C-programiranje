/*
 * ZADATAK 12500063 - 12500063
 * Napisati program koji će za učitanu vrijednost N i zračunati vrijednost sume faktorijela neparnih brojeva do N:S = 1! + 3! + 5! + … + N!
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/120c/12500063.htm
 */

#include <stdio.h>
int main ()
{
int i, n;
double s, fact;		// vrijednost faktorijela brzo se uvecava i prelazi opseg predvidjen za cijele brojeve
printf("Do broja n: ");
scanf("%d", &n);
s=0;
fact=1;

for(i=1; i <= n; i++) {	// ponavljanje za i=1 do i<=n - pocetak petlje
fact *= i;			// faktorijel do broja i, fact = fact * i;
if(i % 2 != 0)		// suma faktorijel koji nisu djeljivi sa 2
s += fact;		// s = s + fact;
}

printf("Suma je: %f", s);
return 0;
}