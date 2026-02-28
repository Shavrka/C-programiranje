/*
 * ZADATAK 12500006 - 12500006
 * Napisati program koji će za učitanu vrijednost N i zračunati vrijednost izraza i ispisati:
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/120c/12500006.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
int i, n;
double s, p;     // vrijednost faktorijela brzo se uvecava i prelazi opseg predvidjen za cijele brojeve
printf("Do broja n: ");
scanf("%d", &n);
s = 0; 		// pocetna vrijednost sume
p = 1;    	// pocetna vrijednost proizvod

for(i=1; i <= 3*n; i++) {	// ponavljanje za i=1 do i=3*n - pocetak petlje
p = p * i;          	// faktorijel do broja i
if(i % 3 == 0)      	// suma faktorijel djeljivih sa 3
s = s + p;   		// nova vrijednost sume
}							// kraj for petlje

printf("Suma je: %f", s);
return 0;
}