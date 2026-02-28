/*
 * ZADATAK 12900002 - 12900002
 * Napisati program koji će za učitanu vrijednost N izračunati vrijednost izraza i ispisati:
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/120c/12900002.htm
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

i = 1;          	// pocetna vrijednost kontrolne varijable
do { 				// početak petlje - radi
fact *= i;   	// fact=fact*i;
s += fact;   	// s=s+fact;
i++;        		// slijedeca vrijednost kontrolne varijable i
} while(i <= n);	// sve dok je i <= n ponavljaj

printf("Suma faktorijela: %f", s);
return 0;
}