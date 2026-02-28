/*
 * ZADATAK 12700060 - 12700060
 * Napisati program koji će za učitanu vrijednost N i zračunati vrijednost izraza i ispisati:
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/120c/12700060.htm
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
while(i <= 4 * n) {  	// pocetak petlje - dok je i <= 4*n radi
p = p * i;			// faktorijel do broja i
if(i % 4 == 0)		// suma faktorijel djeljivih sa 3
s = s + p;		// skraćena notacija s += p;
i++;                // slijedeca vrijednost kontrolne varijable i
}						// kraj while petlje

printf("Suma je: %f", s);
return 0;
}