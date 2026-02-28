/*
 * ZADATAK 12700006 - 12700006
 * Napisati program koji će za učitanu vrijednost N izračunati vrijednost izraza i ispisati::
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/120c/12700006.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
int i, n;
double s, p;     // vrijednost faktorijela brzo se uvecava i prelazi opseg predvidjen za cijele brojeve
printf("Do broja n: ");
scanf("%d", &n);
s = 0; 	// pocetna vrijednost sume
p = 1;  // pocetna vrijednost proizvod

i = 1;               	// pocetna vrijednost kontrolne varijable
while(i <= 3*n) {  		// pocetak petlje - dok je i <= 3*n radi
p = p * i;          // faktorijel do broja i
if(i % 3 == 0)      // suma faktorijel djeljivih sa 3
s = s + p;   	// nova vrijednost sume
i++;                // slijedeca vrijednost kontrolne varijable i
}						// kraj while petlje

printf("Suma je: %f", s);
return 0;
}