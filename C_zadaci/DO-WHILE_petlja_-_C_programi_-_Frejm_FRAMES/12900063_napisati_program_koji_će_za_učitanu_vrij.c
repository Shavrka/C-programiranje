/*
 * ZADATAK 12900063 - 12900063
 * Napisati program koji će za učitanu vrijednost N i zračunati vrijednost sume faktorijela neparnih brojeva do N:S = 1! + 3! + 5! + … + N!
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/120c/12900063.htm
 */

#include <stdio.h>
int main ()
{
int i, n;
double s, fact;		// vrijednost faktorijela brzo se uvecava i prelazi opseg predvidjen za cijele brojeve
printf("Do broja n: ");
scanf("%d", &n);
s = 0;      // pocetna vrijednost sume
fact = 1;   // pocetna vrijednost proizvoda

i = 1;                  // pocetna vrijednost kontrolne varijable
do {	         		// početak petlje - radi
fact *= i;			// faktorijel do broja i, fact = fact * i;
if(i % 2 != 0)		// suma faktorijel koji nisu djeljivi sa 2
s += fact;		// s = s + fact;
i++;                // slijedeca vrijednost kontrolne varijable i
} while(i <= n);		// sve dok je i <= n ponavljaj

printf("Suma je: %f", s);
return 0;
}