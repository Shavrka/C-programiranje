/*
 * ZADATAK 12700002 - 12700002
 * Napisati program koji će za učitanu vrijednost n izračunati vrijednost izraza i ispisati: S= 1! + 2!+ 3!+ ... + n!.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/120c/12700002.htm
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
fact = 1;  // pocetna vrijednost faktorijela

i = 1;          // pocetna vrijednost kontrolne varijable
while(i <= n) { // pocetak petlje - dok je i <= n radi
fact *= i;   // fact=fact*i;
s += fact;   // s=s+fact;
i++;        	// slijedeca vrijednost kontrolne varijable i
}				// kraj while petlje

printf("Suma faktorijela: %f", s);
return 0;
}