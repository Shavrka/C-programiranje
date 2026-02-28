/*
 * ZADATAK 12900001 - 12900001
 * Napisati program koji će za učitanu vrijednost N i zračunati vrijednost izraza i ispisati:
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/120c/12900001.htm
 */

#include <stdio.h>
int main ()
{
int i, n;
double s;		// vrijednost faktorijela brzo se uvecava i prelazi opseg predvidjen za cijele brojeve
printf("Do broja n: ");
scanf("%d", &n);
s = 0;		// pocetna vrijednost sume

i = 1;                  			// pocetna vrijednost kontrolne varijable
do {	        			 		// početak petlje - radi
s += i/(double)pow((2*i-1),2); 	// s = s + i/(double)pow((2*i-1),2)
i++;                             // slijedeca vrijednost kontrolne varijable i
} while(i <= n);					// sve dok je i <= n ponavljaj

printf("Suma je: %f", s);
return 0;
}