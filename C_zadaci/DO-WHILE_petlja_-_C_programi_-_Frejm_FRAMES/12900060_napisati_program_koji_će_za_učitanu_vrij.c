/*
 * ZADATAK 12900060 - 12900060
 * Napisati program koji će za učitanu vrijednost N i zračunati vrijednost izraza i ispisati:S = 4! + 8! + 12! + … + (4N)!
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/120c/12900060.htm
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

i = 1;                  // pocetna vrijednost kontrolne varijable
do {  	 				// početak petlje - radi
p = p * i;			// faktorijel do broja i
if(i % 4 == 0)		// suma faktorijel djeljivih sa 3
s = s + p;		// skraćena notacija s += p;
i++;                // slijedeca vrijednost kontrolne varijable i
} while(i <= 4 * n);	// sve dok je i <= 4*n ponavljaj

printf("Suma je: %f", s);
return 0;
}